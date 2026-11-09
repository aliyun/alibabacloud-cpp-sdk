// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWILDCARDBYTOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWILDCARDBYTOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DeleteWildcardByTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWildcardByTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirstTopic, firstTopic_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Wildcards, wildcards_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWildcardByTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstTopic, firstTopic_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Wildcards, wildcards_);
    };
    DeleteWildcardByTopicRequest() = default ;
    DeleteWildcardByTopicRequest(const DeleteWildcardByTopicRequest &) = default ;
    DeleteWildcardByTopicRequest(DeleteWildcardByTopicRequest &&) = default ;
    DeleteWildcardByTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWildcardByTopicRequest() = default ;
    DeleteWildcardByTopicRequest& operator=(const DeleteWildcardByTopicRequest &) = default ;
    DeleteWildcardByTopicRequest& operator=(DeleteWildcardByTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstTopic_ == nullptr
        && this->instanceId_ == nullptr && this->wildcards_ == nullptr; };
    // firstTopic Field Functions 
    bool hasFirstTopic() const { return this->firstTopic_ != nullptr;};
    void deleteFirstTopic() { this->firstTopic_ = nullptr;};
    inline string getFirstTopic() const { DARABONBA_PTR_GET_DEFAULT(firstTopic_, "") };
    inline DeleteWildcardByTopicRequest& setFirstTopic(string firstTopic) { DARABONBA_PTR_SET_VALUE(firstTopic_, firstTopic) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteWildcardByTopicRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // wildcards Field Functions 
    bool hasWildcards() const { return this->wildcards_ != nullptr;};
    void deleteWildcards() { this->wildcards_ = nullptr;};
    inline string getWildcards() const { DARABONBA_PTR_GET_DEFAULT(wildcards_, "") };
    inline DeleteWildcardByTopicRequest& setWildcards(string wildcards) { DARABONBA_PTR_SET_VALUE(wildcards_, wildcards) };


  protected:
    // The first-level topic.
    // 
    // This parameter is required.
    shared_ptr<string> firstTopic_ {};
    // The ID of the instance to which the group ID that you want to delete belongs.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The wildcard subscriptions to delete.
    // 
    // This parameter is required.
    shared_ptr<string> wildcards_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
