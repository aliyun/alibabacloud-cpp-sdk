// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZERULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZERULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeRuleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeRuleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeRuleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
    };
    GetQueryOptimizeRuleListRequest() = default ;
    GetQueryOptimizeRuleListRequest(const GetQueryOptimizeRuleListRequest &) = default ;
    GetQueryOptimizeRuleListRequest(GetQueryOptimizeRuleListRequest &&) = default ;
    GetQueryOptimizeRuleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeRuleListRequest() = default ;
    GetQueryOptimizeRuleListRequest& operator=(const GetQueryOptimizeRuleListRequest &) = default ;
    GetQueryOptimizeRuleListRequest& operator=(GetQueryOptimizeRuleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && this->instanceIds_ == nullptr && this->region_ == nullptr && this->tagNames_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetQueryOptimizeRuleListRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline GetQueryOptimizeRuleListRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQueryOptimizeRuleListRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tagNames Field Functions 
    bool hasTagNames() const { return this->tagNames_ != nullptr;};
    void deleteTagNames() { this->tagNames_ = nullptr;};
    inline string getTagNames() const { DARABONBA_PTR_GET_DEFAULT(tagNames_, "") };
    inline GetQueryOptimizeRuleListRequest& setTagNames(string tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };


  protected:
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PolarDBMySQL**
    // *   **PostgreSQL**
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The instance IDs. Separate multiple IDs with commas (,).
    shared_ptr<string> instanceIds_ {};
    // The region in which the instance resides. Valid values:
    // 
    // *   **cn-china**: Chinese mainland
    // *   **cn-hongkong**: China (Hong Kong)
    // *   **ap-southeast-1**: Singapore
    // 
    // This parameter takes effect only if **InstanceIds** is left empty. If you leave **InstanceIds** empty, the system obtains data from the region set by **Region**. By default, Region is set to **cn-china**. If you specify **InstanceIds**, **Region** does not take effect and the system obtains data from the region in which the first specified instance resides.****
    // 
    // >  If your instances reside in the regions in the Chinese mainland, set this parameter to **cn-china**.
    shared_ptr<string> region_ {};
    // A reserved parameter.
    shared_ptr<string> tagNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
