// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateBatchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBatchTaskResponseBody() = default ;
    CreateBatchTaskResponseBody(const CreateBatchTaskResponseBody &) = default ;
    CreateBatchTaskResponseBody(CreateBatchTaskResponseBody &&) = default ;
    CreateBatchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchTaskResponseBody() = default ;
    CreateBatchTaskResponseBody& operator=(const CreateBatchTaskResponseBody &) = default ;
    CreateBatchTaskResponseBody& operator=(CreateBatchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->requestId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline CreateBatchTaskResponseBody& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBatchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The release batch ID.
    shared_ptr<string> batchId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
