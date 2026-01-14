// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWHITEPORTALMENURESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWHITEPORTALMENURESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListWhitePortalMenuResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWhitePortalMenuResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListWhitePortalMenuResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListWhitePortalMenuResponseBody() = default ;
    ListWhitePortalMenuResponseBody(const ListWhitePortalMenuResponseBody &) = default ;
    ListWhitePortalMenuResponseBody(ListWhitePortalMenuResponseBody &&) = default ;
    ListWhitePortalMenuResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWhitePortalMenuResponseBody() = default ;
    ListWhitePortalMenuResponseBody& operator=(const ListWhitePortalMenuResponseBody &) = default ;
    ListWhitePortalMenuResponseBody& operator=(ListWhitePortalMenuResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AuthPointsValue, authPointsValue_);
        DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
        DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthPointsValue, authPointsValue_);
        DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
        DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
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
      virtual bool empty() const override { return this->authPointsValue_ == nullptr
        && this->receiverId_ == nullptr && this->receiverType_ == nullptr; };
      // authPointsValue Field Functions 
      bool hasAuthPointsValue() const { return this->authPointsValue_ != nullptr;};
      void deleteAuthPointsValue() { this->authPointsValue_ = nullptr;};
      inline int32_t getAuthPointsValue() const { DARABONBA_PTR_GET_DEFAULT(authPointsValue_, 0) };
      inline Result& setAuthPointsValue(int32_t authPointsValue) { DARABONBA_PTR_SET_VALUE(authPointsValue_, authPointsValue) };


      // receiverId Field Functions 
      bool hasReceiverId() const { return this->receiverId_ != nullptr;};
      void deleteReceiverId() { this->receiverId_ = nullptr;};
      inline string getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
      inline Result& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


      // receiverType Field Functions 
      bool hasReceiverType() const { return this->receiverType_ != nullptr;};
      void deleteReceiverType() { this->receiverType_ = nullptr;};
      inline int32_t getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, 0) };
      inline Result& setReceiverType(int32_t receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


    protected:
      shared_ptr<int32_t> authPointsValue_ {};
      shared_ptr<string> receiverId_ {};
      shared_ptr<int32_t> receiverType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWhitePortalMenuResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListWhitePortalMenuResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListWhitePortalMenuResponseBody::Result>) };
    inline vector<ListWhitePortalMenuResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListWhitePortalMenuResponseBody::Result>) };
    inline ListWhitePortalMenuResponseBody& setResult(const vector<ListWhitePortalMenuResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListWhitePortalMenuResponseBody& setResult(vector<ListWhitePortalMenuResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWhitePortalMenuResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListWhitePortalMenuResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
