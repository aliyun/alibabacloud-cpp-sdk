// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSqlInstanceResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetSqlInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetSqlInstanceResponseBody() = default ;
    GetSqlInstanceResponseBody(const GetSqlInstanceResponseBody &) = default ;
    GetSqlInstanceResponseBody(GetSqlInstanceResponseBody &&) = default ;
    GetSqlInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlInstanceResponseBody() = default ;
    GetSqlInstanceResponseBody& operator=(const GetSqlInstanceResponseBody &) = default ;
    GetSqlInstanceResponseBody& operator=(GetSqlInstanceResponseBody &&) = default ;
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
    inline GetSqlInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetSqlInstanceResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetSqlInstanceResponseBodyResult) };
    inline GetSqlInstanceResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetSqlInstanceResponseBodyResult) };
    inline GetSqlInstanceResponseBody& setResult(const GetSqlInstanceResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetSqlInstanceResponseBody& setResult(GetSqlInstanceResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // id of request
    std::shared_ptr<string> requestId_ = nullptr;
    // InstanceVersionVO
    std::shared_ptr<GetSqlInstanceResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
