// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    GetTopicRequest() = default ;
    GetTopicRequest(const GetTopicRequest &) = default ;
    GetTopicRequest(GetTopicRequest &&) = default ;
    GetTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicRequest() = default ;
    GetTopicRequest& operator=(const GetTopicRequest &) = default ;
    GetTopicRequest& operator=(GetTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topicId_ != nullptr; };
    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline GetTopicRequest& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // The event ID. You can call the [ListTopics](https://help.aliyun.com/document_detail/173973.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
