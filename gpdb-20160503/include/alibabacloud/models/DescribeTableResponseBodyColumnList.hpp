// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODYCOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODYCOLUMNLIST_HPP_
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
  class DescribeTableResponseBodyColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableResponseBodyColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableResponseBodyColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
    };
    DescribeTableResponseBodyColumnList() = default ;
    DescribeTableResponseBodyColumnList(const DescribeTableResponseBodyColumnList &) = default ;
    DescribeTableResponseBodyColumnList(DescribeTableResponseBodyColumnList &&) = default ;
    DescribeTableResponseBodyColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableResponseBodyColumnList() = default ;
    DescribeTableResponseBodyColumnList& operator=(const DescribeTableResponseBodyColumnList &) = default ;
    DescribeTableResponseBodyColumnList& operator=(DescribeTableResponseBodyColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnList_ != nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<Models::ColumnMetadata> & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<Models::ColumnMetadata>) };
    inline vector<Models::ColumnMetadata> columnList() { DARABONBA_PTR_GET(columnList_, vector<Models::ColumnMetadata>) };
    inline DescribeTableResponseBodyColumnList& setColumnList(const vector<Models::ColumnMetadata> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline DescribeTableResponseBodyColumnList& setColumnList(vector<Models::ColumnMetadata> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


  protected:
    std::shared_ptr<vector<Models::ColumnMetadata>> columnList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
