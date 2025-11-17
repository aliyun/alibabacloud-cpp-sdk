// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class CreateMultiOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderIds, orderIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderIds, orderIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMultiOrderResponseBody() = default ;
    CreateMultiOrderResponseBody(const CreateMultiOrderResponseBody &) = default ;
    CreateMultiOrderResponseBody(CreateMultiOrderResponseBody &&) = default ;
    CreateMultiOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiOrderResponseBody() = default ;
    CreateMultiOrderResponseBody& operator=(const CreateMultiOrderResponseBody &) = default ;
    CreateMultiOrderResponseBody& operator=(CreateMultiOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // orderIds Field Functions 
    bool hasOrderIds() const { return this->orderIds_ != nullptr;};
    void deleteOrderIds() { this->orderIds_ = nullptr;};
    inline const vector<int64_t> & orderIds() const { DARABONBA_PTR_GET_CONST(orderIds_, vector<int64_t>) };
    inline vector<int64_t> orderIds() { DARABONBA_PTR_GET(orderIds_, vector<int64_t>) };
    inline CreateMultiOrderResponseBody& setOrderIds(const vector<int64_t> & orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };
    inline CreateMultiOrderResponseBody& setOrderIds(vector<int64_t> && orderIds) { DARABONBA_PTR_SET_RVALUE(orderIds_, orderIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMultiOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<int64_t>> orderIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
