// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERSTATECLUSTERSTAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESCLUSTERSTATECLUSTERSTAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesClusterStateClusterStage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesClusterStateClusterStage& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentStage, currentStage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalStageWithWeight, totalStageWithWeight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesClusterStateClusterStage& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentStage, currentStage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalStageWithWeight, totalStageWithWeight_);
    };
    DescribeInstancesResponseBodyInstancesClusterStateClusterStage() = default ;
    DescribeInstancesResponseBodyInstancesClusterStateClusterStage(const DescribeInstancesResponseBodyInstancesClusterStateClusterStage &) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateClusterStage(DescribeInstancesResponseBodyInstancesClusterStateClusterStage &&) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateClusterStage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesClusterStateClusterStage() = default ;
    DescribeInstancesResponseBodyInstancesClusterStateClusterStage& operator=(const DescribeInstancesResponseBodyInstancesClusterStateClusterStage &) = default ;
    DescribeInstancesResponseBodyInstancesClusterStateClusterStage& operator=(DescribeInstancesResponseBodyInstancesClusterStateClusterStage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->currentStage_ == nullptr && return this->message_ == nullptr && return this->status_ == nullptr && return this->totalStageWithWeight_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterStateClusterStage& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentStage Field Functions 
    bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
    void deleteCurrentStage() { this->currentStage_ = nullptr;};
    inline int32_t currentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, 0) };
    inline DescribeInstancesResponseBodyInstancesClusterStateClusterStage& setCurrentStage(int32_t currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterStateClusterStage& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesResponseBodyInstancesClusterStateClusterStage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalStageWithWeight Field Functions 
    bool hasTotalStageWithWeight() const { return this->totalStageWithWeight_ != nullptr;};
    void deleteTotalStageWithWeight() { this->totalStageWithWeight_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight> & totalStageWithWeight() const { DARABONBA_PTR_GET_CONST(totalStageWithWeight_, vector<Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight> totalStageWithWeight() { DARABONBA_PTR_GET(totalStageWithWeight_, vector<Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight>) };
    inline DescribeInstancesResponseBodyInstancesClusterStateClusterStage& setTotalStageWithWeight(const vector<Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight> & totalStageWithWeight) { DARABONBA_PTR_SET_VALUE(totalStageWithWeight_, totalStageWithWeight) };
    inline DescribeInstancesResponseBodyInstancesClusterStateClusterStage& setTotalStageWithWeight(vector<Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight> && totalStageWithWeight) { DARABONBA_PTR_SET_RVALUE(totalStageWithWeight_, totalStageWithWeight) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<int32_t> currentStage_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesClusterStateClusterStageTotalStageWithWeight>> totalStageWithWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
