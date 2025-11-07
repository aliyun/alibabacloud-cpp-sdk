// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVerifyFailStatisticsResponseBodyResultObjectColumn.hpp>
#include <alibabacloud/models/DescribeVerifyFailStatisticsResponseBodyResultObjectLine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyFailStatisticsResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyFailStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(Line, line_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyFailStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
    };
    DescribeVerifyFailStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObject(const DescribeVerifyFailStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObject(DescribeVerifyFailStatisticsResponseBodyResultObject &&) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyFailStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObject& operator=(const DescribeVerifyFailStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyFailStatisticsResponseBodyResultObject& operator=(DescribeVerifyFailStatisticsResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->column_ == nullptr
        && return this->line_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumn & column() const { DARABONBA_PTR_GET_CONST(column_, Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumn) };
    inline Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumn column() { DARABONBA_PTR_GET(column_, Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumn) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObject& setColumn(const Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumn & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObject& setColumn(Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumn && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline const Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLine & line() const { DARABONBA_PTR_GET_CONST(line_, Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLine) };
    inline Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLine line() { DARABONBA_PTR_GET(line_, Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLine) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObject& setLine(const Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLine & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
    inline DescribeVerifyFailStatisticsResponseBodyResultObject& setLine(Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLine && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


  protected:
    // Line chart of failure reasons.
    std::shared_ptr<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectColumn> column_ = nullptr;
    // Bar chart of failure reasons.
    std::shared_ptr<Models::DescribeVerifyFailStatisticsResponseBodyResultObjectLine> line_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
