// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPVIEWTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPVIEWTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppViewTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppViewTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppViewTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeAppViewTemplatesRequest() = default ;
    DescribeAppViewTemplatesRequest(const DescribeAppViewTemplatesRequest &) = default ;
    DescribeAppViewTemplatesRequest(DescribeAppViewTemplatesRequest &&) = default ;
    DescribeAppViewTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppViewTemplatesRequest() = default ;
    DescribeAppViewTemplatesRequest& operator=(const DescribeAppViewTemplatesRequest &) = default ;
    DescribeAppViewTemplatesRequest& operator=(DescribeAppViewTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Condition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Condition& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Condition& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->templateId_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Condition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Condition& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->condition_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeAppViewTemplatesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const DescribeAppViewTemplatesRequest::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, DescribeAppViewTemplatesRequest::Condition) };
    inline DescribeAppViewTemplatesRequest::Condition getCondition() { DARABONBA_PTR_GET(condition_, DescribeAppViewTemplatesRequest::Condition) };
    inline DescribeAppViewTemplatesRequest& setCondition(const DescribeAppViewTemplatesRequest::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline DescribeAppViewTemplatesRequest& setCondition(DescribeAppViewTemplatesRequest::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeAppViewTemplatesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppViewTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<DescribeAppViewTemplatesRequest::Condition> condition_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
