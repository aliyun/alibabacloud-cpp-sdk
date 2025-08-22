// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnTagResourcesResponseBodyTagResourcesTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnTagResourcesResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDcdnTagResourcesResponseBodyTagResources() = default ;
    DescribeDcdnTagResourcesResponseBodyTagResources(const DescribeDcdnTagResourcesResponseBodyTagResources &) = default ;
    DescribeDcdnTagResourcesResponseBodyTagResources(DescribeDcdnTagResourcesResponseBodyTagResources &&) = default ;
    DescribeDcdnTagResourcesResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnTagResourcesResponseBodyTagResources() = default ;
    DescribeDcdnTagResourcesResponseBodyTagResources& operator=(const DescribeDcdnTagResourcesResponseBodyTagResources &) = default ;
    DescribeDcdnTagResourcesResponseBodyTagResources& operator=(DescribeDcdnTagResourcesResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->tag_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeDcdnTagResourcesResponseBodyTagResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDcdnTagResourcesResponseBodyTagResourcesTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDcdnTagResourcesResponseBodyTagResourcesTag>) };
    inline vector<Models::DescribeDcdnTagResourcesResponseBodyTagResourcesTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDcdnTagResourcesResponseBodyTagResourcesTag>) };
    inline DescribeDcdnTagResourcesResponseBodyTagResources& setTag(const vector<Models::DescribeDcdnTagResourcesResponseBodyTagResourcesTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDcdnTagResourcesResponseBodyTagResources& setTag(vector<Models::DescribeDcdnTagResourcesResponseBodyTagResourcesTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The tags of the snapshot.
    std::shared_ptr<vector<Models::DescribeDcdnTagResourcesResponseBodyTagResourcesTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
