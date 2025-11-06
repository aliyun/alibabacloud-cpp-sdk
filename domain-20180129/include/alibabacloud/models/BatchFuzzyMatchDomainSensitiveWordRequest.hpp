// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFUZZYMATCHDOMAINSENSITIVEWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHFUZZYMATCHDOMAINSENSITIVEWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class BatchFuzzyMatchDomainSensitiveWordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchFuzzyMatchDomainSensitiveWordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, BatchFuzzyMatchDomainSensitiveWordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    BatchFuzzyMatchDomainSensitiveWordRequest() = default ;
    BatchFuzzyMatchDomainSensitiveWordRequest(const BatchFuzzyMatchDomainSensitiveWordRequest &) = default ;
    BatchFuzzyMatchDomainSensitiveWordRequest(BatchFuzzyMatchDomainSensitiveWordRequest &&) = default ;
    BatchFuzzyMatchDomainSensitiveWordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchFuzzyMatchDomainSensitiveWordRequest() = default ;
    BatchFuzzyMatchDomainSensitiveWordRequest& operator=(const BatchFuzzyMatchDomainSensitiveWordRequest &) = default ;
    BatchFuzzyMatchDomainSensitiveWordRequest& operator=(BatchFuzzyMatchDomainSensitiveWordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->lang_ == nullptr && return this->userClientIp_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline BatchFuzzyMatchDomainSensitiveWordRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline BatchFuzzyMatchDomainSensitiveWordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline BatchFuzzyMatchDomainSensitiveWordRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
