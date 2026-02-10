// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPACLUSTERPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPACLUSTERPLUGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class InstallStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstallStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(InstallStatus, installStatus_);
      };
      friend void from_json(const Darabonba::Json& j, InstallStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(InstallStatus, installStatus_);
      };
      InstallStatus() = default ;
      InstallStatus(const InstallStatus &) = default ;
      InstallStatus(InstallStatus &&) = default ;
      InstallStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstallStatus() = default ;
      InstallStatus& operator=(const InstallStatus &) = default ;
      InstallStatus& operator=(InstallStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->installStatus_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline InstallStatus& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // installStatus Field Functions 
      bool hasInstallStatus() const { return this->installStatus_ != nullptr;};
      void deleteInstallStatus() { this->installStatus_ = nullptr;};
      inline bool getInstallStatus() const { DARABONBA_PTR_GET_DEFAULT(installStatus_, false) };
      inline InstallStatus& setInstallStatus(bool installStatus) { DARABONBA_PTR_SET_VALUE(installStatus_, installStatus) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // Indicates whether the component is installed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> installStatus_ {};
    };

    virtual bool empty() const override { return this->installStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // installStatus Field Functions 
    bool hasInstallStatus() const { return this->installStatus_ != nullptr;};
    void deleteInstallStatus() { this->installStatus_ = nullptr;};
    inline const vector<CreateOpaClusterPluginResponseBody::InstallStatus> & getInstallStatus() const { DARABONBA_PTR_GET_CONST(installStatus_, vector<CreateOpaClusterPluginResponseBody::InstallStatus>) };
    inline vector<CreateOpaClusterPluginResponseBody::InstallStatus> getInstallStatus() { DARABONBA_PTR_GET(installStatus_, vector<CreateOpaClusterPluginResponseBody::InstallStatus>) };
    inline CreateOpaClusterPluginResponseBody& setInstallStatus(const vector<CreateOpaClusterPluginResponseBody::InstallStatus> & installStatus) { DARABONBA_PTR_SET_VALUE(installStatus_, installStatus) };
    inline CreateOpaClusterPluginResponseBody& setInstallStatus(vector<CreateOpaClusterPluginResponseBody::InstallStatus> && installStatus) { DARABONBA_PTR_SET_RVALUE(installStatus_, installStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOpaClusterPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The installation status of the components.
    shared_ptr<vector<CreateOpaClusterPluginResponseBody::InstallStatus>> installStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
