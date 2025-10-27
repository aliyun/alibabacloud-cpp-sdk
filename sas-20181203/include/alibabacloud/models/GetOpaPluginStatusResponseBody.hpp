// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPAPLUGINSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPAPLUGINSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOpaPluginStatusResponseBodyInstallStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaPluginStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaPluginStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstallStatus, installStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaPluginStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstallStatus, installStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOpaPluginStatusResponseBody() = default ;
    GetOpaPluginStatusResponseBody(const GetOpaPluginStatusResponseBody &) = default ;
    GetOpaPluginStatusResponseBody(GetOpaPluginStatusResponseBody &&) = default ;
    GetOpaPluginStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaPluginStatusResponseBody() = default ;
    GetOpaPluginStatusResponseBody& operator=(const GetOpaPluginStatusResponseBody &) = default ;
    GetOpaPluginStatusResponseBody& operator=(GetOpaPluginStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // installStatus Field Functions 
    bool hasInstallStatus() const { return this->installStatus_ != nullptr;};
    void deleteInstallStatus() { this->installStatus_ = nullptr;};
    inline const vector<GetOpaPluginStatusResponseBodyInstallStatus> & installStatus() const { DARABONBA_PTR_GET_CONST(installStatus_, vector<GetOpaPluginStatusResponseBodyInstallStatus>) };
    inline vector<GetOpaPluginStatusResponseBodyInstallStatus> installStatus() { DARABONBA_PTR_GET(installStatus_, vector<GetOpaPluginStatusResponseBodyInstallStatus>) };
    inline GetOpaPluginStatusResponseBody& setInstallStatus(const vector<GetOpaPluginStatusResponseBodyInstallStatus> & installStatus) { DARABONBA_PTR_SET_VALUE(installStatus_, installStatus) };
    inline GetOpaPluginStatusResponseBody& setInstallStatus(vector<GetOpaPluginStatusResponseBodyInstallStatus> && installStatus) { DARABONBA_PTR_SET_RVALUE(installStatus_, installStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpaPluginStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The installation status of the components that are required for clusters protected by proactive defense for containers.
    std::shared_ptr<vector<GetOpaPluginStatusResponseBodyInstallStatus>> installStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
