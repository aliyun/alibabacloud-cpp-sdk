// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHBILLSPLITGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MONTHBILLSPLITGETREQUEST_HPP_
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
  class MonthBillSplitGetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthBillSplitGetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_TO_JSON(bill_month, billMonth_);
      DARABONBA_PTR_TO_JSON(bill_split_key_list, billSplitKeyList_);
      DARABONBA_PTR_TO_JSON(bill_split_mode, billSplitMode_);
    };
    friend void from_json(const Darabonba::Json& j, MonthBillSplitGetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_FROM_JSON(bill_month, billMonth_);
      DARABONBA_PTR_FROM_JSON(bill_split_key_list, billSplitKeyList_);
      DARABONBA_PTR_FROM_JSON(bill_split_mode, billSplitMode_);
    };
    MonthBillSplitGetRequest() = default ;
    MonthBillSplitGetRequest(const MonthBillSplitGetRequest &) = default ;
    MonthBillSplitGetRequest(MonthBillSplitGetRequest &&) = default ;
    MonthBillSplitGetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthBillSplitGetRequest() = default ;
    MonthBillSplitGetRequest& operator=(const MonthBillSplitGetRequest &) = default ;
    MonthBillSplitGetRequest& operator=(MonthBillSplitGetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billBatch_ != nullptr
        && this->billMonth_ != nullptr && this->billSplitKeyList_ != nullptr && this->billSplitMode_ != nullptr; };
    // billBatch Field Functions 
    bool hasBillBatch() const { return this->billBatch_ != nullptr;};
    void deleteBillBatch() { this->billBatch_ = nullptr;};
    inline string billBatch() const { DARABONBA_PTR_GET_DEFAULT(billBatch_, "") };
    inline MonthBillSplitGetRequest& setBillBatch(string billBatch) { DARABONBA_PTR_SET_VALUE(billBatch_, billBatch) };


    // billMonth Field Functions 
    bool hasBillMonth() const { return this->billMonth_ != nullptr;};
    void deleteBillMonth() { this->billMonth_ = nullptr;};
    inline string billMonth() const { DARABONBA_PTR_GET_DEFAULT(billMonth_, "") };
    inline MonthBillSplitGetRequest& setBillMonth(string billMonth) { DARABONBA_PTR_SET_VALUE(billMonth_, billMonth) };


    // billSplitKeyList Field Functions 
    bool hasBillSplitKeyList() const { return this->billSplitKeyList_ != nullptr;};
    void deleteBillSplitKeyList() { this->billSplitKeyList_ = nullptr;};
    inline const vector<string> & billSplitKeyList() const { DARABONBA_PTR_GET_CONST(billSplitKeyList_, vector<string>) };
    inline vector<string> billSplitKeyList() { DARABONBA_PTR_GET(billSplitKeyList_, vector<string>) };
    inline MonthBillSplitGetRequest& setBillSplitKeyList(const vector<string> & billSplitKeyList) { DARABONBA_PTR_SET_VALUE(billSplitKeyList_, billSplitKeyList) };
    inline MonthBillSplitGetRequest& setBillSplitKeyList(vector<string> && billSplitKeyList) { DARABONBA_PTR_SET_RVALUE(billSplitKeyList_, billSplitKeyList) };


    // billSplitMode Field Functions 
    bool hasBillSplitMode() const { return this->billSplitMode_ != nullptr;};
    void deleteBillSplitMode() { this->billSplitMode_ = nullptr;};
    inline string billSplitMode() const { DARABONBA_PTR_GET_DEFAULT(billSplitMode_, "") };
    inline MonthBillSplitGetRequest& setBillSplitMode(string billSplitMode) { DARABONBA_PTR_SET_VALUE(billSplitMode_, billSplitMode) };


  protected:
    std::shared_ptr<string> billBatch_ = nullptr;
    std::shared_ptr<string> billMonth_ = nullptr;
    std::shared_ptr<vector<string>> billSplitKeyList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> billSplitMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
