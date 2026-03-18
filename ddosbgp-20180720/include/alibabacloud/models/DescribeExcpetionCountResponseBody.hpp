// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXCPETIONCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXCPETIONCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeExcpetionCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExcpetionCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionIpCount, exceptionIpCount_);
      DARABONBA_PTR_TO_JSON(ExpireTimeCount, expireTimeCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExcpetionCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionIpCount, exceptionIpCount_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeCount, expireTimeCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExcpetionCountResponseBody() = default ;
    DescribeExcpetionCountResponseBody(const DescribeExcpetionCountResponseBody &) = default ;
    DescribeExcpetionCountResponseBody(DescribeExcpetionCountResponseBody &&) = default ;
    DescribeExcpetionCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExcpetionCountResponseBody() = default ;
    DescribeExcpetionCountResponseBody& operator=(const DescribeExcpetionCountResponseBody &) = default ;
    DescribeExcpetionCountResponseBody& operator=(DescribeExcpetionCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionIpCount_ == nullptr
        && this->expireTimeCount_ == nullptr && this->requestId_ == nullptr; };
    // exceptionIpCount Field Functions 
    bool hasExceptionIpCount() const { return this->exceptionIpCount_ != nullptr;};
    void deleteExceptionIpCount() { this->exceptionIpCount_ = nullptr;};
    inline int32_t getExceptionIpCount() const { DARABONBA_PTR_GET_DEFAULT(exceptionIpCount_, 0) };
    inline DescribeExcpetionCountResponseBody& setExceptionIpCount(int32_t exceptionIpCount) { DARABONBA_PTR_SET_VALUE(exceptionIpCount_, exceptionIpCount) };


    // expireTimeCount Field Functions 
    bool hasExpireTimeCount() const { return this->expireTimeCount_ != nullptr;};
    void deleteExpireTimeCount() { this->expireTimeCount_ = nullptr;};
    inline int32_t getExpireTimeCount() const { DARABONBA_PTR_GET_DEFAULT(expireTimeCount_, 0) };
    inline DescribeExcpetionCountResponseBody& setExpireTimeCount(int32_t expireTimeCount) { DARABONBA_PTR_SET_VALUE(expireTimeCount_, expireTimeCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExcpetionCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of assets that are in an abnormal state.
    shared_ptr<int32_t> exceptionIpCount_ {};
    // The number of Anti-DDoS Origin instances that are about to expire.
    shared_ptr<int32_t> expireTimeCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
