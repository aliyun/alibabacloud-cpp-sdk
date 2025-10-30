// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSAMPLEDATABYCSVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSAMPLEDATABYCSVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class AddSampleDataByCsvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSampleDataByCsvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ossFileName, ossFileName_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleBatchUuid, sampleBatchUuid_);
    };
    friend void from_json(const Darabonba::Json& j, AddSampleDataByCsvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ossFileName, ossFileName_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleBatchUuid, sampleBatchUuid_);
    };
    AddSampleDataByCsvRequest() = default ;
    AddSampleDataByCsvRequest(const AddSampleDataByCsvRequest &) = default ;
    AddSampleDataByCsvRequest(AddSampleDataByCsvRequest &&) = default ;
    AddSampleDataByCsvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSampleDataByCsvRequest() = default ;
    AddSampleDataByCsvRequest& operator=(const AddSampleDataByCsvRequest &) = default ;
    AddSampleDataByCsvRequest& operator=(AddSampleDataByCsvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->ossFileName_ == nullptr && return this->regId_ == nullptr && return this->sampleBatchUuid_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddSampleDataByCsvRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ossFileName Field Functions 
    bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
    void deleteOssFileName() { this->ossFileName_ = nullptr;};
    inline string ossFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
    inline AddSampleDataByCsvRequest& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline AddSampleDataByCsvRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleBatchUuid Field Functions 
    bool hasSampleBatchUuid() const { return this->sampleBatchUuid_ != nullptr;};
    void deleteSampleBatchUuid() { this->sampleBatchUuid_ = nullptr;};
    inline string sampleBatchUuid() const { DARABONBA_PTR_GET_DEFAULT(sampleBatchUuid_, "") };
    inline AddSampleDataByCsvRequest& setSampleBatchUuid(string sampleBatchUuid) { DARABONBA_PTR_SET_VALUE(sampleBatchUuid_, sampleBatchUuid) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Uploaded OSS address.
    std::shared_ptr<string> ossFileName_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Sample UUID.
    std::shared_ptr<string> sampleBatchUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
