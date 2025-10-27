// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHoneyPotAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHoneyPotAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HoneyPotAuthCount, honeyPotAuthCount_);
      DARABONBA_PTR_TO_JSON(HoneyPotCount, honeyPotCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHoneyPotAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneyPotAuthCount, honeyPotAuthCount_);
      DARABONBA_PTR_FROM_JSON(HoneyPotCount, honeyPotCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHoneyPotAuthResponseBody() = default ;
    DescribeHoneyPotAuthResponseBody(const DescribeHoneyPotAuthResponseBody &) = default ;
    DescribeHoneyPotAuthResponseBody(DescribeHoneyPotAuthResponseBody &&) = default ;
    DescribeHoneyPotAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHoneyPotAuthResponseBody() = default ;
    DescribeHoneyPotAuthResponseBody& operator=(const DescribeHoneyPotAuthResponseBody &) = default ;
    DescribeHoneyPotAuthResponseBody& operator=(DescribeHoneyPotAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeyPotAuthCount_ == nullptr
        && return this->honeyPotCount_ == nullptr && return this->requestId_ == nullptr; };
    // honeyPotAuthCount Field Functions 
    bool hasHoneyPotAuthCount() const { return this->honeyPotAuthCount_ != nullptr;};
    void deleteHoneyPotAuthCount() { this->honeyPotAuthCount_ = nullptr;};
    inline int64_t honeyPotAuthCount() const { DARABONBA_PTR_GET_DEFAULT(honeyPotAuthCount_, 0L) };
    inline DescribeHoneyPotAuthResponseBody& setHoneyPotAuthCount(int64_t honeyPotAuthCount) { DARABONBA_PTR_SET_VALUE(honeyPotAuthCount_, honeyPotAuthCount) };


    // honeyPotCount Field Functions 
    bool hasHoneyPotCount() const { return this->honeyPotCount_ != nullptr;};
    void deleteHoneyPotCount() { this->honeyPotCount_ = nullptr;};
    inline int32_t honeyPotCount() const { DARABONBA_PTR_GET_DEFAULT(honeyPotCount_, 0) };
    inline DescribeHoneyPotAuthResponseBody& setHoneyPotCount(int32_t honeyPotCount) { DARABONBA_PTR_SET_VALUE(honeyPotCount_, honeyPotCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHoneyPotAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total quota.
    std::shared_ptr<int64_t> honeyPotAuthCount_ = nullptr;
    // The quota that is consumed.
    std::shared_ptr<int32_t> honeyPotCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
