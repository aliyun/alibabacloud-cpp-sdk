// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateModelServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateModelServiceResponseBody() = default ;
    CreateModelServiceResponseBody(const CreateModelServiceResponseBody &) = default ;
    CreateModelServiceResponseBody(CreateModelServiceResponseBody &&) = default ;
    CreateModelServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelServiceResponseBody() = default ;
    CreateModelServiceResponseBody& operator=(const CreateModelServiceResponseBody &) = default ;
    CreateModelServiceResponseBody& operator=(CreateModelServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelServiceId_ == nullptr
        && return this->requestId_ == nullptr; };
    // modelServiceId Field Functions 
    bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
    void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
    inline string modelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
    inline CreateModelServiceResponseBody& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateModelServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> modelServiceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
