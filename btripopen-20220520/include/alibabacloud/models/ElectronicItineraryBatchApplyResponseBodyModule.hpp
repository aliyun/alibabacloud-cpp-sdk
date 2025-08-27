// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ElectronicItineraryBatchApplyResponseBodyModuleApplyFailedTicketList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ElectronicItineraryBatchApplyResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryBatchApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_failed_ticket_list, applyFailedTicketList_);
      DARABONBA_PTR_TO_JSON(batch_no, batchNo_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryBatchApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_failed_ticket_list, applyFailedTicketList_);
      DARABONBA_PTR_FROM_JSON(batch_no, batchNo_);
    };
    ElectronicItineraryBatchApplyResponseBodyModule() = default ;
    ElectronicItineraryBatchApplyResponseBodyModule(const ElectronicItineraryBatchApplyResponseBodyModule &) = default ;
    ElectronicItineraryBatchApplyResponseBodyModule(ElectronicItineraryBatchApplyResponseBodyModule &&) = default ;
    ElectronicItineraryBatchApplyResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryBatchApplyResponseBodyModule() = default ;
    ElectronicItineraryBatchApplyResponseBodyModule& operator=(const ElectronicItineraryBatchApplyResponseBodyModule &) = default ;
    ElectronicItineraryBatchApplyResponseBodyModule& operator=(ElectronicItineraryBatchApplyResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyFailedTicketList_ != nullptr
        && this->batchNo_ != nullptr; };
    // applyFailedTicketList Field Functions 
    bool hasApplyFailedTicketList() const { return this->applyFailedTicketList_ != nullptr;};
    void deleteApplyFailedTicketList() { this->applyFailedTicketList_ = nullptr;};
    inline const vector<Models::ElectronicItineraryBatchApplyResponseBodyModuleApplyFailedTicketList> & applyFailedTicketList() const { DARABONBA_PTR_GET_CONST(applyFailedTicketList_, vector<Models::ElectronicItineraryBatchApplyResponseBodyModuleApplyFailedTicketList>) };
    inline vector<Models::ElectronicItineraryBatchApplyResponseBodyModuleApplyFailedTicketList> applyFailedTicketList() { DARABONBA_PTR_GET(applyFailedTicketList_, vector<Models::ElectronicItineraryBatchApplyResponseBodyModuleApplyFailedTicketList>) };
    inline ElectronicItineraryBatchApplyResponseBodyModule& setApplyFailedTicketList(const vector<Models::ElectronicItineraryBatchApplyResponseBodyModuleApplyFailedTicketList> & applyFailedTicketList) { DARABONBA_PTR_SET_VALUE(applyFailedTicketList_, applyFailedTicketList) };
    inline ElectronicItineraryBatchApplyResponseBodyModule& setApplyFailedTicketList(vector<Models::ElectronicItineraryBatchApplyResponseBodyModuleApplyFailedTicketList> && applyFailedTicketList) { DARABONBA_PTR_SET_RVALUE(applyFailedTicketList_, applyFailedTicketList) };


    // batchNo Field Functions 
    bool hasBatchNo() const { return this->batchNo_ != nullptr;};
    void deleteBatchNo() { this->batchNo_ = nullptr;};
    inline string batchNo() const { DARABONBA_PTR_GET_DEFAULT(batchNo_, "") };
    inline ElectronicItineraryBatchApplyResponseBodyModule& setBatchNo(string batchNo) { DARABONBA_PTR_SET_VALUE(batchNo_, batchNo) };


  protected:
    std::shared_ptr<vector<Models::ElectronicItineraryBatchApplyResponseBodyModuleApplyFailedTicketList>> applyFailedTicketList_ = nullptr;
    std::shared_ptr<string> batchNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
