// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSHISTORYCONFIGRESPONSEBODYCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSHISTORYCONFIGRESPONSEBODYCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosHistoryConfigResponseBodyConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosHistoryConfigResponseBodyConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(EncryptedDataKey, encryptedDataKey_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosHistoryConfigResponseBodyConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(EncryptedDataKey, encryptedDataKey_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
    };
    GetNacosHistoryConfigResponseBodyConfiguration() = default ;
    GetNacosHistoryConfigResponseBodyConfiguration(const GetNacosHistoryConfigResponseBodyConfiguration &) = default ;
    GetNacosHistoryConfigResponseBodyConfiguration(GetNacosHistoryConfigResponseBodyConfiguration &&) = default ;
    GetNacosHistoryConfigResponseBodyConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosHistoryConfigResponseBodyConfiguration() = default ;
    GetNacosHistoryConfigResponseBodyConfiguration& operator=(const GetNacosHistoryConfigResponseBodyConfiguration &) = default ;
    GetNacosHistoryConfigResponseBodyConfiguration& operator=(GetNacosHistoryConfigResponseBodyConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->content_ == nullptr && return this->dataId_ == nullptr && return this->encryptedDataKey_ == nullptr && return this->group_ == nullptr && return this->md5_ == nullptr
        && return this->opType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetNacosHistoryConfigResponseBodyConfiguration& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetNacosHistoryConfigResponseBodyConfiguration& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline GetNacosHistoryConfigResponseBodyConfiguration& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // encryptedDataKey Field Functions 
    bool hasEncryptedDataKey() const { return this->encryptedDataKey_ != nullptr;};
    void deleteEncryptedDataKey() { this->encryptedDataKey_ = nullptr;};
    inline string encryptedDataKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedDataKey_, "") };
    inline GetNacosHistoryConfigResponseBodyConfiguration& setEncryptedDataKey(string encryptedDataKey) { DARABONBA_PTR_SET_VALUE(encryptedDataKey_, encryptedDataKey) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetNacosHistoryConfigResponseBodyConfiguration& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline GetNacosHistoryConfigResponseBodyConfiguration& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline GetNacosHistoryConfigResponseBodyConfiguration& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The content of the configuration.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the configuration.
    std::shared_ptr<string> dataId_ = nullptr;
    // The encryption key.
    std::shared_ptr<string> encryptedDataKey_ = nullptr;
    // The name of the configuration group.
    std::shared_ptr<string> group_ = nullptr;
    // The MD5 value of the configuration.
    std::shared_ptr<string> md5_ = nullptr;
    // The configuration type.
    std::shared_ptr<string> opType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
