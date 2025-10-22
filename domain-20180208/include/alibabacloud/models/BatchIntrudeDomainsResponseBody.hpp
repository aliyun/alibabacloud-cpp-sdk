// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchIntrudeDomainsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchIntrudeDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchIntrudeDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchIntrudeDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchIntrudeDomainsResponseBody() = default ;
    BatchIntrudeDomainsResponseBody(const BatchIntrudeDomainsResponseBody &) = default ;
    BatchIntrudeDomainsResponseBody(BatchIntrudeDomainsResponseBody &&) = default ;
    BatchIntrudeDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchIntrudeDomainsResponseBody() = default ;
    BatchIntrudeDomainsResponseBody& operator=(const BatchIntrudeDomainsResponseBody &) = default ;
    BatchIntrudeDomainsResponseBody& operator=(BatchIntrudeDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BatchIntrudeDomainsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, BatchIntrudeDomainsResponseBodyData) };
    inline BatchIntrudeDomainsResponseBodyData data() { DARABONBA_PTR_GET(data_, BatchIntrudeDomainsResponseBodyData) };
    inline BatchIntrudeDomainsResponseBody& setData(const BatchIntrudeDomainsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchIntrudeDomainsResponseBody& setData(BatchIntrudeDomainsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchIntrudeDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<BatchIntrudeDomainsResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
