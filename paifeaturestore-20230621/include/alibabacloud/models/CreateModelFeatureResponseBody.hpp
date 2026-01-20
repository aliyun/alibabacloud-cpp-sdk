// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateModelFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelFeatureId, modelFeatureId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelFeatureId, modelFeatureId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateModelFeatureResponseBody() = default ;
    CreateModelFeatureResponseBody(const CreateModelFeatureResponseBody &) = default ;
    CreateModelFeatureResponseBody(CreateModelFeatureResponseBody &&) = default ;
    CreateModelFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelFeatureResponseBody() = default ;
    CreateModelFeatureResponseBody& operator=(const CreateModelFeatureResponseBody &) = default ;
    CreateModelFeatureResponseBody& operator=(CreateModelFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelFeatureId_ == nullptr
        && this->requestId_ == nullptr; };
    // modelFeatureId Field Functions 
    bool hasModelFeatureId() const { return this->modelFeatureId_ != nullptr;};
    void deleteModelFeatureId() { this->modelFeatureId_ = nullptr;};
    inline string getModelFeatureId() const { DARABONBA_PTR_GET_DEFAULT(modelFeatureId_, "") };
    inline CreateModelFeatureResponseBody& setModelFeatureId(string modelFeatureId) { DARABONBA_PTR_SET_VALUE(modelFeatureId_, modelFeatureId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateModelFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> modelFeatureId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
