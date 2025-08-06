// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSTOPICLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSTOPICLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerProgressResponseBodyConsumerProgressTopicList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerProgressResponseBodyConsumerProgressTopicList& obj) { 
      DARABONBA_PTR_TO_JSON(TopicList, topicList_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerProgressResponseBodyConsumerProgressTopicList& obj) { 
      DARABONBA_PTR_FROM_JSON(TopicList, topicList_);
    };
    GetConsumerProgressResponseBodyConsumerProgressTopicList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicList(const GetConsumerProgressResponseBodyConsumerProgressTopicList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicList(GetConsumerProgressResponseBodyConsumerProgressTopicList &&) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicList& operator=(const GetConsumerProgressResponseBodyConsumerProgressTopicList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicList& operator=(GetConsumerProgressResponseBodyConsumerProgressTopicList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topicList_ != nullptr; };
    // topicList Field Functions 
    bool hasTopicList() const { return this->topicList_ != nullptr;};
    void deleteTopicList() { this->topicList_ = nullptr;};
    inline const vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList> & topicList() const { DARABONBA_PTR_GET_CONST(topicList_, vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList>) };
    inline vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList> topicList() { DARABONBA_PTR_GET(topicList_, vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList>) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicList& setTopicList(const vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList> & topicList) { DARABONBA_PTR_SET_VALUE(topicList_, topicList) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicList& setTopicList(vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList> && topicList) { DARABONBA_PTR_SET_RVALUE(topicList_, topicList) };


  protected:
    std::shared_ptr<vector<Models::GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList>> topicList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
