// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWUYINGSERVERWORKLOADTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWUYINGSERVERWORKLOADTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListWuyingServerWorkloadTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWuyingServerWorkloadTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkloadTemplates, workloadTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, ListWuyingServerWorkloadTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkloadTemplates, workloadTemplates_);
    };
    ListWuyingServerWorkloadTemplateResponseBody() = default ;
    ListWuyingServerWorkloadTemplateResponseBody(const ListWuyingServerWorkloadTemplateResponseBody &) = default ;
    ListWuyingServerWorkloadTemplateResponseBody(ListWuyingServerWorkloadTemplateResponseBody &&) = default ;
    ListWuyingServerWorkloadTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWuyingServerWorkloadTemplateResponseBody() = default ;
    ListWuyingServerWorkloadTemplateResponseBody& operator=(const ListWuyingServerWorkloadTemplateResponseBody &) = default ;
    ListWuyingServerWorkloadTemplateResponseBody& operator=(ListWuyingServerWorkloadTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkloadTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkloadTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, WorkloadTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      WorkloadTemplates() = default ;
      WorkloadTemplates(const WorkloadTemplates &) = default ;
      WorkloadTemplates(WorkloadTemplates &&) = default ;
      WorkloadTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkloadTemplates() = default ;
      WorkloadTemplates& operator=(const WorkloadTemplates &) = default ;
      WorkloadTemplates& operator=(WorkloadTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline WorkloadTemplates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline WorkloadTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WorkloadTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The rendered template content. The original text is Base64-encoded after being encoded in UTF-8. You must decode the Base64 string before use.
      shared_ptr<string> content_ {};
      // The description of the workload template.
      shared_ptr<string> description_ {};
      // The name of the workload template.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->workloadTemplates_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWuyingServerWorkloadTemplateResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWuyingServerWorkloadTemplateResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWuyingServerWorkloadTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workloadTemplates Field Functions 
    bool hasWorkloadTemplates() const { return this->workloadTemplates_ != nullptr;};
    void deleteWorkloadTemplates() { this->workloadTemplates_ = nullptr;};
    inline const vector<ListWuyingServerWorkloadTemplateResponseBody::WorkloadTemplates> & getWorkloadTemplates() const { DARABONBA_PTR_GET_CONST(workloadTemplates_, vector<ListWuyingServerWorkloadTemplateResponseBody::WorkloadTemplates>) };
    inline vector<ListWuyingServerWorkloadTemplateResponseBody::WorkloadTemplates> getWorkloadTemplates() { DARABONBA_PTR_GET(workloadTemplates_, vector<ListWuyingServerWorkloadTemplateResponseBody::WorkloadTemplates>) };
    inline ListWuyingServerWorkloadTemplateResponseBody& setWorkloadTemplates(const vector<ListWuyingServerWorkloadTemplateResponseBody::WorkloadTemplates> & workloadTemplates) { DARABONBA_PTR_SET_VALUE(workloadTemplates_, workloadTemplates) };
    inline ListWuyingServerWorkloadTemplateResponseBody& setWorkloadTemplates(vector<ListWuyingServerWorkloadTemplateResponseBody::WorkloadTemplates> && workloadTemplates) { DARABONBA_PTR_SET_RVALUE(workloadTemplates_, workloadTemplates) };


  protected:
    // A compatibility field. The current version does not use this field to indicate the number of returned entries.
    shared_ptr<int32_t> maxResults_ {};
    // A compatibility field. The current version does not generate a next page token.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
    // The list of workload templates. Up to 100 templates are returned, sorted by template configuration order.
    shared_ptr<vector<ListWuyingServerWorkloadTemplateResponseBody::WorkloadTemplates>> workloadTemplates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
