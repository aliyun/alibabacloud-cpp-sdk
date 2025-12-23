// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFunctionResourceRequestData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateFunctionResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    UpdateFunctionResourceRequest() = default ;
    UpdateFunctionResourceRequest(const UpdateFunctionResourceRequest &) = default ;
    UpdateFunctionResourceRequest(UpdateFunctionResourceRequest &&) = default ;
    UpdateFunctionResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionResourceRequest() = default ;
    UpdateFunctionResourceRequest& operator=(const UpdateFunctionResourceRequest &) = default ;
    UpdateFunctionResourceRequest& operator=(UpdateFunctionResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->description_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateFunctionResourceRequestData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateFunctionResourceRequestData) };
    inline UpdateFunctionResourceRequestData data() { DARABONBA_PTR_GET(data_, UpdateFunctionResourceRequestData) };
    inline UpdateFunctionResourceRequest& setData(const UpdateFunctionResourceRequestData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateFunctionResourceRequest& setData(UpdateFunctionResourceRequestData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFunctionResourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The resource data. The data structure varies with the resource type.
    std::shared_ptr<UpdateFunctionResourceRequestData> data_ = nullptr;
    // The description of the resource.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
