// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYREQUESTAPPLYITINERARYLIST_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYBATCHAPPLYREQUESTAPPLYITINERARYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ElectronicItineraryBatchApplyRequestApplyItineraryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryBatchApplyRequestApplyItineraryList& obj) { 
      DARABONBA_PTR_TO_JSON(purchaser_name, purchaserName_);
      DARABONBA_PTR_TO_JSON(purchaser_tax_no, purchaserTaxNo_);
      DARABONBA_PTR_TO_JSON(purchaser_type, purchaserType_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryBatchApplyRequestApplyItineraryList& obj) { 
      DARABONBA_PTR_FROM_JSON(purchaser_name, purchaserName_);
      DARABONBA_PTR_FROM_JSON(purchaser_tax_no, purchaserTaxNo_);
      DARABONBA_PTR_FROM_JSON(purchaser_type, purchaserType_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
    };
    ElectronicItineraryBatchApplyRequestApplyItineraryList() = default ;
    ElectronicItineraryBatchApplyRequestApplyItineraryList(const ElectronicItineraryBatchApplyRequestApplyItineraryList &) = default ;
    ElectronicItineraryBatchApplyRequestApplyItineraryList(ElectronicItineraryBatchApplyRequestApplyItineraryList &&) = default ;
    ElectronicItineraryBatchApplyRequestApplyItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryBatchApplyRequestApplyItineraryList() = default ;
    ElectronicItineraryBatchApplyRequestApplyItineraryList& operator=(const ElectronicItineraryBatchApplyRequestApplyItineraryList &) = default ;
    ElectronicItineraryBatchApplyRequestApplyItineraryList& operator=(ElectronicItineraryBatchApplyRequestApplyItineraryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->purchaserName_ != nullptr
        && this->purchaserTaxNo_ != nullptr && this->purchaserType_ != nullptr && this->ticketNo_ != nullptr; };
    // purchaserName Field Functions 
    bool hasPurchaserName() const { return this->purchaserName_ != nullptr;};
    void deletePurchaserName() { this->purchaserName_ = nullptr;};
    inline string purchaserName() const { DARABONBA_PTR_GET_DEFAULT(purchaserName_, "") };
    inline ElectronicItineraryBatchApplyRequestApplyItineraryList& setPurchaserName(string purchaserName) { DARABONBA_PTR_SET_VALUE(purchaserName_, purchaserName) };


    // purchaserTaxNo Field Functions 
    bool hasPurchaserTaxNo() const { return this->purchaserTaxNo_ != nullptr;};
    void deletePurchaserTaxNo() { this->purchaserTaxNo_ = nullptr;};
    inline string purchaserTaxNo() const { DARABONBA_PTR_GET_DEFAULT(purchaserTaxNo_, "") };
    inline ElectronicItineraryBatchApplyRequestApplyItineraryList& setPurchaserTaxNo(string purchaserTaxNo) { DARABONBA_PTR_SET_VALUE(purchaserTaxNo_, purchaserTaxNo) };


    // purchaserType Field Functions 
    bool hasPurchaserType() const { return this->purchaserType_ != nullptr;};
    void deletePurchaserType() { this->purchaserType_ = nullptr;};
    inline int32_t purchaserType() const { DARABONBA_PTR_GET_DEFAULT(purchaserType_, 0) };
    inline ElectronicItineraryBatchApplyRequestApplyItineraryList& setPurchaserType(int32_t purchaserType) { DARABONBA_PTR_SET_VALUE(purchaserType_, purchaserType) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline ElectronicItineraryBatchApplyRequestApplyItineraryList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


  protected:
    std::shared_ptr<string> purchaserName_ = nullptr;
    std::shared_ptr<string> purchaserTaxNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> purchaserType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ticketNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
