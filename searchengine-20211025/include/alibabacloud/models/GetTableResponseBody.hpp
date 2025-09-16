// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetTableResponseBody() = default ;
    GetTableResponseBody(const GetTableResponseBody &) = default ;
    GetTableResponseBody(GetTableResponseBody &&) = default ;
    GetTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBody() = default ;
    GetTableResponseBody& operator=(const GetTableResponseBody &) = default ;
    GetTableResponseBody& operator=(GetTableResponseBody &&) = default ;
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
    inline GetTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetTableResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetTableResponseBodyResult) };
    inline GetTableResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetTableResponseBodyResult) };
    inline GetTableResponseBody& setResult(const GetTableResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetTableResponseBody& setResult(GetTableResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    // The results returned.
    std::shared_ptr<GetTableResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
