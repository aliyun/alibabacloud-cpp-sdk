// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMPLEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMPLEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateSampleBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSampleBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(batchName, batchName_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(dataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(ossFileName, ossFileName_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleBatchType, sampleBatchType_);
      DARABONBA_PTR_TO_JSON(serviceList, serviceList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSampleBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(batchName, batchName_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(dataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(ossFileName, ossFileName_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleBatchType, sampleBatchType_);
      DARABONBA_PTR_FROM_JSON(serviceList, serviceList_);
    };
    CreateSampleBatchRequest() = default ;
    CreateSampleBatchRequest(const CreateSampleBatchRequest &) = default ;
    CreateSampleBatchRequest(CreateSampleBatchRequest &&) = default ;
    CreateSampleBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSampleBatchRequest() = default ;
    CreateSampleBatchRequest& operator=(const CreateSampleBatchRequest &) = default ;
    CreateSampleBatchRequest& operator=(CreateSampleBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->batchName_ == nullptr && this->dataType_ == nullptr && this->dataValue_ == nullptr && this->description_ == nullptr && this->ossFileName_ == nullptr
        && this->regId_ == nullptr && this->sampleBatchType_ == nullptr && this->serviceList_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSampleBatchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // batchName Field Functions 
    bool hasBatchName() const { return this->batchName_ != nullptr;};
    void deleteBatchName() { this->batchName_ = nullptr;};
    inline string getBatchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
    inline CreateSampleBatchRequest& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateSampleBatchRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string getDataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline CreateSampleBatchRequest& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSampleBatchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ossFileName Field Functions 
    bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
    void deleteOssFileName() { this->ossFileName_ = nullptr;};
    inline string getOssFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
    inline CreateSampleBatchRequest& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateSampleBatchRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleBatchType Field Functions 
    bool hasSampleBatchType() const { return this->sampleBatchType_ != nullptr;};
    void deleteSampleBatchType() { this->sampleBatchType_ = nullptr;};
    inline string getSampleBatchType() const { DARABONBA_PTR_GET_DEFAULT(sampleBatchType_, "") };
    inline CreateSampleBatchRequest& setSampleBatchType(string sampleBatchType) { DARABONBA_PTR_SET_VALUE(sampleBatchType_, sampleBatchType) };


    // serviceList Field Functions 
    bool hasServiceList() const { return this->serviceList_ != nullptr;};
    void deleteServiceList() { this->serviceList_ = nullptr;};
    inline string getServiceList() const { DARABONBA_PTR_GET_DEFAULT(serviceList_, "") };
    inline CreateSampleBatchRequest& setServiceList(string serviceList) { DARABONBA_PTR_SET_VALUE(serviceList_, serviceList) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Sample batch name
    shared_ptr<string> batchName_ {};
    // Data type
    shared_ptr<string> dataType_ {};
    // Content of the list entered in the text box
    shared_ptr<string> dataValue_ {};
    // Description information.
    shared_ptr<string> description_ {};
    // Uploaded OSS address.
    shared_ptr<string> ossFileName_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Specific type of sample list
    shared_ptr<string> sampleBatchType_ {};
    // Service list
    shared_ptr<string> serviceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
