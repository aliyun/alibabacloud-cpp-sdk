// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomType, customType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyIds, strategyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomType, customType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyIds, strategyIds_);
    };
    DescribeStrategyRequest() = default ;
    DescribeStrategyRequest(const DescribeStrategyRequest &) = default ;
    DescribeStrategyRequest(DescribeStrategyRequest &&) = default ;
    DescribeStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyRequest() = default ;
    DescribeStrategyRequest& operator=(const DescribeStrategyRequest &) = default ;
    DescribeStrategyRequest& operator=(DescribeStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customType_ == nullptr
        && this->lang_ == nullptr && this->sourceIp_ == nullptr && this->strategyIds_ == nullptr; };
    // customType Field Functions 
    bool hasCustomType() const { return this->customType_ != nullptr;};
    void deleteCustomType() { this->customType_ = nullptr;};
    inline string getCustomType() const { DARABONBA_PTR_GET_DEFAULT(customType_, "") };
    inline DescribeStrategyRequest& setCustomType(string customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeStrategyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyIds Field Functions 
    bool hasStrategyIds() const { return this->strategyIds_ != nullptr;};
    void deleteStrategyIds() { this->strategyIds_ = nullptr;};
    inline string getStrategyIds() const { DARABONBA_PTR_GET_DEFAULT(strategyIds_, "") };
    inline DescribeStrategyRequest& setStrategyIds(string strategyIds) { DARABONBA_PTR_SET_VALUE(strategyIds_, strategyIds) };


  protected:
    // The type of the baseline check policy that you want to query. Valid values:
    // 
    // *   **common**: standard baseline check policy
    // *   **custom**: custom baseline check policy
    shared_ptr<string> customType_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The ID of the baseline check policy that you want to query. Separate multiple IDs with commas (,).
    shared_ptr<string> strategyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
