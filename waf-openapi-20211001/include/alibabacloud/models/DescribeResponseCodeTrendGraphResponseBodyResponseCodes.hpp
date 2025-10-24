// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESPONSECODETRENDGRAPHRESPONSEBODYRESPONSECODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESPONSECODETRENDGRAPHRESPONSEBODYRESPONSECODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResponseCodeTrendGraphResponseBodyResponseCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResponseCodeTrendGraphResponseBodyResponseCodes& obj) { 
      DARABONBA_PTR_TO_JSON(302Pv, code302Pv_);
      DARABONBA_PTR_TO_JSON(405Pv, code405Pv_);
      DARABONBA_PTR_TO_JSON(444Pv, code444Pv_);
      DARABONBA_PTR_TO_JSON(499Pv, code499Pv_);
      DARABONBA_PTR_TO_JSON(5xxPv, code5xxPv_);
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResponseCodeTrendGraphResponseBodyResponseCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(302Pv, code302Pv_);
      DARABONBA_PTR_FROM_JSON(405Pv, code405Pv_);
      DARABONBA_PTR_FROM_JSON(444Pv, code444Pv_);
      DARABONBA_PTR_FROM_JSON(499Pv, code499Pv_);
      DARABONBA_PTR_FROM_JSON(5xxPv, code5xxPv_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    DescribeResponseCodeTrendGraphResponseBodyResponseCodes() = default ;
    DescribeResponseCodeTrendGraphResponseBodyResponseCodes(const DescribeResponseCodeTrendGraphResponseBodyResponseCodes &) = default ;
    DescribeResponseCodeTrendGraphResponseBodyResponseCodes(DescribeResponseCodeTrendGraphResponseBodyResponseCodes &&) = default ;
    DescribeResponseCodeTrendGraphResponseBodyResponseCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResponseCodeTrendGraphResponseBodyResponseCodes() = default ;
    DescribeResponseCodeTrendGraphResponseBodyResponseCodes& operator=(const DescribeResponseCodeTrendGraphResponseBodyResponseCodes &) = default ;
    DescribeResponseCodeTrendGraphResponseBodyResponseCodes& operator=(DescribeResponseCodeTrendGraphResponseBodyResponseCodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code302Pv_ == nullptr
        && return this->code405Pv_ == nullptr && return this->code444Pv_ == nullptr && return this->code499Pv_ == nullptr && return this->code5xxPv_ == nullptr && return this->index_ == nullptr; };
    // code302Pv Field Functions 
    bool hasCode302Pv() const { return this->code302Pv_ != nullptr;};
    void deleteCode302Pv() { this->code302Pv_ = nullptr;};
    inline int64_t code302Pv() const { DARABONBA_PTR_GET_DEFAULT(code302Pv_, 0L) };
    inline DescribeResponseCodeTrendGraphResponseBodyResponseCodes& setCode302Pv(int64_t code302Pv) { DARABONBA_PTR_SET_VALUE(code302Pv_, code302Pv) };


    // code405Pv Field Functions 
    bool hasCode405Pv() const { return this->code405Pv_ != nullptr;};
    void deleteCode405Pv() { this->code405Pv_ = nullptr;};
    inline int64_t code405Pv() const { DARABONBA_PTR_GET_DEFAULT(code405Pv_, 0L) };
    inline DescribeResponseCodeTrendGraphResponseBodyResponseCodes& setCode405Pv(int64_t code405Pv) { DARABONBA_PTR_SET_VALUE(code405Pv_, code405Pv) };


    // code444Pv Field Functions 
    bool hasCode444Pv() const { return this->code444Pv_ != nullptr;};
    void deleteCode444Pv() { this->code444Pv_ = nullptr;};
    inline int64_t code444Pv() const { DARABONBA_PTR_GET_DEFAULT(code444Pv_, 0L) };
    inline DescribeResponseCodeTrendGraphResponseBodyResponseCodes& setCode444Pv(int64_t code444Pv) { DARABONBA_PTR_SET_VALUE(code444Pv_, code444Pv) };


    // code499Pv Field Functions 
    bool hasCode499Pv() const { return this->code499Pv_ != nullptr;};
    void deleteCode499Pv() { this->code499Pv_ = nullptr;};
    inline int64_t code499Pv() const { DARABONBA_PTR_GET_DEFAULT(code499Pv_, 0L) };
    inline DescribeResponseCodeTrendGraphResponseBodyResponseCodes& setCode499Pv(int64_t code499Pv) { DARABONBA_PTR_SET_VALUE(code499Pv_, code499Pv) };


    // code5xxPv Field Functions 
    bool hasCode5xxPv() const { return this->code5xxPv_ != nullptr;};
    void deleteCode5xxPv() { this->code5xxPv_ = nullptr;};
    inline int64_t code5xxPv() const { DARABONBA_PTR_GET_DEFAULT(code5xxPv_, 0L) };
    inline DescribeResponseCodeTrendGraphResponseBodyResponseCodes& setCode5xxPv(int64_t code5xxPv) { DARABONBA_PTR_SET_VALUE(code5xxPv_, code5xxPv) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribeResponseCodeTrendGraphResponseBodyResponseCodes& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    // The number of 302 error codes that are returned.
    std::shared_ptr<int64_t> code302Pv_ = nullptr;
    // The number of 405 error codes that are returned.
    std::shared_ptr<int64_t> code405Pv_ = nullptr;
    // The number of 444 error codes that are returned.
    std::shared_ptr<int64_t> code444Pv_ = nullptr;
    // The number of 499 error codes that are returned.
    std::shared_ptr<int64_t> code499Pv_ = nullptr;
    // The number of 5xx error codes that are returned.
    std::shared_ptr<int64_t> code5xxPv_ = nullptr;
    // The serial number of the time interval. The serial numbers are arranged in chronological order.
    std::shared_ptr<int64_t> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
