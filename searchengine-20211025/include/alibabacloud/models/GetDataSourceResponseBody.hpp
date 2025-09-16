// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataSourceResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetDataSourceResponseBody() = default ;
    GetDataSourceResponseBody(const GetDataSourceResponseBody &) = default ;
    GetDataSourceResponseBody(GetDataSourceResponseBody &&) = default ;
    GetDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceResponseBody() = default ;
    GetDataSourceResponseBody& operator=(const GetDataSourceResponseBody &) = default ;
    GetDataSourceResponseBody& operator=(GetDataSourceResponseBody &&) = default ;
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
    inline GetDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetDataSourceResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetDataSourceResponseBodyResult) };
    inline GetDataSourceResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetDataSourceResponseBodyResult) };
    inline GetDataSourceResponseBody& setResult(const GetDataSourceResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetDataSourceResponseBody& setResult(GetDataSourceResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the data source.
    std::shared_ptr<GetDataSourceResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
