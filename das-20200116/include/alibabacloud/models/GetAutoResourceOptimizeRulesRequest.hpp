// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTORESOURCEOPTIMIZERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTORESOURCEOPTIMIZERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoResourceOptimizeRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoResourceOptimizeRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoResourceOptimizeRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    GetAutoResourceOptimizeRulesRequest() = default ;
    GetAutoResourceOptimizeRulesRequest(const GetAutoResourceOptimizeRulesRequest &) = default ;
    GetAutoResourceOptimizeRulesRequest(GetAutoResourceOptimizeRulesRequest &&) = default ;
    GetAutoResourceOptimizeRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoResourceOptimizeRulesRequest() = default ;
    GetAutoResourceOptimizeRulesRequest& operator=(const GetAutoResourceOptimizeRulesRequest &) = default ;
    GetAutoResourceOptimizeRulesRequest& operator=(GetAutoResourceOptimizeRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && return this->instanceIds_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string consoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline GetAutoResourceOptimizeRulesRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline GetAutoResourceOptimizeRulesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


  protected:
    // The reserved parameter.
    std::shared_ptr<string> consoleContext_ = nullptr;
    // The database instance IDs.
    // 
    // *   Specify the parameter value as a JSON array, such as `[\\"Database account 1\\",\\"Database account 2\\"]`. Separate database instance IDs with commas (,).
    // 
    // *   By default, if you leave this parameter empty, all database instances for which the automatic fragment recycling feature has been enabled within the current Alibaba Cloud account are returned. The following types of database instances are returned:
    // 
    //     *   Database instances for which the automatic fragment recycling feature is currently enabled.
    //     *   Database instances for which the automatic fragment recycling feature was once enabled but is currently disabled, including those for which DAS Enterprise Edition has been disabled but excluding those that have been released.
    std::shared_ptr<string> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
