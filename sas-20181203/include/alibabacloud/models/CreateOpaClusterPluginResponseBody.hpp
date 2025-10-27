// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPACLUSTERPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPACLUSTERPLUGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOpaClusterPluginResponseBodyInstallStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateOpaClusterPluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpaClusterPluginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstallStatus, installStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpaClusterPluginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstallStatus, installStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOpaClusterPluginResponseBody() = default ;
    CreateOpaClusterPluginResponseBody(const CreateOpaClusterPluginResponseBody &) = default ;
    CreateOpaClusterPluginResponseBody(CreateOpaClusterPluginResponseBody &&) = default ;
    CreateOpaClusterPluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpaClusterPluginResponseBody() = default ;
    CreateOpaClusterPluginResponseBody& operator=(const CreateOpaClusterPluginResponseBody &) = default ;
    CreateOpaClusterPluginResponseBody& operator=(CreateOpaClusterPluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // installStatus Field Functions 
    bool hasInstallStatus() const { return this->installStatus_ != nullptr;};
    void deleteInstallStatus() { this->installStatus_ = nullptr;};
    inline const vector<CreateOpaClusterPluginResponseBodyInstallStatus> & installStatus() const { DARABONBA_PTR_GET_CONST(installStatus_, vector<CreateOpaClusterPluginResponseBodyInstallStatus>) };
    inline vector<CreateOpaClusterPluginResponseBodyInstallStatus> installStatus() { DARABONBA_PTR_GET(installStatus_, vector<CreateOpaClusterPluginResponseBodyInstallStatus>) };
    inline CreateOpaClusterPluginResponseBody& setInstallStatus(const vector<CreateOpaClusterPluginResponseBodyInstallStatus> & installStatus) { DARABONBA_PTR_SET_VALUE(installStatus_, installStatus) };
    inline CreateOpaClusterPluginResponseBody& setInstallStatus(vector<CreateOpaClusterPluginResponseBodyInstallStatus> && installStatus) { DARABONBA_PTR_SET_RVALUE(installStatus_, installStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOpaClusterPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The installation status of the components.
    std::shared_ptr<vector<CreateOpaClusterPluginResponseBodyInstallStatus>> installStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
