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
        && this->description_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline CreateConfigMapRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConfigMapRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateConfigMapRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateConfigMapRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The key-value pair data of the ConfigMap in JSON format. The format is as follows:
    // 
    // {"Data":"{\\"k1\\":\\"v1\\", \\"k2\\":\\"v2\\"}"}
    // 
    // k represents the key, and v represents the value. For more information about ConfigMaps, see [Manage and use ConfigMaps](https://help.aliyun.com/document_detail/171326.html).
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
    // The description. The description cannot contain spaces and can be up to 255 characters in length.
    shared_ptr<string> description_ {};
    // The name of the ConfigMap instance. The name can contain digits, letters, and underscores (_), and must start with a letter.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the namespace where the ConfigMap instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
