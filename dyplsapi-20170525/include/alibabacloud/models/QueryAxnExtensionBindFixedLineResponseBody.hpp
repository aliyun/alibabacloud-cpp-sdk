// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAXNEXTENSIONBINDFIXEDLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAXNEXTENSIONBINDFIXEDLINERESPONSEBODY_HPP_
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
  class QueryAxnExtensionBindFixedLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAxnExtensionBindFixedLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAxnExtensionBindFixedLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAxnExtensionBindFixedLineResponseBody() = default ;
    QueryAxnExtensionBindFixedLineResponseBody(const QueryAxnExtensionBindFixedLineResponseBody &) = default ;
    QueryAxnExtensionBindFixedLineResponseBody(QueryAxnExtensionBindFixedLineResponseBody &&) = default ;
    QueryAxnExtensionBindFixedLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAxnExtensionBindFixedLineResponseBody() = default ;
    QueryAxnExtensionBindFixedLineResponseBody& operator=(const QueryAxnExtensionBindFixedLineResponseBody &) = default ;
    QueryAxnExtensionBindFixedLineResponseBody& operator=(QueryAxnExtensionBindFixedLineResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Extraaxx, extraaxx_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Subid, subid_);
        DARABONBA_PTR_TO_JSON(Subts, subts_);
        DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
        DARABONBA_PTR_TO_JSON(TelA, telA_);
        DARABONBA_PTR_TO_JSON(TelX, telX_);
        DARABONBA_PTR_TO_JSON(TelXext, telXext_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
        DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
        DARABONBA_PTR_FROM_JSON(Areacode, areacode_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(Extraaxx, extraaxx_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Subid, subid_);
        DARABONBA_PTR_FROM_JSON(Subts, subts_);
        DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
        DARABONBA_PTR_FROM_JSON(TelA, telA_);
        DARABONBA_PTR_FROM_JSON(TelX, telX_);
        DARABONBA_PTR_FROM_JSON(TelXext, telXext_);
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
      class Extraaxx : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Extraaxx& obj) { 
          DARABONBA_PTR_TO_JSON(Callback, callback_);
          DARABONBA_PTR_TO_JSON(Callrecording, callrecording_);
        };
        friend void from_json(const Darabonba::Json& j, Extraaxx& obj) { 
          DARABONBA_PTR_FROM_JSON(Callback, callback_);
          DARABONBA_PTR_FROM_JSON(Callrecording, callrecording_);
        };
        Extraaxx() = default ;
        Extraaxx(const Extraaxx &) = default ;
        Extraaxx(Extraaxx &&) = default ;
        Extraaxx(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Extraaxx() = default ;
        Extraaxx& operator=(const Extraaxx &) = default ;
        Extraaxx& operator=(Extraaxx &&) = default ;
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
        inline Extraaxx& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


        // callrecording Field Functions 
        bool hasCallrecording() const { return this->callrecording_ != nullptr;};
        void deleteCallrecording() { this->callrecording_ = nullptr;};
        inline string getCallrecording() const { DARABONBA_PTR_GET_DEFAULT(callrecording_, "") };
        inline Extraaxx& setCallrecording(string callrecording) { DARABONBA_PTR_SET_VALUE(callrecording_, callrecording) };


      protected:
        // The callback control. Number A calls through X, meaning A is the caller and X is the callee. Valid values:
        // 
        // - 0 (default): outbound calls are not allowed.
        // 
        // - 1: connects to the most recent number N.
        // 
        // - 2: calls back the fixed number TelB.
        shared_ptr<string> callback_ {};
        // The recording control. Valid values:
        // 
        // - 0 (default): recording is disabled.
        // 
        // - 1: recording is enabled.
        // 
        // > After the call recording feature is enabled, you can play and download voice files in the call records. Recording files are billed at 0.010 CNY per minute.
        shared_ptr<string> callrecording_ {};
      };

      virtual bool empty() const override { return this->anucode_ == nullptr
        && this->anucodecalled_ == nullptr && this->areacode_ == nullptr && this->expiration_ == nullptr && this->extraaxx_ == nullptr && this->remark_ == nullptr
        && this->subid_ == nullptr && this->subts_ == nullptr && this->TAnucodeConnect_ == nullptr && this->telA_ == nullptr && this->telX_ == nullptr
        && this->telXext_ == nullptr; };
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


      // extraaxx Field Functions 
      bool hasExtraaxx() const { return this->extraaxx_ != nullptr;};
      void deleteExtraaxx() { this->extraaxx_ = nullptr;};
      inline const Data::Extraaxx & getExtraaxx() const { DARABONBA_PTR_GET_CONST(extraaxx_, Data::Extraaxx) };
      inline Data::Extraaxx getExtraaxx() { DARABONBA_PTR_GET(extraaxx_, Data::Extraaxx) };
      inline Data& setExtraaxx(const Data::Extraaxx & extraaxx) { DARABONBA_PTR_SET_VALUE(extraaxx_, extraaxx) };
      inline Data& setExtraaxx(Data::Extraaxx && extraaxx) { DARABONBA_PTR_SET_RVALUE(extraaxx_, extraaxx) };


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


      // telX Field Functions 
      bool hasTelX() const { return this->telX_ != nullptr;};
      void deleteTelX() { this->telX_ = nullptr;};
      inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
      inline Data& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


      // telXext Field Functions 
      bool hasTelXext() const { return this->telXext_ != nullptr;};
      void deleteTelXext() { this->telXext_ = nullptr;};
      inline string getTelXext() const { DARABONBA_PTR_GET_DEFAULT(telXext_, "") };
      inline Data& setTelXext(string telXext) { DARABONBA_PTR_SET_VALUE(telXext_, telXext) };


    protected:
      // The ringback tone code.
      shared_ptr<string> anucode_ {};
      // The ringback tone played to the called party.
      shared_ptr<string> anucodecalled_ {};
      // The area code of the private number.
      shared_ptr<string> areacode_ {};
      // The expiration time, in seconds. Valid values:
      // 
      // - 0: never expires.
      // 
      // - Other values: the binding is valid for the specified duration after the X number is successfully assigned. For example, if the value is 60, the binding is valid for 60 seconds and is automatically unbound after 60 seconds.
      shared_ptr<string> expiration_ {};
      // The extension fields.
      shared_ptr<Data::Extraaxx> extraaxx_ {};
      // The external business extension field. This parameter is returned in the call record receipt message. The value cannot exceed 100 characters.
      shared_ptr<string> remark_ {};
      // The binding ID.
      shared_ptr<string> subid_ {};
      // The binding time, in the format of yyyyMMddHHmmss. The time is in UTC+8, in 24-hour format.
      shared_ptr<string> subts_ {};
      // The ringback tone code played to the caller after the call is connected.
      shared_ptr<string> TAnucodeConnect_ {};
      // The number A.
      shared_ptr<string> telA_ {};
      // The private number.
      shared_ptr<string> telX_ {};
      // The extension number.
      shared_ptr<string> telXext_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryAxnExtensionBindFixedLineResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryAxnExtensionBindFixedLineResponseBody::Data>) };
    inline vector<QueryAxnExtensionBindFixedLineResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryAxnExtensionBindFixedLineResponseBody::Data>) };
    inline QueryAxnExtensionBindFixedLineResponseBody& setData(const vector<QueryAxnExtensionBindFixedLineResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAxnExtensionBindFixedLineResponseBody& setData(vector<QueryAxnExtensionBindFixedLineResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAxnExtensionBindFixedLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAxnExtensionBindFixedLineResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the permission verification failure.
    shared_ptr<string> accessDeniedDetail_ {};
    // The API request status code. Valid values:
    // 
    // - 0: Success.
    // 
    // - For other error codes, see [API error codes](https://help.aliyun.com/document_detail/59892.html).
    shared_ptr<string> code_ {};
    // The list of binding objects.
    shared_ptr<vector<QueryAxnExtensionBindFixedLineResponseBody::Data>> data_ {};
    // The description.
    shared_ptr<string> message_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful. Valid values:
    // 
    // - true: Success.
    // 
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
