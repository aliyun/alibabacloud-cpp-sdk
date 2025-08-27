// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHBILLSPLITGETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MONTHBILLSPLITGETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MonthBillSplitGetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthBillSplitGetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_TO_JSON(bill_month, billMonth_);
      DARABONBA_PTR_TO_JSON(bill_split_key_list, billSplitKeyListShrink_);
      DARABONBA_PTR_TO_JSON(bill_split_mode, billSplitMode_);
    };
    friend void from_json(const Darabonba::Json& j, MonthBillSplitGetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_FROM_JSON(bill_month, billMonth_);
      DARABONBA_PTR_FROM_JSON(bill_split_key_list, billSplitKeyListShrink_);
      DARABONBA_PTR_FROM_JSON(bill_split_mode, billSplitMode_);
    };
    MonthBillSplitGetShrinkRequest() = default ;
    MonthBillSplitGetShrinkRequest(const MonthBillSplitGetShrinkRequest &) = default ;
    MonthBillSplitGetShrinkRequest(MonthBillSplitGetShrinkRequest &&) = default ;
    MonthBillSplitGetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthBillSplitGetShrinkRequest() = default ;
    MonthBillSplitGetShrinkRequest& operator=(const MonthBillSplitGetShrinkRequest &) = default ;
    MonthBillSplitGetShrinkRequest& operator=(MonthBillSplitGetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billBatch_ != nullptr
        && this->billMonth_ != nullptr && this->billSplitKeyListShrink_ != nullptr && this->billSplitMode_ != nullptr; };
    // billBatch Field Functions 
    bool hasBillBatch() const { return this->billBatch_ != nullptr;};
    void deleteBillBatch() { this->billBatch_ = nullptr;};
    inline string billBatch() const { DARABONBA_PTR_GET_DEFAULT(billBatch_, "") };
    inline MonthBillSplitGetShrinkRequest& setBillBatch(string billBatch) { DARABONBA_PTR_SET_VALUE(billBatch_, billBatch) };


    // billMonth Field Functions 
    bool hasBillMonth() const { return this->billMonth_ != nullptr;};
    void deleteBillMonth() { this->billMonth_ = nullptr;};
    inline string billMonth() const { DARABONBA_PTR_GET_DEFAULT(billMonth_, "") };
    inline MonthBillSplitGetShrinkRequest& setBillMonth(string billMonth) { DARABONBA_PTR_SET_VALUE(billMonth_, billMonth) };


    // billSplitKeyListShrink Field Functions 
    bool hasBillSplitKeyListShrink() const { return this->billSplitKeyListShrink_ != nullptr;};
    void deleteBillSplitKeyListShrink() { this->billSplitKeyListShrink_ = nullptr;};
    inline string billSplitKeyListShrink() const { DARABONBA_PTR_GET_DEFAULT(billSplitKeyListShrink_, "") };
    inline MonthBillSplitGetShrinkRequest& setBillSplitKeyListShrink(string billSplitKeyListShrink) { DARABONBA_PTR_SET_VALUE(billSplitKeyListShrink_, billSplitKeyListShrink) };


    // billSplitMode Field Functions 
    bool hasBillSplitMode() const { return this->billSplitMode_ != nullptr;};
    void deleteBillSplitMode() { this->billSplitMode_ = nullptr;};
    inline string billSplitMode() const { DARABONBA_PTR_GET_DEFAULT(billSplitMode_, "") };
    inline MonthBillSplitGetShrinkRequest& setBillSplitMode(string billSplitMode) { DARABONBA_PTR_SET_VALUE(billSplitMode_, billSplitMode) };


  protected:
    std::shared_ptr<string> billBatch_ = nullptr;
    std::shared_ptr<string> billMonth_ = nullptr;
    std::shared_ptr<string> billSplitKeyListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> billSplitMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
