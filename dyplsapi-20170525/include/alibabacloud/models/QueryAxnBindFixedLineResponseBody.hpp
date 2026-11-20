// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAXNBINDFIXEDLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAXNBINDFIXEDLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QueryAxnBindFixedLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAxnBindFixedLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAxnBindFixedLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAxnBindFixedLineResponseBody() = default ;
    QueryAxnBindFixedLineResponseBody(const QueryAxnBindFixedLineResponseBody &) = default ;
    QueryAxnBindFixedLineResponseBody(QueryAxnBindFixedLineResponseBody &&) = default ;
    QueryAxnBindFixedLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAxnBindFixedLineResponseBody() = default ;
    QueryAxnBindFixedLineResponseBody& operator=(const QueryAxnBindFixedLineResponseBody &) = default ;
    QueryAxnBindFixedLineResponseBody& operator=(QueryAxnBindFixedLineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Anucode, anucode_);
        DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
        DARABONBA_PTR_TO_JSON(Areacode, areacode_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Subid, subid_);
        DARABONBA_PTR_TO_JSON(Subts, subts_);
        DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
        DARABONBA_PTR_TO_JSON(TelA, telA_);
        DARABONBA_PTR_TO_JSON(TelB, telB_);
        DARABONBA_PTR_TO_JSON(TelX, telX_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
        DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
        DARABONBA_PTR_FROM_JSON(Areacode, areacode_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Subid, subid_);
        DARABONBA_PTR_FROM_JSON(Subts, subts_);
        DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
        DARABONBA_PTR_FROM_JSON(TelA, telA_);
        DARABONBA_PTR_FROM_JSON(TelB, telB_);
        DARABONBA_PTR_FROM_JSON(TelX, telX_);
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
      class Extra : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Extra& obj) { 
          DARABONBA_PTR_TO_JSON(Callback, callback_);
          DARABONBA_PTR_TO_JSON(Callrecording, callrecording_);
        };
        friend void from_json(const Darabonba::Json& j, Extra& obj) { 
          DARABONBA_PTR_FROM_JSON(Callback, callback_);
          DARABONBA_PTR_FROM_JSON(Callrecording, callrecording_);
        };
        Extra() = default ;
        Extra(const Extra &) = default ;
        Extra(Extra &&) = default ;
        Extra(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Extra() = default ;
        Extra& operator=(const Extra &) = default ;
        Extra& operator=(Extra &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callback_ == nullptr
        && this->callrecording_ == nullptr; };
        // callback Field Functions 
        bool hasCallback() const { return this->callback_ != nullptr;};
        void deleteCallback() { this->callback_ = nullptr;};
        inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
        inline Extra& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


        // callrecording Field Functions 
        bool hasCallrecording() const { return this->callrecording_ != nullptr;};
        void deleteCallrecording() { this->callrecording_ = nullptr;};
        inline string getCallrecording() const { DARABONBA_PTR_GET_DEFAULT(callrecording_, "") };
        inline Extra& setCallrecording(string callrecording) { DARABONBA_PTR_SET_VALUE(callrecording_, callrecording) };


      protected:
        // The callback control. A calls X, meaning A is the caller and X is the callee. Valid values:
        // 
        // - 0 (default): outbound calls are not allowed.
        // 
        // - 1: the call is connected to the most recent N phone number.
        // 
        // - 2: the call is connected to the fixed phone number TelB.
        shared_ptr<string> callback_ {};
        // The call recording control. Valid values:
        // 
        // - 0 (default): recording is disabled.
        // 
        // - 1: recording is enabled.
        // 
        // > After the call recording feature is enabled, you can play and download voice files in the call records. Recording files are billed at 0.010 CNY per minute.
        shared_ptr<string> callrecording_ {};
      };

      virtual bool empty() const override { return this->anucode_ == nullptr
        && this->anucodecalled_ == nullptr && this->areacode_ == nullptr && this->expiration_ == nullptr && this->extra_ == nullptr && this->remark_ == nullptr
        && this->subid_ == nullptr && this->subts_ == nullptr && this->TAnucodeConnect_ == nullptr && this->telA_ == nullptr && this->telB_ == nullptr
        && this->telX_ == nullptr; };
      // anucode Field Functions 
      bool hasAnucode() const { return this->anucode_ != nullptr;};
      void deleteAnucode() { this->anucode_ = nullptr;};
      inline string getAnucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
      inline Data& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


      // anucodecalled Field Functions 
      bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
      void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
      inline string getAnucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
      inline Data& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


      // areacode Field Functions 
      bool hasAreacode() const { return this->areacode_ != nullptr;};
      void deleteAreacode() { this->areacode_ = nullptr;};
      inline string getAreacode() const { DARABONBA_PTR_GET_DEFAULT(areacode_, "") };
      inline Data& setAreacode(string areacode) { DARABONBA_PTR_SET_VALUE(areacode_, areacode) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline Data& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline const Data::Extra & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, Data::Extra) };
      inline Data::Extra getExtra() { DARABONBA_PTR_GET(extra_, Data::Extra) };
      inline Data& setExtra(const Data::Extra & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
      inline Data& setExtra(Data::Extra && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // subid Field Functions 
      bool hasSubid() const { return this->subid_ != nullptr;};
      void deleteSubid() { this->subid_ = nullptr;};
      inline string getSubid() const { DARABONBA_PTR_GET_DEFAULT(subid_, "") };
      inline Data& setSubid(string subid) { DARABONBA_PTR_SET_VALUE(subid_, subid) };


      // subts Field Functions 
      bool hasSubts() const { return this->subts_ != nullptr;};
      void deleteSubts() { this->subts_ = nullptr;};
      inline string getSubts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
      inline Data& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


      // TAnucodeConnect Field Functions 
      bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
      void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
      inline string getTAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
      inline Data& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


      // telA Field Functions 
      bool hasTelA() const { return this->telA_ != nullptr;};
      void deleteTelA() { this->telA_ = nullptr;};
      inline string getTelA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
      inline Data& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


      // telB Field Functions 
      bool hasTelB() const { return this->telB_ != nullptr;};
      void deleteTelB() { this->telB_ = nullptr;};
      inline string getTelB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
      inline Data& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


      // telX Field Functions 
      bool hasTelX() const { return this->telX_ != nullptr;};
      void deleteTelX() { this->telX_ = nullptr;};
      inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
      inline Data& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


    protected:
      // The pre-connection ringback tone codes. The value must contain codes for three scenarios, specified in the order of "B->X, A->X, other numbers->X" and separated by commas. 
      // 
      // > "1,2,3" indicates that the ringback tone code for B->X is 1, the code for A->X is 2, and the code for other numbers->X is 3.
      shared_ptr<string> anucode_ {};
      // The ringback tone code for the called party.
      shared_ptr<string> anucodecalled_ {};
      // The area code of the privacy number.
      shared_ptr<string> areacode_ {};
      // The expiration time, in seconds. Valid values:
      // 
      // - 0: never expires.
      // 
      // - Other values: the binding remains valid for the specified number of seconds after the X phone number is assigned. For example, if the value is 60, the binding expires and is automatically released after 60 seconds.
      shared_ptr<string> expiration_ {};
      // The extended parameters.
      shared_ptr<Data::Extra> extra_ {};
      // The external business extension field. This parameter is returned in the call record receipt message. The value cannot exceed 100 characters.
      shared_ptr<string> remark_ {};
      // The binding ID.
      shared_ptr<string> subid_ {};
      // The binding time. Format: yyyyMMddHHmmss. The time is in UTC+8, in 24-hour format.
      shared_ptr<string> subts_ {};
      // The post-connection ringback tone codes for the caller. The value must contain codes for two scenarios, specified in the order of "A as callee, B as callee" and separated by commas.
      // 
      // > "1,2" indicates that the ringback tone code for the caller when A is the callee is 1, and the code for the caller when B is the callee is 2.
      shared_ptr<string> TAnucodeConnect_ {};
      // The A phone number.
      shared_ptr<string> telA_ {};
      // The N phone number.
      shared_ptr<string> telB_ {};
      // The privacy number.
      shared_ptr<string> telX_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryAxnBindFixedLineResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAxnBindFixedLineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryAxnBindFixedLineResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryAxnBindFixedLineResponseBody::Data>) };
    inline vector<QueryAxnBindFixedLineResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryAxnBindFixedLineResponseBody::Data>) };
    inline QueryAxnBindFixedLineResponseBody& setData(const vector<QueryAxnBindFixedLineResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAxnBindFixedLineResponseBody& setData(vector<QueryAxnBindFixedLineResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAxnBindFixedLineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAxnBindFixedLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAxnBindFixedLineResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the permission verification failure.
    shared_ptr<string> accessDeniedDetail_ {};
    // The API request status code. Valid values:
    // 0: success. For other error codes, see [API error codes](https://help.aliyun.com/document_detail/59892.html).
    shared_ptr<string> code_ {};
    // The list of binding objects.
    shared_ptr<vector<QueryAxnBindFixedLineResponseBody::Data>> data_ {};
    // The description.
    shared_ptr<string> message_ {};
    // The request ID. It is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Valid values:
    // 
    // - true: The call was successful.
    // 
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
