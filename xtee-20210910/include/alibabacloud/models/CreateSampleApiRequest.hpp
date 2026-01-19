// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMPLEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMPLEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateSampleApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSampleApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SampleBatchType, sampleBatchType_);
      DARABONBA_PTR_TO_JSON(ServiceList, serviceList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSampleApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SampleBatchType, sampleBatchType_);
      DARABONBA_PTR_FROM_JSON(ServiceList, serviceList_);
    };
    CreateSampleApiRequest() = default ;
    CreateSampleApiRequest(const CreateSampleApiRequest &) = default ;
    CreateSampleApiRequest(CreateSampleApiRequest &&) = default ;
    CreateSampleApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSampleApiRequest() = default ;
    CreateSampleApiRequest& operator=(const CreateSampleApiRequest &) = default ;
    CreateSampleApiRequest& operator=(CreateSampleApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && this->dataValue_ == nullptr && this->lang_ == nullptr && this->regId_ == nullptr && this->sampleBatchType_ == nullptr && this->serviceList_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateSampleApiRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string getDataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline CreateSampleApiRequest& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSampleApiRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateSampleApiRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleBatchType Field Functions 
    bool hasSampleBatchType() const { return this->sampleBatchType_ != nullptr;};
    void deleteSampleBatchType() { this->sampleBatchType_ = nullptr;};
    inline string getSampleBatchType() const { DARABONBA_PTR_GET_DEFAULT(sampleBatchType_, "") };
    inline CreateSampleApiRequest& setSampleBatchType(string sampleBatchType) { DARABONBA_PTR_SET_VALUE(sampleBatchType_, sampleBatchType) };


    // serviceList Field Functions 
    bool hasServiceList() const { return this->serviceList_ != nullptr;};
    void deleteServiceList() { this->serviceList_ = nullptr;};
    inline string getServiceList() const { DARABONBA_PTR_GET_DEFAULT(serviceList_, "") };
    inline CreateSampleApiRequest& setServiceList(string serviceList) { DARABONBA_PTR_SET_VALUE(serviceList_, serviceList) };


  protected:
    // Same as input parameter
    shared_ptr<string> dataType_ {};
    // Specific data value
    shared_ptr<string> dataValue_ {};
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // regionId
    shared_ptr<string> regId_ {};
    // Sample batch type
    shared_ptr<string> sampleBatchType_ {};
    // Service list.
    shared_ptr<string> serviceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
