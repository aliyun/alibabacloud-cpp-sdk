// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEUSERAFFILIATELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEUSERAFFILIATELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListCostCenter.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListInvoice.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& obj) { 
      DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
      DARABONBA_PTR_TO_JSON(department, department_);
      DARABONBA_PTR_TO_JSON(invoice, invoice_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& obj) { 
      DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
      DARABONBA_PTR_FROM_JSON(department, department_);
      DARABONBA_PTR_FROM_JSON(invoice, invoice_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList(const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList(FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& operator=(const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& operator=(FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenter_ != nullptr
        && this->department_ != nullptr && this->invoice_ != nullptr && this->project_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // costCenter Field Functions 
    bool hasCostCenter() const { return this->costCenter_ != nullptr;};
    void deleteCostCenter() { this->costCenter_ = nullptr;};
    inline const Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListCostCenter & costCenter() const { DARABONBA_PTR_GET_CONST(costCenter_, Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListCostCenter) };
    inline Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListCostCenter costCenter() { DARABONBA_PTR_GET(costCenter_, Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListCostCenter) };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setCostCenter(const Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListCostCenter & costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setCostCenter(Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListCostCenter && costCenter) { DARABONBA_PTR_SET_RVALUE(costCenter_, costCenter) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline const Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment & department() const { DARABONBA_PTR_GET_CONST(department_, Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment) };
    inline Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment department() { DARABONBA_PTR_GET(department_, Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment) };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setDepartment(const Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setDepartment(Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


    // invoice Field Functions 
    bool hasInvoice() const { return this->invoice_ != nullptr;};
    void deleteInvoice() { this->invoice_ = nullptr;};
    inline const Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListInvoice & invoice() const { DARABONBA_PTR_GET_CONST(invoice_, Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListInvoice) };
    inline Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListInvoice invoice() { DARABONBA_PTR_GET(invoice_, Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListInvoice) };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setInvoice(const Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListInvoice & invoice) { DARABONBA_PTR_SET_VALUE(invoice_, invoice) };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setInvoice(Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListInvoice && invoice) { DARABONBA_PTR_SET_RVALUE(invoice_, invoice) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject & project() const { DARABONBA_PTR_GET_CONST(project_, Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject) };
    inline Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject project() { DARABONBA_PTR_GET(project_, Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject) };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setProject(const Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setProject(Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListCostCenter> costCenter_ = nullptr;
    std::shared_ptr<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment> department_ = nullptr;
    std::shared_ptr<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListInvoice> invoice_ = nullptr;
    std::shared_ptr<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject> project_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
