// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCROSSBORDERAPPROVALSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCROSSBORDERAPPROVALSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class QueryCrossBorderApprovalStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCrossBorderApprovalStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCrossBorderApprovalStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryCrossBorderApprovalStatusResponseBody() = default ;
    QueryCrossBorderApprovalStatusResponseBody(const QueryCrossBorderApprovalStatusResponseBody &) = default ;
    QueryCrossBorderApprovalStatusResponseBody(QueryCrossBorderApprovalStatusResponseBody &&) = default ;
    QueryCrossBorderApprovalStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCrossBorderApprovalStatusResponseBody() = default ;
    QueryCrossBorderApprovalStatusResponseBody& operator=(const QueryCrossBorderApprovalStatusResponseBody &) = default ;
    QueryCrossBorderApprovalStatusResponseBody& operator=(QueryCrossBorderApprovalStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline QueryCrossBorderApprovalStatusResponseBody& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCrossBorderApprovalStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Cross border permissions of Alibaba Cloud account (main account).
    // 
    // -  UNAPPLIED : No cross-border permission application has been submitted or application records cannot be found.
    // -  APPLIED : Cross-border permission review in progress.
    // -  REJECTED : Cross-border permission review failed.
    // -  PASSED : Cross-border permission review passed.
    shared_ptr<string> approvalStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
