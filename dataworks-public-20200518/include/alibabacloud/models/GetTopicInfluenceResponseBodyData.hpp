// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICINFLUENCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICINFLUENCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicInfluenceResponseBodyDataInfluences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetTopicInfluenceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicInfluenceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Influences, influences_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicInfluenceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Influences, influences_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    GetTopicInfluenceResponseBodyData() = default ;
    GetTopicInfluenceResponseBodyData(const GetTopicInfluenceResponseBodyData &) = default ;
    GetTopicInfluenceResponseBodyData(GetTopicInfluenceResponseBodyData &&) = default ;
    GetTopicInfluenceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicInfluenceResponseBodyData() = default ;
    GetTopicInfluenceResponseBodyData& operator=(const GetTopicInfluenceResponseBodyData &) = default ;
    GetTopicInfluenceResponseBodyData& operator=(GetTopicInfluenceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->influences_ != nullptr
        && this->topicId_ != nullptr; };
    // influences Field Functions 
    bool hasInfluences() const { return this->influences_ != nullptr;};
    void deleteInfluences() { this->influences_ = nullptr;};
    inline const vector<Models::GetTopicInfluenceResponseBodyDataInfluences> & influences() const { DARABONBA_PTR_GET_CONST(influences_, vector<Models::GetTopicInfluenceResponseBodyDataInfluences>) };
    inline vector<Models::GetTopicInfluenceResponseBodyDataInfluences> influences() { DARABONBA_PTR_GET(influences_, vector<Models::GetTopicInfluenceResponseBodyDataInfluences>) };
    inline GetTopicInfluenceResponseBodyData& setInfluences(const vector<Models::GetTopicInfluenceResponseBodyDataInfluences> & influences) { DARABONBA_PTR_SET_VALUE(influences_, influences) };
    inline GetTopicInfluenceResponseBodyData& setInfluences(vector<Models::GetTopicInfluenceResponseBodyDataInfluences> && influences) { DARABONBA_PTR_SET_RVALUE(influences_, influences) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline GetTopicInfluenceResponseBodyData& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // The affected baseline instances.
    std::shared_ptr<vector<Models::GetTopicInfluenceResponseBodyDataInfluences>> influences_ = nullptr;
    // The ID of the event.
    std::shared_ptr<int64_t> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
