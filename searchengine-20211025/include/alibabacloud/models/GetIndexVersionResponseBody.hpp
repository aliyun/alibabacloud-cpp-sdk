// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIndexVersionResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetIndexVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetIndexVersionResponseBody() = default ;
    GetIndexVersionResponseBody(const GetIndexVersionResponseBody &) = default ;
    GetIndexVersionResponseBody(GetIndexVersionResponseBody &&) = default ;
    GetIndexVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexVersionResponseBody() = default ;
    GetIndexVersionResponseBody& operator=(const GetIndexVersionResponseBody &) = default ;
    GetIndexVersionResponseBody& operator=(GetIndexVersionResponseBody &&) = default ;
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
    inline GetIndexVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetIndexVersionResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetIndexVersionResponseBodyResult) };
    inline GetIndexVersionResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetIndexVersionResponseBodyResult) };
    inline GetIndexVersionResponseBody& setResult(const GetIndexVersionResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetIndexVersionResponseBody& setResult(GetIndexVersionResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // id of request
    std::shared_ptr<string> requestId_ = nullptr;
    // The clusters.
    std::shared_ptr<GetIndexVersionResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
