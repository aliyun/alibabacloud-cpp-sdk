// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODYIMAGECOMPONENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODYIMAGECOMPONENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageComponentsResponseBodyImageComponentImageComponentSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageComponentsResponseBodyImageComponent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageComponentsResponseBodyImageComponent& obj) { 
      DARABONBA_PTR_TO_JSON(ImageComponentSet, imageComponentSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageComponentsResponseBodyImageComponent& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageComponentSet, imageComponentSet_);
    };
    DescribeImageComponentsResponseBodyImageComponent() = default ;
    DescribeImageComponentsResponseBodyImageComponent(const DescribeImageComponentsResponseBodyImageComponent &) = default ;
    DescribeImageComponentsResponseBodyImageComponent(DescribeImageComponentsResponseBodyImageComponent &&) = default ;
    DescribeImageComponentsResponseBodyImageComponent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageComponentsResponseBodyImageComponent() = default ;
    DescribeImageComponentsResponseBodyImageComponent& operator=(const DescribeImageComponentsResponseBodyImageComponent &) = default ;
    DescribeImageComponentsResponseBodyImageComponent& operator=(DescribeImageComponentsResponseBodyImageComponent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageComponentSet_ != nullptr; };
    // imageComponentSet Field Functions 
    bool hasImageComponentSet() const { return this->imageComponentSet_ != nullptr;};
    void deleteImageComponentSet() { this->imageComponentSet_ = nullptr;};
    inline const vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSet> & imageComponentSet() const { DARABONBA_PTR_GET_CONST(imageComponentSet_, vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSet>) };
    inline vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSet> imageComponentSet() { DARABONBA_PTR_GET(imageComponentSet_, vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSet>) };
    inline DescribeImageComponentsResponseBodyImageComponent& setImageComponentSet(const vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSet> & imageComponentSet) { DARABONBA_PTR_SET_VALUE(imageComponentSet_, imageComponentSet) };
    inline DescribeImageComponentsResponseBodyImageComponent& setImageComponentSet(vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSet> && imageComponentSet) { DARABONBA_PTR_SET_RVALUE(imageComponentSet_, imageComponentSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeImageComponentsResponseBodyImageComponentImageComponentSet>> imageComponentSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
