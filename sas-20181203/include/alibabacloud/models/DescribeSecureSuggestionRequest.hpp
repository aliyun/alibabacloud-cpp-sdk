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
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecureSuggestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalType, calType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
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
        && this->lang_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->source_ == nullptr && this->sourceIp_ == nullptr; };
    // calType Field Functions 
    bool hasCalType() const { return this->calType_ != nullptr;};
    void deleteCalType() { this->calType_ = nullptr;};
    inline string getCalType() const { DARABONBA_PTR_GET_DEFAULT(calType_, "") };
    inline DescribeSecureSuggestionRequest& setCalType(string calType) { DARABONBA_PTR_SET_VALUE(calType_, calType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSecureSuggestionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeSecureSuggestionRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline DescribeSecureSuggestionRequest& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSecureSuggestionRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // Choose to query the new or old version of the security score rules. When the value is **home_security_score**, it queries the new version of the security score rules; otherwise, it defaults to querying the old version of the security score rules.
    shared_ptr<string> calType_ {};
    // The language type for request and response messages, default is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Resource directory member account ID (Alibaba Cloud account).
    // > You can obtain this parameter by calling the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) API.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // Source of the security score. If left empty, it defaults to Cloud Security Center. Enumerated values:
    // 
    // - 0: Cloud Security Center.
    // 
    // - 1: Yaochi Console.
    shared_ptr<int32_t> source_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
