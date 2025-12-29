// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTRESPONSEBODYDATACONTENTEXECUTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTRESPONSEBODYDATACONTENTEXECUTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListCustomAgentResponseBodyDataContentExecutionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentResponseBodyDataContentExecutionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SkipPlan, skipPlan_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentResponseBodyDataContentExecutionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SkipPlan, skipPlan_);
    };
    ListCustomAgentResponseBodyDataContentExecutionConfig() = default ;
    ListCustomAgentResponseBodyDataContentExecutionConfig(const ListCustomAgentResponseBodyDataContentExecutionConfig &) = default ;
    ListCustomAgentResponseBodyDataContentExecutionConfig(ListCustomAgentResponseBodyDataContentExecutionConfig &&) = default ;
    ListCustomAgentResponseBodyDataContentExecutionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentResponseBodyDataContentExecutionConfig() = default ;
    ListCustomAgentResponseBodyDataContentExecutionConfig& operator=(const ListCustomAgentResponseBodyDataContentExecutionConfig &) = default ;
    ListCustomAgentResponseBodyDataContentExecutionConfig& operator=(ListCustomAgentResponseBodyDataContentExecutionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skipPlan_ == nullptr; };
    // skipPlan Field Functions 
    bool hasSkipPlan() const { return this->skipPlan_ != nullptr;};
    void deleteSkipPlan() { this->skipPlan_ = nullptr;};
    inline bool skipPlan() const { DARABONBA_PTR_GET_DEFAULT(skipPlan_, false) };
    inline ListCustomAgentResponseBodyDataContentExecutionConfig& setSkipPlan(bool skipPlan) { DARABONBA_PTR_SET_VALUE(skipPlan_, skipPlan) };


  protected:
    std::shared_ptr<bool> skipPlan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
