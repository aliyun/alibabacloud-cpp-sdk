// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACOSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACOSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateNacosConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNacosConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BetaIps, betaIps_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(EncryptedDataKey, encryptedDataKey_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNacosConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BetaIps, betaIps_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(EncryptedDataKey, encryptedDataKey_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateNacosConfigRequest() = default ;
    UpdateNacosConfigRequest(const UpdateNacosConfigRequest &) = default ;
    UpdateNacosConfigRequest(UpdateNacosConfigRequest &&) = default ;
    UpdateNacosConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNacosConfigRequest() = default ;
    UpdateNacosConfigRequest& operator=(const UpdateNacosConfigRequest &) = default ;
    UpdateNacosConfigRequest& operator=(UpdateNacosConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appName_ == nullptr && return this->betaIps_ == nullptr && return this->content_ == nullptr && return this->dataId_ == nullptr && return this->desc_ == nullptr
        && return this->encryptedDataKey_ == nullptr && return this->group_ == nullptr && return this->instanceId_ == nullptr && return this->md5_ == nullptr && return this->namespaceId_ == nullptr
        && return this->tags_ == nullptr && return this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateNacosConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateNacosConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // betaIps Field Functions 
    bool hasBetaIps() const { return this->betaIps_ != nullptr;};
    void deleteBetaIps() { this->betaIps_ = nullptr;};
    inline string betaIps() const { DARABONBA_PTR_GET_DEFAULT(betaIps_, "") };
    inline UpdateNacosConfigRequest& setBetaIps(string betaIps) { DARABONBA_PTR_SET_VALUE(betaIps_, betaIps) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateNacosConfigRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline UpdateNacosConfigRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline UpdateNacosConfigRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // encryptedDataKey Field Functions 
    bool hasEncryptedDataKey() const { return this->encryptedDataKey_ != nullptr;};
    void deleteEncryptedDataKey() { this->encryptedDataKey_ = nullptr;};
    inline string encryptedDataKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedDataKey_, "") };
    inline UpdateNacosConfigRequest& setEncryptedDataKey(string encryptedDataKey) { DARABONBA_PTR_SET_VALUE(encryptedDataKey_, encryptedDataKey) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline UpdateNacosConfigRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNacosConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline UpdateNacosConfigRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNacosConfigRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline UpdateNacosConfigRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateNacosConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The list of IP addresses where the beta release of the configuration is performed.
    std::shared_ptr<string> betaIps_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataId_ = nullptr;
    // The description of the configuration.
    std::shared_ptr<string> desc_ = nullptr;
    // The encryption key.
    std::shared_ptr<string> encryptedDataKey_ = nullptr;
    // The name of the group.
    // 
    // This parameter is required.
    std::shared_ptr<string> group_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The MD5 value of the configuration.
    std::shared_ptr<string> md5_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The list of tags.
    std::shared_ptr<string> tags_ = nullptr;
    // The format of the configuration. Supported formats include TEXT, JSON, XML, and HTML.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
