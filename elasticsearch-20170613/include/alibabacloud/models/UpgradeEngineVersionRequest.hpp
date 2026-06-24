// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpgradeEngineVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeEngineVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(plugins, plugins_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(updateStrategy, updateStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeEngineVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(plugins, plugins_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(updateStrategy, updateStrategy_);
    };
    UpgradeEngineVersionRequest() = default ;
    UpgradeEngineVersionRequest(const UpgradeEngineVersionRequest &) = default ;
    UpgradeEngineVersionRequest(UpgradeEngineVersionRequest &&) = default ;
    UpgradeEngineVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeEngineVersionRequest() = default ;
    UpgradeEngineVersionRequest& operator=(const UpgradeEngineVersionRequest &) = default ;
    UpgradeEngineVersionRequest& operator=(UpgradeEngineVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Plugins : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Plugins& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(fileVersion, fileVersion_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Plugins& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(fileVersion, fileVersion_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Plugins() = default ;
      Plugins(const Plugins &) = default ;
      Plugins(Plugins &&) = default ;
      Plugins(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Plugins() = default ;
      Plugins& operator=(const Plugins &) = default ;
      Plugins& operator=(Plugins &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->fileVersion_ == nullptr && this->name_ == nullptr && this->version_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
      inline Plugins& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // fileVersion Field Functions 
      bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
      void deleteFileVersion() { this->fileVersion_ = nullptr;};
      inline string getFileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, "") };
      inline Plugins& setFileVersion(string fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Plugins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Plugins& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Specifies whether to install the plug-in. A value of true indicates that the plug-in is installed. A value of false indicates that the plug-in is uninstalled.
      shared_ptr<string> enable_ {};
      // The file version of the plug-in. For more information, see the response of the ListUserPlugin operation.
      shared_ptr<string> fileVersion_ {};
      // The plug-in name.
      shared_ptr<string> name_ {};
      // The Elasticsearch version that corresponds to the plug-in, such as 7.16.2.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->plugins_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->updateStrategy_ == nullptr; };
    // plugins Field Functions 
    bool hasPlugins() const { return this->plugins_ != nullptr;};
    void deletePlugins() { this->plugins_ = nullptr;};
    inline const vector<UpgradeEngineVersionRequest::Plugins> & getPlugins() const { DARABONBA_PTR_GET_CONST(plugins_, vector<UpgradeEngineVersionRequest::Plugins>) };
    inline vector<UpgradeEngineVersionRequest::Plugins> getPlugins() { DARABONBA_PTR_GET(plugins_, vector<UpgradeEngineVersionRequest::Plugins>) };
    inline UpgradeEngineVersionRequest& setPlugins(const vector<UpgradeEngineVersionRequest::Plugins> & plugins) { DARABONBA_PTR_SET_VALUE(plugins_, plugins) };
    inline UpgradeEngineVersionRequest& setPlugins(vector<UpgradeEngineVersionRequest::Plugins> && plugins) { DARABONBA_PTR_SET_RVALUE(plugins_, plugins) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpgradeEngineVersionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpgradeEngineVersionRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpgradeEngineVersionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpgradeEngineVersionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // updateStrategy Field Functions 
    bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
    void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
    inline string getUpdateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
    inline UpgradeEngineVersionRequest& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


  protected:
    shared_ptr<vector<UpgradeEngineVersionRequest::Plugins>> plugins_ {};
    // The upgrade type. Valid values:
    // 
    // - engineVersion (default): major engine version upgrade.
    // - aliVersion: kernel version upgrade.
    shared_ptr<string> type_ {};
    // The version after the upgrade. If type is set to engineVersion, the value is the instance version, such as 6.7. If type is set to aliVersion, the value is the kernel version, such as ali1.2.0.
    shared_ptr<string> version_ {};
    // A client token that is used to ensure the idempotence of the request. The value is generated by the client and must be unique among different requests. The maximum length is 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a pre-upgrade check. Valid values:
    // 
    // - true: performs a pre-upgrade check.
    // - false (default): does not perform a pre-upgrade check.
    // 
    // >Warning:  The version upgrade check involves checks on the cluster YML configuration, plug-in configuration, cluster status, indexes, and resources. We strongly recommend that you perform a pre-upgrade check before upgrading. Otherwise, upgrade issues may occur.
    // .
    shared_ptr<bool> dryRun_ {};
    // The update strategy. Valid values: blue_green (blue-green deployment), normal (in-place update), and intelligent (intelligent update).
    shared_ptr<string> updateStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
