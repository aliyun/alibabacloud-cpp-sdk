// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEIMAGEBASELINESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEIMAGEBASELINESTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SaveImageBaselineStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveImageBaselineStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItemList, baselineItemList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, SaveImageBaselineStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItemList, baselineItemList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    SaveImageBaselineStrategyRequest() = default ;
    SaveImageBaselineStrategyRequest(const SaveImageBaselineStrategyRequest &) = default ;
    SaveImageBaselineStrategyRequest(SaveImageBaselineStrategyRequest &&) = default ;
    SaveImageBaselineStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveImageBaselineStrategyRequest() = default ;
    SaveImageBaselineStrategyRequest& operator=(const SaveImageBaselineStrategyRequest &) = default ;
    SaveImageBaselineStrategyRequest& operator=(SaveImageBaselineStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineItemList_ == nullptr
        && this->lang_ == nullptr && this->source_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr; };
    // baselineItemList Field Functions 
    bool hasBaselineItemList() const { return this->baselineItemList_ != nullptr;};
    void deleteBaselineItemList() { this->baselineItemList_ = nullptr;};
    inline string getBaselineItemList() const { DARABONBA_PTR_GET_DEFAULT(baselineItemList_, "") };
    inline SaveImageBaselineStrategyRequest& setBaselineItemList(string baselineItemList) { DARABONBA_PTR_SET_VALUE(baselineItemList_, baselineItemList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveImageBaselineStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SaveImageBaselineStrategyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline SaveImageBaselineStrategyRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline SaveImageBaselineStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The baseline check items.
    // 
    // > You can call the [DescribeImageBaselineStrategy](~~DescribeImageBaselineStrategy~~) operation to query baseline check items.
    // 
    // This parameter is required.
    shared_ptr<string> baselineItemList_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The data source. If this parameter is left empty, the baseline check policy for images is queried. Valid values:
    // 
    // *   **default**: the baseline check policy for images
    // *   **agentless**: agentless detection
    shared_ptr<string> source_ {};
    // The ID of the baseline check policy.
    // 
    // > You can call the [DescribeImageBaselineStrategy](~~DescribeImageBaselineStrategy~~) operation to query the IDs of baseline check policies.
    shared_ptr<int64_t> strategyId_ {};
    // The name of the baseline check policy.
    shared_ptr<string> strategyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
