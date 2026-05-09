// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESANDBOXTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESANDBOXTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeSandboxTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSandboxTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SandboxTemplates, sandboxTemplates_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSandboxTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SandboxTemplates, sandboxTemplates_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSandboxTemplatesResponseBody() = default ;
    DescribeSandboxTemplatesResponseBody(const DescribeSandboxTemplatesResponseBody &) = default ;
    DescribeSandboxTemplatesResponseBody(DescribeSandboxTemplatesResponseBody &&) = default ;
    DescribeSandboxTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSandboxTemplatesResponseBody() = default ;
    DescribeSandboxTemplatesResponseBody& operator=(const DescribeSandboxTemplatesResponseBody &) = default ;
    DescribeSandboxTemplatesResponseBody& operator=(DescribeSandboxTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SandboxTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SandboxTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultCpu, defaultCpu_);
        DARABONBA_PTR_TO_JSON(DefaultMemory, defaultMemory_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableVpcAccess, enableVpcAccess_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Replicas, replicas_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, SandboxTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultCpu, defaultCpu_);
        DARABONBA_PTR_FROM_JSON(DefaultMemory, defaultMemory_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableVpcAccess, enableVpcAccess_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      SandboxTemplates() = default ;
      SandboxTemplates(const SandboxTemplates &) = default ;
      SandboxTemplates(SandboxTemplates &&) = default ;
      SandboxTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SandboxTemplates() = default ;
      SandboxTemplates& operator=(const SandboxTemplates &) = default ;
      SandboxTemplates& operator=(SandboxTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultCpu_ == nullptr
        && this->defaultMemory_ == nullptr && this->description_ == nullptr && this->enableVpcAccess_ == nullptr && this->name_ == nullptr && this->replicas_ == nullptr
        && this->templateId_ == nullptr; };
      // defaultCpu Field Functions 
      bool hasDefaultCpu() const { return this->defaultCpu_ != nullptr;};
      void deleteDefaultCpu() { this->defaultCpu_ = nullptr;};
      inline string getDefaultCpu() const { DARABONBA_PTR_GET_DEFAULT(defaultCpu_, "") };
      inline SandboxTemplates& setDefaultCpu(string defaultCpu) { DARABONBA_PTR_SET_VALUE(defaultCpu_, defaultCpu) };


      // defaultMemory Field Functions 
      bool hasDefaultMemory() const { return this->defaultMemory_ != nullptr;};
      void deleteDefaultMemory() { this->defaultMemory_ = nullptr;};
      inline string getDefaultMemory() const { DARABONBA_PTR_GET_DEFAULT(defaultMemory_, "") };
      inline SandboxTemplates& setDefaultMemory(string defaultMemory) { DARABONBA_PTR_SET_VALUE(defaultMemory_, defaultMemory) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SandboxTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableVpcAccess Field Functions 
      bool hasEnableVpcAccess() const { return this->enableVpcAccess_ != nullptr;};
      void deleteEnableVpcAccess() { this->enableVpcAccess_ = nullptr;};
      inline string getEnableVpcAccess() const { DARABONBA_PTR_GET_DEFAULT(enableVpcAccess_, "") };
      inline SandboxTemplates& setEnableVpcAccess(string enableVpcAccess) { DARABONBA_PTR_SET_VALUE(enableVpcAccess_, enableVpcAccess) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SandboxTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline int64_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0L) };
      inline SandboxTemplates& setReplicas(int64_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline SandboxTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> defaultCpu_ {};
      shared_ptr<string> defaultMemory_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> enableVpcAccess_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> replicas_ {};
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sandboxTemplates_ == nullptr
        && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSandboxTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSandboxTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSandboxTemplatesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSandboxTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSandboxTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sandboxTemplates Field Functions 
    bool hasSandboxTemplates() const { return this->sandboxTemplates_ != nullptr;};
    void deleteSandboxTemplates() { this->sandboxTemplates_ = nullptr;};
    inline const vector<DescribeSandboxTemplatesResponseBody::SandboxTemplates> & getSandboxTemplates() const { DARABONBA_PTR_GET_CONST(sandboxTemplates_, vector<DescribeSandboxTemplatesResponseBody::SandboxTemplates>) };
    inline vector<DescribeSandboxTemplatesResponseBody::SandboxTemplates> getSandboxTemplates() { DARABONBA_PTR_GET(sandboxTemplates_, vector<DescribeSandboxTemplatesResponseBody::SandboxTemplates>) };
    inline DescribeSandboxTemplatesResponseBody& setSandboxTemplates(const vector<DescribeSandboxTemplatesResponseBody::SandboxTemplates> & sandboxTemplates) { DARABONBA_PTR_SET_VALUE(sandboxTemplates_, sandboxTemplates) };
    inline DescribeSandboxTemplatesResponseBody& setSandboxTemplates(vector<DescribeSandboxTemplatesResponseBody::SandboxTemplates> && sandboxTemplates) { DARABONBA_PTR_SET_RVALUE(sandboxTemplates_, sandboxTemplates) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSandboxTemplatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSandboxTemplatesResponseBody::SandboxTemplates>> sandboxTemplates_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
