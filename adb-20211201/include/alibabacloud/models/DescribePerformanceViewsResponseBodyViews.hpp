// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWSRESPONSEBODYVIEWS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWSRESPONSEBODYVIEWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePerformanceViewsResponseBodyViews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePerformanceViewsResponseBodyViews& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(ViewName, viewName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePerformanceViewsResponseBodyViews& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
    };
    DescribePerformanceViewsResponseBodyViews() = default ;
    DescribePerformanceViewsResponseBodyViews(const DescribePerformanceViewsResponseBodyViews &) = default ;
    DescribePerformanceViewsResponseBodyViews(DescribePerformanceViewsResponseBodyViews &&) = default ;
    DescribePerformanceViewsResponseBodyViews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePerformanceViewsResponseBodyViews() = default ;
    DescribePerformanceViewsResponseBodyViews& operator=(const DescribePerformanceViewsResponseBodyViews &) = default ;
    DescribePerformanceViewsResponseBodyViews& operator=(DescribePerformanceViewsResponseBodyViews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->updateTime_ != nullptr && this->viewName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribePerformanceViewsResponseBodyViews& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribePerformanceViewsResponseBodyViews& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // viewName Field Functions 
    bool hasViewName() const { return this->viewName_ != nullptr;};
    void deleteViewName() { this->viewName_ = nullptr;};
    inline string viewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
    inline DescribePerformanceViewsResponseBodyViews& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


  protected:
    // The time when created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The name of the view.
    std::shared_ptr<string> viewName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
