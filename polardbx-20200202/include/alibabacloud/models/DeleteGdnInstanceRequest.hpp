// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGDNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGDNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DeleteGdnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGdnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GdnInstanceName, gdnInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGdnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GdnInstanceName, gdnInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteGdnInstanceRequest() = default ;
    DeleteGdnInstanceRequest(const DeleteGdnInstanceRequest &) = default ;
    DeleteGdnInstanceRequest(DeleteGdnInstanceRequest &&) = default ;
    DeleteGdnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGdnInstanceRequest() = default ;
    DeleteGdnInstanceRequest& operator=(const DeleteGdnInstanceRequest &) = default ;
    DeleteGdnInstanceRequest& operator=(DeleteGdnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gdnInstanceName_ == nullptr
        && this->regionId_ == nullptr; };
    // gdnInstanceName Field Functions 
    bool hasGdnInstanceName() const { return this->gdnInstanceName_ != nullptr;};
    void deleteGdnInstanceName() { this->gdnInstanceName_ = nullptr;};
    inline string getGdnInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gdnInstanceName_, "") };
    inline DeleteGdnInstanceRequest& setGdnInstanceName(string gdnInstanceName) { DARABONBA_PTR_SET_VALUE(gdnInstanceName_, gdnInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteGdnInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> gdnInstanceName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
