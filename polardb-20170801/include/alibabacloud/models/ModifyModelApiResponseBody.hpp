// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMODELAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMODELAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyModelApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyModelApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelApiId, modelApiId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyModelApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelApiId, modelApiId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyModelApiResponseBody() = default ;
    ModifyModelApiResponseBody(const ModifyModelApiResponseBody &) = default ;
    ModifyModelApiResponseBody(ModifyModelApiResponseBody &&) = default ;
    ModifyModelApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyModelApiResponseBody() = default ;
    ModifyModelApiResponseBody& operator=(const ModifyModelApiResponseBody &) = default ;
    ModifyModelApiResponseBody& operator=(ModifyModelApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelApiId_ == nullptr
        && this->requestId_ == nullptr; };
    // modelApiId Field Functions 
    bool hasModelApiId() const { return this->modelApiId_ != nullptr;};
    void deleteModelApiId() { this->modelApiId_ = nullptr;};
    inline string getModelApiId() const { DARABONBA_PTR_GET_DEFAULT(modelApiId_, "") };
    inline ModifyModelApiResponseBody& setModelApiId(string modelApiId) { DARABONBA_PTR_SET_VALUE(modelApiId_, modelApiId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyModelApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> modelApiId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
