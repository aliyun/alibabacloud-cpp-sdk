// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATAREMOTESERVERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATAREMOTESERVERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBodyDataRemoteServerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBodyDataRemoteServerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExportPath, exportPath_);
      DARABONBA_PTR_TO_JSON(ServiceRef, serviceRef_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBodyDataRemoteServerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportPath, exportPath_);
      DARABONBA_PTR_FROM_JSON(ServiceRef, serviceRef_);
    };
    GetNacosMcpServerResponseBodyDataRemoteServerConfig() = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfig(const GetNacosMcpServerResponseBodyDataRemoteServerConfig &) = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfig(GetNacosMcpServerResponseBodyDataRemoteServerConfig &&) = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBodyDataRemoteServerConfig() = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfig& operator=(const GetNacosMcpServerResponseBodyDataRemoteServerConfig &) = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfig& operator=(GetNacosMcpServerResponseBodyDataRemoteServerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportPath_ == nullptr
        && return this->serviceRef_ == nullptr; };
    // exportPath Field Functions 
    bool hasExportPath() const { return this->exportPath_ != nullptr;};
    void deleteExportPath() { this->exportPath_ = nullptr;};
    inline string exportPath() const { DARABONBA_PTR_GET_DEFAULT(exportPath_, "") };
    inline GetNacosMcpServerResponseBodyDataRemoteServerConfig& setExportPath(string exportPath) { DARABONBA_PTR_SET_VALUE(exportPath_, exportPath) };


    // serviceRef Field Functions 
    bool hasServiceRef() const { return this->serviceRef_ != nullptr;};
    void deleteServiceRef() { this->serviceRef_ = nullptr;};
    inline const Models::GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef & serviceRef() const { DARABONBA_PTR_GET_CONST(serviceRef_, Models::GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef) };
    inline Models::GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef serviceRef() { DARABONBA_PTR_GET(serviceRef_, Models::GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef) };
    inline GetNacosMcpServerResponseBodyDataRemoteServerConfig& setServiceRef(const Models::GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef & serviceRef) { DARABONBA_PTR_SET_VALUE(serviceRef_, serviceRef) };
    inline GetNacosMcpServerResponseBodyDataRemoteServerConfig& setServiceRef(Models::GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef && serviceRef) { DARABONBA_PTR_SET_RVALUE(serviceRef_, serviceRef) };


  protected:
    std::shared_ptr<string> exportPath_ = nullptr;
    std::shared_ptr<Models::GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef> serviceRef_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
