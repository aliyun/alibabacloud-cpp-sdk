// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetUploadInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetUploadInfoRequest() = default ;
    GetUploadInfoRequest(const GetUploadInfoRequest &) = default ;
    GetUploadInfoRequest(GetUploadInfoRequest &&) = default ;
    GetUploadInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadInfoRequest() = default ;
    GetUploadInfoRequest& operator=(const GetUploadInfoRequest &) = default ;
    GetUploadInfoRequest& operator=(GetUploadInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->regionId_ == nullptr && this->resourceType_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUploadInfoRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetUploadInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetUploadInfoRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // Upload name.
    shared_ptr<string> name_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Resource type.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
