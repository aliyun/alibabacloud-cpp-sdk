// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVALIDADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVALIDADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryInvalidAddressResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryInvalidAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvalidAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvalidAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryInvalidAddressResponseBody() = default ;
    QueryInvalidAddressResponseBody(const QueryInvalidAddressResponseBody &) = default ;
    QueryInvalidAddressResponseBody(QueryInvalidAddressResponseBody &&) = default ;
    QueryInvalidAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvalidAddressResponseBody() = default ;
    QueryInvalidAddressResponseBody& operator=(const QueryInvalidAddressResponseBody &) = default ;
    QueryInvalidAddressResponseBody& operator=(QueryInvalidAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextStart_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->data_ != nullptr; };
    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string nextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline QueryInvalidAddressResponseBody& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInvalidAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryInvalidAddressResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryInvalidAddressResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryInvalidAddressResponseBodyData) };
    inline QueryInvalidAddressResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryInvalidAddressResponseBodyData) };
    inline QueryInvalidAddressResponseBody& setData(const QueryInvalidAddressResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryInvalidAddressResponseBody& setData(QueryInvalidAddressResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Next request starting position.
    std::shared_ptr<string> nextStart_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total count.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Records.
    std::shared_ptr<QueryInvalidAddressResponseBodyData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
