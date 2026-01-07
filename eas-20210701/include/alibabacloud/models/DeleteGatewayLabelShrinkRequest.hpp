// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYLABELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYLABELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteGatewayLabelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayLabelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayLabelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeysShrink_);
    };
    DeleteGatewayLabelShrinkRequest() = default ;
    DeleteGatewayLabelShrinkRequest(const DeleteGatewayLabelShrinkRequest &) = default ;
    DeleteGatewayLabelShrinkRequest(DeleteGatewayLabelShrinkRequest &&) = default ;
    DeleteGatewayLabelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayLabelShrinkRequest() = default ;
    DeleteGatewayLabelShrinkRequest& operator=(const DeleteGatewayLabelShrinkRequest &) = default ;
    DeleteGatewayLabelShrinkRequest& operator=(DeleteGatewayLabelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelKeysShrink_ == nullptr; };
    // labelKeysShrink Field Functions 
    bool hasLabelKeysShrink() const { return this->labelKeysShrink_ != nullptr;};
    void deleteLabelKeysShrink() { this->labelKeysShrink_ = nullptr;};
    inline string getLabelKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(labelKeysShrink_, "") };
    inline DeleteGatewayLabelShrinkRequest& setLabelKeysShrink(string labelKeysShrink) { DARABONBA_PTR_SET_VALUE(labelKeysShrink_, labelKeysShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> labelKeysShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
