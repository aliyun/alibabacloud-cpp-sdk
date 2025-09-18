// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateApplicationConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationConfigsResponseBody() = default ;
    UpdateApplicationConfigsResponseBody(const UpdateApplicationConfigsResponseBody &) = default ;
    UpdateApplicationConfigsResponseBody(UpdateApplicationConfigsResponseBody &&) = default ;
    UpdateApplicationConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationConfigsResponseBody() = default ;
    UpdateApplicationConfigsResponseBody& operator=(const UpdateApplicationConfigsResponseBody &) = default ;
    UpdateApplicationConfigsResponseBody& operator=(UpdateApplicationConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationId_ != nullptr
        && this->requestId_ != nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline UpdateApplicationConfigsResponseBody& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The operation ID.
    std::shared_ptr<string> operationId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
