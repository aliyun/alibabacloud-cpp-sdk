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
      DARABONBA_PTR_TO_JSON(Precheck, precheck_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RebootRenderingServerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Precheck, precheck_);
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
    virtual bool empty() const override { return this->precheck_ == nullptr
        && this->renderingInstanceIdsShrink_ == nullptr; };
    // precheck Field Functions 
    bool hasPrecheck() const { return this->precheck_ != nullptr;};
    void deletePrecheck() { this->precheck_ = nullptr;};
    inline bool getPrecheck() const { DARABONBA_PTR_GET_DEFAULT(precheck_, false) };
    inline RebootRenderingServerShrinkRequest& setPrecheck(bool precheck) { DARABONBA_PTR_SET_VALUE(precheck_, precheck) };


    // renderingInstanceIdsShrink Field Functions 
    bool hasRenderingInstanceIdsShrink() const { return this->renderingInstanceIdsShrink_ != nullptr;};
    void deleteRenderingInstanceIdsShrink() { this->renderingInstanceIdsShrink_ = nullptr;};
    inline string getRenderingInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceIdsShrink_, "") };
    inline RebootRenderingServerShrinkRequest& setRenderingInstanceIdsShrink(string renderingInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(renderingInstanceIdsShrink_, renderingInstanceIdsShrink) };


  protected:
    // Specifies whether to perform only an admission check without actually restarting the hosts. Default value: false.
    shared_ptr<bool> precheck_ {};
    // The list of cloud application service instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> renderingInstanceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
