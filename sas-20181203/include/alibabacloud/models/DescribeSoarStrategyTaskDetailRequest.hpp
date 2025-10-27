// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTaskDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTaskDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StrategyTaskId, strategyTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTaskDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StrategyTaskId, strategyTaskId_);
    };
    DescribeSoarStrategyTaskDetailRequest() = default ;
    DescribeSoarStrategyTaskDetailRequest(const DescribeSoarStrategyTaskDetailRequest &) = default ;
    DescribeSoarStrategyTaskDetailRequest(DescribeSoarStrategyTaskDetailRequest &&) = default ;
    DescribeSoarStrategyTaskDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTaskDetailRequest() = default ;
    DescribeSoarStrategyTaskDetailRequest& operator=(const DescribeSoarStrategyTaskDetailRequest &) = default ;
    DescribeSoarStrategyTaskDetailRequest& operator=(DescribeSoarStrategyTaskDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->strategyTaskId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSoarStrategyTaskDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // strategyTaskId Field Functions 
    bool hasStrategyTaskId() const { return this->strategyTaskId_ != nullptr;};
    void deleteStrategyTaskId() { this->strategyTaskId_ = nullptr;};
    inline int64_t strategyTaskId() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskId_, 0L) };
    inline DescribeSoarStrategyTaskDetailRequest& setStrategyTaskId(int64_t strategyTaskId) { DARABONBA_PTR_SET_VALUE(strategyTaskId_, strategyTaskId) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the policy task.
    // 
    // >  You can call the [DescribeSoarStrategyTasks](~~DescribeSoarStrategyTasks~~) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> strategyTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
