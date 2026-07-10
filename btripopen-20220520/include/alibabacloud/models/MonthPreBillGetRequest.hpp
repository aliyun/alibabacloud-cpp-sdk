// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHPREBILLGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MONTHPREBILLGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MonthPreBillGetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthPreBillGetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_TO_JSON(bill_month, billMonth_);
    };
    friend void from_json(const Darabonba::Json& j, MonthPreBillGetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_FROM_JSON(bill_month, billMonth_);
    };
    MonthPreBillGetRequest() = default ;
    MonthPreBillGetRequest(const MonthPreBillGetRequest &) = default ;
    MonthPreBillGetRequest(MonthPreBillGetRequest &&) = default ;
    MonthPreBillGetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthPreBillGetRequest() = default ;
    MonthPreBillGetRequest& operator=(const MonthPreBillGetRequest &) = default ;
    MonthPreBillGetRequest& operator=(MonthPreBillGetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billBatch_ == nullptr
        && this->billMonth_ == nullptr; };
    // billBatch Field Functions 
    bool hasBillBatch() const { return this->billBatch_ != nullptr;};
    void deleteBillBatch() { this->billBatch_ = nullptr;};
    inline string getBillBatch() const { DARABONBA_PTR_GET_DEFAULT(billBatch_, "") };
    inline MonthPreBillGetRequest& setBillBatch(string billBatch) { DARABONBA_PTR_SET_VALUE(billBatch_, billBatch) };


    // billMonth Field Functions 
    bool hasBillMonth() const { return this->billMonth_ != nullptr;};
    void deleteBillMonth() { this->billMonth_ = nullptr;};
    inline string getBillMonth() const { DARABONBA_PTR_GET_DEFAULT(billMonth_, "") };
    inline MonthPreBillGetRequest& setBillMonth(string billMonth) { DARABONBA_PTR_SET_VALUE(billMonth_, billMonth) };


  protected:
    shared_ptr<string> billBatch_ {};
    shared_ptr<string> billMonth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
