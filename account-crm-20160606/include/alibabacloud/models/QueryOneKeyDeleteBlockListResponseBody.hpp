// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYONEKEYDELETEBLOCKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYONEKEYDELETEBLOCKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryOneKeyDeleteBlockListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOneKeyDeleteBlockListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOneKeyDeleteBlockListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryOneKeyDeleteBlockListResponseBody() = default ;
    QueryOneKeyDeleteBlockListResponseBody(const QueryOneKeyDeleteBlockListResponseBody &) = default ;
    QueryOneKeyDeleteBlockListResponseBody(QueryOneKeyDeleteBlockListResponseBody &&) = default ;
    QueryOneKeyDeleteBlockListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOneKeyDeleteBlockListResponseBody() = default ;
    QueryOneKeyDeleteBlockListResponseBody& operator=(const QueryOneKeyDeleteBlockListResponseBody &) = default ;
    QueryOneKeyDeleteBlockListResponseBody& operator=(QueryOneKeyDeleteBlockListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BlockCode, blockCode_);
        DARABONBA_PTR_TO_JSON(BlockMsg, blockMsg_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockCode, blockCode_);
        DARABONBA_PTR_FROM_JSON(BlockMsg, blockMsg_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blockCode_ == nullptr
        && this->blockMsg_ == nullptr; };
      // blockCode Field Functions 
      bool hasBlockCode() const { return this->blockCode_ != nullptr;};
      void deleteBlockCode() { this->blockCode_ = nullptr;};
      inline string getBlockCode() const { DARABONBA_PTR_GET_DEFAULT(blockCode_, "") };
      inline Data& setBlockCode(string blockCode) { DARABONBA_PTR_SET_VALUE(blockCode_, blockCode) };


      // blockMsg Field Functions 
      bool hasBlockMsg() const { return this->blockMsg_ != nullptr;};
      void deleteBlockMsg() { this->blockMsg_ = nullptr;};
      inline string getBlockMsg() const { DARABONBA_PTR_GET_DEFAULT(blockMsg_, "") };
      inline Data& setBlockMsg(string blockMsg) { DARABONBA_PTR_SET_VALUE(blockMsg_, blockMsg) };


    protected:
      shared_ptr<string> blockCode_ {};
      shared_ptr<string> blockMsg_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryOneKeyDeleteBlockListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryOneKeyDeleteBlockListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryOneKeyDeleteBlockListResponseBody::Data>) };
    inline vector<QueryOneKeyDeleteBlockListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryOneKeyDeleteBlockListResponseBody::Data>) };
    inline QueryOneKeyDeleteBlockListResponseBody& setData(const vector<QueryOneKeyDeleteBlockListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryOneKeyDeleteBlockListResponseBody& setData(vector<QueryOneKeyDeleteBlockListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryOneKeyDeleteBlockListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryOneKeyDeleteBlockListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryOneKeyDeleteBlockListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<QueryOneKeyDeleteBlockListResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
