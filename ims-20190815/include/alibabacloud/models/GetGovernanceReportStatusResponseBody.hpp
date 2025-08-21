// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEREPORTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEREPORTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGovernanceReportStatusResponseBodyGovernanceItemsStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceReportStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceReportStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GovernanceItemsStatus, governanceItemsStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WholeReportStatus, wholeReportStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceReportStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GovernanceItemsStatus, governanceItemsStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WholeReportStatus, wholeReportStatus_);
    };
    GetGovernanceReportStatusResponseBody() = default ;
    GetGovernanceReportStatusResponseBody(const GetGovernanceReportStatusResponseBody &) = default ;
    GetGovernanceReportStatusResponseBody(GetGovernanceReportStatusResponseBody &&) = default ;
    GetGovernanceReportStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceReportStatusResponseBody() = default ;
    GetGovernanceReportStatusResponseBody& operator=(const GetGovernanceReportStatusResponseBody &) = default ;
    GetGovernanceReportStatusResponseBody& operator=(GetGovernanceReportStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->governanceItemsStatus_ != nullptr
        && this->requestId_ != nullptr && this->wholeReportStatus_ != nullptr; };
    // governanceItemsStatus Field Functions 
    bool hasGovernanceItemsStatus() const { return this->governanceItemsStatus_ != nullptr;};
    void deleteGovernanceItemsStatus() { this->governanceItemsStatus_ = nullptr;};
    inline const GetGovernanceReportStatusResponseBodyGovernanceItemsStatus & governanceItemsStatus() const { DARABONBA_PTR_GET_CONST(governanceItemsStatus_, GetGovernanceReportStatusResponseBodyGovernanceItemsStatus) };
    inline GetGovernanceReportStatusResponseBodyGovernanceItemsStatus governanceItemsStatus() { DARABONBA_PTR_GET(governanceItemsStatus_, GetGovernanceReportStatusResponseBodyGovernanceItemsStatus) };
    inline GetGovernanceReportStatusResponseBody& setGovernanceItemsStatus(const GetGovernanceReportStatusResponseBodyGovernanceItemsStatus & governanceItemsStatus) { DARABONBA_PTR_SET_VALUE(governanceItemsStatus_, governanceItemsStatus) };
    inline GetGovernanceReportStatusResponseBody& setGovernanceItemsStatus(GetGovernanceReportStatusResponseBodyGovernanceItemsStatus && governanceItemsStatus) { DARABONBA_PTR_SET_RVALUE(governanceItemsStatus_, governanceItemsStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGovernanceReportStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // wholeReportStatus Field Functions 
    bool hasWholeReportStatus() const { return this->wholeReportStatus_ != nullptr;};
    void deleteWholeReportStatus() { this->wholeReportStatus_ = nullptr;};
    inline string wholeReportStatus() const { DARABONBA_PTR_GET_DEFAULT(wholeReportStatus_, "") };
    inline GetGovernanceReportStatusResponseBody& setWholeReportStatus(string wholeReportStatus) { DARABONBA_PTR_SET_VALUE(wholeReportStatus_, wholeReportStatus) };


  protected:
    std::shared_ptr<GetGovernanceReportStatusResponseBodyGovernanceItemsStatus> governanceItemsStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> wholeReportStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
