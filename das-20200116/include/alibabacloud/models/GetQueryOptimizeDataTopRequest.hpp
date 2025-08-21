// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATATOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATATOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeDataTopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeDataTopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeDataTopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetQueryOptimizeDataTopRequest() = default ;
    GetQueryOptimizeDataTopRequest(const GetQueryOptimizeDataTopRequest &) = default ;
    GetQueryOptimizeDataTopRequest(GetQueryOptimizeDataTopRequest &&) = default ;
    GetQueryOptimizeDataTopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeDataTopRequest() = default ;
    GetQueryOptimizeDataTopRequest& operator=(const GetQueryOptimizeDataTopRequest &) = default ;
    GetQueryOptimizeDataTopRequest& operator=(GetQueryOptimizeDataTopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engine_ != nullptr
        && this->instanceIds_ != nullptr && this->region_ != nullptr && this->tagNames_ != nullptr && this->time_ != nullptr && this->type_ != nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetQueryOptimizeDataTopRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline GetQueryOptimizeDataTopRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQueryOptimizeDataTopRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tagNames Field Functions 
    bool hasTagNames() const { return this->tagNames_ != nullptr;};
    void deleteTagNames() { this->tagNames_ = nullptr;};
    inline string tagNames() const { DARABONBA_PTR_GET_DEFAULT(tagNames_, "") };
    inline GetQueryOptimizeDataTopRequest& setTagNames(string tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetQueryOptimizeDataTopRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetQueryOptimizeDataTopRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PolarDBMySQL**
    // *   **PostgreSQL**
    // 
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // The instance IDs. Separate multiple IDs with commas (,).
    std::shared_ptr<string> instanceIds_ = nullptr;
    // The region in which the instance resides. Valid values:
    // 
    // *   **cn-china**: Chinese mainland
    // *   **cn-hongkong**: China (Hong Kong)
    // *   **ap-southeast-1**: Singapore
    // 
    // This parameter takes effect only if **InstanceIds** is left empty. If you leave **InstanceIds** empty, the system obtains data from the region set by **Region**. By default, Region is set to **cn-china**. If you specify **InstanceIds**, **Region** does not take effect and the system obtains data from the region in which the first specified instance resides.****
    // 
    // >  Set this parameter to **cn-china** for all your instances that reside in the regions in the Chinese mainland.
    std::shared_ptr<string> region_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> tagNames_ = nullptr;
    // The time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> time_ = nullptr;
    // The type of instances that you want to query. Valid values:
    // 
    // *   **RED**: the best-performing instances
    // *   **BLACK**: the worst-performing instances
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
