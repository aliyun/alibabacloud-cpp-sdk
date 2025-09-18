// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDatasourceTableResponseBodyFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetDatasourceTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasourceTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasourceTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetDatasourceTableResponseBody() = default ;
    GetDatasourceTableResponseBody(const GetDatasourceTableResponseBody &) = default ;
    GetDatasourceTableResponseBody(GetDatasourceTableResponseBody &&) = default ;
    GetDatasourceTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasourceTableResponseBody() = default ;
    GetDatasourceTableResponseBody& operator=(const GetDatasourceTableResponseBody &) = default ;
    GetDatasourceTableResponseBody& operator=(GetDatasourceTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr
        && this->requestId_ != nullptr && this->tableName_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetDatasourceTableResponseBodyFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetDatasourceTableResponseBodyFields>) };
    inline vector<GetDatasourceTableResponseBodyFields> fields() { DARABONBA_PTR_GET(fields_, vector<GetDatasourceTableResponseBodyFields>) };
    inline GetDatasourceTableResponseBody& setFields(const vector<GetDatasourceTableResponseBodyFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetDatasourceTableResponseBody& setFields(vector<GetDatasourceTableResponseBodyFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasourceTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetDatasourceTableResponseBody& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<vector<GetDatasourceTableResponseBodyFields>> fields_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
