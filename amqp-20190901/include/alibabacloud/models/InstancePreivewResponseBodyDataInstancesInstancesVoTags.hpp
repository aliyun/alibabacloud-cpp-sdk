// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODYDATAINSTANCESINSTANCESVOTAGS_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODYDATAINSTANCESINSTANCESVOTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstancePreivewResponseBodyDataInstancesInstancesVOTagsTagsVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class InstancePreivewResponseBodyDataInstancesInstancesVOTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstancePreivewResponseBodyDataInstancesInstancesVOTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagsVO, tagsVO_);
    };
    friend void from_json(const Darabonba::Json& j, InstancePreivewResponseBodyDataInstancesInstancesVOTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagsVO, tagsVO_);
    };
    InstancePreivewResponseBodyDataInstancesInstancesVOTags() = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVOTags(const InstancePreivewResponseBodyDataInstancesInstancesVOTags &) = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVOTags(InstancePreivewResponseBodyDataInstancesInstancesVOTags &&) = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVOTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstancePreivewResponseBodyDataInstancesInstancesVOTags() = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVOTags& operator=(const InstancePreivewResponseBodyDataInstancesInstancesVOTags &) = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVOTags& operator=(InstancePreivewResponseBodyDataInstancesInstancesVOTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagsVO_ == nullptr; };
    // tagsVO Field Functions 
    bool hasTagsVO() const { return this->tagsVO_ != nullptr;};
    void deleteTagsVO() { this->tagsVO_ = nullptr;};
    inline const vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVOTagsTagsVO> & tagsVO() const { DARABONBA_PTR_GET_CONST(tagsVO_, vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVOTagsTagsVO>) };
    inline vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVOTagsTagsVO> tagsVO() { DARABONBA_PTR_GET(tagsVO_, vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVOTagsTagsVO>) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVOTags& setTagsVO(const vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVOTagsTagsVO> & tagsVO) { DARABONBA_PTR_SET_VALUE(tagsVO_, tagsVO) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVOTags& setTagsVO(vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVOTagsTagsVO> && tagsVO) { DARABONBA_PTR_SET_RVALUE(tagsVO_, tagsVO) };


  protected:
    std::shared_ptr<vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVOTagsTagsVO>> tagsVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
