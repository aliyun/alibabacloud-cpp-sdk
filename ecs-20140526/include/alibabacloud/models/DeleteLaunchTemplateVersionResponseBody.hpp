// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteLaunchTemplateVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLaunchTemplateVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersions, launchTemplateVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLaunchTemplateVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersions, launchTemplateVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLaunchTemplateVersionResponseBody() = default ;
    DeleteLaunchTemplateVersionResponseBody(const DeleteLaunchTemplateVersionResponseBody &) = default ;
    DeleteLaunchTemplateVersionResponseBody(DeleteLaunchTemplateVersionResponseBody &&) = default ;
    DeleteLaunchTemplateVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLaunchTemplateVersionResponseBody() = default ;
    DeleteLaunchTemplateVersionResponseBody& operator=(const DeleteLaunchTemplateVersionResponseBody &) = default ;
    DeleteLaunchTemplateVersionResponseBody& operator=(DeleteLaunchTemplateVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->launchTemplateVersions_ != nullptr
        && this->requestId_ != nullptr; };
    // launchTemplateVersions Field Functions 
    bool hasLaunchTemplateVersions() const { return this->launchTemplateVersions_ != nullptr;};
    void deleteLaunchTemplateVersions() { this->launchTemplateVersions_ = nullptr;};
    inline const DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions & launchTemplateVersions() const { DARABONBA_PTR_GET_CONST(launchTemplateVersions_, DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions) };
    inline DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions launchTemplateVersions() { DARABONBA_PTR_GET(launchTemplateVersions_, DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions) };
    inline DeleteLaunchTemplateVersionResponseBody& setLaunchTemplateVersions(const DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions & launchTemplateVersions) { DARABONBA_PTR_SET_VALUE(launchTemplateVersions_, launchTemplateVersions) };
    inline DeleteLaunchTemplateVersionResponseBody& setLaunchTemplateVersions(DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions && launchTemplateVersions) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersions_, launchTemplateVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLaunchTemplateVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The deleted launch template versions.
    std::shared_ptr<DeleteLaunchTemplateVersionResponseBodyLaunchTemplateVersions> launchTemplateVersions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
