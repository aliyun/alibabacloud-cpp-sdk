// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTRENDERINGSERVERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTRENDERINGSERVERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RebootRenderingServerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootRenderingServerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RebootRenderingServerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    RebootRenderingServerShrinkRequest() = default ;
    RebootRenderingServerShrinkRequest(const RebootRenderingServerShrinkRequest &) = default ;
    RebootRenderingServerShrinkRequest(RebootRenderingServerShrinkRequest &&) = default ;
    RebootRenderingServerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootRenderingServerShrinkRequest() = default ;
    RebootRenderingServerShrinkRequest& operator=(const RebootRenderingServerShrinkRequest &) = default ;
    RebootRenderingServerShrinkRequest& operator=(RebootRenderingServerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderingInstanceIdsShrink_ == nullptr; };
    // renderingInstanceIdsShrink Field Functions 
    bool hasRenderingInstanceIdsShrink() const { return this->renderingInstanceIdsShrink_ != nullptr;};
    void deleteRenderingInstanceIdsShrink() { this->renderingInstanceIdsShrink_ = nullptr;};
    inline string renderingInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceIdsShrink_, "") };
    inline RebootRenderingServerShrinkRequest& setRenderingInstanceIdsShrink(string renderingInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(renderingInstanceIdsShrink_, renderingInstanceIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
