// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHBILLSPLITGETRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_MONTHBILLSPLITGETRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MonthBillSplitGetResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthBillSplitGetResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(bill_split_key, billSplitKey_);
      DARABONBA_PTR_TO_JSON(end_date, endDate_);
      DARABONBA_PTR_TO_JSON(start_date, startDate_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, MonthBillSplitGetResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_split_key, billSplitKey_);
      DARABONBA_PTR_FROM_JSON(end_date, endDate_);
      DARABONBA_PTR_FROM_JSON(start_date, startDate_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    MonthBillSplitGetResponseBodyModule() = default ;
    MonthBillSplitGetResponseBodyModule(const MonthBillSplitGetResponseBodyModule &) = default ;
    MonthBillSplitGetResponseBodyModule(MonthBillSplitGetResponseBodyModule &&) = default ;
    MonthBillSplitGetResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthBillSplitGetResponseBodyModule() = default ;
    MonthBillSplitGetResponseBodyModule& operator=(const MonthBillSplitGetResponseBodyModule &) = default ;
    MonthBillSplitGetResponseBodyModule& operator=(MonthBillSplitGetResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billSplitKey_ != nullptr
        && this->endDate_ != nullptr && this->startDate_ != nullptr && this->url_ != nullptr; };
    // billSplitKey Field Functions 
    bool hasBillSplitKey() const { return this->billSplitKey_ != nullptr;};
    void deleteBillSplitKey() { this->billSplitKey_ = nullptr;};
    inline string billSplitKey() const { DARABONBA_PTR_GET_DEFAULT(billSplitKey_, "") };
    inline MonthBillSplitGetResponseBodyModule& setBillSplitKey(string billSplitKey) { DARABONBA_PTR_SET_VALUE(billSplitKey_, billSplitKey) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline MonthBillSplitGetResponseBodyModule& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline MonthBillSplitGetResponseBodyModule& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline MonthBillSplitGetResponseBodyModule& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> billSplitKey_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
