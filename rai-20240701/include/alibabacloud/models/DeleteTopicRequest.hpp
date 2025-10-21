// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class DeleteTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TopicIdList, topicIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TopicIdList, topicIdList_);
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
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->topicIdList_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteTopicRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicIdList Field Functions 
    bool hasTopicIdList() const { return this->topicIdList_ != nullptr;};
    void deleteTopicIdList() { this->topicIdList_ = nullptr;};
    inline const vector<int64_t> & topicIdList() const { DARABONBA_PTR_GET_CONST(topicIdList_, vector<int64_t>) };
    inline vector<int64_t> topicIdList() { DARABONBA_PTR_GET(topicIdList_, vector<int64_t>) };
    inline DeleteTopicRequest& setTopicIdList(const vector<int64_t> & topicIdList) { DARABONBA_PTR_SET_VALUE(topicIdList_, topicIdList) };
    inline DeleteTopicRequest& setTopicIdList(vector<int64_t> && topicIdList) { DARABONBA_PTR_SET_RVALUE(topicIdList_, topicIdList) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<int64_t>> topicIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
