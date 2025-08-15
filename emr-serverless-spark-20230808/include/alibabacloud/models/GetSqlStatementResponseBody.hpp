// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLSTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLSTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSqlStatementResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetSqlStatementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlStatementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlStatementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetSqlStatementResponseBody() = default ;
    GetSqlStatementResponseBody(const GetSqlStatementResponseBody &) = default ;
    GetSqlStatementResponseBody(GetSqlStatementResponseBody &&) = default ;
    GetSqlStatementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlStatementResponseBody() = default ;
    GetSqlStatementResponseBody& operator=(const GetSqlStatementResponseBody &) = default ;
    GetSqlStatementResponseBody& operator=(GetSqlStatementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSqlStatementResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetSqlStatementResponseBodyData) };
    inline GetSqlStatementResponseBodyData data() { DARABONBA_PTR_GET(data_, GetSqlStatementResponseBodyData) };
    inline GetSqlStatementResponseBody& setData(const GetSqlStatementResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSqlStatementResponseBody& setData(GetSqlStatementResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSqlStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<GetSqlStatementResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
