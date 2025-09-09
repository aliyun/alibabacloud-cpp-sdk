// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanAvailableConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanAvailableConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanAvailableConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeGtmRecoveryPlanAvailableConfigRequest() = default ;
    DescribeGtmRecoveryPlanAvailableConfigRequest(const DescribeGtmRecoveryPlanAvailableConfigRequest &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigRequest(DescribeGtmRecoveryPlanAvailableConfigRequest &&) = default ;
    DescribeGtmRecoveryPlanAvailableConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanAvailableConfigRequest() = default ;
    DescribeGtmRecoveryPlanAvailableConfigRequest& operator=(const DescribeGtmRecoveryPlanAvailableConfigRequest &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigRequest& operator=(DescribeGtmRecoveryPlanAvailableConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGtmRecoveryPlanAvailableConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language in which the returned results are displayed. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
