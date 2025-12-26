// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTCHATHISTORYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTCHATHISTORYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeploymentChatHistoryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentChatHistoryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentChatHistoryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DeploymentChatHistoryConfig() = default ;
    DeploymentChatHistoryConfig(const DeploymentChatHistoryConfig &) = default ;
    DeploymentChatHistoryConfig(DeploymentChatHistoryConfig &&) = default ;
    DeploymentChatHistoryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentChatHistoryConfig() = default ;
    DeploymentChatHistoryConfig& operator=(const DeploymentChatHistoryConfig &) = default ;
    DeploymentChatHistoryConfig& operator=(DeploymentChatHistoryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionName_ == nullptr
        && return this->storageType_ == nullptr; };
    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline DeploymentChatHistoryConfig& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DeploymentChatHistoryConfig& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // 连接名称
    std::shared_ptr<string> connectionName_ = nullptr;
    // 存储类型
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
