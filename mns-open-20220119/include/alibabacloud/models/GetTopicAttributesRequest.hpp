// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicAttributesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetTopicAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetTopicAttributesRequest() = default ;
    GetTopicAttributesRequest(const GetTopicAttributesRequest &) = default ;
    GetTopicAttributesRequest(GetTopicAttributesRequest &&) = default ;
    GetTopicAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicAttributesRequest() = default ;
    GetTopicAttributesRequest& operator=(const GetTopicAttributesRequest &) = default ;
    GetTopicAttributesRequest& operator=(GetTopicAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr
        && this->topicName_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetTopicAttributesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetTopicAttributesRequestTag>) };
    inline vector<GetTopicAttributesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<GetTopicAttributesRequestTag>) };
    inline GetTopicAttributesRequest& setTag(const vector<GetTopicAttributesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetTopicAttributesRequest& setTag(vector<GetTopicAttributesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTopicAttributesRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The tag.
    std::shared_ptr<vector<GetTopicAttributesRequestTag>> tag_ = nullptr;
    // The name of the topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
