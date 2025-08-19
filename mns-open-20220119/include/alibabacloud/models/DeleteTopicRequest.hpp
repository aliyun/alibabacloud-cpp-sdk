// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class DeleteTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    DeleteTopicRequest() = default ;
    DeleteTopicRequest(const DeleteTopicRequest &) = default ;
    DeleteTopicRequest(DeleteTopicRequest &&) = default ;
    DeleteTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTopicRequest() = default ;
    DeleteTopicRequest& operator=(const DeleteTopicRequest &) = default ;
    DeleteTopicRequest& operator=(DeleteTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topicName_ != nullptr; };
    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline DeleteTopicRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The name of the topic that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
