// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ListPipelinesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(labelSelector, labelSelectorShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(labelSelector, labelSelectorShrink_);
    };
    ListPipelinesShrinkRequest() = default ;
    ListPipelinesShrinkRequest(const ListPipelinesShrinkRequest &) = default ;
    ListPipelinesShrinkRequest(ListPipelinesShrinkRequest &&) = default ;
    ListPipelinesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesShrinkRequest() = default ;
    ListPipelinesShrinkRequest& operator=(const ListPipelinesShrinkRequest &) = default ;
    ListPipelinesShrinkRequest& operator=(ListPipelinesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelSelectorShrink_ != nullptr; };
    // labelSelectorShrink Field Functions 
    bool hasLabelSelectorShrink() const { return this->labelSelectorShrink_ != nullptr;};
    void deleteLabelSelectorShrink() { this->labelSelectorShrink_ = nullptr;};
    inline string labelSelectorShrink() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorShrink_, "") };
    inline ListPipelinesShrinkRequest& setLabelSelectorShrink(string labelSelectorShrink) { DARABONBA_PTR_SET_VALUE(labelSelectorShrink_, labelSelectorShrink) };


  protected:
    std::shared_ptr<string> labelSelectorShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
