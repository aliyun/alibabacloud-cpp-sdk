// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULESRESPONSEBODYEXPLORERREGISTRYMODULES_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULESRESPONSEBODYEXPLORERREGISTRYMODULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListExplorerRegistryModulesResponseBodyExplorerRegistryModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(downloads, downloads_);
      DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(downloads, downloads_);
      DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListExplorerRegistryModulesResponseBodyExplorerRegistryModules() = default ;
    ListExplorerRegistryModulesResponseBodyExplorerRegistryModules(const ListExplorerRegistryModulesResponseBodyExplorerRegistryModules &) = default ;
    ListExplorerRegistryModulesResponseBodyExplorerRegistryModules(ListExplorerRegistryModulesResponseBodyExplorerRegistryModules &&) = default ;
    ListExplorerRegistryModulesResponseBodyExplorerRegistryModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModulesResponseBodyExplorerRegistryModules() = default ;
    ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& operator=(const ListExplorerRegistryModulesResponseBodyExplorerRegistryModules &) = default ;
    ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& operator=(ListExplorerRegistryModulesResponseBodyExplorerRegistryModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->downloads_ != nullptr && this->latestVersion_ != nullptr && this->moduleName_ != nullptr && this->namespaceName_ != nullptr && this->source_ != nullptr
        && this->status_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloads Field Functions 
    bool hasDownloads() const { return this->downloads_ != nullptr;};
    void deleteDownloads() { this->downloads_ = nullptr;};
    inline int64_t downloads() const { DARABONBA_PTR_GET_DEFAULT(downloads_, 0L) };
    inline ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& setDownloads(int64_t downloads) { DARABONBA_PTR_SET_VALUE(downloads_, downloads) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExplorerRegistryModulesResponseBodyExplorerRegistryModules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> downloads_ = nullptr;
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<string> namespaceName_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
