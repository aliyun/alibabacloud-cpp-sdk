// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDiagnoseReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lang, lang_);
    };
    DescribeDiagnoseReportRequest() = default ;
    DescribeDiagnoseReportRequest(const DescribeDiagnoseReportRequest &) = default ;
    DescribeDiagnoseReportRequest(DescribeDiagnoseReportRequest &&) = default ;
    DescribeDiagnoseReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportRequest() = default ;
    DescribeDiagnoseReportRequest& operator=(const DescribeDiagnoseReportRequest &) = default ;
    DescribeDiagnoseReportRequest& operator=(DescribeDiagnoseReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDiagnoseReportRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
