// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOPICREQUESTBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOPICREQUESTBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTopicRequestBodyDataTopicExampleInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateTopicRequestBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTopicRequestBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TopicExampleInfoList, topicExampleInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTopicRequestBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TopicExampleInfoList, topicExampleInfoList_);
    };
    UpdateTopicRequestBodyData() = default ;
    UpdateTopicRequestBodyData(const UpdateTopicRequestBodyData &) = default ;
    UpdateTopicRequestBodyData(UpdateTopicRequestBodyData &&) = default ;
    UpdateTopicRequestBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTopicRequestBodyData() = default ;
    UpdateTopicRequestBodyData& operator=(const UpdateTopicRequestBodyData &) = default ;
    UpdateTopicRequestBodyData& operator=(UpdateTopicRequestBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topicExampleInfoList_ == nullptr; };
    // topicExampleInfoList Field Functions 
    bool hasTopicExampleInfoList() const { return this->topicExampleInfoList_ != nullptr;};
    void deleteTopicExampleInfoList() { this->topicExampleInfoList_ = nullptr;};
    inline const vector<Models::UpdateTopicRequestBodyDataTopicExampleInfoList> & topicExampleInfoList() const { DARABONBA_PTR_GET_CONST(topicExampleInfoList_, vector<Models::UpdateTopicRequestBodyDataTopicExampleInfoList>) };
    inline vector<Models::UpdateTopicRequestBodyDataTopicExampleInfoList> topicExampleInfoList() { DARABONBA_PTR_GET(topicExampleInfoList_, vector<Models::UpdateTopicRequestBodyDataTopicExampleInfoList>) };
    inline UpdateTopicRequestBodyData& setTopicExampleInfoList(const vector<Models::UpdateTopicRequestBodyDataTopicExampleInfoList> & topicExampleInfoList) { DARABONBA_PTR_SET_VALUE(topicExampleInfoList_, topicExampleInfoList) };
    inline UpdateTopicRequestBodyData& setTopicExampleInfoList(vector<Models::UpdateTopicRequestBodyDataTopicExampleInfoList> && topicExampleInfoList) { DARABONBA_PTR_SET_RVALUE(topicExampleInfoList_, topicExampleInfoList) };


  protected:
    std::shared_ptr<vector<Models::UpdateTopicRequestBodyDataTopicExampleInfoList>> topicExampleInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
