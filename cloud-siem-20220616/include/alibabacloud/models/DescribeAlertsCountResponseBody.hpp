// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertsCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertsCountResponseBody() = default ;
    DescribeAlertsCountResponseBody(const DescribeAlertsCountResponseBody &) = default ;
    DescribeAlertsCountResponseBody(DescribeAlertsCountResponseBody &&) = default ;
    DescribeAlertsCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsCountResponseBody() = default ;
    DescribeAlertsCountResponseBody& operator=(const DescribeAlertsCountResponseBody &) = default ;
    DescribeAlertsCountResponseBody& operator=(DescribeAlertsCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(All, all_);
        DARABONBA_PTR_TO_JSON(CountMap, countMap_);
        DARABONBA_PTR_TO_JSON(High, high_);
        DARABONBA_PTR_TO_JSON(Low, low_);
        DARABONBA_PTR_TO_JSON(Medium, medium_);
        DARABONBA_PTR_TO_JSON(ProductNum, productNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(All, all_);
        DARABONBA_PTR_FROM_JSON(CountMap, countMap_);
        DARABONBA_PTR_FROM_JSON(High, high_);
        DARABONBA_PTR_FROM_JSON(Low, low_);
        DARABONBA_PTR_FROM_JSON(Medium, medium_);
        DARABONBA_PTR_FROM_JSON(ProductNum, productNum_);
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
      virtual bool empty() const override { return this->all_ == nullptr
        && this->countMap_ == nullptr && this->high_ == nullptr && this->low_ == nullptr && this->medium_ == nullptr && this->productNum_ == nullptr; };
      // all Field Functions 
      bool hasAll() const { return this->all_ != nullptr;};
      void deleteAll() { this->all_ = nullptr;};
      inline int64_t getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, 0L) };
      inline Data& setAll(int64_t all) { DARABONBA_PTR_SET_VALUE(all_, all) };


      // countMap Field Functions 
      bool hasCountMap() const { return this->countMap_ != nullptr;};
      void deleteCountMap() { this->countMap_ = nullptr;};
      inline const map<string, int64_t> & getCountMap() const { DARABONBA_PTR_GET_CONST(countMap_, map<string, int64_t>) };
      inline map<string, int64_t> getCountMap() { DARABONBA_PTR_GET(countMap_, map<string, int64_t>) };
      inline Data& setCountMap(const map<string, int64_t> & countMap) { DARABONBA_PTR_SET_VALUE(countMap_, countMap) };
      inline Data& setCountMap(map<string, int64_t> && countMap) { DARABONBA_PTR_SET_RVALUE(countMap_, countMap) };


      // high Field Functions 
      bool hasHigh() const { return this->high_ != nullptr;};
      void deleteHigh() { this->high_ = nullptr;};
      inline int64_t getHigh() const { DARABONBA_PTR_GET_DEFAULT(high_, 0L) };
      inline Data& setHigh(int64_t high) { DARABONBA_PTR_SET_VALUE(high_, high) };


      // low Field Functions 
      bool hasLow() const { return this->low_ != nullptr;};
      void deleteLow() { this->low_ = nullptr;};
      inline int64_t getLow() const { DARABONBA_PTR_GET_DEFAULT(low_, 0L) };
      inline Data& setLow(int64_t low) { DARABONBA_PTR_SET_VALUE(low_, low) };


      // medium Field Functions 
      bool hasMedium() const { return this->medium_ != nullptr;};
      void deleteMedium() { this->medium_ = nullptr;};
      inline int64_t getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, 0L) };
      inline Data& setMedium(int64_t medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


      // productNum Field Functions 
      bool hasProductNum() const { return this->productNum_ != nullptr;};
      void deleteProductNum() { this->productNum_ = nullptr;};
      inline int32_t getProductNum() const { DARABONBA_PTR_GET_DEFAULT(productNum_, 0) };
      inline Data& setProductNum(int32_t productNum) { DARABONBA_PTR_SET_VALUE(productNum_, productNum) };


    protected:
      // The total number of alerts.
      shared_ptr<int64_t> all_ {};
      shared_ptr<map<string, int64_t>> countMap_ {};
      // The number of high-risk alerts.
      shared_ptr<int64_t> high_ {};
      // The number of low-risk alerts.
      shared_ptr<int64_t> low_ {};
      // The number of medium-risk alerts.
      shared_ptr<int64_t> medium_ {};
      // The number of connected services.
      shared_ptr<int32_t> productNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAlertsCountResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAlertsCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAlertsCountResponseBody::Data) };
    inline DescribeAlertsCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAlertsCountResponseBody::Data) };
    inline DescribeAlertsCountResponseBody& setData(const DescribeAlertsCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAlertsCountResponseBody& setData(DescribeAlertsCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertsCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertsCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertsCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeAlertsCountResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
