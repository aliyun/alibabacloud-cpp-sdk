// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCDNSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCDNSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserCdnStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserCdnStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(InDebt, inDebt_);
      DARABONBA_PTR_TO_JSON(InDebtOverdue, inDebtOverdue_);
      DARABONBA_PTR_TO_JSON(OnService, onService_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserCdnStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(InDebt, inDebt_);
      DARABONBA_PTR_FROM_JSON(InDebtOverdue, inDebtOverdue_);
      DARABONBA_PTR_FROM_JSON(OnService, onService_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserCdnStatusResponseBody() = default ;
    DescribeUserCdnStatusResponseBody(const DescribeUserCdnStatusResponseBody &) = default ;
    DescribeUserCdnStatusResponseBody(DescribeUserCdnStatusResponseBody &&) = default ;
    DescribeUserCdnStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserCdnStatusResponseBody() = default ;
    DescribeUserCdnStatusResponseBody& operator=(const DescribeUserCdnStatusResponseBody &) = default ;
    DescribeUserCdnStatusResponseBody& operator=(DescribeUserCdnStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->inDebt_ != nullptr && this->inDebtOverdue_ != nullptr && this->onService_ != nullptr && this->requestId_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeUserCdnStatusResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // inDebt Field Functions 
    bool hasInDebt() const { return this->inDebt_ != nullptr;};
    void deleteInDebt() { this->inDebt_ = nullptr;};
    inline bool inDebt() const { DARABONBA_PTR_GET_DEFAULT(inDebt_, false) };
    inline DescribeUserCdnStatusResponseBody& setInDebt(bool inDebt) { DARABONBA_PTR_SET_VALUE(inDebt_, inDebt) };


    // inDebtOverdue Field Functions 
    bool hasInDebtOverdue() const { return this->inDebtOverdue_ != nullptr;};
    void deleteInDebtOverdue() { this->inDebtOverdue_ = nullptr;};
    inline bool inDebtOverdue() const { DARABONBA_PTR_GET_DEFAULT(inDebtOverdue_, false) };
    inline DescribeUserCdnStatusResponseBody& setInDebtOverdue(bool inDebtOverdue) { DARABONBA_PTR_SET_VALUE(inDebtOverdue_, inDebtOverdue) };


    // onService Field Functions 
    bool hasOnService() const { return this->onService_ != nullptr;};
    void deleteOnService() { this->onService_ = nullptr;};
    inline bool onService() const { DARABONBA_PTR_GET_DEFAULT(onService_, false) };
    inline DescribeUserCdnStatusResponseBody& setOnService(bool onService) { DARABONBA_PTR_SET_VALUE(onService_, onService) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserCdnStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whetherAlibaba Cloud CDN is activated.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Indicates whether your account has overdue payments.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> inDebt_ = nullptr;
    // Indicates whether the grace period for your overdue payments expired.
    std::shared_ptr<bool> inDebtOverdue_ = nullptr;
    // Indicates whether the service is available.
    std::shared_ptr<bool> onService_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
