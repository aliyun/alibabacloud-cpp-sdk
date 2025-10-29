// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEVERSIONSRESPONSEBODYEXPLORERREGISTRYMODULEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEVERSIONSRESPONSEBODYEXPLORERREGISTRYMODULEVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& obj) { 
      DARABONBA_ANY_TO_JSON(moduleDetail, moduleDetail_);
      DARABONBA_ANY_TO_JSON(moduleFile, moduleFile_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& obj) { 
      DARABONBA_ANY_FROM_JSON(moduleDetail, moduleDetail_);
      DARABONBA_ANY_FROM_JSON(moduleFile, moduleFile_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions() = default ;
    ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions(const ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions &) = default ;
    ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions(ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions &&) = default ;
    ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions() = default ;
    ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& operator=(const ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions &) = default ;
    ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& operator=(ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleDetail_ == nullptr
        && return this->moduleFile_ == nullptr && return this->moduleName_ == nullptr && return this->namespaceName_ == nullptr && return this->properties_ == nullptr && return this->source_ == nullptr
        && return this->version_ == nullptr; };
    // moduleDetail Field Functions 
    bool hasModuleDetail() const { return this->moduleDetail_ != nullptr;};
    void deleteModuleDetail() { this->moduleDetail_ = nullptr;};
    inline     const Darabonba::Json & moduleDetail() const { DARABONBA_GET(moduleDetail_) };
    Darabonba::Json & moduleDetail() { DARABONBA_GET(moduleDetail_) };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setModuleDetail(const Darabonba::Json & moduleDetail) { DARABONBA_SET_VALUE(moduleDetail_, moduleDetail) };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setModuleDetail(Darabonba::Json & moduleDetail) { DARABONBA_SET_RVALUE(moduleDetail_, moduleDetail) };


    // moduleFile Field Functions 
    bool hasModuleFile() const { return this->moduleFile_ != nullptr;};
    void deleteModuleFile() { this->moduleFile_ = nullptr;};
    inline     const Darabonba::Json & moduleFile() const { DARABONBA_GET(moduleFile_) };
    Darabonba::Json & moduleFile() { DARABONBA_GET(moduleFile_) };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setModuleFile(const Darabonba::Json & moduleFile) { DARABONBA_SET_VALUE(moduleFile_, moduleFile) };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setModuleFile(Darabonba::Json & moduleFile) { DARABONBA_SET_RVALUE(moduleFile_, moduleFile) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    Darabonba::Json moduleDetail_ = nullptr;
    Darabonba::Json moduleFile_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<string> namespaceName_ = nullptr;
    Darabonba::Json properties_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
