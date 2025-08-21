// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCLOUDAPPRESPONSEBODYSUCCESSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCLOUDAPPRESPONSEBODYSUCCESSINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class InstallCloudAppResponseBodySuccessInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallCloudAppResponseBodySuccessInstances& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallCloudAppResponseBodySuccessInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    InstallCloudAppResponseBodySuccessInstances() = default ;
    InstallCloudAppResponseBodySuccessInstances(const InstallCloudAppResponseBodySuccessInstances &) = default ;
    InstallCloudAppResponseBodySuccessInstances(InstallCloudAppResponseBodySuccessInstances &&) = default ;
    InstallCloudAppResponseBodySuccessInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallCloudAppResponseBodySuccessInstances() = default ;
    InstallCloudAppResponseBodySuccessInstances& operator=(const InstallCloudAppResponseBodySuccessInstances &) = default ;
    InstallCloudAppResponseBodySuccessInstances& operator=(InstallCloudAppResponseBodySuccessInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->renderingInstanceId_ != nullptr; };
    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline InstallCloudAppResponseBodySuccessInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
