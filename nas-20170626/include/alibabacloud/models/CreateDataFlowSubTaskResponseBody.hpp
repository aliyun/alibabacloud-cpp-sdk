// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAFLOWSUBTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAFLOWSUBTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateDataFlowSubTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataFlowSubTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataFlowSubTaskId, dataFlowSubTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataFlowSubTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataFlowSubTaskId, dataFlowSubTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDataFlowSubTaskResponseBody() = default ;
    CreateDataFlowSubTaskResponseBody(const CreateDataFlowSubTaskResponseBody &) = default ;
    CreateDataFlowSubTaskResponseBody(CreateDataFlowSubTaskResponseBody &&) = default ;
    CreateDataFlowSubTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataFlowSubTaskResponseBody() = default ;
    CreateDataFlowSubTaskResponseBody& operator=(const CreateDataFlowSubTaskResponseBody &) = default ;
    CreateDataFlowSubTaskResponseBody& operator=(CreateDataFlowSubTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataFlowSubTaskId_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataFlowSubTaskId Field Functions 
    bool hasDataFlowSubTaskId() const { return this->dataFlowSubTaskId_ != nullptr;};
    void deleteDataFlowSubTaskId() { this->dataFlowSubTaskId_ = nullptr;};
    inline string dataFlowSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowSubTaskId_, "") };
    inline CreateDataFlowSubTaskResponseBody& setDataFlowSubTaskId(string dataFlowSubTaskId) { DARABONBA_PTR_SET_VALUE(dataFlowSubTaskId_, dataFlowSubTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataFlowSubTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the data streaming task.
    std::shared_ptr<string> dataFlowSubTaskId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
