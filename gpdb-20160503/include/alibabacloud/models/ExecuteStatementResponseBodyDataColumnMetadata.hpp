// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODYDATACOLUMNMETADATA_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODYDATACOLUMNMETADATA_HPP_
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
  class ExecuteStatementResponseBodyDataColumnMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementResponseBodyDataColumnMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnMetadata, columnMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementResponseBodyDataColumnMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnMetadata, columnMetadata_);
    };
    ExecuteStatementResponseBodyDataColumnMetadata() = default ;
    ExecuteStatementResponseBodyDataColumnMetadata(const ExecuteStatementResponseBodyDataColumnMetadata &) = default ;
    ExecuteStatementResponseBodyDataColumnMetadata(ExecuteStatementResponseBodyDataColumnMetadata &&) = default ;
    ExecuteStatementResponseBodyDataColumnMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementResponseBodyDataColumnMetadata() = default ;
    ExecuteStatementResponseBodyDataColumnMetadata& operator=(const ExecuteStatementResponseBodyDataColumnMetadata &) = default ;
    ExecuteStatementResponseBodyDataColumnMetadata& operator=(ExecuteStatementResponseBodyDataColumnMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnMetadata_ == nullptr; };
    // columnMetadata Field Functions 
    bool hasColumnMetadata() const { return this->columnMetadata_ != nullptr;};
    void deleteColumnMetadata() { this->columnMetadata_ = nullptr;};
    inline const vector<Models::ColumnMetadata> & columnMetadata() const { DARABONBA_PTR_GET_CONST(columnMetadata_, vector<Models::ColumnMetadata>) };
    inline vector<Models::ColumnMetadata> columnMetadata() { DARABONBA_PTR_GET(columnMetadata_, vector<Models::ColumnMetadata>) };
    inline ExecuteStatementResponseBodyDataColumnMetadata& setColumnMetadata(const vector<Models::ColumnMetadata> & columnMetadata) { DARABONBA_PTR_SET_VALUE(columnMetadata_, columnMetadata) };
    inline ExecuteStatementResponseBodyDataColumnMetadata& setColumnMetadata(vector<Models::ColumnMetadata> && columnMetadata) { DARABONBA_PTR_SET_RVALUE(columnMetadata_, columnMetadata) };


  protected:
    std::shared_ptr<vector<Models::ColumnMetadata>> columnMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
