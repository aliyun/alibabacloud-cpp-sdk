// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESOURCETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESOURCETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResourceTableResponseBodyFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetInstanceResourceTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResourceTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResourceTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetInstanceResourceTableResponseBody() = default ;
    GetInstanceResourceTableResponseBody(const GetInstanceResourceTableResponseBody &) = default ;
    GetInstanceResourceTableResponseBody(GetInstanceResourceTableResponseBody &&) = default ;
    GetInstanceResourceTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResourceTableResponseBody() = default ;
    GetInstanceResourceTableResponseBody& operator=(const GetInstanceResourceTableResponseBody &) = default ;
    GetInstanceResourceTableResponseBody& operator=(GetInstanceResourceTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr
        && this->requestId_ != nullptr && this->tableName_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetInstanceResourceTableResponseBodyFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetInstanceResourceTableResponseBodyFields>) };
    inline vector<GetInstanceResourceTableResponseBodyFields> fields() { DARABONBA_PTR_GET(fields_, vector<GetInstanceResourceTableResponseBodyFields>) };
    inline GetInstanceResourceTableResponseBody& setFields(const vector<GetInstanceResourceTableResponseBodyFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetInstanceResourceTableResponseBody& setFields(vector<GetInstanceResourceTableResponseBodyFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResourceTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetInstanceResourceTableResponseBody& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<vector<GetInstanceResourceTableResponseBodyFields>> fields_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
