// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDISASTERRECOVERYITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDISASTERRECOVERYITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDisasterRecoveryItemRequestTopics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateDisasterRecoveryItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDisasterRecoveryItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDisasterRecoveryItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(topics, topics_);
    };
    UpdateDisasterRecoveryItemRequest() = default ;
    UpdateDisasterRecoveryItemRequest(const UpdateDisasterRecoveryItemRequest &) = default ;
    UpdateDisasterRecoveryItemRequest(UpdateDisasterRecoveryItemRequest &&) = default ;
    UpdateDisasterRecoveryItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDisasterRecoveryItemRequest() = default ;
    UpdateDisasterRecoveryItemRequest& operator=(const UpdateDisasterRecoveryItemRequest &) = default ;
    UpdateDisasterRecoveryItemRequest& operator=(UpdateDisasterRecoveryItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topics_ != nullptr; };
    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<UpdateDisasterRecoveryItemRequestTopics> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<UpdateDisasterRecoveryItemRequestTopics>) };
    inline vector<UpdateDisasterRecoveryItemRequestTopics> topics() { DARABONBA_PTR_GET(topics_, vector<UpdateDisasterRecoveryItemRequestTopics>) };
    inline UpdateDisasterRecoveryItemRequest& setTopics(const vector<UpdateDisasterRecoveryItemRequestTopics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline UpdateDisasterRecoveryItemRequest& setTopics(vector<UpdateDisasterRecoveryItemRequestTopics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    // The topics involved in the topic mapping.
    std::shared_ptr<vector<UpdateDisasterRecoveryItemRequestTopics>> topics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
