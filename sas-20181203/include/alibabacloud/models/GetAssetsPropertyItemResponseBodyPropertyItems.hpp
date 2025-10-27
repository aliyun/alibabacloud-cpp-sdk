// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMRESPONSEBODYPROPERTYITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMRESPONSEBODYPROPERTYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyItemResponseBodyPropertyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(MiddlewareName, middlewareName_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyItemResponseBodyPropertyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(MiddlewareName, middlewareName_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    GetAssetsPropertyItemResponseBodyPropertyItems() = default ;
    GetAssetsPropertyItemResponseBodyPropertyItems(const GetAssetsPropertyItemResponseBodyPropertyItems &) = default ;
    GetAssetsPropertyItemResponseBodyPropertyItems(GetAssetsPropertyItemResponseBodyPropertyItems &&) = default ;
    GetAssetsPropertyItemResponseBodyPropertyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyItemResponseBodyPropertyItems() = default ;
    GetAssetsPropertyItemResponseBodyPropertyItems& operator=(const GetAssetsPropertyItemResponseBodyPropertyItems &) = default ;
    GetAssetsPropertyItemResponseBodyPropertyItems& operator=(GetAssetsPropertyItemResponseBodyPropertyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->domain_ == nullptr && return this->middlewareName_ == nullptr && return this->modelName_ == nullptr && return this->moduleName_ == nullptr && return this->path_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetAssetsPropertyItemResponseBodyPropertyItems& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetAssetsPropertyItemResponseBodyPropertyItems& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // middlewareName Field Functions 
    bool hasMiddlewareName() const { return this->middlewareName_ != nullptr;};
    void deleteMiddlewareName() { this->middlewareName_ = nullptr;};
    inline string middlewareName() const { DARABONBA_PTR_GET_DEFAULT(middlewareName_, "") };
    inline GetAssetsPropertyItemResponseBodyPropertyItems& setMiddlewareName(string middlewareName) { DARABONBA_PTR_SET_VALUE(middlewareName_, middlewareName) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetAssetsPropertyItemResponseBodyPropertyItems& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetAssetsPropertyItemResponseBodyPropertyItems& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetAssetsPropertyItemResponseBodyPropertyItems& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The number of servers related to the asset fingerprints.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The endpoint.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> middlewareName_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    // The name of the module.
    // 
    // > This parameter is returned only when **Biz** is set to **lkm**.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The path to the startup item.
    // 
    // > This parameter is returned only when **Biz** is set to **autorun**.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
