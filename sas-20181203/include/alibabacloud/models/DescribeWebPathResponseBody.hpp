// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebPathResponseBody() = default ;
    DescribeWebPathResponseBody(const DescribeWebPathResponseBody &) = default ;
    DescribeWebPathResponseBody(DescribeWebPathResponseBody &&) = default ;
    DescribeWebPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPathResponseBody() = default ;
    DescribeWebPathResponseBody& operator=(const DescribeWebPathResponseBody &) = default ;
    DescribeWebPathResponseBody& operator=(DescribeWebPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(TargetList, targetList_);
        DARABONBA_PTR_TO_JSON(WebPath, webPath_);
        DARABONBA_PTR_TO_JSON(WebPathType, webPathType_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
        DARABONBA_PTR_FROM_JSON(WebPath, webPath_);
        DARABONBA_PTR_FROM_JSON(WebPathType, webPathType_);
      };
      ConfigList() = default ;
      ConfigList(const ConfigList &) = default ;
      ConfigList(ConfigList &&) = default ;
      ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigList() = default ;
      ConfigList& operator=(const ConfigList &) = default ;
      ConfigList& operator=(ConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetList& obj) { 
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, TargetList& obj) { 
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        TargetList() = default ;
        TargetList(const TargetList &) = default ;
        TargetList(TargetList &&) = default ;
        TargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetList() = default ;
        TargetList& operator=(const TargetList &) = default ;
        TargetList& operator=(TargetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->target_ == nullptr
        && this->targetType_ == nullptr; };
        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline TargetList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline TargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The object.
        shared_ptr<string> target_ {};
        // The object type. Valid values:
        // 
        // *   **uuid**
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->targetList_ == nullptr
        && this->webPath_ == nullptr && this->webPathType_ == nullptr; };
      // targetList Field Functions 
      bool hasTargetList() const { return this->targetList_ != nullptr;};
      void deleteTargetList() { this->targetList_ = nullptr;};
      inline const vector<ConfigList::TargetList> & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<ConfigList::TargetList>) };
      inline vector<ConfigList::TargetList> getTargetList() { DARABONBA_PTR_GET(targetList_, vector<ConfigList::TargetList>) };
      inline ConfigList& setTargetList(const vector<ConfigList::TargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
      inline ConfigList& setTargetList(vector<ConfigList::TargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


      // webPath Field Functions 
      bool hasWebPath() const { return this->webPath_ != nullptr;};
      void deleteWebPath() { this->webPath_ = nullptr;};
      inline string getWebPath() const { DARABONBA_PTR_GET_DEFAULT(webPath_, "") };
      inline ConfigList& setWebPath(string webPath) { DARABONBA_PTR_SET_VALUE(webPath_, webPath) };


      // webPathType Field Functions 
      bool hasWebPathType() const { return this->webPathType_ != nullptr;};
      void deleteWebPathType() { this->webPathType_ = nullptr;};
      inline string getWebPathType() const { DARABONBA_PTR_GET_DEFAULT(webPathType_, "") };
      inline ConfigList& setWebPathType(string webPathType) { DARABONBA_PTR_SET_VALUE(webPathType_, webPathType) };


    protected:
      // An array consisting of the servers on which the web directories are scanned.
      shared_ptr<vector<ConfigList::TargetList>> targetList_ {};
      // The path to the web directory.
      shared_ptr<string> webPath_ {};
      // The path type of the web directory. Valid values:
      // 
      // *   **def**: automatically identified
      // *   **customize**: manually added
      shared_ptr<string> webPathType_ {};
    };

    virtual bool empty() const override { return this->configList_ == nullptr
        && this->count_ == nullptr && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeWebPathResponseBody::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeWebPathResponseBody::ConfigList>) };
    inline vector<DescribeWebPathResponseBody::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<DescribeWebPathResponseBody::ConfigList>) };
    inline DescribeWebPathResponseBody& setConfigList(const vector<DescribeWebPathResponseBody::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeWebPathResponseBody& setConfigList(vector<DescribeWebPathResponseBody::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWebPathResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWebPathResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWebPathResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebPathResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the paths to the web directories.
    shared_ptr<vector<DescribeWebPathResponseBody::ConfigList>> configList_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
