// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEGENERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEGENERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableGenerationResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableGenerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableGenerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableGenerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetTableGenerationResponseBody() = default ;
    GetTableGenerationResponseBody(const GetTableGenerationResponseBody &) = default ;
    GetTableGenerationResponseBody(GetTableGenerationResponseBody &&) = default ;
    GetTableGenerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableGenerationResponseBody() = default ;
    GetTableGenerationResponseBody& operator=(const GetTableGenerationResponseBody &) = default ;
    GetTableGenerationResponseBody& operator=(GetTableGenerationResponseBody &&) = default ;
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
    inline GetTableGenerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetTableGenerationResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetTableGenerationResponseBodyResult) };
    inline GetTableGenerationResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetTableGenerationResponseBodyResult) };
    inline GetTableGenerationResponseBody& setResult(const GetTableGenerationResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetTableGenerationResponseBody& setResult(GetTableGenerationResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    // The result returned.
    std::shared_ptr<GetTableGenerationResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
