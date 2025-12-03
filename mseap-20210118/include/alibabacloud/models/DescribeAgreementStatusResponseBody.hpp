// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGREEMENTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGREEMENTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class DescribeAgreementStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgreementStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgreementCode, agreementCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgreementStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgreementCode, agreementCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeAgreementStatusResponseBody() = default ;
    DescribeAgreementStatusResponseBody(const DescribeAgreementStatusResponseBody &) = default ;
    DescribeAgreementStatusResponseBody(DescribeAgreementStatusResponseBody &&) = default ;
    DescribeAgreementStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgreementStatusResponseBody() = default ;
    DescribeAgreementStatusResponseBody& operator=(const DescribeAgreementStatusResponseBody &) = default ;
    DescribeAgreementStatusResponseBody& operator=(DescribeAgreementStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agreementCode_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->userId_ == nullptr; };
    // agreementCode Field Functions 
    bool hasAgreementCode() const { return this->agreementCode_ != nullptr;};
    void deleteAgreementCode() { this->agreementCode_ = nullptr;};
    inline string agreementCode() const { DARABONBA_PTR_GET_DEFAULT(agreementCode_, "") };
    inline DescribeAgreementStatusResponseBody& setAgreementCode(string agreementCode) { DARABONBA_PTR_SET_VALUE(agreementCode_, agreementCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgreementStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeAgreementStatusResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeAgreementStatusResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> agreementCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
