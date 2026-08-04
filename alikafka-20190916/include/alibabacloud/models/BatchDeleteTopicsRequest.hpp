// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETETOPICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETETOPICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class BatchDeleteTopicsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteTopicsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteTopicsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
    };
    BatchDeleteTopicsRequest() = default ;
    BatchDeleteTopicsRequest(const BatchDeleteTopicsRequest &) = default ;
    BatchDeleteTopicsRequest(BatchDeleteTopicsRequest &&) = default ;
    BatchDeleteTopicsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteTopicsRequest() = default ;
    BatchDeleteTopicsRequest& operator=(const BatchDeleteTopicsRequest &) = default ;
    BatchDeleteTopicsRequest& operator=(BatchDeleteTopicsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->topics_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchDeleteTopicsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchDeleteTopicsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> getTopics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline BatchDeleteTopicsRequest& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline BatchDeleteTopicsRequest& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<string>> topics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
