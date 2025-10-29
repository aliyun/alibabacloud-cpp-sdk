// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIOPERATIONRESPONSEBODYDATAOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIOPERATIONRESPONSEBODYDATAOPERATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiOperationResponseBodyDataOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiOperationResponseBodyDataOperations& obj) { 
      DARABONBA_PTR_TO_JSON(operationId, operationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiOperationResponseBodyDataOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(operationId, operationId_);
    };
    CreateHttpApiOperationResponseBodyDataOperations() = default ;
    CreateHttpApiOperationResponseBodyDataOperations(const CreateHttpApiOperationResponseBodyDataOperations &) = default ;
    CreateHttpApiOperationResponseBodyDataOperations(CreateHttpApiOperationResponseBodyDataOperations &&) = default ;
    CreateHttpApiOperationResponseBodyDataOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiOperationResponseBodyDataOperations() = default ;
    CreateHttpApiOperationResponseBodyDataOperations& operator=(const CreateHttpApiOperationResponseBodyDataOperations &) = default ;
    CreateHttpApiOperationResponseBodyDataOperations& operator=(CreateHttpApiOperationResponseBodyDataOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationId_ == nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline CreateHttpApiOperationResponseBodyDataOperations& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


  protected:
    // Operation ID.
    std::shared_ptr<string> operationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
