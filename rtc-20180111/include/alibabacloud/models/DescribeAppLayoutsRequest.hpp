// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLAYOUTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppLayoutsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppLayoutsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppLayoutsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeAppLayoutsRequest() = default ;
    DescribeAppLayoutsRequest(const DescribeAppLayoutsRequest &) = default ;
    DescribeAppLayoutsRequest(DescribeAppLayoutsRequest &&) = default ;
    DescribeAppLayoutsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppLayoutsRequest() = default ;
    DescribeAppLayoutsRequest& operator=(const DescribeAppLayoutsRequest &) = default ;
    DescribeAppLayoutsRequest& operator=(DescribeAppLayoutsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Condition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Condition& obj) { 
        DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Condition& obj) { 
        DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Condition() = default ;
      Condition(const Condition &) = default ;
      Condition(Condition &&) = default ;
      Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Condition() = default ;
      Condition& operator=(const Condition &) = default ;
      Condition& operator=(Condition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->layoutId_ == nullptr
        && this->name_ == nullptr; };
      // layoutId Field Functions 
      bool hasLayoutId() const { return this->layoutId_ != nullptr;};
      void deleteLayoutId() { this->layoutId_ = nullptr;};
      inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
      inline Condition& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Condition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> layoutId_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->condition_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeAppLayoutsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const DescribeAppLayoutsRequest::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, DescribeAppLayoutsRequest::Condition) };
    inline DescribeAppLayoutsRequest::Condition getCondition() { DARABONBA_PTR_GET(condition_, DescribeAppLayoutsRequest::Condition) };
    inline DescribeAppLayoutsRequest& setCondition(const DescribeAppLayoutsRequest::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline DescribeAppLayoutsRequest& setCondition(DescribeAppLayoutsRequest::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeAppLayoutsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppLayoutsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<DescribeAppLayoutsRequest::Condition> condition_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
