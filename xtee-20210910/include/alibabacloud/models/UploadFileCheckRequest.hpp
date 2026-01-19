// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UploadFileCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(batchName, batchName_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(ossFileName, ossFileName_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleTagType, sampleTagType_);
      DARABONBA_PTR_TO_JSON(serviceList, serviceList_);
    };
    friend void from_json(const Darabonba::Json& j, UploadFileCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(batchName, batchName_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(ossFileName, ossFileName_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleTagType, sampleTagType_);
      DARABONBA_PTR_FROM_JSON(serviceList, serviceList_);
    };
    UploadFileCheckRequest() = default ;
    UploadFileCheckRequest(const UploadFileCheckRequest &) = default ;
    UploadFileCheckRequest(UploadFileCheckRequest &&) = default ;
    UploadFileCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadFileCheckRequest() = default ;
    UploadFileCheckRequest& operator=(const UploadFileCheckRequest &) = default ;
    UploadFileCheckRequest& operator=(UploadFileCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->batchName_ == nullptr && this->dataType_ == nullptr && this->ossFileName_ == nullptr && this->regId_ == nullptr && this->sampleTagType_ == nullptr
        && this->serviceList_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UploadFileCheckRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // batchName Field Functions 
    bool hasBatchName() const { return this->batchName_ != nullptr;};
    void deleteBatchName() { this->batchName_ = nullptr;};
    inline string getBatchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
    inline UploadFileCheckRequest& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline UploadFileCheckRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // ossFileName Field Functions 
    bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
    void deleteOssFileName() { this->ossFileName_ = nullptr;};
    inline string getOssFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
    inline UploadFileCheckRequest& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline UploadFileCheckRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleTagType Field Functions 
    bool hasSampleTagType() const { return this->sampleTagType_ != nullptr;};
    void deleteSampleTagType() { this->sampleTagType_ = nullptr;};
    inline string getSampleTagType() const { DARABONBA_PTR_GET_DEFAULT(sampleTagType_, "") };
    inline UploadFileCheckRequest& setSampleTagType(string sampleTagType) { DARABONBA_PTR_SET_VALUE(sampleTagType_, sampleTagType) };


    // serviceList Field Functions 
    bool hasServiceList() const { return this->serviceList_ != nullptr;};
    void deleteServiceList() { this->serviceList_ = nullptr;};
    inline string getServiceList() const { DARABONBA_PTR_GET_DEFAULT(serviceList_, "") };
    inline UploadFileCheckRequest& setServiceList(string serviceList) { DARABONBA_PTR_SET_VALUE(serviceList_, serviceList) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Sample batch name
    shared_ptr<string> batchName_ {};
    // Data type
    shared_ptr<string> dataType_ {};
    // Uploaded OSS address.
    shared_ptr<string> ossFileName_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Sample type
    shared_ptr<string> sampleTagType_ {};
    // Service list
    shared_ptr<string> serviceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
