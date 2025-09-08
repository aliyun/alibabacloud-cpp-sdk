// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODYDATACONFIGMAPS_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODYDATACONFIGMAPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespacedConfigMapsResponseBodyDataConfigMaps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacedConfigMapsResponseBodyDataConfigMaps& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RelateApps, relateApps_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacedConfigMapsResponseBodyDataConfigMaps& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RelateApps, relateApps_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListNamespacedConfigMapsResponseBodyDataConfigMaps() = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMaps(const ListNamespacedConfigMapsResponseBodyDataConfigMaps &) = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMaps(ListNamespacedConfigMapsResponseBodyDataConfigMaps &&) = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMaps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacedConfigMapsResponseBodyDataConfigMaps() = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMaps& operator=(const ListNamespacedConfigMapsResponseBodyDataConfigMaps &) = default ;
    ListNamespacedConfigMapsResponseBodyDataConfigMaps& operator=(ListNamespacedConfigMapsResponseBodyDataConfigMaps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configMapId_ != nullptr
        && this->createTime_ != nullptr && this->data_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->namespaceId_ != nullptr
        && this->relateApps_ != nullptr && this->updateTime_ != nullptr; };
    // configMapId Field Functions 
    bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
    void deleteConfigMapId() { this->configMapId_ = nullptr;};
    inline int64_t configMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, 0L) };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // relateApps Field Functions 
    bool hasRelateApps() const { return this->relateApps_ != nullptr;};
    void deleteRelateApps() { this->relateApps_ = nullptr;};
    inline const vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps> & relateApps() const { DARABONBA_PTR_GET_CONST(relateApps_, vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps>) };
    inline vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps> relateApps() { DARABONBA_PTR_GET(relateApps_, vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps>) };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setRelateApps(const vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps> & relateApps) { DARABONBA_PTR_SET_VALUE(relateApps_, relateApps) };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setRelateApps(vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps> && relateApps) { DARABONBA_PTR_SET_RVALUE(relateApps_, relateApps) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListNamespacedConfigMapsResponseBodyDataConfigMaps& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the ConfigMap instance.
    std::shared_ptr<int64_t> configMapId_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The data of ConfigMap key-value pairs. Format:
    // 
    // {"k1":"v1", "k2":"v2"}
    // 
    // k specifies a key and v specifies a value. For more information, see [Manage and use configurations](https://help.aliyun.com/document_detail/171326.html).
    Darabonba::Json data_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the ConfigMap instance.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The application that is associated with the instance.
    std::shared_ptr<vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMapsRelateApps>> relateApps_ = nullptr;
    // The time when the instance was last modified.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
