// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYSCANDAYNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYSCANDAYNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegistryScanDayNumResponseBodyScanDayNumConfig.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scanDayNumConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistryScanDayNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanDayNumConfig Field Functions 
    bool hasScanDayNumConfig() const { return this->scanDayNumConfig_ != nullptr;};
    void deleteScanDayNumConfig() { this->scanDayNumConfig_ = nullptr;};
    inline const GetRegistryScanDayNumResponseBodyScanDayNumConfig & scanDayNumConfig() const { DARABONBA_PTR_GET_CONST(scanDayNumConfig_, GetRegistryScanDayNumResponseBodyScanDayNumConfig) };
    inline GetRegistryScanDayNumResponseBodyScanDayNumConfig scanDayNumConfig() { DARABONBA_PTR_GET(scanDayNumConfig_, GetRegistryScanDayNumResponseBodyScanDayNumConfig) };
    inline GetRegistryScanDayNumResponseBody& setScanDayNumConfig(const GetRegistryScanDayNumResponseBodyScanDayNumConfig & scanDayNumConfig) { DARABONBA_PTR_SET_VALUE(scanDayNumConfig_, scanDayNumConfig) };
    inline GetRegistryScanDayNumResponseBody& setScanDayNumConfig(GetRegistryScanDayNumResponseBodyScanDayNumConfig && scanDayNumConfig) { DARABONBA_PTR_SET_RVALUE(scanDayNumConfig_, scanDayNumConfig) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configuration of the scan period.
    std::shared_ptr<GetRegistryScanDayNumResponseBodyScanDayNumConfig> scanDayNumConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
