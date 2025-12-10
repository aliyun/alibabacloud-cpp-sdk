// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODYRESOURCEGROUPREGIONSTATUSESREGIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEGROUPRESPONSEBODYRESOURCEGROUPREGIONSTATUSESREGIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default ;
    CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus &) = default ;
    CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus &&) = default ;
    CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default ;
    CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& operator=(const CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus &) = default ;
    CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& operator=(CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->status_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
