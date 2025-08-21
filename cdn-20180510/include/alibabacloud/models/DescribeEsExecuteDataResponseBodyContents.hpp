// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEESEXECUTEDATARESPONSEBODYCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEESEXECUTEDATARESPONSEBODYCONTENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeEsExecuteDataResponseBodyContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEsExecuteDataResponseBodyContents& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Points, points_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEsExecuteDataResponseBodyContents& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
    };
    DescribeEsExecuteDataResponseBodyContents() = default ;
    DescribeEsExecuteDataResponseBodyContents(const DescribeEsExecuteDataResponseBodyContents &) = default ;
    DescribeEsExecuteDataResponseBodyContents(DescribeEsExecuteDataResponseBodyContents &&) = default ;
    DescribeEsExecuteDataResponseBodyContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEsExecuteDataResponseBodyContents() = default ;
    DescribeEsExecuteDataResponseBodyContents& operator=(const DescribeEsExecuteDataResponseBodyContents &) = default ;
    DescribeEsExecuteDataResponseBodyContents& operator=(DescribeEsExecuteDataResponseBodyContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->name_ != nullptr && this->points_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> columns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline DescribeEsExecuteDataResponseBodyContents& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeEsExecuteDataResponseBodyContents& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEsExecuteDataResponseBodyContents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<string> & points() const { DARABONBA_PTR_GET_CONST(points_, vector<string>) };
    inline vector<string> points() { DARABONBA_PTR_GET(points_, vector<string>) };
    inline DescribeEsExecuteDataResponseBodyContents& setPoints(const vector<string> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeEsExecuteDataResponseBodyContents& setPoints(vector<string> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


  protected:
    // The time and column names in the table that shows the status of the script.
    std::shared_ptr<vector<string>> columns_ = nullptr;
    // The name of the table that shows the status of the script.
    std::shared_ptr<string> name_ = nullptr;
    // The list of timestamps and values in the corresponding columns of the table that shows the status of the script.
    std::shared_ptr<vector<string>> points_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
