// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERLISTRESPONSEBODYCONSUMERLISTCONSUMERVOTAGS_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERLISTRESPONSEBODYCONSUMERLISTCONSUMERVOTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerListResponseBodyConsumerListConsumerVOTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerListResponseBodyConsumerListConsumerVOTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagVO, tagVO_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerListResponseBodyConsumerListConsumerVOTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagVO, tagVO_);
    };
    GetConsumerListResponseBodyConsumerListConsumerVOTags() = default ;
    GetConsumerListResponseBodyConsumerListConsumerVOTags(const GetConsumerListResponseBodyConsumerListConsumerVOTags &) = default ;
    GetConsumerListResponseBodyConsumerListConsumerVOTags(GetConsumerListResponseBodyConsumerListConsumerVOTags &&) = default ;
    GetConsumerListResponseBodyConsumerListConsumerVOTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerListResponseBodyConsumerListConsumerVOTags() = default ;
    GetConsumerListResponseBodyConsumerListConsumerVOTags& operator=(const GetConsumerListResponseBodyConsumerListConsumerVOTags &) = default ;
    GetConsumerListResponseBodyConsumerListConsumerVOTags& operator=(GetConsumerListResponseBodyConsumerListConsumerVOTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagVO_ != nullptr; };
    // tagVO Field Functions 
    bool hasTagVO() const { return this->tagVO_ != nullptr;};
    void deleteTagVO() { this->tagVO_ = nullptr;};
    inline const vector<Models::GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO> & tagVO() const { DARABONBA_PTR_GET_CONST(tagVO_, vector<Models::GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO>) };
    inline vector<Models::GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO> tagVO() { DARABONBA_PTR_GET(tagVO_, vector<Models::GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO>) };
    inline GetConsumerListResponseBodyConsumerListConsumerVOTags& setTagVO(const vector<Models::GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO> & tagVO) { DARABONBA_PTR_SET_VALUE(tagVO_, tagVO) };
    inline GetConsumerListResponseBodyConsumerListConsumerVOTags& setTagVO(vector<Models::GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO> && tagVO) { DARABONBA_PTR_SET_RVALUE(tagVO_, tagVO) };


  protected:
    std::shared_ptr<vector<Models::GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO>> tagVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
