// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetFileResponseBody() = default ;
    GetFileResponseBody(const GetFileResponseBody &) = default ;
    GetFileResponseBody(GetFileResponseBody &&) = default ;
    GetFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBody() = default ;
    GetFileResponseBody& operator=(const GetFileResponseBody &) = default ;
    GetFileResponseBody& operator=(GetFileResponseBody &&) = default ;
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
    inline GetFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetFileResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetFileResponseBodyResult) };
    inline GetFileResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetFileResponseBodyResult) };
    inline GetFileResponseBody& setResult(const GetFileResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFileResponseBody& setResult(GetFileResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The index information.
    std::shared_ptr<GetFileResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
