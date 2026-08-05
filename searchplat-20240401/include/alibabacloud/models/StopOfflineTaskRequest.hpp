// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPOFFLINETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPOFFLINETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class StopOfflineTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopOfflineTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StopOfflineTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    StopOfflineTaskRequest() = default ;
    StopOfflineTaskRequest(const StopOfflineTaskRequest &) = default ;
    StopOfflineTaskRequest(StopOfflineTaskRequest &&) = default ;
    StopOfflineTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopOfflineTaskRequest() = default ;
    StopOfflineTaskRequest& operator=(const StopOfflineTaskRequest &) = default ;
    StopOfflineTaskRequest& operator=(StopOfflineTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parallelism_ == nullptr
        && this->timestamp_ == nullptr && this->regionId_ == nullptr; };
    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int32_t getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
    inline StopOfflineTaskRequest& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline StopOfflineTaskRequest& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopOfflineTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The parallelism of the node.
    shared_ptr<int32_t> parallelism_ {};
    // The start offset.
    shared_ptr<int64_t> timestamp_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
