// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateModelResponseBody() = default ;
    CreateModelResponseBody(const CreateModelResponseBody &) = default ;
    CreateModelResponseBody(CreateModelResponseBody &&) = default ;
    CreateModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelResponseBody() = default ;
    CreateModelResponseBody& operator=(const CreateModelResponseBody &) = default ;
    CreateModelResponseBody& operator=(CreateModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modelId_ != nullptr
        && this->requestId_ != nullptr; };
    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateModelResponseBody& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The model ID.
    std::shared_ptr<string> modelId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
