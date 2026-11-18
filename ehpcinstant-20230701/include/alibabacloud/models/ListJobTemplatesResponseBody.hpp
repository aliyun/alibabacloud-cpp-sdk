// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobTemplates, jobTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobTemplates, jobTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobTemplatesResponseBody() = default ;
    ListJobTemplatesResponseBody(const ListJobTemplatesResponseBody &) = default ;
    ListJobTemplatesResponseBody(ListJobTemplatesResponseBody &&) = default ;
    ListJobTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobTemplatesResponseBody() = default ;
    ListJobTemplatesResponseBody& operator=(const ListJobTemplatesResponseBody &) = default ;
    ListJobTemplatesResponseBody& operator=(ListJobTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobTemplateDescription, jobTemplateDescription_);
        DARABONBA_PTR_TO_JSON(JobTemplateId, jobTemplateId_);
        DARABONBA_PTR_TO_JSON(JobTemplateName, jobTemplateName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, JobTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobTemplateDescription, jobTemplateDescription_);
        DARABONBA_PTR_FROM_JSON(JobTemplateId, jobTemplateId_);
        DARABONBA_PTR_FROM_JSON(JobTemplateName, jobTemplateName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      JobTemplates() = default ;
      JobTemplates(const JobTemplates &) = default ;
      JobTemplates(JobTemplates &&) = default ;
      JobTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobTemplates() = default ;
      JobTemplates& operator=(const JobTemplates &) = default ;
      JobTemplates& operator=(JobTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The job tag key.
        shared_ptr<string> key_ {};
        // The job tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->jobTemplateDescription_ == nullptr && this->jobTemplateId_ == nullptr && this->jobTemplateName_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobTemplates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobTemplateDescription Field Functions 
      bool hasJobTemplateDescription() const { return this->jobTemplateDescription_ != nullptr;};
      void deleteJobTemplateDescription() { this->jobTemplateDescription_ = nullptr;};
      inline string getJobTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateDescription_, "") };
      inline JobTemplates& setJobTemplateDescription(string jobTemplateDescription) { DARABONBA_PTR_SET_VALUE(jobTemplateDescription_, jobTemplateDescription) };


      // jobTemplateId Field Functions 
      bool hasJobTemplateId() const { return this->jobTemplateId_ != nullptr;};
      void deleteJobTemplateId() { this->jobTemplateId_ = nullptr;};
      inline string getJobTemplateId() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateId_, "") };
      inline JobTemplates& setJobTemplateId(string jobTemplateId) { DARABONBA_PTR_SET_VALUE(jobTemplateId_, jobTemplateId) };


      // jobTemplateName Field Functions 
      bool hasJobTemplateName() const { return this->jobTemplateName_ != nullptr;};
      void deleteJobTemplateName() { this->jobTemplateName_ = nullptr;};
      inline string getJobTemplateName() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateName_, "") };
      inline JobTemplates& setJobTemplateName(string jobTemplateName) { DARABONBA_PTR_SET_VALUE(jobTemplateName_, jobTemplateName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobTemplates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<JobTemplates::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<JobTemplates::Tags>) };
      inline vector<JobTemplates::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<JobTemplates::Tags>) };
      inline JobTemplates& setTags(const vector<JobTemplates::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline JobTemplates& setTags(vector<JobTemplates::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline JobTemplates& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time. The example uses the YYYY-MM-DD HH:mm:ss format.
      shared_ptr<string> createTime_ {};
      // The template description.
      shared_ptr<string> jobTemplateDescription_ {};
      // The job template ID.
      shared_ptr<string> jobTemplateId_ {};
      // The template name.
      shared_ptr<string> jobTemplateName_ {};
      // The job template status.
      shared_ptr<string> status_ {};
      // The job tags.
      shared_ptr<vector<JobTemplates::Tags>> tags_ {};
      // The update time. The example uses the YYYY-MM-DD HH:mm:ss format.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->jobTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobTemplates Field Functions 
    bool hasJobTemplates() const { return this->jobTemplates_ != nullptr;};
    void deleteJobTemplates() { this->jobTemplates_ = nullptr;};
    inline const vector<ListJobTemplatesResponseBody::JobTemplates> & getJobTemplates() const { DARABONBA_PTR_GET_CONST(jobTemplates_, vector<ListJobTemplatesResponseBody::JobTemplates>) };
    inline vector<ListJobTemplatesResponseBody::JobTemplates> getJobTemplates() { DARABONBA_PTR_GET(jobTemplates_, vector<ListJobTemplatesResponseBody::JobTemplates>) };
    inline ListJobTemplatesResponseBody& setJobTemplates(const vector<ListJobTemplatesResponseBody::JobTemplates> & jobTemplates) { DARABONBA_PTR_SET_VALUE(jobTemplates_, jobTemplates) };
    inline ListJobTemplatesResponseBody& setJobTemplates(vector<ListJobTemplatesResponseBody::JobTemplates> && jobTemplates) { DARABONBA_PTR_SET_RVALUE(jobTemplates_, jobTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The job templates.
    shared_ptr<vector<ListJobTemplatesResponseBody::JobTemplates>> jobTemplates_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of templates.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
