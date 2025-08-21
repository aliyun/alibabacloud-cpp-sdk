// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDiagnosisSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lang, lang_);
    };
    DescribeDiagnosisSettingsRequest() = default ;
    DescribeDiagnosisSettingsRequest(const DescribeDiagnosisSettingsRequest &) = default ;
    DescribeDiagnosisSettingsRequest(DescribeDiagnosisSettingsRequest &&) = default ;
    DescribeDiagnosisSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSettingsRequest() = default ;
    DescribeDiagnosisSettingsRequest& operator=(const DescribeDiagnosisSettingsRequest &) = default ;
    DescribeDiagnosisSettingsRequest& operator=(DescribeDiagnosisSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDiagnosisSettingsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language of the returned result. Default value: en.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
