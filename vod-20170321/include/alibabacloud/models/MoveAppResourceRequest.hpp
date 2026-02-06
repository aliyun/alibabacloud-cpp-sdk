// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEAPPRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEAPPRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class MoveAppResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveAppResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TargetAppId, targetAppId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveAppResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TargetAppId, targetAppId_);
    };
    MoveAppResourceRequest() = default ;
    MoveAppResourceRequest(const MoveAppResourceRequest &) = default ;
    MoveAppResourceRequest(MoveAppResourceRequest &&) = default ;
    MoveAppResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveAppResourceRequest() = default ;
    MoveAppResourceRequest& operator=(const MoveAppResourceRequest &) = default ;
    MoveAppResourceRequest& operator=(MoveAppResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceIds_ == nullptr
        && this->resourceType_ == nullptr && this->targetAppId_ == nullptr; };
    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string getResourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline MoveAppResourceRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline MoveAppResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // targetAppId Field Functions 
    bool hasTargetAppId() const { return this->targetAppId_ != nullptr;};
    void deleteTargetAppId() { this->targetAppId_ = nullptr;};
    inline string getTargetAppId() const { DARABONBA_PTR_GET_DEFAULT(targetAppId_, "") };
    inline MoveAppResourceRequest& setTargetAppId(string targetAppId) { DARABONBA_PTR_SET_VALUE(targetAppId_, targetAppId) };


  protected:
    // The resource ID. You can specify a maximum of 20 IDs at a time. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> resourceIds_ {};
    // The resource type. Valid values:
    // 
    // *   **video**: video files.
    // *   **image**: image files.
    // *   **attached**: auxiliary media assets.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The ID of the application to which resources are migrated. Default value: **app-1000000**. For more information, see [Use the multi-application service](https://help.aliyun.com/document_detail/113600.html).
    // 
    // This parameter is required.
    shared_ptr<string> targetAppId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
