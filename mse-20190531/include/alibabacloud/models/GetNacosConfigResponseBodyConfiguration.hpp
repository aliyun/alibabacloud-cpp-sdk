// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSCONFIGRESPONSEBODYCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSCONFIGRESPONSEBODYCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNacosConfigResponseBodyConfigurationGrayVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosConfigResponseBodyConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosConfigResponseBodyConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BetaIps, betaIps_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(EncryptedDataKey, encryptedDataKey_);
      DARABONBA_PTR_TO_JSON(GrayVersions, grayVersions_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosConfigResponseBodyConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BetaIps, betaIps_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(EncryptedDataKey, encryptedDataKey_);
      DARABONBA_PTR_FROM_JSON(GrayVersions, grayVersions_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetNacosConfigResponseBodyConfiguration() = default ;
    GetNacosConfigResponseBodyConfiguration(const GetNacosConfigResponseBodyConfiguration &) = default ;
    GetNacosConfigResponseBodyConfiguration(GetNacosConfigResponseBodyConfiguration &&) = default ;
    GetNacosConfigResponseBodyConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosConfigResponseBodyConfiguration() = default ;
    GetNacosConfigResponseBodyConfiguration& operator=(const GetNacosConfigResponseBodyConfiguration &) = default ;
    GetNacosConfigResponseBodyConfiguration& operator=(GetNacosConfigResponseBodyConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->betaIps_ != nullptr && this->content_ != nullptr && this->dataId_ != nullptr && this->desc_ != nullptr && this->encryptedDataKey_ != nullptr
        && this->grayVersions_ != nullptr && this->group_ != nullptr && this->md5_ != nullptr && this->tags_ != nullptr && this->type_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // betaIps Field Functions 
    bool hasBetaIps() const { return this->betaIps_ != nullptr;};
    void deleteBetaIps() { this->betaIps_ = nullptr;};
    inline string betaIps() const { DARABONBA_PTR_GET_DEFAULT(betaIps_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setBetaIps(string betaIps) { DARABONBA_PTR_SET_VALUE(betaIps_, betaIps) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // encryptedDataKey Field Functions 
    bool hasEncryptedDataKey() const { return this->encryptedDataKey_ != nullptr;};
    void deleteEncryptedDataKey() { this->encryptedDataKey_ = nullptr;};
    inline string encryptedDataKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedDataKey_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setEncryptedDataKey(string encryptedDataKey) { DARABONBA_PTR_SET_VALUE(encryptedDataKey_, encryptedDataKey) };


    // grayVersions Field Functions 
    bool hasGrayVersions() const { return this->grayVersions_ != nullptr;};
    void deleteGrayVersions() { this->grayVersions_ = nullptr;};
    inline const vector<Models::GetNacosConfigResponseBodyConfigurationGrayVersions> & grayVersions() const { DARABONBA_PTR_GET_CONST(grayVersions_, vector<Models::GetNacosConfigResponseBodyConfigurationGrayVersions>) };
    inline vector<Models::GetNacosConfigResponseBodyConfigurationGrayVersions> grayVersions() { DARABONBA_PTR_GET(grayVersions_, vector<Models::GetNacosConfigResponseBodyConfigurationGrayVersions>) };
    inline GetNacosConfigResponseBodyConfiguration& setGrayVersions(const vector<Models::GetNacosConfigResponseBodyConfigurationGrayVersions> & grayVersions) { DARABONBA_PTR_SET_VALUE(grayVersions_, grayVersions) };
    inline GetNacosConfigResponseBodyConfiguration& setGrayVersions(vector<Models::GetNacosConfigResponseBodyConfigurationGrayVersions> && grayVersions) { DARABONBA_PTR_SET_RVALUE(grayVersions_, grayVersions) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetNacosConfigResponseBodyConfiguration& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Application name.
    std::shared_ptr<string> appName_ = nullptr;
    // List of IPs for Beta release.
    std::shared_ptr<string> betaIps_ = nullptr;
    // Configuration content.
    std::shared_ptr<string> content_ = nullptr;
    // Configuration ID.
    std::shared_ptr<string> dataId_ = nullptr;
    // Configuration description.
    std::shared_ptr<string> desc_ = nullptr;
    // Encrypted key.
    std::shared_ptr<string> encryptedDataKey_ = nullptr;
    // Current gray version information
    std::shared_ptr<vector<Models::GetNacosConfigResponseBodyConfigurationGrayVersions>> grayVersions_ = nullptr;
    // Configuration group name.
    std::shared_ptr<string> group_ = nullptr;
    // Message digest of the configuration.
    std::shared_ptr<string> md5_ = nullptr;
    // Tags of the configuration.
    std::shared_ptr<string> tags_ = nullptr;
    // Format of the configuration content.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
