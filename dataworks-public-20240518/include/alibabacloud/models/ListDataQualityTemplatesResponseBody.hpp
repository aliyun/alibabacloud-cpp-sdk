// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityTemplatesResponseBody() = default ;
    ListDataQualityTemplatesResponseBody(const ListDataQualityTemplatesResponseBody &) = default ;
    ListDataQualityTemplatesResponseBody(ListDataQualityTemplatesResponseBody &&) = default ;
    ListDataQualityTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityTemplatesResponseBody() = default ;
    ListDataQualityTemplatesResponseBody& operator=(const ListDataQualityTemplatesResponseBody &) = default ;
    ListDataQualityTemplatesResponseBody& operator=(ListDataQualityTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataQualityTemplates, dataQualityTemplates_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataQualityTemplates, dataQualityTemplates_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataQualityTemplates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityTemplates& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, DataQualityTemplates& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
        };
        DataQualityTemplates() = default ;
        DataQualityTemplates(const DataQualityTemplates &) = default ;
        DataQualityTemplates(DataQualityTemplates &&) = default ;
        DataQualityTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityTemplates() = default ;
        DataQualityTemplates& operator=(const DataQualityTemplates &) = default ;
        DataQualityTemplates& operator=(DataQualityTemplates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->spec_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataQualityTemplates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline DataQualityTemplates& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataQualityTemplates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline DataQualityTemplates& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline DataQualityTemplates& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline DataQualityTemplates& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DataQualityTemplates& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline DataQualityTemplates& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      protected:
        // The time when the data quality rule template was created.
        shared_ptr<int64_t> createTime_ {};
        // The creator of the data quality rule template.
        shared_ptr<string> createUser_ {};
        // The ID of the data quality rule template.
        shared_ptr<string> id_ {};
        // The time when the data quality rule template was updated.
        shared_ptr<int64_t> modifyTime_ {};
        // The last updater of the data quality rule template.
        shared_ptr<string> modifyUser_ {};
        // The owner of the data quality rule template.
        shared_ptr<string> owner_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
        // Specific configurations of the data quality rule template. For more information, see [Data quality Spec configuration description](~2963394~).
        shared_ptr<string> spec_ {};
      };

      virtual bool empty() const override { return this->dataQualityTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataQualityTemplates Field Functions 
      bool hasDataQualityTemplates() const { return this->dataQualityTemplates_ != nullptr;};
      void deleteDataQualityTemplates() { this->dataQualityTemplates_ = nullptr;};
      inline const vector<PageInfo::DataQualityTemplates> & getDataQualityTemplates() const { DARABONBA_PTR_GET_CONST(dataQualityTemplates_, vector<PageInfo::DataQualityTemplates>) };
      inline vector<PageInfo::DataQualityTemplates> getDataQualityTemplates() { DARABONBA_PTR_GET(dataQualityTemplates_, vector<PageInfo::DataQualityTemplates>) };
      inline PageInfo& setDataQualityTemplates(const vector<PageInfo::DataQualityTemplates> & dataQualityTemplates) { DARABONBA_PTR_SET_VALUE(dataQualityTemplates_, dataQualityTemplates) };
      inline PageInfo& setDataQualityTemplates(vector<PageInfo::DataQualityTemplates> && dataQualityTemplates) { DARABONBA_PTR_SET_RVALUE(dataQualityTemplates_, dataQualityTemplates) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of rule templates.
      shared_ptr<vector<PageInfo::DataQualityTemplates>> dataQualityTemplates_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of pages.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListDataQualityTemplatesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListDataQualityTemplatesResponseBody::PageInfo) };
    inline ListDataQualityTemplatesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListDataQualityTemplatesResponseBody::PageInfo) };
    inline ListDataQualityTemplatesResponseBody& setPageInfo(const ListDataQualityTemplatesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListDataQualityTemplatesResponseBody& setPageInfo(ListDataQualityTemplatesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Paged query results of data quality rule templates.
    shared_ptr<ListDataQualityTemplatesResponseBody::PageInfo> pageInfo_ {};
    // The API request ID, which is generated as a UUID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
