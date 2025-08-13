// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENGINENAMESPACESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENGINENAMESPACESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListEngineNamespacesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEngineNamespacesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigCount, configCount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceDesc, namespaceDesc_);
      DARABONBA_PTR_TO_JSON(NamespaceShowName, namespaceShowName_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(ServiceCount, serviceCount_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListEngineNamespacesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigCount, configCount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceDesc, namespaceDesc_);
      DARABONBA_PTR_FROM_JSON(NamespaceShowName, namespaceShowName_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(ServiceCount, serviceCount_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListEngineNamespacesResponseBodyData() = default ;
    ListEngineNamespacesResponseBodyData(const ListEngineNamespacesResponseBodyData &) = default ;
    ListEngineNamespacesResponseBodyData(ListEngineNamespacesResponseBodyData &&) = default ;
    ListEngineNamespacesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEngineNamespacesResponseBodyData() = default ;
    ListEngineNamespacesResponseBodyData& operator=(const ListEngineNamespacesResponseBodyData &) = default ;
    ListEngineNamespacesResponseBodyData& operator=(ListEngineNamespacesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configCount_ != nullptr
        && this->namespace_ != nullptr && this->namespaceDesc_ != nullptr && this->namespaceShowName_ != nullptr && this->quota_ != nullptr && this->serviceCount_ != nullptr
        && this->sourceType_ != nullptr && this->type_ != nullptr; };
    // configCount Field Functions 
    bool hasConfigCount() const { return this->configCount_ != nullptr;};
    void deleteConfigCount() { this->configCount_ = nullptr;};
    inline int32_t configCount() const { DARABONBA_PTR_GET_DEFAULT(configCount_, 0) };
    inline ListEngineNamespacesResponseBodyData& setConfigCount(int32_t configCount) { DARABONBA_PTR_SET_VALUE(configCount_, configCount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListEngineNamespacesResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceDesc Field Functions 
    bool hasNamespaceDesc() const { return this->namespaceDesc_ != nullptr;};
    void deleteNamespaceDesc() { this->namespaceDesc_ = nullptr;};
    inline string namespaceDesc() const { DARABONBA_PTR_GET_DEFAULT(namespaceDesc_, "") };
    inline ListEngineNamespacesResponseBodyData& setNamespaceDesc(string namespaceDesc) { DARABONBA_PTR_SET_VALUE(namespaceDesc_, namespaceDesc) };


    // namespaceShowName Field Functions 
    bool hasNamespaceShowName() const { return this->namespaceShowName_ != nullptr;};
    void deleteNamespaceShowName() { this->namespaceShowName_ = nullptr;};
    inline string namespaceShowName() const { DARABONBA_PTR_GET_DEFAULT(namespaceShowName_, "") };
    inline ListEngineNamespacesResponseBodyData& setNamespaceShowName(string namespaceShowName) { DARABONBA_PTR_SET_VALUE(namespaceShowName_, namespaceShowName) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline ListEngineNamespacesResponseBodyData& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // serviceCount Field Functions 
    bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
    void deleteServiceCount() { this->serviceCount_ = nullptr;};
    inline string serviceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, "") };
    inline ListEngineNamespacesResponseBodyData& setServiceCount(string serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListEngineNamespacesResponseBodyData& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListEngineNamespacesResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The quota value.
    std::shared_ptr<int32_t> configCount_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> namespaceDesc_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceShowName_ = nullptr;
    // The quota.
    std::shared_ptr<int32_t> quota_ = nullptr;
    // The number of active services.
    std::shared_ptr<string> serviceCount_ = nullptr;
    // The source from which the namespace was created.
    std::shared_ptr<string> sourceType_ = nullptr;
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
