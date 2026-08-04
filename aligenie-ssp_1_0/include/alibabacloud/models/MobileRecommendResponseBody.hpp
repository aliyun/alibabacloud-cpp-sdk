// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILERECOMMENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOBILERECOMMENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class MobileRecommendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileRecommendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, MobileRecommendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    MobileRecommendResponseBody() = default ;
    MobileRecommendResponseBody(const MobileRecommendResponseBody &) = default ;
    MobileRecommendResponseBody(MobileRecommendResponseBody &&) = default ;
    MobileRecommendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileRecommendResponseBody() = default ;
    MobileRecommendResponseBody& operator=(const MobileRecommendResponseBody &) = default ;
    MobileRecommendResponseBody& operator=(MobileRecommendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Authors, authors_);
        DARABONBA_PTR_TO_JSON(Cover, cover_);
        DARABONBA_PTR_TO_JSON(RawId, rawId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Authors, authors_);
        DARABONBA_PTR_FROM_JSON(Cover, cover_);
        DARABONBA_PTR_FROM_JSON(RawId, rawId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      virtual bool empty() const override { return this->authors_ == nullptr
        && this->cover_ == nullptr && this->rawId_ == nullptr && this->source_ == nullptr && this->title_ == nullptr; };
      // authors Field Functions 
      bool hasAuthors() const { return this->authors_ != nullptr;};
      void deleteAuthors() { this->authors_ = nullptr;};
      inline const vector<string> & getAuthors() const { DARABONBA_PTR_GET_CONST(authors_, vector<string>) };
      inline vector<string> getAuthors() { DARABONBA_PTR_GET(authors_, vector<string>) };
      inline Result& setAuthors(const vector<string> & authors) { DARABONBA_PTR_SET_VALUE(authors_, authors) };
      inline Result& setAuthors(vector<string> && authors) { DARABONBA_PTR_SET_RVALUE(authors_, authors) };


      // cover Field Functions 
      bool hasCover() const { return this->cover_ != nullptr;};
      void deleteCover() { this->cover_ = nullptr;};
      inline string getCover() const { DARABONBA_PTR_GET_DEFAULT(cover_, "") };
      inline Result& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


      // rawId Field Functions 
      bool hasRawId() const { return this->rawId_ != nullptr;};
      void deleteRawId() { this->rawId_ = nullptr;};
      inline string getRawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
      inline Result& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Result& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Author information
      shared_ptr<vector<string>> authors_ {};
      // Album thumbnail image
      shared_ptr<string> cover_ {};
      // Third-party ID of the content
      shared_ptr<string> rawId_ {};
      // Source of the content
      shared_ptr<string> source_ {};
      // Content title
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MobileRecommendResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MobileRecommendResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MobileRecommendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<MobileRecommendResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<MobileRecommendResponseBody::Result>) };
    inline vector<MobileRecommendResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<MobileRecommendResponseBody::Result>) };
    inline MobileRecommendResponseBody& setResult(const vector<MobileRecommendResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline MobileRecommendResponseBody& setResult(vector<MobileRecommendResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code of the invocation
    shared_ptr<string> code_ {};
    // If an error occurs, the error message will be output.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Request result.
    shared_ptr<vector<MobileRecommendResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
