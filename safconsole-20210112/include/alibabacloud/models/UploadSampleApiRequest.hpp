// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSAMPLEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSAMPLEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20210112
{
namespace Models
{
  class UploadSampleApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadSampleApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(SampleType, sampleType_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, UploadSampleApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(SampleType, sampleType_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    UploadSampleApiRequest() = default ;
    UploadSampleApiRequest(const UploadSampleApiRequest &) = default ;
    UploadSampleApiRequest(UploadSampleApiRequest &&) = default ;
    UploadSampleApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadSampleApiRequest() = default ;
    UploadSampleApiRequest& operator=(const UploadSampleApiRequest &) = default ;
    UploadSampleApiRequest& operator=(UploadSampleApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataType_ != nullptr
        && this->dataValue_ != nullptr && this->sampleType_ != nullptr && this->service_ != nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline UploadSampleApiRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string dataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline UploadSampleApiRequest& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // sampleType Field Functions 
    bool hasSampleType() const { return this->sampleType_ != nullptr;};
    void deleteSampleType() { this->sampleType_ = nullptr;};
    inline string sampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, "") };
    inline UploadSampleApiRequest& setSampleType(string sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline UploadSampleApiRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // The data type of the sample
    // 
    // - Phone number: mobile
    // - MD5 of phone number: mobileMd5
    // - IP: ip
    // - Unique device ID: umid
    // - Account ID: accountId
    // - IMEI: imei
    // - MD5 of IMEI: imeiMd5
    // - OAID: oaid
    // - MD5 of OAID: oaidMd5
    // - Android ID: androidId
    // - MD5 of Android ID: androidIdMd5
    // 
    // This parameter is required.
    std::shared_ptr<string> dataType_ = nullptr;
    // Specific value of the sample, to be passed in JSON format. Do not exceed 1000 entries at a time.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataValue_ = nullptr;
    // The type of the sample
    // 
    // - Blacklist: block
    // 
    // - Whitelist: pass
    // 
    // This parameter is required.
    std::shared_ptr<string> sampleType_ = nullptr;
    // List of effective services, separate multiple services with commas
    // 
    // - Basic/Enhanced Registration Risk Identification: account_abuse
    // - Basic/Enhanced Marketing Risk Identification: coupon_abuse
    // - Basic/Enhanced Login Risk Identification: account_takeover
    // 
    // This parameter is required.
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20210112
#endif
