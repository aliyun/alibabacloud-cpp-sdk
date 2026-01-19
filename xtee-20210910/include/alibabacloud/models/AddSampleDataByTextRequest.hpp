// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSAMPLEDATABYTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSAMPLEDATABYTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class AddSampleDataByTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSampleDataByTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(dataValue, dataValue_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleBatchUuid, sampleBatchUuid_);
    };
    friend void from_json(const Darabonba::Json& j, AddSampleDataByTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(dataValue, dataValue_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleBatchUuid, sampleBatchUuid_);
    };
    AddSampleDataByTextRequest() = default ;
    AddSampleDataByTextRequest(const AddSampleDataByTextRequest &) = default ;
    AddSampleDataByTextRequest(AddSampleDataByTextRequest &&) = default ;
    AddSampleDataByTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSampleDataByTextRequest() = default ;
    AddSampleDataByTextRequest& operator=(const AddSampleDataByTextRequest &) = default ;
    AddSampleDataByTextRequest& operator=(AddSampleDataByTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->dataValue_ == nullptr && this->regId_ == nullptr && this->sampleBatchUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddSampleDataByTextRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // dataValue Field Functions 
    bool hasDataValue() const { return this->dataValue_ != nullptr;};
    void deleteDataValue() { this->dataValue_ = nullptr;};
    inline string getDataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
    inline AddSampleDataByTextRequest& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline AddSampleDataByTextRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleBatchUuid Field Functions 
    bool hasSampleBatchUuid() const { return this->sampleBatchUuid_ != nullptr;};
    void deleteSampleBatchUuid() { this->sampleBatchUuid_ = nullptr;};
    inline string getSampleBatchUuid() const { DARABONBA_PTR_GET_DEFAULT(sampleBatchUuid_, "") };
    inline AddSampleDataByTextRequest& setSampleBatchUuid(string sampleBatchUuid) { DARABONBA_PTR_SET_VALUE(sampleBatchUuid_, sampleBatchUuid) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // List data.
    shared_ptr<string> dataValue_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Sample UUID.
    shared_ptr<string> sampleBatchUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
