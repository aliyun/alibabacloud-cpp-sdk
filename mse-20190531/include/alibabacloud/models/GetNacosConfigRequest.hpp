// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Beta, beta_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Beta, beta_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    GetNacosConfigRequest() = default ;
    GetNacosConfigRequest(const GetNacosConfigRequest &) = default ;
    GetNacosConfigRequest(GetNacosConfigRequest &&) = default ;
    GetNacosConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosConfigRequest() = default ;
    GetNacosConfigRequest& operator=(const GetNacosConfigRequest &) = default ;
    GetNacosConfigRequest& operator=(GetNacosConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->beta_ == nullptr && this->dataId_ == nullptr && this->group_ == nullptr && this->instanceId_ == nullptr && this->namespaceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetNacosConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // beta Field Functions 
    bool hasBeta() const { return this->beta_ != nullptr;};
    void deleteBeta() { this->beta_ = nullptr;};
    inline bool getBeta() const { DARABONBA_PTR_GET_DEFAULT(beta_, false) };
    inline GetNacosConfigRequest& setBeta(bool beta) { DARABONBA_PTR_SET_VALUE(beta_, beta) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline GetNacosConfigRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetNacosConfigRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNacosConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetNacosConfigRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // Language type of the returned information:
    // 
    // - zh: Chinese
    // - en: English
    shared_ptr<string> acceptLanguage_ {};
    // Whether it is a Beta release.
    // 
    // - `true`: Yes
    // - `false`: No
    shared_ptr<bool> beta_ {};
    // Data ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataId_ {};
    // Configuration group information.
    // 
    // This parameter is required.
    shared_ptr<string> group_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Namespace ID.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
