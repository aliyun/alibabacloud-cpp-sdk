// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICELABELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICELABELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteServiceLabelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceLabelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keysShrink_);
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceLabelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keysShrink_);
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeysShrink_);
    };
    DeleteServiceLabelShrinkRequest() = default ;
    DeleteServiceLabelShrinkRequest(const DeleteServiceLabelShrinkRequest &) = default ;
    DeleteServiceLabelShrinkRequest(DeleteServiceLabelShrinkRequest &&) = default ;
    DeleteServiceLabelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceLabelShrinkRequest() = default ;
    DeleteServiceLabelShrinkRequest& operator=(const DeleteServiceLabelShrinkRequest &) = default ;
    DeleteServiceLabelShrinkRequest& operator=(DeleteServiceLabelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keysShrink_ == nullptr
        && return this->labelKeysShrink_ == nullptr; };
    // keysShrink Field Functions 
    bool hasKeysShrink() const { return this->keysShrink_ != nullptr;};
    void deleteKeysShrink() { this->keysShrink_ = nullptr;};
    inline string keysShrink() const { DARABONBA_PTR_GET_DEFAULT(keysShrink_, "") };
    inline DeleteServiceLabelShrinkRequest& setKeysShrink(string keysShrink) { DARABONBA_PTR_SET_VALUE(keysShrink_, keysShrink) };


    // labelKeysShrink Field Functions 
    bool hasLabelKeysShrink() const { return this->labelKeysShrink_ != nullptr;};
    void deleteLabelKeysShrink() { this->labelKeysShrink_ = nullptr;};
    inline string labelKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(labelKeysShrink_, "") };
    inline DeleteServiceLabelShrinkRequest& setLabelKeysShrink(string labelKeysShrink) { DARABONBA_PTR_SET_VALUE(labelKeysShrink_, labelKeysShrink) };


  protected:
    // The service tags that you want to delete.
    std::shared_ptr<string> keysShrink_ = nullptr;
    std::shared_ptr<string> labelKeysShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
