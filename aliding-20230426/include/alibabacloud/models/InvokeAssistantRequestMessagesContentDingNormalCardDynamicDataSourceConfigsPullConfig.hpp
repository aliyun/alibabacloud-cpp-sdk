// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGNORMALCARDDYNAMICDATASOURCECONFIGSPULLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGNORMALCARDDYNAMICDATASOURCECONFIGSPULLCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig& obj) { 
      DARABONBA_PTR_TO_JSON(interval, interval_);
      DARABONBA_PTR_TO_JSON(pullStrategy, pullStrategy_);
      DARABONBA_PTR_TO_JSON(timeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(interval, interval_);
      DARABONBA_PTR_FROM_JSON(pullStrategy, pullStrategy_);
      DARABONBA_PTR_FROM_JSON(timeUnit, timeUnit_);
    };
    InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig() = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig(const InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig &) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig(InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig &&) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig() = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig& operator=(const InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig &) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig& operator=(InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->interval_ != nullptr
        && this->pullStrategy_ != nullptr && this->timeUnit_ != nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // pullStrategy Field Functions 
    bool hasPullStrategy() const { return this->pullStrategy_ != nullptr;};
    void deletePullStrategy() { this->pullStrategy_ = nullptr;};
    inline string pullStrategy() const { DARABONBA_PTR_GET_DEFAULT(pullStrategy_, "") };
    inline InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig& setPullStrategy(string pullStrategy) { DARABONBA_PTR_SET_VALUE(pullStrategy_, pullStrategy) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<string> pullStrategy_ = nullptr;
    std::shared_ptr<string> timeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
