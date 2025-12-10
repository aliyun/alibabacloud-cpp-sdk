// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCTABLESCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCTABLESCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMCTableSchemaResponseBodyColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetMCTableSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMCTableSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(PartitionColumns, partitionColumns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMCTableSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(PartitionColumns, partitionColumns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMCTableSchemaResponseBody() = default ;
    GetMCTableSchemaResponseBody(const GetMCTableSchemaResponseBody &) = default ;
    GetMCTableSchemaResponseBody(GetMCTableSchemaResponseBody &&) = default ;
    GetMCTableSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMCTableSchemaResponseBody() = default ;
    GetMCTableSchemaResponseBody& operator=(const GetMCTableSchemaResponseBody &) = default ;
    GetMCTableSchemaResponseBody& operator=(GetMCTableSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->partitionColumns_ == nullptr && return this->requestId_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<GetMCTableSchemaResponseBodyColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<GetMCTableSchemaResponseBodyColumns>) };
    inline vector<GetMCTableSchemaResponseBodyColumns> columns() { DARABONBA_PTR_GET(columns_, vector<GetMCTableSchemaResponseBodyColumns>) };
    inline GetMCTableSchemaResponseBody& setColumns(const vector<GetMCTableSchemaResponseBodyColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline GetMCTableSchemaResponseBody& setColumns(vector<GetMCTableSchemaResponseBodyColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // partitionColumns Field Functions 
    bool hasPartitionColumns() const { return this->partitionColumns_ != nullptr;};
    void deletePartitionColumns() { this->partitionColumns_ = nullptr;};
    inline const vector<string> & partitionColumns() const { DARABONBA_PTR_GET_CONST(partitionColumns_, vector<string>) };
    inline vector<string> partitionColumns() { DARABONBA_PTR_GET(partitionColumns_, vector<string>) };
    inline GetMCTableSchemaResponseBody& setPartitionColumns(const vector<string> & partitionColumns) { DARABONBA_PTR_SET_VALUE(partitionColumns_, partitionColumns) };
    inline GetMCTableSchemaResponseBody& setPartitionColumns(vector<string> && partitionColumns) { DARABONBA_PTR_SET_RVALUE(partitionColumns_, partitionColumns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMCTableSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetMCTableSchemaResponseBodyColumns>> columns_ = nullptr;
    std::shared_ptr<vector<string>> partitionColumns_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
