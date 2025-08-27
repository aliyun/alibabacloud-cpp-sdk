// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYGETAPPLYRESULTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYGETAPPLYRESULTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ElectronicItineraryGetApplyResultResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryGetApplyResultResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_ticket_list, applyTicketList_);
      DARABONBA_PTR_TO_JSON(batch_apply_no, batchApplyNo_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryGetApplyResultResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_ticket_list, applyTicketList_);
      DARABONBA_PTR_FROM_JSON(batch_apply_no, batchApplyNo_);
    };
    ElectronicItineraryGetApplyResultResponseBodyModule() = default ;
    ElectronicItineraryGetApplyResultResponseBodyModule(const ElectronicItineraryGetApplyResultResponseBodyModule &) = default ;
    ElectronicItineraryGetApplyResultResponseBodyModule(ElectronicItineraryGetApplyResultResponseBodyModule &&) = default ;
    ElectronicItineraryGetApplyResultResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryGetApplyResultResponseBodyModule() = default ;
    ElectronicItineraryGetApplyResultResponseBodyModule& operator=(const ElectronicItineraryGetApplyResultResponseBodyModule &) = default ;
    ElectronicItineraryGetApplyResultResponseBodyModule& operator=(ElectronicItineraryGetApplyResultResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyTicketList_ != nullptr
        && this->batchApplyNo_ != nullptr; };
    // applyTicketList Field Functions 
    bool hasApplyTicketList() const { return this->applyTicketList_ != nullptr;};
    void deleteApplyTicketList() { this->applyTicketList_ = nullptr;};
    inline const vector<Models::ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList> & applyTicketList() const { DARABONBA_PTR_GET_CONST(applyTicketList_, vector<Models::ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList>) };
    inline vector<Models::ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList> applyTicketList() { DARABONBA_PTR_GET(applyTicketList_, vector<Models::ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList>) };
    inline ElectronicItineraryGetApplyResultResponseBodyModule& setApplyTicketList(const vector<Models::ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList> & applyTicketList) { DARABONBA_PTR_SET_VALUE(applyTicketList_, applyTicketList) };
    inline ElectronicItineraryGetApplyResultResponseBodyModule& setApplyTicketList(vector<Models::ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList> && applyTicketList) { DARABONBA_PTR_SET_RVALUE(applyTicketList_, applyTicketList) };


    // batchApplyNo Field Functions 
    bool hasBatchApplyNo() const { return this->batchApplyNo_ != nullptr;};
    void deleteBatchApplyNo() { this->batchApplyNo_ = nullptr;};
    inline string batchApplyNo() const { DARABONBA_PTR_GET_DEFAULT(batchApplyNo_, "") };
    inline ElectronicItineraryGetApplyResultResponseBodyModule& setBatchApplyNo(string batchApplyNo) { DARABONBA_PTR_SET_VALUE(batchApplyNo_, batchApplyNo) };


  protected:
    std::shared_ptr<vector<Models::ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList>> applyTicketList_ = nullptr;
    std::shared_ptr<string> batchApplyNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
