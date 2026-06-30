// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPOLARCLAWSKILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPOLARCLAWSKILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class SearchPolarClawSkillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPolarClawSkillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPolarClawSkillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    SearchPolarClawSkillsResponseBody() = default ;
    SearchPolarClawSkillsResponseBody(const SearchPolarClawSkillsResponseBody &) = default ;
    SearchPolarClawSkillsResponseBody(SearchPolarClawSkillsResponseBody &&) = default ;
    SearchPolarClawSkillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPolarClawSkillsResponseBody() = default ;
    SearchPolarClawSkillsResponseBody& operator=(const SearchPolarClawSkillsResponseBody &) = default ;
    SearchPolarClawSkillsResponseBody& operator=(SearchPolarClawSkillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Slug, slug_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Slug, slug_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->score_ == nullptr && this->slug_ == nullptr && this->summary_ == nullptr && this->updatedAt_ == nullptr && this->version_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Results& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Results& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // slug Field Functions 
      bool hasSlug() const { return this->slug_ != nullptr;};
      void deleteSlug() { this->slug_ = nullptr;};
      inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
      inline Results& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Results& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Results& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Results& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The display name.
      shared_ptr<string> displayName_ {};
      // The relevance score.
      shared_ptr<double> score_ {};
      // The skill identifier.
      shared_ptr<string> slug_ {};
      // The brief description.
      shared_ptr<string> summary_ {};
      // The UNIX timestamp of the last update, in seconds.
      shared_ptr<int64_t> updatedAt_ {};
      // The latest version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SearchPolarClawSkillsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SearchPolarClawSkillsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchPolarClawSkillsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchPolarClawSkillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<SearchPolarClawSkillsResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<SearchPolarClawSkillsResponseBody::Results>) };
    inline vector<SearchPolarClawSkillsResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<SearchPolarClawSkillsResponseBody::Results>) };
    inline SearchPolarClawSkillsResponseBody& setResults(const vector<SearchPolarClawSkillsResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline SearchPolarClawSkillsResponseBody& setResults(vector<SearchPolarClawSkillsResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The list of search results.
    shared_ptr<vector<SearchPolarClawSkillsResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
