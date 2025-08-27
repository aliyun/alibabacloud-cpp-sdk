// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsureOrderDetailResponseBodyModuleApplicant.hpp>
#include <vector>
#include <alibabacloud/models/InsureOrderDetailResponseBodyModuleInsureOrderDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_TO_JSON(insure_order_detail_list, insureOrderDetailList_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_FROM_JSON(insure_order_detail_list, insureOrderDetailList_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    InsureOrderDetailResponseBodyModule() = default ;
    InsureOrderDetailResponseBodyModule(const InsureOrderDetailResponseBodyModule &) = default ;
    InsureOrderDetailResponseBodyModule(InsureOrderDetailResponseBodyModule &&) = default ;
    InsureOrderDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderDetailResponseBodyModule() = default ;
    InsureOrderDetailResponseBodyModule& operator=(const InsureOrderDetailResponseBodyModule &) = default ;
    InsureOrderDetailResponseBodyModule& operator=(InsureOrderDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicant_ != nullptr
        && this->insOrderId_ != nullptr && this->insureOrderDetailList_ != nullptr && this->status_ != nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline const Models::InsureOrderDetailResponseBodyModuleApplicant & applicant() const { DARABONBA_PTR_GET_CONST(applicant_, Models::InsureOrderDetailResponseBodyModuleApplicant) };
    inline Models::InsureOrderDetailResponseBodyModuleApplicant applicant() { DARABONBA_PTR_GET(applicant_, Models::InsureOrderDetailResponseBodyModuleApplicant) };
    inline InsureOrderDetailResponseBodyModule& setApplicant(const Models::InsureOrderDetailResponseBodyModuleApplicant & applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };
    inline InsureOrderDetailResponseBodyModule& setApplicant(Models::InsureOrderDetailResponseBodyModuleApplicant && applicant) { DARABONBA_PTR_SET_RVALUE(applicant_, applicant) };


    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline InsureOrderDetailResponseBodyModule& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // insureOrderDetailList Field Functions 
    bool hasInsureOrderDetailList() const { return this->insureOrderDetailList_ != nullptr;};
    void deleteInsureOrderDetailList() { this->insureOrderDetailList_ = nullptr;};
    inline const vector<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailList> & insureOrderDetailList() const { DARABONBA_PTR_GET_CONST(insureOrderDetailList_, vector<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailList>) };
    inline vector<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailList> insureOrderDetailList() { DARABONBA_PTR_GET(insureOrderDetailList_, vector<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailList>) };
    inline InsureOrderDetailResponseBodyModule& setInsureOrderDetailList(const vector<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailList> & insureOrderDetailList) { DARABONBA_PTR_SET_VALUE(insureOrderDetailList_, insureOrderDetailList) };
    inline InsureOrderDetailResponseBodyModule& setInsureOrderDetailList(vector<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailList> && insureOrderDetailList) { DARABONBA_PTR_SET_RVALUE(insureOrderDetailList_, insureOrderDetailList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InsureOrderDetailResponseBodyModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::InsureOrderDetailResponseBodyModuleApplicant> applicant_ = nullptr;
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<vector<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailList>> insureOrderDetailList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
