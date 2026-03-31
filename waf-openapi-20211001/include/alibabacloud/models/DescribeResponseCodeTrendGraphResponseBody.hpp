// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESPONSECODETRENDGRAPHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESPONSECODETRENDGRAPHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResponseCodeTrendGraphResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResponseCodeTrendGraphResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseCodes, responseCodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResponseCodeTrendGraphResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseCodes, responseCodes_);
    };
    DescribeResponseCodeTrendGraphResponseBody() = default ;
    DescribeResponseCodeTrendGraphResponseBody(const DescribeResponseCodeTrendGraphResponseBody &) = default ;
    DescribeResponseCodeTrendGraphResponseBody(DescribeResponseCodeTrendGraphResponseBody &&) = default ;
    DescribeResponseCodeTrendGraphResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResponseCodeTrendGraphResponseBody() = default ;
    DescribeResponseCodeTrendGraphResponseBody& operator=(const DescribeResponseCodeTrendGraphResponseBody &) = default ;
    DescribeResponseCodeTrendGraphResponseBody& operator=(DescribeResponseCodeTrendGraphResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResponseCodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseCodes& obj) { 
        DARABONBA_PTR_TO_JSON(302Pv, code302Pv_);
        DARABONBA_PTR_TO_JSON(405Pv, code405Pv_);
        DARABONBA_PTR_TO_JSON(444Pv, code444Pv_);
        DARABONBA_PTR_TO_JSON(499Pv, code499Pv_);
        DARABONBA_PTR_TO_JSON(5xxPv, code5xxPv_);
        DARABONBA_PTR_TO_JSON(Index, index_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseCodes& obj) { 
        DARABONBA_PTR_FROM_JSON(302Pv, code302Pv_);
        DARABONBA_PTR_FROM_JSON(405Pv, code405Pv_);
        DARABONBA_PTR_FROM_JSON(444Pv, code444Pv_);
        DARABONBA_PTR_FROM_JSON(499Pv, code499Pv_);
        DARABONBA_PTR_FROM_JSON(5xxPv, code5xxPv_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
      };
      ResponseCodes() = default ;
      ResponseCodes(const ResponseCodes &) = default ;
      ResponseCodes(ResponseCodes &&) = default ;
      ResponseCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseCodes() = default ;
      ResponseCodes& operator=(const ResponseCodes &) = default ;
      ResponseCodes& operator=(ResponseCodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code302Pv_ == nullptr
        && this->code405Pv_ == nullptr && this->code444Pv_ == nullptr && this->code499Pv_ == nullptr && this->code5xxPv_ == nullptr && this->index_ == nullptr; };
      // code302Pv Field Functions 
      bool hasCode302Pv() const { return this->code302Pv_ != nullptr;};
      void deleteCode302Pv() { this->code302Pv_ = nullptr;};
      inline int64_t getCode302Pv() const { DARABONBA_PTR_GET_DEFAULT(code302Pv_, 0L) };
      inline ResponseCodes& setCode302Pv(int64_t code302Pv) { DARABONBA_PTR_SET_VALUE(code302Pv_, code302Pv) };


      // code405Pv Field Functions 
      bool hasCode405Pv() const { return this->code405Pv_ != nullptr;};
      void deleteCode405Pv() { this->code405Pv_ = nullptr;};
      inline int64_t getCode405Pv() const { DARABONBA_PTR_GET_DEFAULT(code405Pv_, 0L) };
      inline ResponseCodes& setCode405Pv(int64_t code405Pv) { DARABONBA_PTR_SET_VALUE(code405Pv_, code405Pv) };


      // code444Pv Field Functions 
      bool hasCode444Pv() const { return this->code444Pv_ != nullptr;};
      void deleteCode444Pv() { this->code444Pv_ = nullptr;};
      inline int64_t getCode444Pv() const { DARABONBA_PTR_GET_DEFAULT(code444Pv_, 0L) };
      inline ResponseCodes& setCode444Pv(int64_t code444Pv) { DARABONBA_PTR_SET_VALUE(code444Pv_, code444Pv) };


      // code499Pv Field Functions 
      bool hasCode499Pv() const { return this->code499Pv_ != nullptr;};
      void deleteCode499Pv() { this->code499Pv_ = nullptr;};
      inline int64_t getCode499Pv() const { DARABONBA_PTR_GET_DEFAULT(code499Pv_, 0L) };
      inline ResponseCodes& setCode499Pv(int64_t code499Pv) { DARABONBA_PTR_SET_VALUE(code499Pv_, code499Pv) };


      // code5xxPv Field Functions 
      bool hasCode5xxPv() const { return this->code5xxPv_ != nullptr;};
      void deleteCode5xxPv() { this->code5xxPv_ = nullptr;};
      inline int64_t getCode5xxPv() const { DARABONBA_PTR_GET_DEFAULT(code5xxPv_, 0L) };
      inline ResponseCodes& setCode5xxPv(int64_t code5xxPv) { DARABONBA_PTR_SET_VALUE(code5xxPv_, code5xxPv) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline ResponseCodes& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    protected:
      // The number of 302 error codes that are returned.
      shared_ptr<int64_t> code302Pv_ {};
      // The number of 405 error codes that are returned.
      shared_ptr<int64_t> code405Pv_ {};
      // The number of 444 error codes that are returned.
      shared_ptr<int64_t> code444Pv_ {};
      // The number of 499 error codes that are returned.
      shared_ptr<int64_t> code499Pv_ {};
      // The number of 5xx error codes that are returned.
      shared_ptr<int64_t> code5xxPv_ {};
      // The serial number of the time interval. The serial numbers are arranged in chronological order.
      shared_ptr<int64_t> index_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->responseCodes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResponseCodeTrendGraphResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseCodes Field Functions 
    bool hasResponseCodes() const { return this->responseCodes_ != nullptr;};
    void deleteResponseCodes() { this->responseCodes_ = nullptr;};
    inline const vector<DescribeResponseCodeTrendGraphResponseBody::ResponseCodes> & getResponseCodes() const { DARABONBA_PTR_GET_CONST(responseCodes_, vector<DescribeResponseCodeTrendGraphResponseBody::ResponseCodes>) };
    inline vector<DescribeResponseCodeTrendGraphResponseBody::ResponseCodes> getResponseCodes() { DARABONBA_PTR_GET(responseCodes_, vector<DescribeResponseCodeTrendGraphResponseBody::ResponseCodes>) };
    inline DescribeResponseCodeTrendGraphResponseBody& setResponseCodes(const vector<DescribeResponseCodeTrendGraphResponseBody::ResponseCodes> & responseCodes) { DARABONBA_PTR_SET_VALUE(responseCodes_, responseCodes) };
    inline DescribeResponseCodeTrendGraphResponseBody& setResponseCodes(vector<DescribeResponseCodeTrendGraphResponseBody::ResponseCodes> && responseCodes) { DARABONBA_PTR_SET_RVALUE(responseCodes_, responseCodes) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the statistics of the error codes.
    shared_ptr<vector<DescribeResponseCodeTrendGraphResponseBody::ResponseCodes>> responseCodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
