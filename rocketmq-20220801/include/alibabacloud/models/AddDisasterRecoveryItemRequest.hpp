// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDISASTERRECOVERYITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDISASTERRECOVERYITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDisasterRecoveryItemRequestTopics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class AddDisasterRecoveryItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDisasterRecoveryItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, AddDisasterRecoveryItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(topics, topics_);
    };
    AddDisasterRecoveryItemRequest() = default ;
    AddDisasterRecoveryItemRequest(const AddDisasterRecoveryItemRequest &) = default ;
    AddDisasterRecoveryItemRequest(AddDisasterRecoveryItemRequest &&) = default ;
    AddDisasterRecoveryItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDisasterRecoveryItemRequest() = default ;
    AddDisasterRecoveryItemRequest& operator=(const AddDisasterRecoveryItemRequest &) = default ;
    AddDisasterRecoveryItemRequest& operator=(AddDisasterRecoveryItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topics_ == nullptr; };
    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<AddDisasterRecoveryItemRequestTopics> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<AddDisasterRecoveryItemRequestTopics>) };
    inline vector<AddDisasterRecoveryItemRequestTopics> topics() { DARABONBA_PTR_GET(topics_, vector<AddDisasterRecoveryItemRequestTopics>) };
    inline AddDisasterRecoveryItemRequest& setTopics(const vector<AddDisasterRecoveryItemRequestTopics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline AddDisasterRecoveryItemRequest& setTopics(vector<AddDisasterRecoveryItemRequestTopics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    // Topics included in the backup mapping. Required.
    std::shared_ptr<vector<AddDisasterRecoveryItemRequestTopics>> topics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
