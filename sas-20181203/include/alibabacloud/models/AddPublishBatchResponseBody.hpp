// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPUBLISHBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPUBLISHBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddPublishBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPublishBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPublishBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPublishBatchResponseBody() = default ;
    AddPublishBatchResponseBody(const AddPublishBatchResponseBody &) = default ;
    AddPublishBatchResponseBody(AddPublishBatchResponseBody &&) = default ;
    AddPublishBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPublishBatchResponseBody() = default ;
    AddPublishBatchResponseBody& operator=(const AddPublishBatchResponseBody &) = default ;
    AddPublishBatchResponseBody& operator=(AddPublishBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && return this->requestId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline AddPublishBatchResponseBody& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPublishBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the release batch.
    std::shared_ptr<int64_t> batchId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
