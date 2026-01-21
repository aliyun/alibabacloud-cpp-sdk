// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORSLSGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORSLSGROUPRESPONSEBODY_HPP_
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
  class DescribeHybridMonitorSLSGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorSLSGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorSLSGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeHybridMonitorSLSGroupResponseBody() = default ;
    DescribeHybridMonitorSLSGroupResponseBody(const DescribeHybridMonitorSLSGroupResponseBody &) = default ;
    DescribeHybridMonitorSLSGroupResponseBody(DescribeHybridMonitorSLSGroupResponseBody &&) = default ;
    DescribeHybridMonitorSLSGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorSLSGroupResponseBody() = default ;
    DescribeHybridMonitorSLSGroupResponseBody& operator=(const DescribeHybridMonitorSLSGroupResponseBody &) = default ;
    DescribeHybridMonitorSLSGroupResponseBody& operator=(DescribeHybridMonitorSLSGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(SLSGroupConfig, SLSGroupConfig_);
        DARABONBA_PTR_TO_JSON(SLSGroupDescription, SLSGroupDescription_);
        DARABONBA_PTR_TO_JSON(SLSGroupName, SLSGroupName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(SLSGroupConfig, SLSGroupConfig_);
        DARABONBA_PTR_FROM_JSON(SLSGroupDescription, SLSGroupDescription_);
        DARABONBA_PTR_FROM_JSON(SLSGroupName, SLSGroupName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SLSGroupConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SLSGroupConfig& obj) { 
          DARABONBA_PTR_TO_JSON(SLSLogstore, SLSLogstore_);
          DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
          DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
          DARABONBA_PTR_TO_JSON(SLSUserId, SLSUserId_);
        };
        friend void from_json(const Darabonba::Json& j, SLSGroupConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(SLSLogstore, SLSLogstore_);
          DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
          DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
          DARABONBA_PTR_FROM_JSON(SLSUserId, SLSUserId_);
        };
        SLSGroupConfig() = default ;
        SLSGroupConfig(const SLSGroupConfig &) = default ;
        SLSGroupConfig(SLSGroupConfig &&) = default ;
        SLSGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SLSGroupConfig() = default ;
        SLSGroupConfig& operator=(const SLSGroupConfig &) = default ;
        SLSGroupConfig& operator=(SLSGroupConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->SLSLogstore_ == nullptr
        && this->SLSProject_ == nullptr && this->SLSRegion_ == nullptr && this->SLSUserId_ == nullptr; };
        // SLSLogstore Field Functions 
        bool hasSLSLogstore() const { return this->SLSLogstore_ != nullptr;};
        void deleteSLSLogstore() { this->SLSLogstore_ = nullptr;};
        inline string getSLSLogstore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogstore_, "") };
        inline SLSGroupConfig& setSLSLogstore(string SLSLogstore) { DARABONBA_PTR_SET_VALUE(SLSLogstore_, SLSLogstore) };


        // SLSProject Field Functions 
        bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
        void deleteSLSProject() { this->SLSProject_ = nullptr;};
        inline string getSLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
        inline SLSGroupConfig& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


        // SLSRegion Field Functions 
        bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
        void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
        inline string getSLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
        inline SLSGroupConfig& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


        // SLSUserId Field Functions 
        bool hasSLSUserId() const { return this->SLSUserId_ != nullptr;};
        void deleteSLSUserId() { this->SLSUserId_ = nullptr;};
        inline string getSLSUserId() const { DARABONBA_PTR_GET_DEFAULT(SLSUserId_, "") };
        inline SLSGroupConfig& setSLSUserId(string SLSUserId) { DARABONBA_PTR_SET_VALUE(SLSUserId_, SLSUserId) };


      protected:
        // The Logstore.
        shared_ptr<string> SLSLogstore_ {};
        // The Simple Log Service project.
        shared_ptr<string> SLSProject_ {};
        // The region ID.
        shared_ptr<string> SLSRegion_ {};
        // The member ID.
        // 
        // **Description** This parameter is returned when you call the operation by using an administrative account.
        shared_ptr<string> SLSUserId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->SLSGroupConfig_ == nullptr && this->SLSGroupDescription_ == nullptr && this->SLSGroupName_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // SLSGroupConfig Field Functions 
      bool hasSLSGroupConfig() const { return this->SLSGroupConfig_ != nullptr;};
      void deleteSLSGroupConfig() { this->SLSGroupConfig_ = nullptr;};
      inline const vector<List::SLSGroupConfig> & getSLSGroupConfig() const { DARABONBA_PTR_GET_CONST(SLSGroupConfig_, vector<List::SLSGroupConfig>) };
      inline vector<List::SLSGroupConfig> getSLSGroupConfig() { DARABONBA_PTR_GET(SLSGroupConfig_, vector<List::SLSGroupConfig>) };
      inline List& setSLSGroupConfig(const vector<List::SLSGroupConfig> & sLSGroupConfig) { DARABONBA_PTR_SET_VALUE(SLSGroupConfig_, sLSGroupConfig) };
      inline List& setSLSGroupConfig(vector<List::SLSGroupConfig> && sLSGroupConfig) { DARABONBA_PTR_SET_RVALUE(SLSGroupConfig_, sLSGroupConfig) };


      // SLSGroupDescription Field Functions 
      bool hasSLSGroupDescription() const { return this->SLSGroupDescription_ != nullptr;};
      void deleteSLSGroupDescription() { this->SLSGroupDescription_ = nullptr;};
      inline string getSLSGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupDescription_, "") };
      inline List& setSLSGroupDescription(string SLSGroupDescription) { DARABONBA_PTR_SET_VALUE(SLSGroupDescription_, SLSGroupDescription) };


      // SLSGroupName Field Functions 
      bool hasSLSGroupName() const { return this->SLSGroupName_ != nullptr;};
      void deleteSLSGroupName() { this->SLSGroupName_ = nullptr;};
      inline string getSLSGroupName() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupName_, "") };
      inline List& setSLSGroupName(string SLSGroupName) { DARABONBA_PTR_SET_VALUE(SLSGroupName_, SLSGroupName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline List& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the Logstore group was created.
      // 
      // Unit: milliseconds.
      shared_ptr<string> createTime_ {};
      // The configurations of the Logstore group.
      shared_ptr<vector<List::SLSGroupConfig>> SLSGroupConfig_ {};
      // The description of the Logstore group.
      shared_ptr<string> SLSGroupDescription_ {};
      // The name of the Logstore group.
      shared_ptr<string> SLSGroupName_ {};
      // The time when the Logstore group was modified.
      // 
      // Unit: milliseconds.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->list_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeHybridMonitorSLSGroupResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeHybridMonitorSLSGroupResponseBody::List>) };
    inline vector<DescribeHybridMonitorSLSGroupResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<DescribeHybridMonitorSLSGroupResponseBody::List>) };
    inline DescribeHybridMonitorSLSGroupResponseBody& setList(const vector<DescribeHybridMonitorSLSGroupResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeHybridMonitorSLSGroupResponseBody& setList(vector<DescribeHybridMonitorSLSGroupResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeHybridMonitorSLSGroupResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeHybridMonitorSLSGroupResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeHybridMonitorSLSGroupResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The queried Logstore groups.
    shared_ptr<vector<DescribeHybridMonitorSLSGroupResponseBody::List>> list_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
