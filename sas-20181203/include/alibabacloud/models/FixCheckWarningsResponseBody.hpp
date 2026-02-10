// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXCHECKWARNINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FIXCHECKWARNINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FixCheckWarningsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixCheckWarningsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, FixCheckWarningsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    FixCheckWarningsResponseBody() = default ;
    FixCheckWarningsResponseBody(const FixCheckWarningsResponseBody &) = default ;
    FixCheckWarningsResponseBody(FixCheckWarningsResponseBody &&) = default ;
    FixCheckWarningsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixCheckWarningsResponseBody() = default ;
    FixCheckWarningsResponseBody& operator=(const FixCheckWarningsResponseBody &) = default ;
    FixCheckWarningsResponseBody& operator=(FixCheckWarningsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->requestId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline FixCheckWarningsResponseBody& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FixCheckWarningsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the baseline risk item that has been fixed by using the Batch Repair feature.
    shared_ptr<int64_t> batchId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
