// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPIMAGESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPIMAGESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteEdgeContainerAppImageSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEdgeContainerAppImageSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEdgeContainerAppImageSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteEdgeContainerAppImageSecretRequest() = default ;
    DeleteEdgeContainerAppImageSecretRequest(const DeleteEdgeContainerAppImageSecretRequest &) = default ;
    DeleteEdgeContainerAppImageSecretRequest(DeleteEdgeContainerAppImageSecretRequest &&) = default ;
    DeleteEdgeContainerAppImageSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEdgeContainerAppImageSecretRequest() = default ;
    DeleteEdgeContainerAppImageSecretRequest& operator=(const DeleteEdgeContainerAppImageSecretRequest &) = default ;
    DeleteEdgeContainerAppImageSecretRequest& operator=(DeleteEdgeContainerAppImageSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->name_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteEdgeContainerAppImageSecretRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteEdgeContainerAppImageSecretRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
