// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEREPORTSTATUSRESPONSEBODYGOVERNANCEITEMSSTATUSGOVERNANCEITEMSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEREPORTSTATUSRESPONSEBODYGOVERNANCEITEMSSTATUSGOVERNANCEITEMSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus& obj) { 
      DARABONBA_PTR_TO_JSON(GovernanceItem, governanceItem_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(GovernanceItem, governanceItem_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus() = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus(const GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus &) = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus(GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus &&) = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus() = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus& operator=(const GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus &) = default ;
    GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus& operator=(GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->governanceItem_ != nullptr
        && this->status_ != nullptr; };
    // governanceItem Field Functions 
    bool hasGovernanceItem() const { return this->governanceItem_ != nullptr;};
    void deleteGovernanceItem() { this->governanceItem_ = nullptr;};
    inline string governanceItem() const { DARABONBA_PTR_GET_DEFAULT(governanceItem_, "") };
    inline GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus& setGovernanceItem(string governanceItem) { DARABONBA_PTR_SET_VALUE(governanceItem_, governanceItem) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGovernanceReportStatusResponseBodyGovernanceItemsStatusGovernanceItemStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> governanceItem_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
