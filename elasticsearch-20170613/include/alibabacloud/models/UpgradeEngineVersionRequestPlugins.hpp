// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONREQUESTPLUGINS_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONREQUESTPLUGINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpgradeEngineVersionRequestPlugins : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeEngineVersionRequestPlugins& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(fileVersion, fileVersion_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeEngineVersionRequestPlugins& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(fileVersion, fileVersion_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpgradeEngineVersionRequestPlugins() = default ;
    UpgradeEngineVersionRequestPlugins(const UpgradeEngineVersionRequestPlugins &) = default ;
    UpgradeEngineVersionRequestPlugins(UpgradeEngineVersionRequestPlugins &&) = default ;
    UpgradeEngineVersionRequestPlugins(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeEngineVersionRequestPlugins() = default ;
    UpgradeEngineVersionRequestPlugins& operator=(const UpgradeEngineVersionRequestPlugins &) = default ;
    UpgradeEngineVersionRequestPlugins& operator=(UpgradeEngineVersionRequestPlugins &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->fileVersion_ != nullptr && this->name_ != nullptr && this->version_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpgradeEngineVersionRequestPlugins& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline string fileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, "") };
    inline UpgradeEngineVersionRequestPlugins& setFileVersion(string fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpgradeEngineVersionRequestPlugins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpgradeEngineVersionRequestPlugins& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> enable_ = nullptr;
    std::shared_ptr<string> fileVersion_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
