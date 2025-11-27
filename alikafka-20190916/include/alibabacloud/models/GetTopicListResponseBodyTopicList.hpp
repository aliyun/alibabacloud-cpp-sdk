// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICLISTRESPONSEBODYTOPICLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICLISTRESPONSEBODYTOPICLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicListResponseBodyTopicListTopicVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicListResponseBodyTopicList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicListResponseBodyTopicList& obj) { 
      DARABONBA_PTR_TO_JSON(TopicVO, topicVO_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicListResponseBodyTopicList& obj) { 
      DARABONBA_PTR_FROM_JSON(TopicVO, topicVO_);
    };
    GetTopicListResponseBodyTopicList() = default ;
    GetTopicListResponseBodyTopicList(const GetTopicListResponseBodyTopicList &) = default ;
    GetTopicListResponseBodyTopicList(GetTopicListResponseBodyTopicList &&) = default ;
    GetTopicListResponseBodyTopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicListResponseBodyTopicList() = default ;
    GetTopicListResponseBodyTopicList& operator=(const GetTopicListResponseBodyTopicList &) = default ;
    GetTopicListResponseBodyTopicList& operator=(GetTopicListResponseBodyTopicList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topicVO_ == nullptr; };
    // topicVO Field Functions 
    bool hasTopicVO() const { return this->topicVO_ != nullptr;};
    void deleteTopicVO() { this->topicVO_ = nullptr;};
    inline const vector<Models::GetTopicListResponseBodyTopicListTopicVO> & topicVO() const { DARABONBA_PTR_GET_CONST(topicVO_, vector<Models::GetTopicListResponseBodyTopicListTopicVO>) };
    inline vector<Models::GetTopicListResponseBodyTopicListTopicVO> topicVO() { DARABONBA_PTR_GET(topicVO_, vector<Models::GetTopicListResponseBodyTopicListTopicVO>) };
    inline GetTopicListResponseBodyTopicList& setTopicVO(const vector<Models::GetTopicListResponseBodyTopicListTopicVO> & topicVO) { DARABONBA_PTR_SET_VALUE(topicVO_, topicVO) };
    inline GetTopicListResponseBodyTopicList& setTopicVO(vector<Models::GetTopicListResponseBodyTopicListTopicVO> && topicVO) { DARABONBA_PTR_SET_RVALUE(topicVO_, topicVO) };


  protected:
    std::shared_ptr<vector<Models::GetTopicListResponseBodyTopicListTopicVO>> topicVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
