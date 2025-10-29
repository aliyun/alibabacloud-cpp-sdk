// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKOFLINERESPONSEBODYDESCRIBEUPBPSPEAKOFLINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKOFLINERESPONSEBODYDESCRIBEUPBPSPEAKOFLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLinesDescribeUpBpsPeakOfLine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpBpsPeakOfLine, describeUpBpsPeakOfLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpBpsPeakOfLine, describeUpBpsPeakOfLine_);
    };
    DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines() = default ;
    DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines(const DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines &) = default ;
    DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines(DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines &&) = default ;
    DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines() = default ;
    DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines& operator=(const DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines &) = default ;
    DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines& operator=(DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeUpBpsPeakOfLine_ == nullptr; };
    // describeUpBpsPeakOfLine Field Functions 
    bool hasDescribeUpBpsPeakOfLine() const { return this->describeUpBpsPeakOfLine_ != nullptr;};
    void deleteDescribeUpBpsPeakOfLine() { this->describeUpBpsPeakOfLine_ = nullptr;};
    inline const vector<Models::DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLinesDescribeUpBpsPeakOfLine> & describeUpBpsPeakOfLine() const { DARABONBA_PTR_GET_CONST(describeUpBpsPeakOfLine_, vector<Models::DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLinesDescribeUpBpsPeakOfLine>) };
    inline vector<Models::DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLinesDescribeUpBpsPeakOfLine> describeUpBpsPeakOfLine() { DARABONBA_PTR_GET(describeUpBpsPeakOfLine_, vector<Models::DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLinesDescribeUpBpsPeakOfLine>) };
    inline DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines& setDescribeUpBpsPeakOfLine(const vector<Models::DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLinesDescribeUpBpsPeakOfLine> & describeUpBpsPeakOfLine) { DARABONBA_PTR_SET_VALUE(describeUpBpsPeakOfLine_, describeUpBpsPeakOfLine) };
    inline DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines& setDescribeUpBpsPeakOfLine(vector<Models::DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLinesDescribeUpBpsPeakOfLine> && describeUpBpsPeakOfLine) { DARABONBA_PTR_SET_RVALUE(describeUpBpsPeakOfLine_, describeUpBpsPeakOfLine) };


  protected:
    std::shared_ptr<vector<Models::DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLinesDescribeUpBpsPeakOfLine>> describeUpBpsPeakOfLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
