// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASERENDERINGINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASERENDERINGINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ReleaseRenderingInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    ReleaseRenderingInstanceRequest() = default ;
    ReleaseRenderingInstanceRequest(const ReleaseRenderingInstanceRequest &) = default ;
    ReleaseRenderingInstanceRequest(ReleaseRenderingInstanceRequest &&) = default ;
    ReleaseRenderingInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseRenderingInstanceRequest() = default ;
    ReleaseRenderingInstanceRequest& operator=(const ReleaseRenderingInstanceRequest &) = default ;
    ReleaseRenderingInstanceRequest& operator=(ReleaseRenderingInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->renderingInstanceId_ != nullptr; };
    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ReleaseRenderingInstanceRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
