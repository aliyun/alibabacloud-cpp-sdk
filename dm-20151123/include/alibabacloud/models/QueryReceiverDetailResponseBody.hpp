// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECEIVERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECEIVERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryReceiverDetailResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryReceiverDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReceiverDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSchema, dataSchema_);
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReceiverDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSchema, dataSchema_);
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryReceiverDetailResponseBody() = default ;
    QueryReceiverDetailResponseBody(const QueryReceiverDetailResponseBody &) = default ;
    QueryReceiverDetailResponseBody(QueryReceiverDetailResponseBody &&) = default ;
    QueryReceiverDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReceiverDetailResponseBody() = default ;
    QueryReceiverDetailResponseBody& operator=(const QueryReceiverDetailResponseBody &) = default ;
    QueryReceiverDetailResponseBody& operator=(QueryReceiverDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSchema_ == nullptr
        && return this->nextStart_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->data_ == nullptr; };
    // dataSchema Field Functions 
    bool hasDataSchema() const { return this->dataSchema_ != nullptr;};
    void deleteDataSchema() { this->dataSchema_ = nullptr;};
    inline string dataSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSchema_, "") };
    inline QueryReceiverDetailResponseBody& setDataSchema(string dataSchema) { DARABONBA_PTR_SET_VALUE(dataSchema_, dataSchema) };


    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string nextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline QueryReceiverDetailResponseBody& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReceiverDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryReceiverDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryReceiverDetailResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryReceiverDetailResponseBodyData) };
    inline QueryReceiverDetailResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryReceiverDetailResponseBodyData) };
    inline QueryReceiverDetailResponseBody& setData(const QueryReceiverDetailResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryReceiverDetailResponseBody& setData(QueryReceiverDetailResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Field name for the Data of recipients
    std::shared_ptr<string> dataSchema_ = nullptr;
    // Used for pagination. If there are more results, set this returned value to the NextStart in the next request.
    std::shared_ptr<string> nextStart_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total count (deprecated field, kept for historical compatibility)
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Detailed information
    std::shared_ptr<QueryReceiverDetailResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
