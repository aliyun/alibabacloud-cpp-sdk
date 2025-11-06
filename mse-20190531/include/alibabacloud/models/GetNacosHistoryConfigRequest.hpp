// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSHISTORYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSHISTORYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosHistoryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosHistoryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Nid, nid_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosHistoryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Nid, nid_);
    };
    GetNacosHistoryConfigRequest() = default ;
    GetNacosHistoryConfigRequest(const GetNacosHistoryConfigRequest &) = default ;
    GetNacosHistoryConfigRequest(GetNacosHistoryConfigRequest &&) = default ;
    GetNacosHistoryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosHistoryConfigRequest() = default ;
    GetNacosHistoryConfigRequest& operator=(const GetNacosHistoryConfigRequest &) = default ;
    GetNacosHistoryConfigRequest& operator=(GetNacosHistoryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->dataId_ == nullptr && return this->group_ == nullptr && return this->instanceId_ == nullptr && return this->namespaceId_ == nullptr && return this->nid_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetNacosHistoryConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline GetNacosHistoryConfigRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetNacosHistoryConfigRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNacosHistoryConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetNacosHistoryConfigRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // nid Field Functions 
    bool hasNid() const { return this->nid_ != nullptr;};
    void deleteNid() { this->nid_ = nullptr;};
    inline string nid() const { DARABONBA_PTR_GET_DEFAULT(nid_, "") };
    inline GetNacosHistoryConfigRequest& setNid(string nid) { DARABONBA_PTR_SET_VALUE(nid_, nid) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the data.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataId_ = nullptr;
    // The name of the group.
    // 
    // This parameter is required.
    std::shared_ptr<string> group_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The version ID of the configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> nid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
