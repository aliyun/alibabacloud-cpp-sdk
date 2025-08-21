// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEESEXCEPTIONDATARESPONSEBODYCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEESEXCEPTIONDATARESPONSEBODYCONTENTS_HPP_
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
  class DescribeEsExceptionDataResponseBodyContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEsExceptionDataResponseBodyContents& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Points, points_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEsExceptionDataResponseBodyContents& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
    };
    DescribeEsExceptionDataResponseBodyContents() = default ;
    DescribeEsExceptionDataResponseBodyContents(const DescribeEsExceptionDataResponseBodyContents &) = default ;
    DescribeEsExceptionDataResponseBodyContents(DescribeEsExceptionDataResponseBodyContents &&) = default ;
    DescribeEsExceptionDataResponseBodyContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEsExceptionDataResponseBodyContents() = default ;
    DescribeEsExceptionDataResponseBodyContents& operator=(const DescribeEsExceptionDataResponseBodyContents &) = default ;
    DescribeEsExceptionDataResponseBodyContents& operator=(DescribeEsExceptionDataResponseBodyContents &&) = default ;
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
    inline DescribeEsExceptionDataResponseBodyContents& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeEsExceptionDataResponseBodyContents& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEsExceptionDataResponseBodyContents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<string> & points() const { DARABONBA_PTR_GET_CONST(points_, vector<string>) };
    inline vector<string> points() { DARABONBA_PTR_GET(points_, vector<string>) };
    inline DescribeEsExceptionDataResponseBodyContents& setPoints(const vector<string> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeEsExceptionDataResponseBodyContents& setPoints(vector<string> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


  protected:
    // Information about the time column and the error column name.
    std::shared_ptr<vector<string>> columns_ = nullptr;
    // The name of the table that shows the errors of the script.
    std::shared_ptr<string> name_ = nullptr;
    // The time columns and error column names.
    std::shared_ptr<vector<string>> points_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
