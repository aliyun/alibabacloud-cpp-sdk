// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataIngestion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Batch, batch_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Batch, batch_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBatchResponseBody() = default ;
    GetBatchResponseBody(const GetBatchResponseBody &) = default ;
    GetBatchResponseBody(GetBatchResponseBody &&) = default ;
    GetBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchResponseBody() = default ;
    GetBatchResponseBody& operator=(const GetBatchResponseBody &) = default ;
    GetBatchResponseBody& operator=(GetBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batch_ != nullptr
        && this->requestId_ != nullptr; };
    // batch Field Functions 
    bool hasBatch() const { return this->batch_ != nullptr;};
    void deleteBatch() { this->batch_ = nullptr;};
    inline const DataIngestion & batch() const { DARABONBA_PTR_GET_CONST(batch_, DataIngestion) };
    inline DataIngestion batch() { DARABONBA_PTR_GET(batch_, DataIngestion) };
    inline GetBatchResponseBody& setBatch(const DataIngestion & batch) { DARABONBA_PTR_SET_VALUE(batch_, batch) };
    inline GetBatchResponseBody& setBatch(DataIngestion && batch) { DARABONBA_PTR_SET_RVALUE(batch_, batch) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the batch processing task.
    std::shared_ptr<DataIngestion> batch_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
