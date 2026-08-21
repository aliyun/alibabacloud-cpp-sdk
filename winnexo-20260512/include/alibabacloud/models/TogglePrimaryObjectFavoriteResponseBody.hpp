// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOGGLEPRIMARYOBJECTFAVORITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TOGGLEPRIMARYOBJECTFAVORITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class TogglePrimaryObjectFavoriteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TogglePrimaryObjectFavoriteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(favoriteCount, favoriteCount_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, TogglePrimaryObjectFavoriteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(favoriteCount, favoriteCount_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    TogglePrimaryObjectFavoriteResponseBody() = default ;
    TogglePrimaryObjectFavoriteResponseBody(const TogglePrimaryObjectFavoriteResponseBody &) = default ;
    TogglePrimaryObjectFavoriteResponseBody(TogglePrimaryObjectFavoriteResponseBody &&) = default ;
    TogglePrimaryObjectFavoriteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TogglePrimaryObjectFavoriteResponseBody() = default ;
    TogglePrimaryObjectFavoriteResponseBody& operator=(const TogglePrimaryObjectFavoriteResponseBody &) = default ;
    TogglePrimaryObjectFavoriteResponseBody& operator=(TogglePrimaryObjectFavoriteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(isFavorited, isFavorited_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(isFavorited, isFavorited_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(success, success_);
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
      virtual bool empty() const override { return this->isFavorited_ == nullptr
        && this->message_ == nullptr && this->objectId_ == nullptr && this->success_ == nullptr; };
      // isFavorited Field Functions 
      bool hasIsFavorited() const { return this->isFavorited_ != nullptr;};
      void deleteIsFavorited() { this->isFavorited_ = nullptr;};
      inline bool getIsFavorited() const { DARABONBA_PTR_GET_DEFAULT(isFavorited_, false) };
      inline Results& setIsFavorited(bool isFavorited) { DARABONBA_PTR_SET_VALUE(isFavorited_, isFavorited) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Results& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Results& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // Indicates whether the object is followed after the operation.
      shared_ptr<bool> isFavorited_ {};
      // The description of the status code.
      shared_ptr<string> message_ {};
      // The ID of the aligned object: target ID or KR ID.
      shared_ptr<string> objectId_ {};
      // Indicates whether the operation is successful.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->favoriteCount_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TogglePrimaryObjectFavoriteResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // favoriteCount Field Functions 
    bool hasFavoriteCount() const { return this->favoriteCount_ != nullptr;};
    void deleteFavoriteCount() { this->favoriteCount_ = nullptr;};
    inline int64_t getFavoriteCount() const { DARABONBA_PTR_GET_DEFAULT(favoriteCount_, 0L) };
    inline TogglePrimaryObjectFavoriteResponseBody& setFavoriteCount(int64_t favoriteCount) { DARABONBA_PTR_SET_VALUE(favoriteCount_, favoriteCount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TogglePrimaryObjectFavoriteResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TogglePrimaryObjectFavoriteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<TogglePrimaryObjectFavoriteResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<TogglePrimaryObjectFavoriteResponseBody::Results>) };
    inline vector<TogglePrimaryObjectFavoriteResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<TogglePrimaryObjectFavoriteResponseBody::Results>) };
    inline TogglePrimaryObjectFavoriteResponseBody& setResults(const vector<TogglePrimaryObjectFavoriteResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline TogglePrimaryObjectFavoriteResponseBody& setResults(vector<TogglePrimaryObjectFavoriteResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The total number of follows by the user for the specified object type.
    shared_ptr<int64_t> favoriteCount_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of results.
    shared_ptr<vector<TogglePrimaryObjectFavoriteResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
