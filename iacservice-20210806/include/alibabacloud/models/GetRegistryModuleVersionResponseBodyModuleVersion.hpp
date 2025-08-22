// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYMODULEVERSIONRESPONSEBODYMODULEVERSION_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYMODULEVERSIONRESPONSEBODYMODULEVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryModuleVersionResponseBodyModuleVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryModuleVersionResponseBodyModuleVersion& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(downloads, downloads_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourceUrl, sourceUrl_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryModuleVersionResponseBodyModuleVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(downloads, downloads_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourceUrl, sourceUrl_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetRegistryModuleVersionResponseBodyModuleVersion() = default ;
    GetRegistryModuleVersionResponseBodyModuleVersion(const GetRegistryModuleVersionResponseBodyModuleVersion &) = default ;
    GetRegistryModuleVersionResponseBodyModuleVersion(GetRegistryModuleVersionResponseBodyModuleVersion &&) = default ;
    GetRegistryModuleVersionResponseBodyModuleVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryModuleVersionResponseBodyModuleVersion() = default ;
    GetRegistryModuleVersionResponseBodyModuleVersion& operator=(const GetRegistryModuleVersionResponseBodyModuleVersion &) = default ;
    GetRegistryModuleVersionResponseBodyModuleVersion& operator=(GetRegistryModuleVersionResponseBodyModuleVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->detailUrl_ != nullptr && this->downloads_ != nullptr && this->moduleName_ != nullptr && this->namespaceName_ != nullptr && this->provider_ != nullptr
        && this->source_ != nullptr && this->sourceUrl_ != nullptr && this->version_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline string detailUrl() const { DARABONBA_PTR_GET_DEFAULT(detailUrl_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setDetailUrl(string detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };


    // downloads Field Functions 
    bool hasDownloads() const { return this->downloads_ != nullptr;};
    void deleteDownloads() { this->downloads_ = nullptr;};
    inline string downloads() const { DARABONBA_PTR_GET_DEFAULT(downloads_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setDownloads(string downloads) { DARABONBA_PTR_SET_VALUE(downloads_, downloads) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetRegistryModuleVersionResponseBodyModuleVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> detailUrl_ = nullptr;
    std::shared_ptr<string> downloads_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<string> namespaceName_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceUrl_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
