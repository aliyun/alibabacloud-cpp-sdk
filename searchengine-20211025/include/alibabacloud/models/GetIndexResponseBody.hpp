// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIndexResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetIndexResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetIndexResponseBody() = default ;
    GetIndexResponseBody(const GetIndexResponseBody &) = default ;
    GetIndexResponseBody(GetIndexResponseBody &&) = default ;
    GetIndexResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexResponseBody() = default ;
    GetIndexResponseBody& operator=(const GetIndexResponseBody &) = default ;
    GetIndexResponseBody& operator=(GetIndexResponseBody &&) = default ;
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
    inline GetIndexResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetIndexResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetIndexResponseBodyResult) };
    inline GetIndexResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetIndexResponseBodyResult) };
    inline GetIndexResponseBody& setResult(const GetIndexResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetIndexResponseBody& setResult(GetIndexResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The index information.
    std::shared_ptr<GetIndexResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
