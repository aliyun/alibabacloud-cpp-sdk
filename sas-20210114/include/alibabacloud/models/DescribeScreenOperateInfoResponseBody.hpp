// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENOPERATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENOPERATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenOperateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenOperateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DateArray, dateArray_);
      DARABONBA_PTR_TO_JSON(HealthCheckDealedCount, healthCheckDealedCount_);
      DARABONBA_PTR_TO_JSON(HealthCheckValueArray, healthCheckValueArray_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventDealedCount, securityEventDealedCount_);
      DARABONBA_PTR_TO_JSON(SuspEventValueArray, suspEventValueArray_);
      DARABONBA_PTR_TO_JSON(VulValueArray, vulValueArray_);
      DARABONBA_PTR_TO_JSON(VulnerabilityDealedCount, vulnerabilityDealedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenOperateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DateArray, dateArray_);
      DARABONBA_PTR_FROM_JSON(HealthCheckDealedCount, healthCheckDealedCount_);
      DARABONBA_PTR_FROM_JSON(HealthCheckValueArray, healthCheckValueArray_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventDealedCount, securityEventDealedCount_);
      DARABONBA_PTR_FROM_JSON(SuspEventValueArray, suspEventValueArray_);
      DARABONBA_PTR_FROM_JSON(VulValueArray, vulValueArray_);
      DARABONBA_PTR_FROM_JSON(VulnerabilityDealedCount, vulnerabilityDealedCount_);
    };
    DescribeScreenOperateInfoResponseBody() = default ;
    DescribeScreenOperateInfoResponseBody(const DescribeScreenOperateInfoResponseBody &) = default ;
    DescribeScreenOperateInfoResponseBody(DescribeScreenOperateInfoResponseBody &&) = default ;
    DescribeScreenOperateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenOperateInfoResponseBody() = default ;
    DescribeScreenOperateInfoResponseBody& operator=(const DescribeScreenOperateInfoResponseBody &) = default ;
    DescribeScreenOperateInfoResponseBody& operator=(DescribeScreenOperateInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateArray_ == nullptr
        && return this->healthCheckDealedCount_ == nullptr && return this->healthCheckValueArray_ == nullptr && return this->requestId_ == nullptr && return this->securityEventDealedCount_ == nullptr && return this->suspEventValueArray_ == nullptr
        && return this->vulValueArray_ == nullptr && return this->vulnerabilityDealedCount_ == nullptr; };
    // dateArray Field Functions 
    bool hasDateArray() const { return this->dateArray_ != nullptr;};
    void deleteDateArray() { this->dateArray_ = nullptr;};
    inline const vector<string> & dateArray() const { DARABONBA_PTR_GET_CONST(dateArray_, vector<string>) };
    inline vector<string> dateArray() { DARABONBA_PTR_GET(dateArray_, vector<string>) };
    inline DescribeScreenOperateInfoResponseBody& setDateArray(const vector<string> & dateArray) { DARABONBA_PTR_SET_VALUE(dateArray_, dateArray) };
    inline DescribeScreenOperateInfoResponseBody& setDateArray(vector<string> && dateArray) { DARABONBA_PTR_SET_RVALUE(dateArray_, dateArray) };


    // healthCheckDealedCount Field Functions 
    bool hasHealthCheckDealedCount() const { return this->healthCheckDealedCount_ != nullptr;};
    void deleteHealthCheckDealedCount() { this->healthCheckDealedCount_ = nullptr;};
    inline int32_t healthCheckDealedCount() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDealedCount_, 0) };
    inline DescribeScreenOperateInfoResponseBody& setHealthCheckDealedCount(int32_t healthCheckDealedCount) { DARABONBA_PTR_SET_VALUE(healthCheckDealedCount_, healthCheckDealedCount) };


    // healthCheckValueArray Field Functions 
    bool hasHealthCheckValueArray() const { return this->healthCheckValueArray_ != nullptr;};
    void deleteHealthCheckValueArray() { this->healthCheckValueArray_ = nullptr;};
    inline const vector<string> & healthCheckValueArray() const { DARABONBA_PTR_GET_CONST(healthCheckValueArray_, vector<string>) };
    inline vector<string> healthCheckValueArray() { DARABONBA_PTR_GET(healthCheckValueArray_, vector<string>) };
    inline DescribeScreenOperateInfoResponseBody& setHealthCheckValueArray(const vector<string> & healthCheckValueArray) { DARABONBA_PTR_SET_VALUE(healthCheckValueArray_, healthCheckValueArray) };
    inline DescribeScreenOperateInfoResponseBody& setHealthCheckValueArray(vector<string> && healthCheckValueArray) { DARABONBA_PTR_SET_RVALUE(healthCheckValueArray_, healthCheckValueArray) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenOperateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventDealedCount Field Functions 
    bool hasSecurityEventDealedCount() const { return this->securityEventDealedCount_ != nullptr;};
    void deleteSecurityEventDealedCount() { this->securityEventDealedCount_ = nullptr;};
    inline int32_t securityEventDealedCount() const { DARABONBA_PTR_GET_DEFAULT(securityEventDealedCount_, 0) };
    inline DescribeScreenOperateInfoResponseBody& setSecurityEventDealedCount(int32_t securityEventDealedCount) { DARABONBA_PTR_SET_VALUE(securityEventDealedCount_, securityEventDealedCount) };


    // suspEventValueArray Field Functions 
    bool hasSuspEventValueArray() const { return this->suspEventValueArray_ != nullptr;};
    void deleteSuspEventValueArray() { this->suspEventValueArray_ = nullptr;};
    inline const vector<string> & suspEventValueArray() const { DARABONBA_PTR_GET_CONST(suspEventValueArray_, vector<string>) };
    inline vector<string> suspEventValueArray() { DARABONBA_PTR_GET(suspEventValueArray_, vector<string>) };
    inline DescribeScreenOperateInfoResponseBody& setSuspEventValueArray(const vector<string> & suspEventValueArray) { DARABONBA_PTR_SET_VALUE(suspEventValueArray_, suspEventValueArray) };
    inline DescribeScreenOperateInfoResponseBody& setSuspEventValueArray(vector<string> && suspEventValueArray) { DARABONBA_PTR_SET_RVALUE(suspEventValueArray_, suspEventValueArray) };


    // vulValueArray Field Functions 
    bool hasVulValueArray() const { return this->vulValueArray_ != nullptr;};
    void deleteVulValueArray() { this->vulValueArray_ = nullptr;};
    inline const vector<string> & vulValueArray() const { DARABONBA_PTR_GET_CONST(vulValueArray_, vector<string>) };
    inline vector<string> vulValueArray() { DARABONBA_PTR_GET(vulValueArray_, vector<string>) };
    inline DescribeScreenOperateInfoResponseBody& setVulValueArray(const vector<string> & vulValueArray) { DARABONBA_PTR_SET_VALUE(vulValueArray_, vulValueArray) };
    inline DescribeScreenOperateInfoResponseBody& setVulValueArray(vector<string> && vulValueArray) { DARABONBA_PTR_SET_RVALUE(vulValueArray_, vulValueArray) };


    // vulnerabilityDealedCount Field Functions 
    bool hasVulnerabilityDealedCount() const { return this->vulnerabilityDealedCount_ != nullptr;};
    void deleteVulnerabilityDealedCount() { this->vulnerabilityDealedCount_ = nullptr;};
    inline int32_t vulnerabilityDealedCount() const { DARABONBA_PTR_GET_DEFAULT(vulnerabilityDealedCount_, 0) };
    inline DescribeScreenOperateInfoResponseBody& setVulnerabilityDealedCount(int32_t vulnerabilityDealedCount) { DARABONBA_PTR_SET_VALUE(vulnerabilityDealedCount_, vulnerabilityDealedCount) };


  protected:
    std::shared_ptr<vector<string>> dateArray_ = nullptr;
    std::shared_ptr<int32_t> healthCheckDealedCount_ = nullptr;
    std::shared_ptr<vector<string>> healthCheckValueArray_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> securityEventDealedCount_ = nullptr;
    std::shared_ptr<vector<string>> suspEventValueArray_ = nullptr;
    std::shared_ptr<vector<string>> vulValueArray_ = nullptr;
    std::shared_ptr<int32_t> vulnerabilityDealedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
