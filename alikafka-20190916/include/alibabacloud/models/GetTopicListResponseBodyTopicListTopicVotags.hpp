// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICLISTRESPONSEBODYTOPICLISTTOPICVOTAGS_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICLISTRESPONSEBODYTOPICLISTTOPICVOTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicListResponseBodyTopicListTopicVOTagsTagVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicListResponseBodyTopicListTopicVOTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicListResponseBodyTopicListTopicVOTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagVO, tagVO_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicListResponseBodyTopicListTopicVOTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagVO, tagVO_);
    };
    GetTopicListResponseBodyTopicListTopicVOTags() = default ;
    GetTopicListResponseBodyTopicListTopicVOTags(const GetTopicListResponseBodyTopicListTopicVOTags &) = default ;
    GetTopicListResponseBodyTopicListTopicVOTags(GetTopicListResponseBodyTopicListTopicVOTags &&) = default ;
    GetTopicListResponseBodyTopicListTopicVOTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicListResponseBodyTopicListTopicVOTags() = default ;
    GetTopicListResponseBodyTopicListTopicVOTags& operator=(const GetTopicListResponseBodyTopicListTopicVOTags &) = default ;
    GetTopicListResponseBodyTopicListTopicVOTags& operator=(GetTopicListResponseBodyTopicListTopicVOTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagVO_ != nullptr; };
    // tagVO Field Functions 
    bool hasTagVO() const { return this->tagVO_ != nullptr;};
    void deleteTagVO() { this->tagVO_ = nullptr;};
    inline const vector<Models::GetTopicListResponseBodyTopicListTopicVOTagsTagVO> & tagVO() const { DARABONBA_PTR_GET_CONST(tagVO_, vector<Models::GetTopicListResponseBodyTopicListTopicVOTagsTagVO>) };
    inline vector<Models::GetTopicListResponseBodyTopicListTopicVOTagsTagVO> tagVO() { DARABONBA_PTR_GET(tagVO_, vector<Models::GetTopicListResponseBodyTopicListTopicVOTagsTagVO>) };
    inline GetTopicListResponseBodyTopicListTopicVOTags& setTagVO(const vector<Models::GetTopicListResponseBodyTopicListTopicVOTagsTagVO> & tagVO) { DARABONBA_PTR_SET_VALUE(tagVO_, tagVO) };
    inline GetTopicListResponseBodyTopicListTopicVOTags& setTagVO(vector<Models::GetTopicListResponseBodyTopicListTopicVOTagsTagVO> && tagVO) { DARABONBA_PTR_SET_RVALUE(tagVO_, tagVO) };


  protected:
    std::shared_ptr<vector<Models::GetTopicListResponseBodyTopicListTopicVOTagsTagVO>> tagVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
