// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateDatasetVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateDatasetVersionRequest() = default ;
    CreateDatasetVersionRequest(const CreateDatasetVersionRequest &) = default ;
    CreateDatasetVersionRequest(CreateDatasetVersionRequest &&) = default ;
    CreateDatasetVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetVersionRequest() = default ;
    CreateDatasetVersionRequest& operator=(const CreateDatasetVersionRequest &) = default ;
    CreateDatasetVersionRequest& operator=(CreateDatasetVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->version_ == nullptr && this->clientToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateDatasetVersionRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDatasetVersionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The description of the version. This parameter is optional. If this parameter is not specified, an empty string is used.
    shared_ptr<string> description_ {};
    // The name of the version to be created, which is used to identify the version within the current dataset. The name cannot be empty after leading and trailing whitespaces are removed. The length of the UTF-8 encoded name cannot exceed 128 bytes, and the name cannot contain forward slashes (/).
    // 
    // This parameter is required.
    shared_ptr<string> version_ {};
    // The optional client token that is generated and passed by the client. Do not use this token to determine whether the version is created. You can call ListDatasetVersions to query the version.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
