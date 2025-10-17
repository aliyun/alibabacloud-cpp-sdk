// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppLayoutsResponseBodyLayouts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppLayoutsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppLayoutsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layouts, layouts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppLayoutsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layouts, layouts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeAppLayoutsResponseBody() = default ;
    DescribeAppLayoutsResponseBody(const DescribeAppLayoutsResponseBody &) = default ;
    DescribeAppLayoutsResponseBody(DescribeAppLayoutsResponseBody &&) = default ;
    DescribeAppLayoutsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppLayoutsResponseBody() = default ;
    DescribeAppLayoutsResponseBody& operator=(const DescribeAppLayoutsResponseBody &) = default ;
    DescribeAppLayoutsResponseBody& operator=(DescribeAppLayoutsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layouts_ == nullptr
        && return this->requestId_ == nullptr && return this->totalNum_ == nullptr && return this->totalPage_ == nullptr; };
    // layouts Field Functions 
    bool hasLayouts() const { return this->layouts_ != nullptr;};
    void deleteLayouts() { this->layouts_ = nullptr;};
    inline const vector<DescribeAppLayoutsResponseBodyLayouts> & layouts() const { DARABONBA_PTR_GET_CONST(layouts_, vector<DescribeAppLayoutsResponseBodyLayouts>) };
    inline vector<DescribeAppLayoutsResponseBodyLayouts> layouts() { DARABONBA_PTR_GET(layouts_, vector<DescribeAppLayoutsResponseBodyLayouts>) };
    inline DescribeAppLayoutsResponseBody& setLayouts(const vector<DescribeAppLayoutsResponseBodyLayouts> & layouts) { DARABONBA_PTR_SET_VALUE(layouts_, layouts) };
    inline DescribeAppLayoutsResponseBody& setLayouts(vector<DescribeAppLayoutsResponseBodyLayouts> && layouts) { DARABONBA_PTR_SET_RVALUE(layouts_, layouts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppLayoutsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeAppLayoutsResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeAppLayoutsResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<vector<DescribeAppLayoutsResponseBodyLayouts>> layouts_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
