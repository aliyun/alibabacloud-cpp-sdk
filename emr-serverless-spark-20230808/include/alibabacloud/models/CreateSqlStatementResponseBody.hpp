// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLSTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLSTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSqlStatementResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateSqlStatementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlStatementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlStatementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateSqlStatementResponseBody() = default ;
    CreateSqlStatementResponseBody(const CreateSqlStatementResponseBody &) = default ;
    CreateSqlStatementResponseBody(CreateSqlStatementResponseBody &&) = default ;
    CreateSqlStatementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlStatementResponseBody() = default ;
    CreateSqlStatementResponseBody& operator=(const CreateSqlStatementResponseBody &) = default ;
    CreateSqlStatementResponseBody& operator=(CreateSqlStatementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSqlStatementResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateSqlStatementResponseBodyData) };
    inline CreateSqlStatementResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateSqlStatementResponseBodyData) };
    inline CreateSqlStatementResponseBody& setData(const CreateSqlStatementResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSqlStatementResponseBody& setData(CreateSqlStatementResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSqlStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<CreateSqlStatementResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
