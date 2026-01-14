// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPLAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPLAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerGroupLagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupLagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(liteTopicName, liteTopicName_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupLagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(liteTopicName, liteTopicName_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    GetConsumerGroupLagRequest() = default ;
    GetConsumerGroupLagRequest(const GetConsumerGroupLagRequest &) = default ;
    GetConsumerGroupLagRequest(GetConsumerGroupLagRequest &&) = default ;
    GetConsumerGroupLagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupLagRequest() = default ;
    GetConsumerGroupLagRequest& operator=(const GetConsumerGroupLagRequest &) = default ;
    GetConsumerGroupLagRequest& operator=(GetConsumerGroupLagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liteTopicName_ == nullptr
        && this->topicName_ == nullptr; };
    // liteTopicName Field Functions 
    bool hasLiteTopicName() const { return this->liteTopicName_ != nullptr;};
    void deleteLiteTopicName() { this->liteTopicName_ = nullptr;};
    inline string getLiteTopicName() const { DARABONBA_PTR_GET_DEFAULT(liteTopicName_, "") };
    inline GetConsumerGroupLagRequest& setLiteTopicName(string liteTopicName) { DARABONBA_PTR_SET_VALUE(liteTopicName_, liteTopicName) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetConsumerGroupLagRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    shared_ptr<string> liteTopicName_ {};
    // The topic name.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
