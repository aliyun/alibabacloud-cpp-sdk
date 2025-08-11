// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCECONNECTIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCECONNECTIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataSourceConnectionInfoResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetDataSourceConnectionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceConnectionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceConnectionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataSourceConnectionInfoResponseBody() = default ;
    GetDataSourceConnectionInfoResponseBody(const GetDataSourceConnectionInfoResponseBody &) = default ;
    GetDataSourceConnectionInfoResponseBody(GetDataSourceConnectionInfoResponseBody &&) = default ;
    GetDataSourceConnectionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceConnectionInfoResponseBody() = default ;
    GetDataSourceConnectionInfoResponseBody& operator=(const GetDataSourceConnectionInfoResponseBody &) = default ;
    GetDataSourceConnectionInfoResponseBody& operator=(GetDataSourceConnectionInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataSourceConnectionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetDataSourceConnectionInfoResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetDataSourceConnectionInfoResponseBodyResult) };
    inline GetDataSourceConnectionInfoResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetDataSourceConnectionInfoResponseBodyResult) };
    inline GetDataSourceConnectionInfoResponseBody& setResult(const GetDataSourceConnectionInfoResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetDataSourceConnectionInfoResponseBody& setResult(GetDataSourceConnectionInfoResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataSourceConnectionInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Data source information.
    std::shared_ptr<GetDataSourceConnectionInfoResponseBodyResult> result_ = nullptr;
    // Indicates whether the operation was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
