// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYSCANDAYNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYSCANDAYNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetRegistryScanDayNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryScanDayNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScanDayNumConfig, scanDayNumConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryScanDayNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScanDayNumConfig, scanDayNumConfig_);
    };
    GetRegistryScanDayNumResponseBody() = default ;
    GetRegistryScanDayNumResponseBody(const GetRegistryScanDayNumResponseBody &) = default ;
    GetRegistryScanDayNumResponseBody(GetRegistryScanDayNumResponseBody &&) = default ;
    GetRegistryScanDayNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryScanDayNumResponseBody() = default ;
    GetRegistryScanDayNumResponseBody& operator=(const GetRegistryScanDayNumResponseBody &) = default ;
    GetRegistryScanDayNumResponseBody& operator=(GetRegistryScanDayNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScanDayNumConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScanDayNumConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DayNumList, dayNumList_);
        DARABONBA_PTR_TO_JSON(ScanDayNum, scanDayNum_);
      };
      friend void from_json(const Darabonba::Json& j, ScanDayNumConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DayNumList, dayNumList_);
        DARABONBA_PTR_FROM_JSON(ScanDayNum, scanDayNum_);
      };
      ScanDayNumConfig() = default ;
      ScanDayNumConfig(const ScanDayNumConfig &) = default ;
      ScanDayNumConfig(ScanDayNumConfig &&) = default ;
      ScanDayNumConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScanDayNumConfig() = default ;
      ScanDayNumConfig& operator=(const ScanDayNumConfig &) = default ;
      ScanDayNumConfig& operator=(ScanDayNumConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dayNumList_ == nullptr
        && this->scanDayNum_ == nullptr; };
      // dayNumList Field Functions 
      bool hasDayNumList() const { return this->dayNumList_ != nullptr;};
      void deleteDayNumList() { this->dayNumList_ = nullptr;};
      inline string getDayNumList() const { DARABONBA_PTR_GET_DEFAULT(dayNumList_, "") };
      inline ScanDayNumConfig& setDayNumList(string dayNumList) { DARABONBA_PTR_SET_VALUE(dayNumList_, dayNumList) };


      // scanDayNum Field Functions 
      bool hasScanDayNum() const { return this->scanDayNum_ != nullptr;};
      void deleteScanDayNum() { this->scanDayNum_ = nullptr;};
      inline int32_t getScanDayNum() const { DARABONBA_PTR_GET_DEFAULT(scanDayNum_, 0) };
      inline ScanDayNumConfig& setScanDayNum(int32_t scanDayNum) { DARABONBA_PTR_SET_VALUE(scanDayNum_, scanDayNum) };


    protected:
      // The selectable day options.
      shared_ptr<string> dayNumList_ {};
      // The scan period. Unit: days.
      shared_ptr<int32_t> scanDayNum_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scanDayNumConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistryScanDayNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanDayNumConfig Field Functions 
    bool hasScanDayNumConfig() const { return this->scanDayNumConfig_ != nullptr;};
    void deleteScanDayNumConfig() { this->scanDayNumConfig_ = nullptr;};
    inline const GetRegistryScanDayNumResponseBody::ScanDayNumConfig & getScanDayNumConfig() const { DARABONBA_PTR_GET_CONST(scanDayNumConfig_, GetRegistryScanDayNumResponseBody::ScanDayNumConfig) };
    inline GetRegistryScanDayNumResponseBody::ScanDayNumConfig getScanDayNumConfig() { DARABONBA_PTR_GET(scanDayNumConfig_, GetRegistryScanDayNumResponseBody::ScanDayNumConfig) };
    inline GetRegistryScanDayNumResponseBody& setScanDayNumConfig(const GetRegistryScanDayNumResponseBody::ScanDayNumConfig & scanDayNumConfig) { DARABONBA_PTR_SET_VALUE(scanDayNumConfig_, scanDayNumConfig) };
    inline GetRegistryScanDayNumResponseBody& setScanDayNumConfig(GetRegistryScanDayNumResponseBody::ScanDayNumConfig && scanDayNumConfig) { DARABONBA_PTR_SET_RVALUE(scanDayNumConfig_, scanDayNumConfig) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configuration of the scan period.
    shared_ptr<GetRegistryScanDayNumResponseBody::ScanDayNumConfig> scanDayNumConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
