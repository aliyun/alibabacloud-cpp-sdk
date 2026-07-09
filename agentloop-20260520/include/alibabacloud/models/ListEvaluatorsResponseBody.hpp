// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListEvaluatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(evaluators, evaluators_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(evaluators, evaluators_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListEvaluatorsResponseBody() = default ;
    ListEvaluatorsResponseBody(const ListEvaluatorsResponseBody &) = default ;
    ListEvaluatorsResponseBody(ListEvaluatorsResponseBody &&) = default ;
    ListEvaluatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluatorsResponseBody() = default ;
    ListEvaluatorsResponseBody& operator=(const ListEvaluatorsResponseBody &) = default ;
    ListEvaluatorsResponseBody& operator=(ListEvaluatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Evaluators : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Evaluators& obj) { 
        DARABONBA_PTR_TO_JSON(annotations, annotations_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(metricName, metricName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_ANY_TO_JSON(properties, properties_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Evaluators& obj) { 
        DARABONBA_PTR_FROM_JSON(annotations, annotations_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(metricName, metricName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_ANY_FROM_JSON(properties, properties_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      };
      Evaluators() = default ;
      Evaluators(const Evaluators &) = default ;
      Evaluators(Evaluators &&) = default ;
      Evaluators(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Evaluators() = default ;
      Evaluators& operator=(const Evaluators &) = default ;
      Evaluators& operator=(Evaluators &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->annotations_ == nullptr
        && this->createdAt_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->latestVersion_ == nullptr && this->metricName_ == nullptr
        && this->name_ == nullptr && this->properties_ == nullptr && this->type_ == nullptr && this->updatedAt_ == nullptr; };
      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline const vector<string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<string>) };
      inline vector<string> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<string>) };
      inline Evaluators& setAnnotations(const vector<string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
      inline Evaluators& setAnnotations(vector<string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Evaluators& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Evaluators& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Evaluators& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Evaluators& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline Evaluators& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Evaluators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline Evaluators& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline Evaluators& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Evaluators& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Evaluators& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The list of annotations.
      shared_ptr<vector<string>> annotations_ {};
      // The creation time, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> createdAt_ {};
      // The evaluator description.
      shared_ptr<string> description_ {};
      // The display name.
      shared_ptr<string> displayName_ {};
      // The latest version number.
      shared_ptr<string> latestVersion_ {};
      // The metric name.
      shared_ptr<string> metricName_ {};
      // The evaluator name.
      shared_ptr<string> name_ {};
      // The evaluator properties.
      Darabonba::Json properties_ {};
      // The evaluator type.
      shared_ptr<string> type_ {};
      // The update time, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> updatedAt_ {};
    };

    virtual bool empty() const override { return this->evaluators_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // evaluators Field Functions 
    bool hasEvaluators() const { return this->evaluators_ != nullptr;};
    void deleteEvaluators() { this->evaluators_ = nullptr;};
    inline const vector<ListEvaluatorsResponseBody::Evaluators> & getEvaluators() const { DARABONBA_PTR_GET_CONST(evaluators_, vector<ListEvaluatorsResponseBody::Evaluators>) };
    inline vector<ListEvaluatorsResponseBody::Evaluators> getEvaluators() { DARABONBA_PTR_GET(evaluators_, vector<ListEvaluatorsResponseBody::Evaluators>) };
    inline ListEvaluatorsResponseBody& setEvaluators(const vector<ListEvaluatorsResponseBody::Evaluators> & evaluators) { DARABONBA_PTR_SET_VALUE(evaluators_, evaluators) };
    inline ListEvaluatorsResponseBody& setEvaluators(vector<ListEvaluatorsResponseBody::Evaluators> && evaluators) { DARABONBA_PTR_SET_RVALUE(evaluators_, evaluators) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEvaluatorsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEvaluatorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListEvaluatorsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of evaluator summaries.
    shared_ptr<vector<ListEvaluatorsResponseBody::Evaluators>> evaluators_ {};
    // The number of entries per page used in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of evaluators that match the filter conditions.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
