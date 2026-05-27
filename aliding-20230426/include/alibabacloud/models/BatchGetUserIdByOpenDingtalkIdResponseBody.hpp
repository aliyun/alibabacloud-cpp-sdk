// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETUSERIDBYOPENDINGTALKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETUSERIDBYOPENDINGTALKIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchGetUserIdByOpenDingtalkIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetUserIdByOpenDingtalkIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetUserIdByOpenDingtalkIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    BatchGetUserIdByOpenDingtalkIdResponseBody() = default ;
    BatchGetUserIdByOpenDingtalkIdResponseBody(const BatchGetUserIdByOpenDingtalkIdResponseBody &) = default ;
    BatchGetUserIdByOpenDingtalkIdResponseBody(BatchGetUserIdByOpenDingtalkIdResponseBody &&) = default ;
    BatchGetUserIdByOpenDingtalkIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetUserIdByOpenDingtalkIdResponseBody() = default ;
    BatchGetUserIdByOpenDingtalkIdResponseBody& operator=(const BatchGetUserIdByOpenDingtalkIdResponseBody &) = default ;
    BatchGetUserIdByOpenDingtalkIdResponseBody& operator=(BatchGetUserIdByOpenDingtalkIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(OpenDingtalkId, openDingtalkId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(OpenDingtalkId, openDingtalkId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->openDingtalkId_ == nullptr && this->userId_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Results& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // openDingtalkId Field Functions 
      bool hasOpenDingtalkId() const { return this->openDingtalkId_ != nullptr;};
      void deleteOpenDingtalkId() { this->openDingtalkId_ = nullptr;};
      inline string getOpenDingtalkId() const { DARABONBA_PTR_GET_DEFAULT(openDingtalkId_, "") };
      inline Results& setOpenDingtalkId(string openDingtalkId) { DARABONBA_PTR_SET_VALUE(openDingtalkId_, openDingtalkId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Results& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> openDingtalkId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetUserIdByOpenDingtalkIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchGetUserIdByOpenDingtalkIdResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchGetUserIdByOpenDingtalkIdResponseBody::Results>) };
    inline vector<BatchGetUserIdByOpenDingtalkIdResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchGetUserIdByOpenDingtalkIdResponseBody::Results>) };
    inline BatchGetUserIdByOpenDingtalkIdResponseBody& setResults(const vector<BatchGetUserIdByOpenDingtalkIdResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchGetUserIdByOpenDingtalkIdResponseBody& setResults(vector<BatchGetUserIdByOpenDingtalkIdResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline BatchGetUserIdByOpenDingtalkIdResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline BatchGetUserIdByOpenDingtalkIdResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchGetUserIdByOpenDingtalkIdResponseBody::Results>> results_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
