// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLSTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLSTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(statementId, statementId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(statementId, statementId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->statementId_ == nullptr; };
      // statementId Field Functions 
      bool hasStatementId() const { return this->statementId_ != nullptr;};
      void deleteStatementId() { this->statementId_ = nullptr;};
      inline string getStatementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
      inline Data& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


    protected:
      // The interactive query ID.
      shared_ptr<string> statementId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSqlStatementResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateSqlStatementResponseBody::Data) };
    inline CreateSqlStatementResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateSqlStatementResponseBody::Data) };
    inline CreateSqlStatementResponseBody& setData(const CreateSqlStatementResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSqlStatementResponseBody& setData(CreateSqlStatementResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSqlStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<CreateSqlStatementResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
