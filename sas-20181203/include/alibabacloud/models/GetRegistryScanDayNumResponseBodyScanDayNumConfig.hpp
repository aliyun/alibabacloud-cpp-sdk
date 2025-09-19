// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYSCANDAYNUMRESPONSEBODYSCANDAYNUMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYSCANDAYNUMRESPONSEBODYSCANDAYNUMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetRegistryScanDayNumResponseBodyScanDayNumConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryScanDayNumResponseBodyScanDayNumConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DayNumList, dayNumList_);
      DARABONBA_PTR_TO_JSON(ScanDayNum, scanDayNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryScanDayNumResponseBodyScanDayNumConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DayNumList, dayNumList_);
      DARABONBA_PTR_FROM_JSON(ScanDayNum, scanDayNum_);
    };
    GetRegistryScanDayNumResponseBodyScanDayNumConfig() = default ;
    GetRegistryScanDayNumResponseBodyScanDayNumConfig(const GetRegistryScanDayNumResponseBodyScanDayNumConfig &) = default ;
    GetRegistryScanDayNumResponseBodyScanDayNumConfig(GetRegistryScanDayNumResponseBodyScanDayNumConfig &&) = default ;
    GetRegistryScanDayNumResponseBodyScanDayNumConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryScanDayNumResponseBodyScanDayNumConfig() = default ;
    GetRegistryScanDayNumResponseBodyScanDayNumConfig& operator=(const GetRegistryScanDayNumResponseBodyScanDayNumConfig &) = default ;
    GetRegistryScanDayNumResponseBodyScanDayNumConfig& operator=(GetRegistryScanDayNumResponseBodyScanDayNumConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dayNumList_ != nullptr
        && this->scanDayNum_ != nullptr; };
    // dayNumList Field Functions 
    bool hasDayNumList() const { return this->dayNumList_ != nullptr;};
    void deleteDayNumList() { this->dayNumList_ = nullptr;};
    inline string dayNumList() const { DARABONBA_PTR_GET_DEFAULT(dayNumList_, "") };
    inline GetRegistryScanDayNumResponseBodyScanDayNumConfig& setDayNumList(string dayNumList) { DARABONBA_PTR_SET_VALUE(dayNumList_, dayNumList) };


    // scanDayNum Field Functions 
    bool hasScanDayNum() const { return this->scanDayNum_ != nullptr;};
    void deleteScanDayNum() { this->scanDayNum_ = nullptr;};
    inline int32_t scanDayNum() const { DARABONBA_PTR_GET_DEFAULT(scanDayNum_, 0) };
    inline GetRegistryScanDayNumResponseBodyScanDayNumConfig& setScanDayNum(int32_t scanDayNum) { DARABONBA_PTR_SET_VALUE(scanDayNum_, scanDayNum) };


  protected:
    // List of alternative days.
    std::shared_ptr<string> dayNumList_ = nullptr;
    // Scan time range, in days.
    std::shared_ptr<int32_t> scanDayNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
