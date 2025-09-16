// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERSTAGE_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERSTAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StageWithWeight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ClusterStage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterStage& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentStage, currentStage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalStageWithWeight, totalStageWithWeight_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterStage& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentStage, currentStage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalStageWithWeight, totalStageWithWeight_);
    };
    ClusterStage() = default ;
    ClusterStage(const ClusterStage &) = default ;
    ClusterStage(ClusterStage &&) = default ;
    ClusterStage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterStage() = default ;
    ClusterStage& operator=(const ClusterStage &) = default ;
    ClusterStage& operator=(ClusterStage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentStage_ != nullptr
        && this->message_ != nullptr && this->status_ != nullptr && this->totalStageWithWeight_ != nullptr; };
    // currentStage Field Functions 
    bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
    void deleteCurrentStage() { this->currentStage_ = nullptr;};
    inline int32_t currentStage() const { DARABONBA_PTR_GET_DEFAULT(currentStage_, 0) };
    inline ClusterStage& setCurrentStage(int32_t currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClusterStage& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ClusterStage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalStageWithWeight Field Functions 
    bool hasTotalStageWithWeight() const { return this->totalStageWithWeight_ != nullptr;};
    void deleteTotalStageWithWeight() { this->totalStageWithWeight_ = nullptr;};
    inline const vector<StageWithWeight> & totalStageWithWeight() const { DARABONBA_PTR_GET_CONST(totalStageWithWeight_, vector<StageWithWeight>) };
    inline vector<StageWithWeight> totalStageWithWeight() { DARABONBA_PTR_GET(totalStageWithWeight_, vector<StageWithWeight>) };
    inline ClusterStage& setTotalStageWithWeight(const vector<StageWithWeight> & totalStageWithWeight) { DARABONBA_PTR_SET_VALUE(totalStageWithWeight_, totalStageWithWeight) };
    inline ClusterStage& setTotalStageWithWeight(vector<StageWithWeight> && totalStageWithWeight) { DARABONBA_PTR_SET_RVALUE(totalStageWithWeight_, totalStageWithWeight) };


  protected:
    std::shared_ptr<int32_t> currentStage_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<StageWithWeight>> totalStageWithWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
