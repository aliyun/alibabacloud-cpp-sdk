// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ElectronicItineraryBatchApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryBatchApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_itinerary_list, applyItineraryList_);
      DARABONBA_PTR_TO_JSON(can_reprint, canReprint_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryBatchApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_itinerary_list, applyItineraryList_);
      DARABONBA_PTR_FROM_JSON(can_reprint, canReprint_);
    };
    ElectronicItineraryBatchApplyRequest() = default ;
    ElectronicItineraryBatchApplyRequest(const ElectronicItineraryBatchApplyRequest &) = default ;
    ElectronicItineraryBatchApplyRequest(ElectronicItineraryBatchApplyRequest &&) = default ;
    ElectronicItineraryBatchApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryBatchApplyRequest() = default ;
    ElectronicItineraryBatchApplyRequest& operator=(const ElectronicItineraryBatchApplyRequest &) = default ;
    ElectronicItineraryBatchApplyRequest& operator=(ElectronicItineraryBatchApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplyItineraryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplyItineraryList& obj) { 
        DARABONBA_PTR_TO_JSON(purchaser_name, purchaserName_);
        DARABONBA_PTR_TO_JSON(purchaser_tax_no, purchaserTaxNo_);
        DARABONBA_PTR_TO_JSON(purchaser_type, purchaserType_);
        DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      };
      friend void from_json(const Darabonba::Json& j, ApplyItineraryList& obj) { 
        DARABONBA_PTR_FROM_JSON(purchaser_name, purchaserName_);
        DARABONBA_PTR_FROM_JSON(purchaser_tax_no, purchaserTaxNo_);
        DARABONBA_PTR_FROM_JSON(purchaser_type, purchaserType_);
        DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      };
      ApplyItineraryList() = default ;
      ApplyItineraryList(const ApplyItineraryList &) = default ;
      ApplyItineraryList(ApplyItineraryList &&) = default ;
      ApplyItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplyItineraryList() = default ;
      ApplyItineraryList& operator=(const ApplyItineraryList &) = default ;
      ApplyItineraryList& operator=(ApplyItineraryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->purchaserName_ == nullptr
        && this->purchaserTaxNo_ == nullptr && this->purchaserType_ == nullptr && this->ticketNo_ == nullptr; };
      // purchaserName Field Functions 
      bool hasPurchaserName() const { return this->purchaserName_ != nullptr;};
      void deletePurchaserName() { this->purchaserName_ = nullptr;};
      inline string getPurchaserName() const { DARABONBA_PTR_GET_DEFAULT(purchaserName_, "") };
      inline ApplyItineraryList& setPurchaserName(string purchaserName) { DARABONBA_PTR_SET_VALUE(purchaserName_, purchaserName) };


      // purchaserTaxNo Field Functions 
      bool hasPurchaserTaxNo() const { return this->purchaserTaxNo_ != nullptr;};
      void deletePurchaserTaxNo() { this->purchaserTaxNo_ = nullptr;};
      inline string getPurchaserTaxNo() const { DARABONBA_PTR_GET_DEFAULT(purchaserTaxNo_, "") };
      inline ApplyItineraryList& setPurchaserTaxNo(string purchaserTaxNo) { DARABONBA_PTR_SET_VALUE(purchaserTaxNo_, purchaserTaxNo) };


      // purchaserType Field Functions 
      bool hasPurchaserType() const { return this->purchaserType_ != nullptr;};
      void deletePurchaserType() { this->purchaserType_ = nullptr;};
      inline int32_t getPurchaserType() const { DARABONBA_PTR_GET_DEFAULT(purchaserType_, 0) };
      inline ApplyItineraryList& setPurchaserType(int32_t purchaserType) { DARABONBA_PTR_SET_VALUE(purchaserType_, purchaserType) };


      // ticketNo Field Functions 
      bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
      void deleteTicketNo() { this->ticketNo_ = nullptr;};
      inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
      inline ApplyItineraryList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    protected:
      shared_ptr<string> purchaserName_ {};
      shared_ptr<string> purchaserTaxNo_ {};
      // This parameter is required.
      shared_ptr<int32_t> purchaserType_ {};
      // This parameter is required.
      shared_ptr<string> ticketNo_ {};
    };

    virtual bool empty() const override { return this->applyItineraryList_ == nullptr
        && this->canReprint_ == nullptr; };
    // applyItineraryList Field Functions 
    bool hasApplyItineraryList() const { return this->applyItineraryList_ != nullptr;};
    void deleteApplyItineraryList() { this->applyItineraryList_ = nullptr;};
    inline const vector<ElectronicItineraryBatchApplyRequest::ApplyItineraryList> & getApplyItineraryList() const { DARABONBA_PTR_GET_CONST(applyItineraryList_, vector<ElectronicItineraryBatchApplyRequest::ApplyItineraryList>) };
    inline vector<ElectronicItineraryBatchApplyRequest::ApplyItineraryList> getApplyItineraryList() { DARABONBA_PTR_GET(applyItineraryList_, vector<ElectronicItineraryBatchApplyRequest::ApplyItineraryList>) };
    inline ElectronicItineraryBatchApplyRequest& setApplyItineraryList(const vector<ElectronicItineraryBatchApplyRequest::ApplyItineraryList> & applyItineraryList) { DARABONBA_PTR_SET_VALUE(applyItineraryList_, applyItineraryList) };
    inline ElectronicItineraryBatchApplyRequest& setApplyItineraryList(vector<ElectronicItineraryBatchApplyRequest::ApplyItineraryList> && applyItineraryList) { DARABONBA_PTR_SET_RVALUE(applyItineraryList_, applyItineraryList) };


    // canReprint Field Functions 
    bool hasCanReprint() const { return this->canReprint_ != nullptr;};
    void deleteCanReprint() { this->canReprint_ = nullptr;};
    inline bool getCanReprint() const { DARABONBA_PTR_GET_DEFAULT(canReprint_, false) };
    inline ElectronicItineraryBatchApplyRequest& setCanReprint(bool canReprint) { DARABONBA_PTR_SET_VALUE(canReprint_, canReprint) };


  protected:
    // This parameter is required.
    shared_ptr<vector<ElectronicItineraryBatchApplyRequest::ApplyItineraryList>> applyItineraryList_ {};
    shared_ptr<bool> canReprint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
