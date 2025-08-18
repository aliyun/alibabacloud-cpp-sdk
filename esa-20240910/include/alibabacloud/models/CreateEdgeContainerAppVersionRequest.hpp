// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEdgeContainerAppVersionRequestContainers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateEdgeContainerAppVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeContainerAppVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeContainerAppVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
    };
    CreateEdgeContainerAppVersionRequest() = default ;
    CreateEdgeContainerAppVersionRequest(const CreateEdgeContainerAppVersionRequest &) = default ;
    CreateEdgeContainerAppVersionRequest(CreateEdgeContainerAppVersionRequest &&) = default ;
    CreateEdgeContainerAppVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeContainerAppVersionRequest() = default ;
    CreateEdgeContainerAppVersionRequest& operator=(const CreateEdgeContainerAppVersionRequest &) = default ;
    CreateEdgeContainerAppVersionRequest& operator=(CreateEdgeContainerAppVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->containers_ != nullptr && this->name_ != nullptr && this->remarks_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateEdgeContainerAppVersionRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<CreateEdgeContainerAppVersionRequestContainers> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<CreateEdgeContainerAppVersionRequestContainers>) };
    inline vector<CreateEdgeContainerAppVersionRequestContainers> containers() { DARABONBA_PTR_GET(containers_, vector<CreateEdgeContainerAppVersionRequestContainers>) };
    inline CreateEdgeContainerAppVersionRequest& setContainers(const vector<CreateEdgeContainerAppVersionRequestContainers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline CreateEdgeContainerAppVersionRequest& setContainers(vector<CreateEdgeContainerAppVersionRequestContainers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEdgeContainerAppVersionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline CreateEdgeContainerAppVersionRequest& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The container group to be deployed for this version, which contains information about images.\\
    // The image data contains the image address, startup command, parameters, environment variables, and probe rules. You can specify one or more images. The parameter value is a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateEdgeContainerAppVersionRequestContainers>> containers_ = nullptr;
    // The version name, which must be 6 to 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The description of the version.
    std::shared_ptr<string> remarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
