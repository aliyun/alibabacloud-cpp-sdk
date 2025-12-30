// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESUBNETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESUBNETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteSubnetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSubnetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSubnetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
    };
    DeleteSubnetRequest() = default ;
    DeleteSubnetRequest(const DeleteSubnetRequest &) = default ;
    DeleteSubnetRequest(DeleteSubnetRequest &&) = default ;
    DeleteSubnetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSubnetRequest() = default ;
    DeleteSubnetRequest& operator=(const DeleteSubnetRequest &) = default ;
    DeleteSubnetRequest& operator=(DeleteSubnetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->subnetId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSubnetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline DeleteSubnetRequest& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


  protected:
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> subnetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
