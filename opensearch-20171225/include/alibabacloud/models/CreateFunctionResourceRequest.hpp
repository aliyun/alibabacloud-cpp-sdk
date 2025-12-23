// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNCTIONRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNCTIONRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFunctionResourceRequestData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateFunctionResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFunctionResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFunctionResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateFunctionResourceRequest() = default ;
    CreateFunctionResourceRequest(const CreateFunctionResourceRequest &) = default ;
    CreateFunctionResourceRequest(CreateFunctionResourceRequest &&) = default ;
    CreateFunctionResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFunctionResourceRequest() = default ;
    CreateFunctionResourceRequest& operator=(const CreateFunctionResourceRequest &) = default ;
    CreateFunctionResourceRequest& operator=(CreateFunctionResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->description_ == nullptr && return this->resourceName_ == nullptr && return this->resourceType_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateFunctionResourceRequestData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateFunctionResourceRequestData) };
    inline CreateFunctionResourceRequestData data() { DARABONBA_PTR_GET(data_, CreateFunctionResourceRequestData) };
    inline CreateFunctionResourceRequest& setData(const CreateFunctionResourceRequestData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateFunctionResourceRequest& setData(CreateFunctionResourceRequestData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFunctionResourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline CreateFunctionResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateFunctionResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The resource data. The data structure varies with the resource type.
    std::shared_ptr<CreateFunctionResourceRequestData> data_ = nullptr;
    // The description of the resource.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource type.
    // 
    // Valid values:
    // 
    // *   feature_generator
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   raw_file
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
