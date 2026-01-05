// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class DescribeComponentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderTemplate, renderTemplate_);
      DARABONBA_PTR_TO_JSON(Values, valuesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderTemplate, renderTemplate_);
      DARABONBA_PTR_FROM_JSON(Values, valuesShrink_);
    };
    DescribeComponentShrinkRequest() = default ;
    DescribeComponentShrinkRequest(const DescribeComponentShrinkRequest &) = default ;
    DescribeComponentShrinkRequest(DescribeComponentShrinkRequest &&) = default ;
    DescribeComponentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentShrinkRequest() = default ;
    DescribeComponentShrinkRequest& operator=(const DescribeComponentShrinkRequest &) = default ;
    DescribeComponentShrinkRequest& operator=(DescribeComponentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderTemplate_ == nullptr
        && this->valuesShrink_ == nullptr; };
    // renderTemplate Field Functions 
    bool hasRenderTemplate() const { return this->renderTemplate_ != nullptr;};
    void deleteRenderTemplate() { this->renderTemplate_ = nullptr;};
    inline bool getRenderTemplate() const { DARABONBA_PTR_GET_DEFAULT(renderTemplate_, false) };
    inline DescribeComponentShrinkRequest& setRenderTemplate(bool renderTemplate) { DARABONBA_PTR_SET_VALUE(renderTemplate_, renderTemplate) };


    // valuesShrink Field Functions 
    bool hasValuesShrink() const { return this->valuesShrink_ != nullptr;};
    void deleteValuesShrink() { this->valuesShrink_ = nullptr;};
    inline string getValuesShrink() const { DARABONBA_PTR_GET_DEFAULT(valuesShrink_, "") };
    inline DescribeComponentShrinkRequest& setValuesShrink(string valuesShrink) { DARABONBA_PTR_SET_VALUE(valuesShrink_, valuesShrink) };


  protected:
    shared_ptr<bool> renderTemplate_ {};
    shared_ptr<string> valuesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
