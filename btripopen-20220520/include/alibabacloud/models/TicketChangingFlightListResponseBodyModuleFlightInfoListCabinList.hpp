// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTRESPONSEBODYMODULEFLIGHTINFOLISTCABINLIST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTRESPONSEBODYMODULEFLIGHTINFOLISTCABINLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingFlightListResponseBodyModuleFlightInfoListCabinListModifyPriceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& obj) { 
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_desc, cabinDesc_);
      DARABONBA_PTR_TO_JSON(cabin_discount, cabinDiscount_);
      DARABONBA_PTR_TO_JSON(child_cabin, childCabin_);
      DARABONBA_PTR_TO_JSON(left_num, leftNum_);
      DARABONBA_PTR_TO_JSON(modify_price_list, modifyPriceList_);
      DARABONBA_PTR_TO_JSON(ota_itemid, otaItemid_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_desc, cabinDesc_);
      DARABONBA_PTR_FROM_JSON(cabin_discount, cabinDiscount_);
      DARABONBA_PTR_FROM_JSON(child_cabin, childCabin_);
      DARABONBA_PTR_FROM_JSON(left_num, leftNum_);
      DARABONBA_PTR_FROM_JSON(modify_price_list, modifyPriceList_);
      DARABONBA_PTR_FROM_JSON(ota_itemid, otaItemid_);
    };
    TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList() = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList(const TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList &) = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList(TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList &&) = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList() = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& operator=(const TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList &) = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& operator=(TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabin_ != nullptr
        && this->cabinClass_ != nullptr && this->cabinDesc_ != nullptr && this->cabinDiscount_ != nullptr && this->childCabin_ != nullptr && this->leftNum_ != nullptr
        && this->modifyPriceList_ != nullptr && this->otaItemid_ != nullptr; };
    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinDesc Field Functions 
    bool hasCabinDesc() const { return this->cabinDesc_ != nullptr;};
    void deleteCabinDesc() { this->cabinDesc_ = nullptr;};
    inline string cabinDesc() const { DARABONBA_PTR_GET_DEFAULT(cabinDesc_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setCabinDesc(string cabinDesc) { DARABONBA_PTR_SET_VALUE(cabinDesc_, cabinDesc) };


    // cabinDiscount Field Functions 
    bool hasCabinDiscount() const { return this->cabinDiscount_ != nullptr;};
    void deleteCabinDiscount() { this->cabinDiscount_ = nullptr;};
    inline int32_t cabinDiscount() const { DARABONBA_PTR_GET_DEFAULT(cabinDiscount_, 0) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setCabinDiscount(int32_t cabinDiscount) { DARABONBA_PTR_SET_VALUE(cabinDiscount_, cabinDiscount) };


    // childCabin Field Functions 
    bool hasChildCabin() const { return this->childCabin_ != nullptr;};
    void deleteChildCabin() { this->childCabin_ = nullptr;};
    inline string childCabin() const { DARABONBA_PTR_GET_DEFAULT(childCabin_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setChildCabin(string childCabin) { DARABONBA_PTR_SET_VALUE(childCabin_, childCabin) };


    // leftNum Field Functions 
    bool hasLeftNum() const { return this->leftNum_ != nullptr;};
    void deleteLeftNum() { this->leftNum_ = nullptr;};
    inline string leftNum() const { DARABONBA_PTR_GET_DEFAULT(leftNum_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setLeftNum(string leftNum) { DARABONBA_PTR_SET_VALUE(leftNum_, leftNum) };


    // modifyPriceList Field Functions 
    bool hasModifyPriceList() const { return this->modifyPriceList_ != nullptr;};
    void deleteModifyPriceList() { this->modifyPriceList_ = nullptr;};
    inline const vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinListModifyPriceList> & modifyPriceList() const { DARABONBA_PTR_GET_CONST(modifyPriceList_, vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinListModifyPriceList>) };
    inline vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinListModifyPriceList> modifyPriceList() { DARABONBA_PTR_GET(modifyPriceList_, vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinListModifyPriceList>) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setModifyPriceList(const vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinListModifyPriceList> & modifyPriceList) { DARABONBA_PTR_SET_VALUE(modifyPriceList_, modifyPriceList) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setModifyPriceList(vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinListModifyPriceList> && modifyPriceList) { DARABONBA_PTR_SET_RVALUE(modifyPriceList_, modifyPriceList) };


    // otaItemid Field Functions 
    bool hasOtaItemid() const { return this->otaItemid_ != nullptr;};
    void deleteOtaItemid() { this->otaItemid_ = nullptr;};
    inline string otaItemid() const { DARABONBA_PTR_GET_DEFAULT(otaItemid_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList& setOtaItemid(string otaItemid) { DARABONBA_PTR_SET_VALUE(otaItemid_, otaItemid) };


  protected:
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinDesc_ = nullptr;
    std::shared_ptr<int32_t> cabinDiscount_ = nullptr;
    std::shared_ptr<string> childCabin_ = nullptr;
    std::shared_ptr<string> leftNum_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinListModifyPriceList>> modifyPriceList_ = nullptr;
    std::shared_ptr<string> otaItemid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
