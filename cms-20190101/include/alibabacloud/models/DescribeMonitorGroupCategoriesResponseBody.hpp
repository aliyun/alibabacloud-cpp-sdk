// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPCATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPCATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MonitorGroupCategories, monitorGroupCategories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MonitorGroupCategories, monitorGroupCategories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitorGroupCategoriesResponseBody() = default ;
    DescribeMonitorGroupCategoriesResponseBody(const DescribeMonitorGroupCategoriesResponseBody &) = default ;
    DescribeMonitorGroupCategoriesResponseBody(DescribeMonitorGroupCategoriesResponseBody &&) = default ;
    DescribeMonitorGroupCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupCategoriesResponseBody() = default ;
    DescribeMonitorGroupCategoriesResponseBody& operator=(const DescribeMonitorGroupCategoriesResponseBody &) = default ;
    DescribeMonitorGroupCategoriesResponseBody& operator=(DescribeMonitorGroupCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorGroupCategories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorGroupCategories& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(MonitorGroupCategory, monitorGroupCategory_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorGroupCategories& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(MonitorGroupCategory, monitorGroupCategory_);
      };
      MonitorGroupCategories() = default ;
      MonitorGroupCategories(const MonitorGroupCategories &) = default ;
      MonitorGroupCategories(MonitorGroupCategories &&) = default ;
      MonitorGroupCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorGroupCategories() = default ;
      MonitorGroupCategories& operator=(const MonitorGroupCategories &) = default ;
      MonitorGroupCategories& operator=(MonitorGroupCategories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MonitorGroupCategory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitorGroupCategory& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryItem, categoryItem_);
        };
        friend void from_json(const Darabonba::Json& j, MonitorGroupCategory& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryItem, categoryItem_);
        };
        MonitorGroupCategory() = default ;
        MonitorGroupCategory(const MonitorGroupCategory &) = default ;
        MonitorGroupCategory(MonitorGroupCategory &&) = default ;
        MonitorGroupCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonitorGroupCategory() = default ;
        MonitorGroupCategory& operator=(const MonitorGroupCategory &) = default ;
        MonitorGroupCategory& operator=(MonitorGroupCategory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CategoryItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CategoryItem& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Count, count_);
          };
          friend void from_json(const Darabonba::Json& j, CategoryItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
          };
          CategoryItem() = default ;
          CategoryItem(const CategoryItem &) = default ;
          CategoryItem(CategoryItem &&) = default ;
          CategoryItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CategoryItem() = default ;
          CategoryItem& operator=(const CategoryItem &) = default ;
          CategoryItem& operator=(CategoryItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->category_ == nullptr
        && this->count_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline CategoryItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline CategoryItem& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        protected:
          // The abbreviation of the cloud service name.
          // 
          // >  For more information about how to obtain the abbreviation of a cloud service name, see `metricCategory` in the response parameter `Labels` of the [DescribeProjectMeta](https://help.aliyun.com/document_detail/114916.html) operation.
          shared_ptr<string> category_ {};
          // The number of resources that belong to the cloud service.
          shared_ptr<int32_t> count_ {};
        };

        virtual bool empty() const override { return this->categoryItem_ == nullptr; };
        // categoryItem Field Functions 
        bool hasCategoryItem() const { return this->categoryItem_ != nullptr;};
        void deleteCategoryItem() { this->categoryItem_ = nullptr;};
        inline const vector<MonitorGroupCategory::CategoryItem> & getCategoryItem() const { DARABONBA_PTR_GET_CONST(categoryItem_, vector<MonitorGroupCategory::CategoryItem>) };
        inline vector<MonitorGroupCategory::CategoryItem> getCategoryItem() { DARABONBA_PTR_GET(categoryItem_, vector<MonitorGroupCategory::CategoryItem>) };
        inline MonitorGroupCategory& setCategoryItem(const vector<MonitorGroupCategory::CategoryItem> & categoryItem) { DARABONBA_PTR_SET_VALUE(categoryItem_, categoryItem) };
        inline MonitorGroupCategory& setCategoryItem(vector<MonitorGroupCategory::CategoryItem> && categoryItem) { DARABONBA_PTR_SET_RVALUE(categoryItem_, categoryItem) };


      protected:
        shared_ptr<vector<MonitorGroupCategory::CategoryItem>> categoryItem_ {};
      };

      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->monitorGroupCategory_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline MonitorGroupCategories& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // monitorGroupCategory Field Functions 
      bool hasMonitorGroupCategory() const { return this->monitorGroupCategory_ != nullptr;};
      void deleteMonitorGroupCategory() { this->monitorGroupCategory_ = nullptr;};
      inline const MonitorGroupCategories::MonitorGroupCategory & getMonitorGroupCategory() const { DARABONBA_PTR_GET_CONST(monitorGroupCategory_, MonitorGroupCategories::MonitorGroupCategory) };
      inline MonitorGroupCategories::MonitorGroupCategory getMonitorGroupCategory() { DARABONBA_PTR_GET(monitorGroupCategory_, MonitorGroupCategories::MonitorGroupCategory) };
      inline MonitorGroupCategories& setMonitorGroupCategory(const MonitorGroupCategories::MonitorGroupCategory & monitorGroupCategory) { DARABONBA_PTR_SET_VALUE(monitorGroupCategory_, monitorGroupCategory) };
      inline MonitorGroupCategories& setMonitorGroupCategory(MonitorGroupCategories::MonitorGroupCategory && monitorGroupCategory) { DARABONBA_PTR_SET_RVALUE(monitorGroupCategory_, monitorGroupCategory) };


    protected:
      // The ID of the application group.
      shared_ptr<int64_t> groupId_ {};
      // The cloud services to which the resources in the application group belong and the number of resources that belong to the cloud service.
      shared_ptr<MonitorGroupCategories::MonitorGroupCategory> monitorGroupCategory_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->monitorGroupCategories_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeMonitorGroupCategoriesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorGroupCategoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // monitorGroupCategories Field Functions 
    bool hasMonitorGroupCategories() const { return this->monitorGroupCategories_ != nullptr;};
    void deleteMonitorGroupCategories() { this->monitorGroupCategories_ = nullptr;};
    inline const DescribeMonitorGroupCategoriesResponseBody::MonitorGroupCategories & getMonitorGroupCategories() const { DARABONBA_PTR_GET_CONST(monitorGroupCategories_, DescribeMonitorGroupCategoriesResponseBody::MonitorGroupCategories) };
    inline DescribeMonitorGroupCategoriesResponseBody::MonitorGroupCategories getMonitorGroupCategories() { DARABONBA_PTR_GET(monitorGroupCategories_, DescribeMonitorGroupCategoriesResponseBody::MonitorGroupCategories) };
    inline DescribeMonitorGroupCategoriesResponseBody& setMonitorGroupCategories(const DescribeMonitorGroupCategoriesResponseBody::MonitorGroupCategories & monitorGroupCategories) { DARABONBA_PTR_SET_VALUE(monitorGroupCategories_, monitorGroupCategories) };
    inline DescribeMonitorGroupCategoriesResponseBody& setMonitorGroupCategories(DescribeMonitorGroupCategoriesResponseBody::MonitorGroupCategories && monitorGroupCategories) { DARABONBA_PTR_SET_RVALUE(monitorGroupCategories_, monitorGroupCategories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorGroupCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitorGroupCategoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The cloud services to which the resources in the application group belong and the number of resources that belong to the cloud service.
    shared_ptr<DescribeMonitorGroupCategoriesResponseBody::MonitorGroupCategories> monitorGroupCategories_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
