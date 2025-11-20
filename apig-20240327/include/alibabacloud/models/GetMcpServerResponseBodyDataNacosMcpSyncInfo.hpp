// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODYDATANACOSMCPSYNCINFO_HPP_
#define ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODYDATANACOSMCPSYNCINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetMcpServerResponseBodyDataNacosMcpSyncInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpServerResponseBodyDataNacosMcpSyncInfo& obj) { 
      DARABONBA_PTR_TO_JSON(importInstanceId, importInstanceId_);
      DARABONBA_PTR_TO_JSON(importMcpServerId, importMcpServerId_);
      DARABONBA_PTR_TO_JSON(importNamespace, importNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpServerResponseBodyDataNacosMcpSyncInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(importInstanceId, importInstanceId_);
      DARABONBA_PTR_FROM_JSON(importMcpServerId, importMcpServerId_);
      DARABONBA_PTR_FROM_JSON(importNamespace, importNamespace_);
    };
    GetMcpServerResponseBodyDataNacosMcpSyncInfo() = default ;
    GetMcpServerResponseBodyDataNacosMcpSyncInfo(const GetMcpServerResponseBodyDataNacosMcpSyncInfo &) = default ;
    GetMcpServerResponseBodyDataNacosMcpSyncInfo(GetMcpServerResponseBodyDataNacosMcpSyncInfo &&) = default ;
    GetMcpServerResponseBodyDataNacosMcpSyncInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpServerResponseBodyDataNacosMcpSyncInfo() = default ;
    GetMcpServerResponseBodyDataNacosMcpSyncInfo& operator=(const GetMcpServerResponseBodyDataNacosMcpSyncInfo &) = default ;
    GetMcpServerResponseBodyDataNacosMcpSyncInfo& operator=(GetMcpServerResponseBodyDataNacosMcpSyncInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importInstanceId_ == nullptr
        && return this->importMcpServerId_ == nullptr && return this->importNamespace_ == nullptr; };
    // importInstanceId Field Functions 
    bool hasImportInstanceId() const { return this->importInstanceId_ != nullptr;};
    void deleteImportInstanceId() { this->importInstanceId_ = nullptr;};
    inline string importInstanceId() const { DARABONBA_PTR_GET_DEFAULT(importInstanceId_, "") };
    inline GetMcpServerResponseBodyDataNacosMcpSyncInfo& setImportInstanceId(string importInstanceId) { DARABONBA_PTR_SET_VALUE(importInstanceId_, importInstanceId) };


    // importMcpServerId Field Functions 
    bool hasImportMcpServerId() const { return this->importMcpServerId_ != nullptr;};
    void deleteImportMcpServerId() { this->importMcpServerId_ = nullptr;};
    inline string importMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(importMcpServerId_, "") };
    inline GetMcpServerResponseBodyDataNacosMcpSyncInfo& setImportMcpServerId(string importMcpServerId) { DARABONBA_PTR_SET_VALUE(importMcpServerId_, importMcpServerId) };


    // importNamespace Field Functions 
    bool hasImportNamespace() const { return this->importNamespace_ != nullptr;};
    void deleteImportNamespace() { this->importNamespace_ = nullptr;};
    inline string importNamespace() const { DARABONBA_PTR_GET_DEFAULT(importNamespace_, "") };
    inline GetMcpServerResponseBodyDataNacosMcpSyncInfo& setImportNamespace(string importNamespace) { DARABONBA_PTR_SET_VALUE(importNamespace_, importNamespace) };


  protected:
    // The Nacos instance.
    std::shared_ptr<string> importInstanceId_ = nullptr;
    // The synchronized MCP server ID.
    std::shared_ptr<string> importMcpServerId_ = nullptr;
    // The Nacos namespace.
    std::shared_ptr<string> importNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
