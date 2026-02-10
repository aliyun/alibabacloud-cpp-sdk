// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMATCHEDMALICIOUSNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMATCHEDMALICIOUSNAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMatchedMaliciousNamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMatchedMaliciousNamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Levels, levels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMatchedMaliciousNamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
    };
    DescribeMatchedMaliciousNamesRequest() = default ;
    DescribeMatchedMaliciousNamesRequest(const DescribeMatchedMaliciousNamesRequest &) = default ;
    DescribeMatchedMaliciousNamesRequest(DescribeMatchedMaliciousNamesRequest &&) = default ;
    DescribeMatchedMaliciousNamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMatchedMaliciousNamesRequest() = default ;
    DescribeMatchedMaliciousNamesRequest& operator=(const DescribeMatchedMaliciousNamesRequest &) = default ;
    DescribeMatchedMaliciousNamesRequest& operator=(DescribeMatchedMaliciousNamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->levels_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeMatchedMaliciousNamesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string getLevels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline DescribeMatchedMaliciousNamesRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The severity of the malicious image sample that you want to query. You can enter multiple severities. Separate the severities with commas (,). Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    shared_ptr<string> levels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
