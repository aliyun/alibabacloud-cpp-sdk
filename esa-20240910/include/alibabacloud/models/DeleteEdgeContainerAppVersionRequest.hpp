// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteEdgeContainerAppVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEdgeContainerAppVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEdgeContainerAppVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    DeleteEdgeContainerAppVersionRequest() = default ;
    DeleteEdgeContainerAppVersionRequest(const DeleteEdgeContainerAppVersionRequest &) = default ;
    DeleteEdgeContainerAppVersionRequest(DeleteEdgeContainerAppVersionRequest &&) = default ;
    DeleteEdgeContainerAppVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEdgeContainerAppVersionRequest() = default ;
    DeleteEdgeContainerAppVersionRequest& operator=(const DeleteEdgeContainerAppVersionRequest &) = default ;
    DeleteEdgeContainerAppVersionRequest& operator=(DeleteEdgeContainerAppVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->versionId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteEdgeContainerAppVersionRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline DeleteEdgeContainerAppVersionRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the version that you want to delete. To obtain the version ID, call the [ListEdgeContainerAppVersions](~~ListEdgeContainerAppVersions~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
