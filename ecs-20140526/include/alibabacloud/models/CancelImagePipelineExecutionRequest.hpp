// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELIMAGEPIPELINEEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELIMAGEPIPELINEEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CancelImagePipelineExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelImagePipelineExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateTag, templateTag_);
    };
    friend void from_json(const Darabonba::Json& j, CancelImagePipelineExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateTag, templateTag_);
    };
    CancelImagePipelineExecutionRequest() = default ;
    CancelImagePipelineExecutionRequest(const CancelImagePipelineExecutionRequest &) = default ;
    CancelImagePipelineExecutionRequest(CancelImagePipelineExecutionRequest &&) = default ;
    CancelImagePipelineExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelImagePipelineExecutionRequest() = default ;
    CancelImagePipelineExecutionRequest& operator=(const CancelImagePipelineExecutionRequest &) = default ;
    CancelImagePipelineExecutionRequest& operator=(CancelImagePipelineExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateTag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateTag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateTag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TemplateTag() = default ;
      TemplateTag(const TemplateTag &) = default ;
      TemplateTag(TemplateTag &&) = default ;
      TemplateTag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateTag() = default ;
      TemplateTag& operator=(const TemplateTag &) = default ;
      TemplateTag& operator=(TemplateTag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TemplateTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TemplateTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // >  This parameter is not publicly available.
      shared_ptr<string> key_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->executionId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->templateTag_ == nullptr; };
    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline CancelImagePipelineExecutionRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CancelImagePipelineExecutionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CancelImagePipelineExecutionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelImagePipelineExecutionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CancelImagePipelineExecutionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CancelImagePipelineExecutionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateTag Field Functions 
    bool hasTemplateTag() const { return this->templateTag_ != nullptr;};
    void deleteTemplateTag() { this->templateTag_ = nullptr;};
    inline const vector<CancelImagePipelineExecutionRequest::TemplateTag> & getTemplateTag() const { DARABONBA_PTR_GET_CONST(templateTag_, vector<CancelImagePipelineExecutionRequest::TemplateTag>) };
    inline vector<CancelImagePipelineExecutionRequest::TemplateTag> getTemplateTag() { DARABONBA_PTR_GET(templateTag_, vector<CancelImagePipelineExecutionRequest::TemplateTag>) };
    inline CancelImagePipelineExecutionRequest& setTemplateTag(const vector<CancelImagePipelineExecutionRequest::TemplateTag> & templateTag) { DARABONBA_PTR_SET_VALUE(templateTag_, templateTag) };
    inline CancelImagePipelineExecutionRequest& setTemplateTag(vector<CancelImagePipelineExecutionRequest::TemplateTag> && templateTag) { DARABONBA_PTR_SET_RVALUE(templateTag_, templateTag) };


  protected:
    // The ID of the image building task.
    // 
    // This parameter is required.
    shared_ptr<string> executionId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // >  This parameter is not publicly available.
    shared_ptr<vector<CancelImagePipelineExecutionRequest::TemplateTag>> templateTag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
