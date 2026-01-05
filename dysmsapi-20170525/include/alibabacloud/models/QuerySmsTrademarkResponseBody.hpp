// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSTRADEMARKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSTRADEMARKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsTrademarkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsTrademarkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsTrademarkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySmsTrademarkResponseBody() = default ;
    QuerySmsTrademarkResponseBody(const QuerySmsTrademarkResponseBody &) = default ;
    QuerySmsTrademarkResponseBody(QuerySmsTrademarkResponseBody &&) = default ;
    QuerySmsTrademarkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsTrademarkResponseBody() = default ;
    QuerySmsTrademarkResponseBody& operator=(const QuerySmsTrademarkResponseBody &) = default ;
    QuerySmsTrademarkResponseBody& operator=(QuerySmsTrademarkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TrademarkApplicantName, trademarkApplicantName_);
        DARABONBA_PTR_TO_JSON(TrademarkEffExpDate, trademarkEffExpDate_);
        DARABONBA_PTR_TO_JSON(TrademarkId, trademarkId_);
        DARABONBA_PTR_TO_JSON(TrademarkName, trademarkName_);
        DARABONBA_PTR_TO_JSON(TrademarkPic, trademarkPic_);
        DARABONBA_PTR_TO_JSON(TrademarkPicUrl, trademarkPicUrl_);
        DARABONBA_PTR_TO_JSON(TrademarkRegistrationNumber, trademarkRegistrationNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TrademarkApplicantName, trademarkApplicantName_);
        DARABONBA_PTR_FROM_JSON(TrademarkEffExpDate, trademarkEffExpDate_);
        DARABONBA_PTR_FROM_JSON(TrademarkId, trademarkId_);
        DARABONBA_PTR_FROM_JSON(TrademarkName, trademarkName_);
        DARABONBA_PTR_FROM_JSON(TrademarkPic, trademarkPic_);
        DARABONBA_PTR_FROM_JSON(TrademarkPicUrl, trademarkPicUrl_);
        DARABONBA_PTR_FROM_JSON(TrademarkRegistrationNumber, trademarkRegistrationNumber_);
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
      virtual bool empty() const override { return this->trademarkApplicantName_ == nullptr
        && this->trademarkEffExpDate_ == nullptr && this->trademarkId_ == nullptr && this->trademarkName_ == nullptr && this->trademarkPic_ == nullptr && this->trademarkPicUrl_ == nullptr
        && this->trademarkRegistrationNumber_ == nullptr; };
      // trademarkApplicantName Field Functions 
      bool hasTrademarkApplicantName() const { return this->trademarkApplicantName_ != nullptr;};
      void deleteTrademarkApplicantName() { this->trademarkApplicantName_ = nullptr;};
      inline string getTrademarkApplicantName() const { DARABONBA_PTR_GET_DEFAULT(trademarkApplicantName_, "") };
      inline Data& setTrademarkApplicantName(string trademarkApplicantName) { DARABONBA_PTR_SET_VALUE(trademarkApplicantName_, trademarkApplicantName) };


      // trademarkEffExpDate Field Functions 
      bool hasTrademarkEffExpDate() const { return this->trademarkEffExpDate_ != nullptr;};
      void deleteTrademarkEffExpDate() { this->trademarkEffExpDate_ = nullptr;};
      inline string getTrademarkEffExpDate() const { DARABONBA_PTR_GET_DEFAULT(trademarkEffExpDate_, "") };
      inline Data& setTrademarkEffExpDate(string trademarkEffExpDate) { DARABONBA_PTR_SET_VALUE(trademarkEffExpDate_, trademarkEffExpDate) };


      // trademarkId Field Functions 
      bool hasTrademarkId() const { return this->trademarkId_ != nullptr;};
      void deleteTrademarkId() { this->trademarkId_ = nullptr;};
      inline int64_t getTrademarkId() const { DARABONBA_PTR_GET_DEFAULT(trademarkId_, 0L) };
      inline Data& setTrademarkId(int64_t trademarkId) { DARABONBA_PTR_SET_VALUE(trademarkId_, trademarkId) };


      // trademarkName Field Functions 
      bool hasTrademarkName() const { return this->trademarkName_ != nullptr;};
      void deleteTrademarkName() { this->trademarkName_ = nullptr;};
      inline string getTrademarkName() const { DARABONBA_PTR_GET_DEFAULT(trademarkName_, "") };
      inline Data& setTrademarkName(string trademarkName) { DARABONBA_PTR_SET_VALUE(trademarkName_, trademarkName) };


      // trademarkPic Field Functions 
      bool hasTrademarkPic() const { return this->trademarkPic_ != nullptr;};
      void deleteTrademarkPic() { this->trademarkPic_ = nullptr;};
      inline string getTrademarkPic() const { DARABONBA_PTR_GET_DEFAULT(trademarkPic_, "") };
      inline Data& setTrademarkPic(string trademarkPic) { DARABONBA_PTR_SET_VALUE(trademarkPic_, trademarkPic) };


      // trademarkPicUrl Field Functions 
      bool hasTrademarkPicUrl() const { return this->trademarkPicUrl_ != nullptr;};
      void deleteTrademarkPicUrl() { this->trademarkPicUrl_ = nullptr;};
      inline string getTrademarkPicUrl() const { DARABONBA_PTR_GET_DEFAULT(trademarkPicUrl_, "") };
      inline Data& setTrademarkPicUrl(string trademarkPicUrl) { DARABONBA_PTR_SET_VALUE(trademarkPicUrl_, trademarkPicUrl) };


      // trademarkRegistrationNumber Field Functions 
      bool hasTrademarkRegistrationNumber() const { return this->trademarkRegistrationNumber_ != nullptr;};
      void deleteTrademarkRegistrationNumber() { this->trademarkRegistrationNumber_ = nullptr;};
      inline string getTrademarkRegistrationNumber() const { DARABONBA_PTR_GET_DEFAULT(trademarkRegistrationNumber_, "") };
      inline Data& setTrademarkRegistrationNumber(string trademarkRegistrationNumber) { DARABONBA_PTR_SET_VALUE(trademarkRegistrationNumber_, trademarkRegistrationNumber) };


    protected:
      // 申请人名称
      shared_ptr<string> trademarkApplicantName_ {};
      // 专用权生失效日期
      shared_ptr<string> trademarkEffExpDate_ {};
      // 商标材料id
      shared_ptr<int64_t> trademarkId_ {};
      // 商标名称
      shared_ptr<string> trademarkName_ {};
      // 商标截图Osskey（给签名传工单用）
      shared_ptr<string> trademarkPic_ {};
      // 商标截图url地址
      shared_ptr<string> trademarkPicUrl_ {};
      // 商标注册号
      shared_ptr<string> trademarkRegistrationNumber_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySmsTrademarkResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsTrademarkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QuerySmsTrademarkResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QuerySmsTrademarkResponseBody::Data>) };
    inline vector<QuerySmsTrademarkResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QuerySmsTrademarkResponseBody::Data>) };
    inline QuerySmsTrademarkResponseBody& setData(const vector<QuerySmsTrademarkResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySmsTrademarkResponseBody& setData(vector<QuerySmsTrademarkResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsTrademarkResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsTrademarkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySmsTrademarkResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<QuerySmsTrademarkResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
