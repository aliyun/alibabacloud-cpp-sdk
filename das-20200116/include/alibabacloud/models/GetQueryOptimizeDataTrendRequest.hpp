// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATATRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATATRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeDataTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeDataTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeDataTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
    };
    GetQueryOptimizeDataTrendRequest() = default ;
    GetQueryOptimizeDataTrendRequest(const GetQueryOptimizeDataTrendRequest &) = default ;
    GetQueryOptimizeDataTrendRequest(GetQueryOptimizeDataTrendRequest &&) = default ;
    GetQueryOptimizeDataTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeDataTrendRequest() = default ;
    GetQueryOptimizeDataTrendRequest& operator=(const GetQueryOptimizeDataTrendRequest &) = default ;
    GetQueryOptimizeDataTrendRequest& operator=(GetQueryOptimizeDataTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->engine_ == nullptr && return this->instanceIds_ == nullptr && return this->region_ == nullptr && return this->start_ == nullptr && return this->tagNames_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline GetQueryOptimizeDataTrendRequest& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetQueryOptimizeDataTrendRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline GetQueryOptimizeDataTrendRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQueryOptimizeDataTrendRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline GetQueryOptimizeDataTrendRequest& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // tagNames Field Functions 
    bool hasTagNames() const { return this->tagNames_ != nullptr;};
    void deleteTagNames() { this->tagNames_ = nullptr;};
    inline string tagNames() const { DARABONBA_PTR_GET_DEFAULT(tagNames_, "") };
    inline GetQueryOptimizeDataTrendRequest& setTagNames(string tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };


  protected:
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time, but not later than 00:00:00 (UTC+8) on the current day.
    // 
    // This parameter is required.
    std::shared_ptr<string> end_ = nullptr;
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
    // *   **cn-china**: Chinese mainland.
    // *   **cn-hongkong**: China (Hong Kong).
    // *   **ap-southeast-1**: Singapore.
    // 
    // This parameter takes effect only if **InstanceIds** is left empty. If you leave **InstanceIds** empty, the system obtains data from the region specified by **Region**. By default, Region is set to **cn-china**. If you specify **InstanceIds**, **Region** does not take effect and the system obtains data from the region in which the first specified instance resides.****
    // 
    // >  If your instances reside in the regions inside the Chinese mainland, set this parameter to **cn-china**.
    std::shared_ptr<string> region_ = nullptr;
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  You can specify a start time up to two months earlier than the current time.
    // 
    // This parameter is required.
    std::shared_ptr<string> start_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> tagNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
