// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERLOGSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERLOGSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeUserLogserviceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserLogserviceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(InDebt, inDebt_);
      DARABONBA_PTR_TO_JSON(InDebtOverdue, inDebtOverdue_);
      DARABONBA_PTR_TO_JSON(OnService, onService_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserLogserviceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(InDebt, inDebt_);
      DARABONBA_PTR_FROM_JSON(InDebtOverdue, inDebtOverdue_);
      DARABONBA_PTR_FROM_JSON(OnService, onService_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserLogserviceStatusResponseBody() = default ;
    DescribeUserLogserviceStatusResponseBody(const DescribeUserLogserviceStatusResponseBody &) = default ;
    DescribeUserLogserviceStatusResponseBody(DescribeUserLogserviceStatusResponseBody &&) = default ;
    DescribeUserLogserviceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserLogserviceStatusResponseBody() = default ;
    DescribeUserLogserviceStatusResponseBody& operator=(const DescribeUserLogserviceStatusResponseBody &) = default ;
    DescribeUserLogserviceStatusResponseBody& operator=(DescribeUserLogserviceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->inDebt_ == nullptr && this->inDebtOverdue_ == nullptr && this->onService_ == nullptr && this->requestId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeUserLogserviceStatusResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // inDebt Field Functions 
    bool hasInDebt() const { return this->inDebt_ != nullptr;};
    void deleteInDebt() { this->inDebt_ = nullptr;};
    inline bool getInDebt() const { DARABONBA_PTR_GET_DEFAULT(inDebt_, false) };
    inline DescribeUserLogserviceStatusResponseBody& setInDebt(bool inDebt) { DARABONBA_PTR_SET_VALUE(inDebt_, inDebt) };


    // inDebtOverdue Field Functions 
    bool hasInDebtOverdue() const { return this->inDebtOverdue_ != nullptr;};
    void deleteInDebtOverdue() { this->inDebtOverdue_ = nullptr;};
    inline bool getInDebtOverdue() const { DARABONBA_PTR_GET_DEFAULT(inDebtOverdue_, false) };
    inline DescribeUserLogserviceStatusResponseBody& setInDebtOverdue(bool inDebtOverdue) { DARABONBA_PTR_SET_VALUE(inDebtOverdue_, inDebtOverdue) };


    // onService Field Functions 
    bool hasOnService() const { return this->onService_ != nullptr;};
    void deleteOnService() { this->onService_ = nullptr;};
    inline bool getOnService() const { DARABONBA_PTR_GET_DEFAULT(onService_, false) };
    inline DescribeUserLogserviceStatusResponseBody& setOnService(bool onService) { DARABONBA_PTR_SET_VALUE(onService_, onService) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserLogserviceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether Log Service is activated.
    // 
    // *   true
    // *   false
    shared_ptr<bool> enabled_ {};
    // Indicates whether your Log Service has overdue payments.
    // 
    // *   true
    // *   false
    shared_ptr<bool> inDebt_ {};
    // Indicates whether an overdue payment of your Log Service has passed the grace period.
    // 
    // *   true
    // *   false
    shared_ptr<bool> inDebtOverdue_ {};
    // Indicates whether Log Service is available.
    // 
    // *   true
    // *   false
    shared_ptr<bool> onService_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
