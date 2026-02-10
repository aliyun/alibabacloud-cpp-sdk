// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ExecStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecAction, execAction_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecAction, execAction_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    ExecStrategyRequest() = default ;
    ExecStrategyRequest(const ExecStrategyRequest &) = default ;
    ExecStrategyRequest(ExecStrategyRequest &&) = default ;
    ExecStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecStrategyRequest() = default ;
    ExecStrategyRequest& operator=(const ExecStrategyRequest &) = default ;
    ExecStrategyRequest& operator=(ExecStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execAction_ == nullptr
        && this->lang_ == nullptr && this->strategyId_ == nullptr; };
    // execAction Field Functions 
    bool hasExecAction() const { return this->execAction_ != nullptr;};
    void deleteExecAction() { this->execAction_ = nullptr;};
    inline string getExecAction() const { DARABONBA_PTR_GET_DEFAULT(execAction_, "") };
    inline ExecStrategyRequest& setExecAction(string execAction) { DARABONBA_PTR_SET_VALUE(execAction_, execAction) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExecStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int32_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0) };
    inline ExecStrategyRequest& setStrategyId(int32_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // Set the action for this execution, default is **exec**. Values:
    // - **exec**: Execute. - **terminate**: Terminate.
    shared_ptr<string> execAction_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the baseline check policy.
    // 
    // >  You can call the [DescribeStrategy](~~DescribeStrategy~~) operation to query the IDs of baseline check policies.
    shared_ptr<int32_t> strategyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
