// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePerformanceViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePerformanceViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Views, views_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePerformanceViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Views, views_);
    };
    DescribePerformanceViewsResponseBody() = default ;
    DescribePerformanceViewsResponseBody(const DescribePerformanceViewsResponseBody &) = default ;
    DescribePerformanceViewsResponseBody(DescribePerformanceViewsResponseBody &&) = default ;
    DescribePerformanceViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePerformanceViewsResponseBody() = default ;
    DescribePerformanceViewsResponseBody& operator=(const DescribePerformanceViewsResponseBody &) = default ;
    DescribePerformanceViewsResponseBody& operator=(DescribePerformanceViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Views : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Views& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(ViewName, viewName_);
      };
      friend void from_json(const Darabonba::Json& j, Views& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
      };
      Views() = default ;
      Views(const Views &) = default ;
      Views(Views &&) = default ;
      Views(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Views() = default ;
      Views& operator=(const Views &) = default ;
      Views& operator=(Views &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->updateTime_ == nullptr && this->viewName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Views& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Views& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // viewName Field Functions 
      bool hasViewName() const { return this->viewName_ != nullptr;};
      void deleteViewName() { this->viewName_ = nullptr;};
      inline string getViewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
      inline Views& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


    protected:
      // The time when created.
      shared_ptr<string> createTime_ {};
      // The time when updated.
      shared_ptr<string> updateTime_ {};
      // The name of the view.
      shared_ptr<string> viewName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->requestId_ == nullptr && this->views_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribePerformanceViewsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePerformanceViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // views Field Functions 
    bool hasViews() const { return this->views_ != nullptr;};
    void deleteViews() { this->views_ = nullptr;};
    inline const vector<DescribePerformanceViewsResponseBody::Views> & getViews() const { DARABONBA_PTR_GET_CONST(views_, vector<DescribePerformanceViewsResponseBody::Views>) };
    inline vector<DescribePerformanceViewsResponseBody::Views> getViews() { DARABONBA_PTR_GET(views_, vector<DescribePerformanceViewsResponseBody::Views>) };
    inline DescribePerformanceViewsResponseBody& setViews(const vector<DescribePerformanceViewsResponseBody::Views> & views) { DARABONBA_PTR_SET_VALUE(views_, views) };
    inline DescribePerformanceViewsResponseBody& setViews(vector<DescribePerformanceViewsResponseBody::Views> && views) { DARABONBA_PTR_SET_RVALUE(views_, views) };


  protected:
    // The details about the access denial.
    // 
    // >  This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    shared_ptr<string> accessDeniedDetail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // the list of view.
    shared_ptr<vector<DescribePerformanceViewsResponseBody::Views>> views_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
