// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOPICREQUESTBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATETOPICREQUESTBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTopicRequestBodyDataTopicExampleInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreateTopicRequestBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTopicRequestBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TopicExampleInfoList, topicExampleInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTopicRequestBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TopicExampleInfoList, topicExampleInfoList_);
    };
    CreateTopicRequestBodyData() = default ;
    CreateTopicRequestBodyData(const CreateTopicRequestBodyData &) = default ;
    CreateTopicRequestBodyData(CreateTopicRequestBodyData &&) = default ;
    CreateTopicRequestBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTopicRequestBodyData() = default ;
    CreateTopicRequestBodyData& operator=(const CreateTopicRequestBodyData &) = default ;
    CreateTopicRequestBodyData& operator=(CreateTopicRequestBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topicExampleInfoList_ == nullptr; };
    // topicExampleInfoList Field Functions 
    bool hasTopicExampleInfoList() const { return this->topicExampleInfoList_ != nullptr;};
    void deleteTopicExampleInfoList() { this->topicExampleInfoList_ = nullptr;};
    inline const vector<Models::CreateTopicRequestBodyDataTopicExampleInfoList> & topicExampleInfoList() const { DARABONBA_PTR_GET_CONST(topicExampleInfoList_, vector<Models::CreateTopicRequestBodyDataTopicExampleInfoList>) };
    inline vector<Models::CreateTopicRequestBodyDataTopicExampleInfoList> topicExampleInfoList() { DARABONBA_PTR_GET(topicExampleInfoList_, vector<Models::CreateTopicRequestBodyDataTopicExampleInfoList>) };
    inline CreateTopicRequestBodyData& setTopicExampleInfoList(const vector<Models::CreateTopicRequestBodyDataTopicExampleInfoList> & topicExampleInfoList) { DARABONBA_PTR_SET_VALUE(topicExampleInfoList_, topicExampleInfoList) };
    inline CreateTopicRequestBodyData& setTopicExampleInfoList(vector<Models::CreateTopicRequestBodyDataTopicExampleInfoList> && topicExampleInfoList) { DARABONBA_PTR_SET_RVALUE(topicExampleInfoList_, topicExampleInfoList) };


  protected:
    std::shared_ptr<vector<Models::CreateTopicRequestBodyDataTopicExampleInfoList>> topicExampleInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
