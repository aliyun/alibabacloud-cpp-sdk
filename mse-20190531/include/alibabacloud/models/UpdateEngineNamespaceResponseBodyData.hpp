// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENGINENAMESPACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENGINENAMESPACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateEngineNamespaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEngineNamespaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigCount, configCount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceDesc, namespaceDesc_);
      DARABONBA_PTR_TO_JSON(NamespaceShowName, namespaceShowName_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEngineNamespaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigCount, configCount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceDesc, namespaceDesc_);
      DARABONBA_PTR_FROM_JSON(NamespaceShowName, namespaceShowName_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateEngineNamespaceResponseBodyData() = default ;
    UpdateEngineNamespaceResponseBodyData(const UpdateEngineNamespaceResponseBodyData &) = default ;
    UpdateEngineNamespaceResponseBodyData(UpdateEngineNamespaceResponseBodyData &&) = default ;
    UpdateEngineNamespaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEngineNamespaceResponseBodyData() = default ;
    UpdateEngineNamespaceResponseBodyData& operator=(const UpdateEngineNamespaceResponseBodyData &) = default ;
    UpdateEngineNamespaceResponseBodyData& operator=(UpdateEngineNamespaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configCount_ == nullptr
        && return this->namespace_ == nullptr && return this->namespaceDesc_ == nullptr && return this->namespaceShowName_ == nullptr && return this->quota_ == nullptr && return this->type_ == nullptr; };
    // configCount Field Functions 
    bool hasConfigCount() const { return this->configCount_ != nullptr;};
    void deleteConfigCount() { this->configCount_ = nullptr;};
    inline int32_t configCount() const { DARABONBA_PTR_GET_DEFAULT(configCount_, 0) };
    inline UpdateEngineNamespaceResponseBodyData& setConfigCount(int32_t configCount) { DARABONBA_PTR_SET_VALUE(configCount_, configCount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateEngineNamespaceResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceDesc Field Functions 
    bool hasNamespaceDesc() const { return this->namespaceDesc_ != nullptr;};
    void deleteNamespaceDesc() { this->namespaceDesc_ = nullptr;};
    inline string namespaceDesc() const { DARABONBA_PTR_GET_DEFAULT(namespaceDesc_, "") };
    inline UpdateEngineNamespaceResponseBodyData& setNamespaceDesc(string namespaceDesc) { DARABONBA_PTR_SET_VALUE(namespaceDesc_, namespaceDesc) };


    // namespaceShowName Field Functions 
    bool hasNamespaceShowName() const { return this->namespaceShowName_ != nullptr;};
    void deleteNamespaceShowName() { this->namespaceShowName_ = nullptr;};
    inline string namespaceShowName() const { DARABONBA_PTR_GET_DEFAULT(namespaceShowName_, "") };
    inline UpdateEngineNamespaceResponseBodyData& setNamespaceShowName(string namespaceShowName) { DARABONBA_PTR_SET_VALUE(namespaceShowName_, namespaceShowName) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline UpdateEngineNamespaceResponseBodyData& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline UpdateEngineNamespaceResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The quota value.
    std::shared_ptr<int32_t> configCount_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> namespaceDesc_ = nullptr;
    // The display name of the namespace.
    std::shared_ptr<string> namespaceShowName_ = nullptr;
    // The quota of configurations.
    std::shared_ptr<int32_t> quota_ = nullptr;
    // The type of the namespace. Valid values:
    // 
    // *   `0`: global configuration
    // *   `1`: default namespace
    // *   `2`: custom namespace
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
