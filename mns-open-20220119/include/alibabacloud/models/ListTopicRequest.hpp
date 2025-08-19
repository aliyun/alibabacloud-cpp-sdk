// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTopicRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    ListTopicRequest() = default ;
    ListTopicRequest(const ListTopicRequest &) = default ;
    ListTopicRequest(ListTopicRequest &&) = default ;
    ListTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicRequest() = default ;
    ListTopicRequest& operator=(const ListTopicRequest &) = default ;
    ListTopicRequest& operator=(ListTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNum_ != nullptr
        && this->pageSize_ != nullptr && this->tag_ != nullptr && this->topicName_ != nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListTopicRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTopicRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListTopicRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListTopicRequestTag>) };
    inline vector<ListTopicRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListTopicRequestTag>) };
    inline ListTopicRequest& setTag(const vector<ListTopicRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTopicRequest& setTag(vector<ListTopicRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListTopicRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The page number. Valid values: 1 to 100000000. If you set this parameter to a value smaller than 1, the value of this parameter is 1 by default. If you set this parameter to a value greater than 100000000, the value of this parameter is 100000000 by default.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // The number of entries per page. Value values: 10 to 50. If you set this parameter to a value smaller than 10, the value of this parameter is 10 by default. If you set this parameter to a value greater than 50, the value of this parameter is 50 by default.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListTopicRequestTag>> tag_ = nullptr;
    // The name of the topic.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
