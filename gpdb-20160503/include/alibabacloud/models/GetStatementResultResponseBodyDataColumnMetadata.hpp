// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATEMENTRESULTRESPONSEBODYDATACOLUMNMETADATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTATEMENTRESULTRESPONSEBODYDATACOLUMNMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ColumnMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetStatementResultResponseBodyDataColumnMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatementResultResponseBodyDataColumnMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnMetadata, columnMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatementResultResponseBodyDataColumnMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnMetadata, columnMetadata_);
    };
    GetStatementResultResponseBodyDataColumnMetadata() = default ;
    GetStatementResultResponseBodyDataColumnMetadata(const GetStatementResultResponseBodyDataColumnMetadata &) = default ;
    GetStatementResultResponseBodyDataColumnMetadata(GetStatementResultResponseBodyDataColumnMetadata &&) = default ;
    GetStatementResultResponseBodyDataColumnMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatementResultResponseBodyDataColumnMetadata() = default ;
    GetStatementResultResponseBodyDataColumnMetadata& operator=(const GetStatementResultResponseBodyDataColumnMetadata &) = default ;
    GetStatementResultResponseBodyDataColumnMetadata& operator=(GetStatementResultResponseBodyDataColumnMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnMetadata_ != nullptr; };
    // columnMetadata Field Functions 
    bool hasColumnMetadata() const { return this->columnMetadata_ != nullptr;};
    void deleteColumnMetadata() { this->columnMetadata_ = nullptr;};
    inline const vector<Models::ColumnMetadata> & columnMetadata() const { DARABONBA_PTR_GET_CONST(columnMetadata_, vector<Models::ColumnMetadata>) };
    inline vector<Models::ColumnMetadata> columnMetadata() { DARABONBA_PTR_GET(columnMetadata_, vector<Models::ColumnMetadata>) };
    inline GetStatementResultResponseBodyDataColumnMetadata& setColumnMetadata(const vector<Models::ColumnMetadata> & columnMetadata) { DARABONBA_PTR_SET_VALUE(columnMetadata_, columnMetadata) };
    inline GetStatementResultResponseBodyDataColumnMetadata& setColumnMetadata(vector<Models::ColumnMetadata> && columnMetadata) { DARABONBA_PTR_SET_RVALUE(columnMetadata_, columnMetadata) };


  protected:
    std::shared_ptr<vector<Models::ColumnMetadata>> columnMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
