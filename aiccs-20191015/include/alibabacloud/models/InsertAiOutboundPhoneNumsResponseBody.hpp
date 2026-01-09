// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTAIOUTBOUNDPHONENUMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class InsertAiOutboundPhoneNumsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertAiOutboundPhoneNumsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InsertAiOutboundPhoneNumsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InsertAiOutboundPhoneNumsResponseBody() = default ;
    InsertAiOutboundPhoneNumsResponseBody(const InsertAiOutboundPhoneNumsResponseBody &) = default ;
    InsertAiOutboundPhoneNumsResponseBody(InsertAiOutboundPhoneNumsResponseBody &&) = default ;
    InsertAiOutboundPhoneNumsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertAiOutboundPhoneNumsResponseBody() = default ;
    InsertAiOutboundPhoneNumsResponseBody& operator=(const InsertAiOutboundPhoneNumsResponseBody &) = default ;
    InsertAiOutboundPhoneNumsResponseBody& operator=(InsertAiOutboundPhoneNumsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailInfo, failInfo_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailInfo, failInfo_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class FailInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BizData, bizData_);
          DARABONBA_PTR_TO_JSON(Msg, msg_);
          DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
        };
        friend void from_json(const Darabonba::Json& j, FailInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BizData, bizData_);
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
          DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
        };
        FailInfo() = default ;
        FailInfo(const FailInfo &) = default ;
        FailInfo(FailInfo &&) = default ;
        FailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailInfo() = default ;
        FailInfo& operator=(const FailInfo &) = default ;
        FailInfo& operator=(FailInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizData_ == nullptr
        && this->msg_ == nullptr && this->phoneNum_ == nullptr; };
        // bizData Field Functions 
        bool hasBizData() const { return this->bizData_ != nullptr;};
        void deleteBizData() { this->bizData_ = nullptr;};
        inline string getBizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
        inline FailInfo& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline FailInfo& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // phoneNum Field Functions 
        bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
        void deletePhoneNum() { this->phoneNum_ = nullptr;};
        inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
        inline FailInfo& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


      protected:
        shared_ptr<string> bizData_ {};
        shared_ptr<string> msg_ {};
        shared_ptr<string> phoneNum_ {};
      };

      virtual bool empty() const override { return this->failInfo_ == nullptr
        && this->successCount_ == nullptr && this->totalCount_ == nullptr; };
      // failInfo Field Functions 
      bool hasFailInfo() const { return this->failInfo_ != nullptr;};
      void deleteFailInfo() { this->failInfo_ = nullptr;};
      inline const vector<Data::FailInfo> & getFailInfo() const { DARABONBA_PTR_GET_CONST(failInfo_, vector<Data::FailInfo>) };
      inline vector<Data::FailInfo> getFailInfo() { DARABONBA_PTR_GET(failInfo_, vector<Data::FailInfo>) };
      inline Data& setFailInfo(const vector<Data::FailInfo> & failInfo) { DARABONBA_PTR_SET_VALUE(failInfo_, failInfo) };
      inline Data& setFailInfo(vector<Data::FailInfo> && failInfo) { DARABONBA_PTR_SET_RVALUE(failInfo_, failInfo) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::FailInfo>> failInfo_ {};
      shared_ptr<int32_t> successCount_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InsertAiOutboundPhoneNumsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InsertAiOutboundPhoneNumsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, InsertAiOutboundPhoneNumsResponseBody::Data) };
    inline InsertAiOutboundPhoneNumsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, InsertAiOutboundPhoneNumsResponseBody::Data) };
    inline InsertAiOutboundPhoneNumsResponseBody& setData(const InsertAiOutboundPhoneNumsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InsertAiOutboundPhoneNumsResponseBody& setData(InsertAiOutboundPhoneNumsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertAiOutboundPhoneNumsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertAiOutboundPhoneNumsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InsertAiOutboundPhoneNumsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<InsertAiOutboundPhoneNumsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
