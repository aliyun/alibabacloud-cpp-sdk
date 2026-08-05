// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class UpdateWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    UpdateWorkspaceResponseBody() = default ;
    UpdateWorkspaceResponseBody(const UpdateWorkspaceResponseBody &) = default ;
    UpdateWorkspaceResponseBody(UpdateWorkspaceResponseBody &&) = default ;
    UpdateWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceResponseBody() = default ;
    UpdateWorkspaceResponseBody& operator=(const UpdateWorkspaceResponseBody &) = default ;
    UpdateWorkspaceResponseBody& operator=(UpdateWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(domainName, domainName_);
        DARABONBA_PTR_TO_JSON(engineType, engineType_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(produced, produced_);
        DARABONBA_PTR_TO_JSON(quota, quota_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(domainName, domainName_);
        DARABONBA_PTR_FROM_JSON(engineType, engineType_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(produced, produced_);
        DARABONBA_PTR_FROM_JSON(quota, quota_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
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
        // The compute resource.
        shared_ptr<int32_t> computeResource_ {};
        // The storage capacity.
        shared_ptr<int32_t> docSize_ {};
        // The specifications.
        shared_ptr<string> spec_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->description_ == nullptr && this->domainName_ == nullptr && this->engineType_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->name_ == nullptr && this->produced_ == nullptr && this->quota_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Result& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Result& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Result& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // produced Field Functions 
      bool hasProduced() const { return this->produced_ != nullptr;};
      void deleteProduced() { this->produced_ = nullptr;};
      inline int32_t getProduced() const { DARABONBA_PTR_GET_DEFAULT(produced_, 0) };
      inline Result& setProduced(int32_t produced) { DARABONBA_PTR_SET_VALUE(produced_, produced) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline const Result::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Result::Quota) };
      inline Result::Quota getQuota() { DARABONBA_PTR_GET(quota_, Result::Quota) };
      inline Result& setQuota(const Result::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
      inline Result& setQuota(Result::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Result& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Result::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Result::Tags>) };
      inline vector<Result::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Result::Tags>) };
      inline Result& setTags(const vector<Result::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Result& setTags(vector<Result::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The billing type. Valid values:
      // - POSTPAY: pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The custom domain name prefix.
      shared_ptr<string> domainName_ {};
      // The engine type.
      shared_ptr<string> engineType_ {};
      // The workspace ID.
      shared_ptr<string> id_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The workspace name.
      shared_ptr<string> name_ {};
      // Indicates whether the production is complete. Valid values:
      // - 0: In production.
      // - 1: Production complete.
      shared_ptr<int32_t> produced_ {};
      // The quota.
      shared_ptr<Result::Quota> quota_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The tags.
      shared_ptr<vector<Result::Tags>> tags_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateWorkspaceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdateWorkspaceResponseBody::Result) };
    inline UpdateWorkspaceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdateWorkspaceResponseBody::Result) };
    inline UpdateWorkspaceResponseBody& setResult(const UpdateWorkspaceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateWorkspaceResponseBody& setResult(UpdateWorkspaceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<UpdateWorkspaceResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
