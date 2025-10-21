// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICRESPONSEBODYTOPICINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICRESPONSEBODYTOPICINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTopicResponseBodyTopicInfoListPolicyInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListTopicResponseBodyTopicInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicResponseBodyTopicInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(PolicyInfoList, policyInfoList_);
      DARABONBA_PTR_TO_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicResponseBodyTopicInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(PolicyInfoList, policyInfoList_);
      DARABONBA_PTR_FROM_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    ListTopicResponseBodyTopicInfoList() = default ;
    ListTopicResponseBodyTopicInfoList(const ListTopicResponseBodyTopicInfoList &) = default ;
    ListTopicResponseBodyTopicInfoList(ListTopicResponseBodyTopicInfoList &&) = default ;
    ListTopicResponseBodyTopicInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicResponseBodyTopicInfoList() = default ;
    ListTopicResponseBodyTopicInfoList& operator=(const ListTopicResponseBodyTopicInfoList &) = default ;
    ListTopicResponseBodyTopicInfoList& operator=(ListTopicResponseBodyTopicInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtModified_ == nullptr
        && return this->policyInfoList_ == nullptr && return this->topicDefinition_ == nullptr && return this->topicId_ == nullptr && return this->topicName_ == nullptr; };
    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListTopicResponseBodyTopicInfoList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // policyInfoList Field Functions 
    bool hasPolicyInfoList() const { return this->policyInfoList_ != nullptr;};
    void deletePolicyInfoList() { this->policyInfoList_ = nullptr;};
    inline const vector<Models::ListTopicResponseBodyTopicInfoListPolicyInfoList> & policyInfoList() const { DARABONBA_PTR_GET_CONST(policyInfoList_, vector<Models::ListTopicResponseBodyTopicInfoListPolicyInfoList>) };
    inline vector<Models::ListTopicResponseBodyTopicInfoListPolicyInfoList> policyInfoList() { DARABONBA_PTR_GET(policyInfoList_, vector<Models::ListTopicResponseBodyTopicInfoListPolicyInfoList>) };
    inline ListTopicResponseBodyTopicInfoList& setPolicyInfoList(const vector<Models::ListTopicResponseBodyTopicInfoListPolicyInfoList> & policyInfoList) { DARABONBA_PTR_SET_VALUE(policyInfoList_, policyInfoList) };
    inline ListTopicResponseBodyTopicInfoList& setPolicyInfoList(vector<Models::ListTopicResponseBodyTopicInfoListPolicyInfoList> && policyInfoList) { DARABONBA_PTR_SET_RVALUE(policyInfoList_, policyInfoList) };


    // topicDefinition Field Functions 
    bool hasTopicDefinition() const { return this->topicDefinition_ != nullptr;};
    void deleteTopicDefinition() { this->topicDefinition_ = nullptr;};
    inline string topicDefinition() const { DARABONBA_PTR_GET_DEFAULT(topicDefinition_, "") };
    inline ListTopicResponseBodyTopicInfoList& setTopicDefinition(string topicDefinition) { DARABONBA_PTR_SET_VALUE(topicDefinition_, topicDefinition) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline ListTopicResponseBodyTopicInfoList& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListTopicResponseBodyTopicInfoList& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<vector<Models::ListTopicResponseBodyTopicInfoListPolicyInfoList>> policyInfoList_ = nullptr;
    std::shared_ptr<string> topicDefinition_ = nullptr;
    std::shared_ptr<int64_t> topicId_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
