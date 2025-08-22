// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERDCDNIPASTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERDCDNIPASTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeUserDcdnIpaStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserDcdnIpaStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(InDebt, inDebt_);
      DARABONBA_PTR_TO_JSON(InDebtOverdue, inDebtOverdue_);
      DARABONBA_PTR_TO_JSON(OnService, onService_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserDcdnIpaStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(InDebt, inDebt_);
      DARABONBA_PTR_FROM_JSON(InDebtOverdue, inDebtOverdue_);
      DARABONBA_PTR_FROM_JSON(OnService, onService_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserDcdnIpaStatusResponseBody() = default ;
    DescribeUserDcdnIpaStatusResponseBody(const DescribeUserDcdnIpaStatusResponseBody &) = default ;
    DescribeUserDcdnIpaStatusResponseBody(DescribeUserDcdnIpaStatusResponseBody &&) = default ;
    DescribeUserDcdnIpaStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserDcdnIpaStatusResponseBody() = default ;
    DescribeUserDcdnIpaStatusResponseBody& operator=(const DescribeUserDcdnIpaStatusResponseBody &) = default ;
    DescribeUserDcdnIpaStatusResponseBody& operator=(DescribeUserDcdnIpaStatusResponseBody &&) = default ;
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
    inline DescribeUserDcdnIpaStatusResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // inDebt Field Functions 
    bool hasInDebt() const { return this->inDebt_ != nullptr;};
    void deleteInDebt() { this->inDebt_ = nullptr;};
    inline bool inDebt() const { DARABONBA_PTR_GET_DEFAULT(inDebt_, false) };
    inline DescribeUserDcdnIpaStatusResponseBody& setInDebt(bool inDebt) { DARABONBA_PTR_SET_VALUE(inDebt_, inDebt) };


    // inDebtOverdue Field Functions 
    bool hasInDebtOverdue() const { return this->inDebtOverdue_ != nullptr;};
    void deleteInDebtOverdue() { this->inDebtOverdue_ = nullptr;};
    inline bool inDebtOverdue() const { DARABONBA_PTR_GET_DEFAULT(inDebtOverdue_, false) };
    inline DescribeUserDcdnIpaStatusResponseBody& setInDebtOverdue(bool inDebtOverdue) { DARABONBA_PTR_SET_VALUE(inDebtOverdue_, inDebtOverdue) };


    // onService Field Functions 
    bool hasOnService() const { return this->onService_ != nullptr;};
    void deleteOnService() { this->onService_ = nullptr;};
    inline bool onService() const { DARABONBA_PTR_GET_DEFAULT(onService_, false) };
    inline DescribeUserDcdnIpaStatusResponseBody& setOnService(bool onService) { DARABONBA_PTR_SET_VALUE(onService_, onService) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserDcdnIpaStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the IPA service is activated.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Indicates whether you have overdue payments.
    std::shared_ptr<bool> inDebt_ = nullptr;
    // Indicates whether the grace period for your overdue payments expired.
    std::shared_ptr<bool> inDebtOverdue_ = nullptr;
    // Indicates whether the IPA service is available. The IPA service is available when no payment is overdue.
    std::shared_ptr<bool> onService_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
