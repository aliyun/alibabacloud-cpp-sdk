// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateConfigMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    UpdateConfigMapRequest() = default ;
    UpdateConfigMapRequest(const UpdateConfigMapRequest &) = default ;
    UpdateConfigMapRequest(UpdateConfigMapRequest &&) = default ;
    UpdateConfigMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigMapRequest() = default ;
    UpdateConfigMapRequest& operator=(const UpdateConfigMapRequest &) = default ;
    UpdateConfigMapRequest& operator=(UpdateConfigMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configMapId_ == nullptr
        && this->data_ == nullptr && this->description_ == nullptr; };
    // configMapId Field Functions 
    bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
    void deleteConfigMapId() { this->configMapId_ = nullptr;};
    inline int64_t getConfigMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, 0L) };
    inline UpdateConfigMapRequest& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline UpdateConfigMapRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConfigMapRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The ID of the ConfigMap instance that you want to update. To view the ID, call the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configMapId_ {};
    // The key-value pairs for the ConfigMap. The value must be a JSON-formatted string, as shown in the following example:
    // 
    // {"Data":"{"k1":"v1", "k2":"v2"}"}
    // 
    // In the JSON string, k represents a key and v represents a value. For more information about configuration items, see [Managing and using configuration items](https://help.aliyun.com/document_detail/171326.html).
    // 
    // This parameter is required.
    shared_ptr<string> data_ {};
    // The description.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
