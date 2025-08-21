// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENSTOREUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPENSTOREUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOpenStoreUsageResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetOpenStoreUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenStoreUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpenStoreUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetOpenStoreUsageResponseBody() = default ;
    GetOpenStoreUsageResponseBody(const GetOpenStoreUsageResponseBody &) = default ;
    GetOpenStoreUsageResponseBody(GetOpenStoreUsageResponseBody &&) = default ;
    GetOpenStoreUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenStoreUsageResponseBody() = default ;
    GetOpenStoreUsageResponseBody& operator=(const GetOpenStoreUsageResponseBody &) = default ;
    GetOpenStoreUsageResponseBody& operator=(GetOpenStoreUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpenStoreUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetOpenStoreUsageResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetOpenStoreUsageResponseBodyResult) };
    inline GetOpenStoreUsageResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetOpenStoreUsageResponseBodyResult) };
    inline GetOpenStoreUsageResponseBody& setResult(const GetOpenStoreUsageResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetOpenStoreUsageResponseBody& setResult(GetOpenStoreUsageResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The current request result.
    std::shared_ptr<GetOpenStoreUsageResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
