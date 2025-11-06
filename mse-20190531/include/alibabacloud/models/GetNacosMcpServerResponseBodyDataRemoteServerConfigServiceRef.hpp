// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATAREMOTESERVERCONFIGSERVICEREF_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATAREMOTESERVERCONFIGSERVICEREF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef() = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef(const GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef &) = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef(GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef &&) = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef() = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef& operator=(const GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef &) = default ;
    GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef& operator=(GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && return this->namespaceId_ == nullptr && return this->serviceName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetNacosMcpServerResponseBodyDataRemoteServerConfigServiceRef& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
