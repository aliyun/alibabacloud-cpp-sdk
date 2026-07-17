// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateAppGroupRequest() = default ;
    CreateAppGroupRequest(const CreateAppGroupRequest &) = default ;
    CreateAppGroupRequest(CreateAppGroupRequest &&) = default ;
    CreateAppGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppGroupRequest() = default ;
    CreateAppGroupRequest& operator=(const CreateAppGroupRequest &) = default ;
    CreateAppGroupRequest& operator=(CreateAppGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
        DARABONBA_PTR_TO_JSON(docSize, docSize_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
        DARABONBA_PTR_FROM_JSON(docSize, docSize_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->docSize_ == nullptr && this->spec_ == nullptr; };
      // computeResource Field Functions 
      bool hasComputeResource() const { return this->computeResource_ != nullptr;};
      void deleteComputeResource() { this->computeResource_ = nullptr;};
      inline int32_t getComputeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, 0) };
      inline Quota& setComputeResource(int32_t computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


      // docSize Field Functions 
      bool hasDocSize() const { return this->docSize_ != nullptr;};
      void deleteDocSize() { this->docSize_ = nullptr;};
      inline int32_t getDocSize() const { DARABONBA_PTR_GET_DEFAULT(docSize_, 0) };
      inline Quota& setDocSize(int32_t docSize) { DARABONBA_PTR_SET_VALUE(docSize_, docSize) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Quota& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      // The computing resources. Unit: logical computing unit (LCU).
      shared_ptr<int32_t> computeResource_ {};
      // The storage capacity. Unit: GB.
      shared_ptr<int32_t> docSize_ {};
      // The specifications. Valid values:
      // 
      // - opensearch.share.junior: basic
      // 
      // - opensearch.share.common: shared general-purpose
      // 
      // - opensearch.share.compute: shared compute-optimized
      // 
      // - opensearch.share.storage: shared storage-optimized
      // 
      // - opensearch.private.common: exclusive general-purpose
      // 
      // - opensearch.private.compute: exclusive compute-optimized
      // 
      // - opensearch.private.storage: exclusive storage-optimized
      shared_ptr<string> spec_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->name_ == nullptr && this->quota_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAppGroupRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const CreateAppGroupRequest::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, CreateAppGroupRequest::Quota) };
    inline CreateAppGroupRequest::Quota getQuota() { DARABONBA_PTR_GET(quota_, CreateAppGroupRequest::Quota) };
    inline CreateAppGroupRequest& setQuota(const CreateAppGroupRequest::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline CreateAppGroupRequest& setQuota(CreateAppGroupRequest::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAppGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateAppGroupRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateAppGroupRequest::Tags>) };
    inline vector<CreateAppGroupRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateAppGroupRequest::Tags>) };
    inline CreateAppGroupRequest& setTags(const vector<CreateAppGroupRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateAppGroupRequest& setTags(vector<CreateAppGroupRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAppGroupRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The billing method. Valid values:
    // 
    // - POSTPAY: pay-as-you-go
    // 
    // - PREPAY: subscription
    shared_ptr<string> chargeType_ {};
    // The name of the application.
    shared_ptr<string> name_ {};
    // The quota.
    shared_ptr<CreateAppGroupRequest::Quota> quota_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<CreateAppGroupRequest::Tags>> tags_ {};
    // The application type. Valid values:
    // 
    // - standard: Standard Edition
    // 
    // - enhanced: Premium Edition
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
