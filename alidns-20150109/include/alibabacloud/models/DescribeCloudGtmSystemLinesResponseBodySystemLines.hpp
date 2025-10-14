// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSYSTEMLINESRESPONSEBODYSYSTEMLINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSYSTEMLINESRESPONSEBODYSYSTEMLINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmSystemLinesResponseBodySystemLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmSystemLinesResponseBodySystemLines& obj) { 
      DARABONBA_PTR_TO_JSON(SystemLine, systemLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmSystemLinesResponseBodySystemLines& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemLine, systemLine_);
    };
    DescribeCloudGtmSystemLinesResponseBodySystemLines() = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLines(const DescribeCloudGtmSystemLinesResponseBodySystemLines &) = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLines(DescribeCloudGtmSystemLinesResponseBodySystemLines &&) = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmSystemLinesResponseBodySystemLines() = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLines& operator=(const DescribeCloudGtmSystemLinesResponseBodySystemLines &) = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLines& operator=(DescribeCloudGtmSystemLinesResponseBodySystemLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->systemLine_ == nullptr; };
    // systemLine Field Functions 
    bool hasSystemLine() const { return this->systemLine_ != nullptr;};
    void deleteSystemLine() { this->systemLine_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine> & systemLine() const { DARABONBA_PTR_GET_CONST(systemLine_, vector<Models::DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine>) };
    inline vector<Models::DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine> systemLine() { DARABONBA_PTR_GET(systemLine_, vector<Models::DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine>) };
    inline DescribeCloudGtmSystemLinesResponseBodySystemLines& setSystemLine(const vector<Models::DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine> & systemLine) { DARABONBA_PTR_SET_VALUE(systemLine_, systemLine) };
    inline DescribeCloudGtmSystemLinesResponseBodySystemLines& setSystemLine(vector<Models::DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine> && systemLine) { DARABONBA_PTR_SET_RVALUE(systemLine_, systemLine) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine>> systemLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
