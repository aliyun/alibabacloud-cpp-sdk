// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEREPORTSTATUSRESPONSEBODYGOVERNANCEITEMSSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEREPORTSTATUSRESPONSEBODYGOVERNANCEITEMSSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceReportStatusResponseBodyGovernanceItemsStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceReportStatusResponseBodyGovernanceItemsStatus& obj) { 
      DARABONBA_PTR_TO_JSON(GovernanceItemStatus, governanceItemStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceReportStatusResponseBodyGovernanceItemsStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(GovernanceItemStatus, governanceItemStatus_);
    };
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatus() = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatus(const GetGovernanceReportStatusResponseBodyGovernanceItemsStatus &) = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatus(GetGovernanceReportStatusResponseBodyGovernanceItemsStatus &&) = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceReportStatusResponseBodyGovernanceItemsStatus() = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatus& operator=(const GetGovernanceReportStatusResponseBodyGovernanceItemsStatus &) = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatus& operator=(GetGovernanceReportStatusResponseBodyGovernanceItemsStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->governanceItemStatus_ != nullptr; };
    // governanceItemStatus Field Functions 
    bool hasGovernanceItemStatus() const { return this->governanceItemStatus_ != nullptr;};
    void deleteGovernanceItemStatus() { this->governanceItemStatus_ = nullptr;};
    inline const vector<Models::GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus> & governanceItemStatus() const { DARABONBA_PTR_GET_CONST(governanceItemStatus_, vector<Models::GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus>) };
    inline vector<Models::GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus> governanceItemStatus() { DARABONBA_PTR_GET(governanceItemStatus_, vector<Models::GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus>) };
    inline GetGovernanceReportStatusResponseBodyGovernanceItemsStatus& setGovernanceItemStatus(const vector<Models::GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus> & governanceItemStatus) { DARABONBA_PTR_SET_VALUE(governanceItemStatus_, governanceItemStatus) };
    inline GetGovernanceReportStatusResponseBodyGovernanceItemsStatus& setGovernanceItemStatus(vector<Models::GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus> && governanceItemStatus) { DARABONBA_PTR_SET_RVALUE(governanceItemStatus_, governanceItemStatus) };


  protected:
    std::shared_ptr<vector<Models::GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus>> governanceItemStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
