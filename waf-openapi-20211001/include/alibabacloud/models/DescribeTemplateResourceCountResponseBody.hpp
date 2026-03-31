// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESOURCECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESOURCECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeTemplateResourceCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateResourceCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateResourceCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
    };
    DescribeTemplateResourceCountResponseBody() = default ;
    DescribeTemplateResourceCountResponseBody(const DescribeTemplateResourceCountResponseBody &) = default ;
    DescribeTemplateResourceCountResponseBody(DescribeTemplateResourceCountResponseBody &&) = default ;
    DescribeTemplateResourceCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateResourceCountResponseBody() = default ;
    DescribeTemplateResourceCountResponseBody& operator=(const DescribeTemplateResourceCountResponseBody &) = default ;
    DescribeTemplateResourceCountResponseBody& operator=(DescribeTemplateResourceCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceCount& obj) { 
        DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
        DARABONBA_PTR_TO_JSON(SingleCount, singleCount_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceCount& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
        DARABONBA_PTR_FROM_JSON(SingleCount, singleCount_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      ResourceCount() = default ;
      ResourceCount(const ResourceCount &) = default ;
      ResourceCount(ResourceCount &&) = default ;
      ResourceCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceCount() = default ;
      ResourceCount& operator=(const ResourceCount &) = default ;
      ResourceCount& operator=(ResourceCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetCount_ == nullptr
        && this->groupCount_ == nullptr && this->singleCount_ == nullptr && this->templateId_ == nullptr; };
      // assetCount Field Functions 
      bool hasAssetCount() const { return this->assetCount_ != nullptr;};
      void deleteAssetCount() { this->assetCount_ = nullptr;};
      inline int32_t getAssetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0) };
      inline ResourceCount& setAssetCount(int32_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


      // groupCount Field Functions 
      bool hasGroupCount() const { return this->groupCount_ != nullptr;};
      void deleteGroupCount() { this->groupCount_ = nullptr;};
      inline int32_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
      inline ResourceCount& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


      // singleCount Field Functions 
      bool hasSingleCount() const { return this->singleCount_ != nullptr;};
      void deleteSingleCount() { this->singleCount_ = nullptr;};
      inline int32_t getSingleCount() const { DARABONBA_PTR_GET_DEFAULT(singleCount_, 0) };
      inline ResourceCount& setSingleCount(int32_t singleCount) { DARABONBA_PTR_SET_VALUE(singleCount_, singleCount) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline ResourceCount& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<int32_t> assetCount_ {};
      // The number of protected object groups.
      shared_ptr<int32_t> groupCount_ {};
      // The number of protected objects.
      shared_ptr<int32_t> singleCount_ {};
      // The ID of the protection template.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTemplateResourceCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline const vector<DescribeTemplateResourceCountResponseBody::ResourceCount> & getResourceCount() const { DARABONBA_PTR_GET_CONST(resourceCount_, vector<DescribeTemplateResourceCountResponseBody::ResourceCount>) };
    inline vector<DescribeTemplateResourceCountResponseBody::ResourceCount> getResourceCount() { DARABONBA_PTR_GET(resourceCount_, vector<DescribeTemplateResourceCountResponseBody::ResourceCount>) };
    inline DescribeTemplateResourceCountResponseBody& setResourceCount(const vector<DescribeTemplateResourceCountResponseBody::ResourceCount> & resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };
    inline DescribeTemplateResourceCountResponseBody& setResourceCount(vector<DescribeTemplateResourceCountResponseBody::ResourceCount> && resourceCount) { DARABONBA_PTR_SET_RVALUE(resourceCount_, resourceCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of protected objects or protected object groups for which the protection template takes effect.
    shared_ptr<vector<DescribeTemplateResourceCountResponseBody::ResourceCount>> resourceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
