// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOTAGS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBodyInstanceListInstanceVOTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyInstanceListInstanceVOTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagVO, tagVO_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyInstanceListInstanceVOTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagVO, tagVO_);
    };
    GetInstanceListResponseBodyInstanceListInstanceVOTags() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOTags(const GetInstanceListResponseBodyInstanceListInstanceVOTags &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOTags(GetInstanceListResponseBodyInstanceListInstanceVOTags &&) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyInstanceListInstanceVOTags() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOTags& operator=(const GetInstanceListResponseBodyInstanceListInstanceVOTags &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOTags& operator=(GetInstanceListResponseBodyInstanceListInstanceVOTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagVO_ == nullptr; };
    // tagVO Field Functions 
    bool hasTagVO() const { return this->tagVO_ != nullptr;};
    void deleteTagVO() { this->tagVO_ = nullptr;};
    inline const vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO> & tagVO() const { DARABONBA_PTR_GET_CONST(tagVO_, vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO>) };
    inline vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO> tagVO() { DARABONBA_PTR_GET(tagVO_, vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO>) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOTags& setTagVO(const vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO> & tagVO) { DARABONBA_PTR_SET_VALUE(tagVO_, tagVO) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOTags& setTagVO(vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO> && tagVO) { DARABONBA_PTR_SET_RVALUE(tagVO_, tagVO) };


  protected:
    std::shared_ptr<vector<Models::GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO>> tagVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
