// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONFIGMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONFIGMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateConfigMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConfigMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConfigMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    CreateConfigMapRequest() = default ;
    CreateConfigMapRequest(const CreateConfigMapRequest &) = default ;
    CreateConfigMapRequest(CreateConfigMapRequest &&) = default ;
    CreateConfigMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConfigMapRequest() = default ;
    CreateConfigMapRequest& operator=(const CreateConfigMapRequest &) = default ;
    CreateConfigMapRequest& operator=(CreateConfigMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline CreateConfigMapRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConfigMapRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateConfigMapRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateConfigMapRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The ConfigMap data.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The key-value pairs of the ConfigMap in the JSON format. Format:
    // 
    // {"Data":"{"k1":"v1", "k2":"v2"}"}
    // 
    // k specifies a key and v specifies a value. For more information, see [Manage a Kubernetes ConfigMap](https://help.aliyun.com/document_detail/171326.html).
    std::shared_ptr<string> description_ = nullptr;
    // The name of the ConfigMap. The name can contain digits, letters, and underscores (_). The name must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the namespace to which the ConfigMap instance belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
