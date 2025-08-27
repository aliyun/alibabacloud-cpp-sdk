// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHBILLGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MONTHBILLGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MonthBillGetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthBillGetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_TO_JSON(bill_month, billMonth_);
    };
    friend void from_json(const Darabonba::Json& j, MonthBillGetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_batch, billBatch_);
      DARABONBA_PTR_FROM_JSON(bill_month, billMonth_);
    };
    MonthBillGetRequest() = default ;
    MonthBillGetRequest(const MonthBillGetRequest &) = default ;
    MonthBillGetRequest(MonthBillGetRequest &&) = default ;
    MonthBillGetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthBillGetRequest() = default ;
    MonthBillGetRequest& operator=(const MonthBillGetRequest &) = default ;
    MonthBillGetRequest& operator=(MonthBillGetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billBatch_ != nullptr
        && this->billMonth_ != nullptr; };
    // billBatch Field Functions 
    bool hasBillBatch() const { return this->billBatch_ != nullptr;};
    void deleteBillBatch() { this->billBatch_ = nullptr;};
    inline string billBatch() const { DARABONBA_PTR_GET_DEFAULT(billBatch_, "") };
    inline MonthBillGetRequest& setBillBatch(string billBatch) { DARABONBA_PTR_SET_VALUE(billBatch_, billBatch) };


    // billMonth Field Functions 
    bool hasBillMonth() const { return this->billMonth_ != nullptr;};
    void deleteBillMonth() { this->billMonth_ = nullptr;};
    inline string billMonth() const { DARABONBA_PTR_GET_DEFAULT(billMonth_, "") };
    inline MonthBillGetRequest& setBillMonth(string billMonth) { DARABONBA_PTR_SET_VALUE(billMonth_, billMonth) };


  protected:
    std::shared_ptr<string> billBatch_ = nullptr;
    std::shared_ptr<string> billMonth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
