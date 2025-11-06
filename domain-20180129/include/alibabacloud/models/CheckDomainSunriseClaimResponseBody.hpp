// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDOMAINSUNRISECLAIMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDOMAINSUNRISECLAIMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckDomainSunriseClaimResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDomainSunriseClaimResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClaimKey, claimKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDomainSunriseClaimResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClaimKey, claimKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CheckDomainSunriseClaimResponseBody() = default ;
    CheckDomainSunriseClaimResponseBody(const CheckDomainSunriseClaimResponseBody &) = default ;
    CheckDomainSunriseClaimResponseBody(CheckDomainSunriseClaimResponseBody &&) = default ;
    CheckDomainSunriseClaimResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDomainSunriseClaimResponseBody() = default ;
    CheckDomainSunriseClaimResponseBody& operator=(const CheckDomainSunriseClaimResponseBody &) = default ;
    CheckDomainSunriseClaimResponseBody& operator=(CheckDomainSunriseClaimResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->claimKey_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr; };
    // claimKey Field Functions 
    bool hasClaimKey() const { return this->claimKey_ != nullptr;};
    void deleteClaimKey() { this->claimKey_ = nullptr;};
    inline string claimKey() const { DARABONBA_PTR_GET_DEFAULT(claimKey_, "") };
    inline CheckDomainSunriseClaimResponseBody& setClaimKey(string claimKey) { DARABONBA_PTR_SET_VALUE(claimKey_, claimKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDomainSunriseClaimResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline CheckDomainSunriseClaimResponseBody& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> claimKey_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
