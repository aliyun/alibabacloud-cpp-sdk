// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICINFLUENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICINFLUENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetTopicInfluenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicInfluenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicInfluenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    GetTopicInfluenceRequest() = default ;
    GetTopicInfluenceRequest(const GetTopicInfluenceRequest &) = default ;
    GetTopicInfluenceRequest(GetTopicInfluenceRequest &&) = default ;
    GetTopicInfluenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicInfluenceRequest() = default ;
    GetTopicInfluenceRequest& operator=(const GetTopicInfluenceRequest &) = default ;
    GetTopicInfluenceRequest& operator=(GetTopicInfluenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topicId_ != nullptr; };
    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline GetTopicInfluenceRequest& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // The ID of the event.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
