// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIMETERINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIMETERINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeApiMeteringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiMeteringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Fatal, fatal_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiMeteringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Fatal, fatal_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeApiMeteringResponseBody() = default ;
    DescribeApiMeteringResponseBody(const DescribeApiMeteringResponseBody &) = default ;
    DescribeApiMeteringResponseBody(DescribeApiMeteringResponseBody &&) = default ;
    DescribeApiMeteringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiMeteringResponseBody() = default ;
    DescribeApiMeteringResponseBody& operator=(const DescribeApiMeteringResponseBody &) = default ;
    DescribeApiMeteringResponseBody& operator=(DescribeApiMeteringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
        DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_TO_JSON(TotalUsage, totalUsage_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
        DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_FROM_JSON(TotalUsage, totalUsage_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
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
      virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && this->productCode_ == nullptr && this->productName_ == nullptr && this->totalCapacity_ == nullptr && this->totalQuota_ == nullptr && this->totalUsage_ == nullptr
        && this->unit_ == nullptr; };
      // aliyunPk Field Functions 
      bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
      void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
      inline int64_t getAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, 0L) };
      inline Result& setAliyunPk(int64_t aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Result& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Result& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // totalCapacity Field Functions 
      bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
      void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
      inline int64_t getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0L) };
      inline Result& setTotalCapacity(int64_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
      inline Result& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // totalUsage Field Functions 
      bool hasTotalUsage() const { return this->totalUsage_ != nullptr;};
      void deleteTotalUsage() { this->totalUsage_ = nullptr;};
      inline int64_t getTotalUsage() const { DARABONBA_PTR_GET_DEFAULT(totalUsage_, 0L) };
      inline Result& setTotalUsage(int64_t totalUsage) { DARABONBA_PTR_SET_VALUE(totalUsage_, totalUsage) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Result& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<int64_t> aliyunPk_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<int64_t> totalCapacity_ {};
      shared_ptr<int64_t> totalQuota_ {};
      shared_ptr<int64_t> totalUsage_ {};
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->fatal_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr && this->version_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApiMeteringResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeApiMeteringResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // fatal Field Functions 
    bool hasFatal() const { return this->fatal_ != nullptr;};
    void deleteFatal() { this->fatal_ = nullptr;};
    inline bool getFatal() const { DARABONBA_PTR_GET_DEFAULT(fatal_, false) };
    inline DescribeApiMeteringResponseBody& setFatal(bool fatal) { DARABONBA_PTR_SET_VALUE(fatal_, fatal) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApiMeteringResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeApiMeteringResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeApiMeteringResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiMeteringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeApiMeteringResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeApiMeteringResponseBody::Result>) };
    inline vector<DescribeApiMeteringResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeApiMeteringResponseBody::Result>) };
    inline DescribeApiMeteringResponseBody& setResult(const vector<DescribeApiMeteringResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeApiMeteringResponseBody& setResult(vector<DescribeApiMeteringResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApiMeteringResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeApiMeteringResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> count_ {};
    // fatal
    shared_ptr<bool> fatal_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeApiMeteringResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
