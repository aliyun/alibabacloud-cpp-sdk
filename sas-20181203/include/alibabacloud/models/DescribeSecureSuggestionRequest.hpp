// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecureSuggestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecureSuggestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalType, calType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecureSuggestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalType, calType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeSecureSuggestionRequest() = default ;
    DescribeSecureSuggestionRequest(const DescribeSecureSuggestionRequest &) = default ;
    DescribeSecureSuggestionRequest(DescribeSecureSuggestionRequest &&) = default ;
    DescribeSecureSuggestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecureSuggestionRequest() = default ;
    DescribeSecureSuggestionRequest& operator=(const DescribeSecureSuggestionRequest &) = default ;
    DescribeSecureSuggestionRequest& operator=(DescribeSecureSuggestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calType_ == nullptr
        && return this->lang_ == nullptr && return this->source_ == nullptr && return this->sourceIp_ == nullptr; };
    // calType Field Functions 
    bool hasCalType() const { return this->calType_ != nullptr;};
    void deleteCalType() { this->calType_ = nullptr;};
    inline string calType() const { DARABONBA_PTR_GET_DEFAULT(calType_, "") };
    inline DescribeSecureSuggestionRequest& setCalType(string calType) { DARABONBA_PTR_SET_VALUE(calType_, calType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSecureSuggestionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline DescribeSecureSuggestionRequest& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSecureSuggestionRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The old or new version of the security score rule. If you set this parameter to **home_security_score**, the new version of the security score rule is returned. Otherwise, the old version of the security score rule is returned.
    std::shared_ptr<string> calType_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Source of security score, default is Cloud Security Center if left empty. Enum values: 
    // 
    // - 0:Cloud Security Center. 
    // 
    // - 1:Yaochi Console.
    std::shared_ptr<int32_t> source_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
