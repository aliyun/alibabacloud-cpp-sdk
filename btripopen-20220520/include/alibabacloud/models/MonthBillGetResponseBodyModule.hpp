// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHBILLGETRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_MONTHBILLGETRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonthBillGetResponseBodyModuleMonthAccountBillDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MonthBillGetResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthBillGetResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(end_date, endDate_);
      DARABONBA_PTR_TO_JSON(monthAccountBillDetail, monthAccountBillDetail_);
      DARABONBA_PTR_TO_JSON(start_date, startDate_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, MonthBillGetResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(end_date, endDate_);
      DARABONBA_PTR_FROM_JSON(monthAccountBillDetail, monthAccountBillDetail_);
      DARABONBA_PTR_FROM_JSON(start_date, startDate_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    MonthBillGetResponseBodyModule() = default ;
    MonthBillGetResponseBodyModule(const MonthBillGetResponseBodyModule &) = default ;
    MonthBillGetResponseBodyModule(MonthBillGetResponseBodyModule &&) = default ;
    MonthBillGetResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthBillGetResponseBodyModule() = default ;
    MonthBillGetResponseBodyModule& operator=(const MonthBillGetResponseBodyModule &) = default ;
    MonthBillGetResponseBodyModule& operator=(MonthBillGetResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endDate_ != nullptr
        && this->monthAccountBillDetail_ != nullptr && this->startDate_ != nullptr && this->url_ != nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline MonthBillGetResponseBodyModule& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // monthAccountBillDetail Field Functions 
    bool hasMonthAccountBillDetail() const { return this->monthAccountBillDetail_ != nullptr;};
    void deleteMonthAccountBillDetail() { this->monthAccountBillDetail_ = nullptr;};
    inline const Models::MonthBillGetResponseBodyModuleMonthAccountBillDetail & monthAccountBillDetail() const { DARABONBA_PTR_GET_CONST(monthAccountBillDetail_, Models::MonthBillGetResponseBodyModuleMonthAccountBillDetail) };
    inline Models::MonthBillGetResponseBodyModuleMonthAccountBillDetail monthAccountBillDetail() { DARABONBA_PTR_GET(monthAccountBillDetail_, Models::MonthBillGetResponseBodyModuleMonthAccountBillDetail) };
    inline MonthBillGetResponseBodyModule& setMonthAccountBillDetail(const Models::MonthBillGetResponseBodyModuleMonthAccountBillDetail & monthAccountBillDetail) { DARABONBA_PTR_SET_VALUE(monthAccountBillDetail_, monthAccountBillDetail) };
    inline MonthBillGetResponseBodyModule& setMonthAccountBillDetail(Models::MonthBillGetResponseBodyModuleMonthAccountBillDetail && monthAccountBillDetail) { DARABONBA_PTR_SET_RVALUE(monthAccountBillDetail_, monthAccountBillDetail) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline MonthBillGetResponseBodyModule& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline MonthBillGetResponseBodyModule& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> endDate_ = nullptr;
    // CorpMonthAccountBillFeeDetail
    std::shared_ptr<Models::MonthBillGetResponseBodyModuleMonthAccountBillDetail> monthAccountBillDetail_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
