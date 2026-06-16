// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSAMPLEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSAMPLEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DownloadSampleFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSampleFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSampleFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SampleId, sampleId_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
    };
    DownloadSampleFileRequest() = default ;
    DownloadSampleFileRequest(const DownloadSampleFileRequest &) = default ;
    DownloadSampleFileRequest(DownloadSampleFileRequest &&) = default ;
    DownloadSampleFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSampleFileRequest() = default ;
    DownloadSampleFileRequest& operator=(const DownloadSampleFileRequest &) = default ;
    DownloadSampleFileRequest& operator=(DownloadSampleFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->sampleId_ == nullptr && this->tab_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DownloadSampleFileRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DownloadSampleFileRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleId Field Functions 
    bool hasSampleId() const { return this->sampleId_ != nullptr;};
    void deleteSampleId() { this->sampleId_ = nullptr;};
    inline int32_t getSampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, 0) };
    inline DownloadSampleFileRequest& setSampleId(int32_t sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline DownloadSampleFileRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


  protected:
    // Language of error messages returned by the API. Valid values: zh: Chinese. en: English. Default value: en.
    shared_ptr<string> lang_ {};
    // Area encoding.
    shared_ptr<string> regId_ {};
    // Sample ID.
    shared_ptr<int32_t> sampleId_ {};
    // Scenario.
    shared_ptr<string> tab_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
