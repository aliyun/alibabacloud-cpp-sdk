// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTERESOURCESRESPONSEBODY_HPP_
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
  class ListComputeResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListComputeResourcesResponseBody() = default ;
    ListComputeResourcesResponseBody(const ListComputeResourcesResponseBody &) = default ;
    ListComputeResourcesResponseBody(ListComputeResourcesResponseBody &&) = default ;
    ListComputeResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeResourcesResponseBody() = default ;
    ListComputeResourcesResponseBody& operator=(const ListComputeResourcesResponseBody &) = default ;
    ListComputeResourcesResponseBody& operator=(ListComputeResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ComputeResources, computeResources_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ComputeResources, computeResources_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ComputeResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComputeResources& obj) { 
          DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ComputeResources& obj) { 
          DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ComputeResources() = default ;
        ComputeResources(const ComputeResources &) = default ;
        ComputeResources(ComputeResources &&) = default ;
        ComputeResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComputeResources() = default ;
        ComputeResources& operator=(const ComputeResources &) = default ;
        ComputeResources& operator=(ComputeResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ComputeResource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ComputeResource& obj) { 
            DARABONBA_ANY_TO_JSON(ConnectionProperties, connectionProperties_);
            DARABONBA_PTR_TO_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
            DARABONBA_PTR_TO_JSON(WhetherDefault, whetherDefault_);
          };
          friend void from_json(const Darabonba::Json& j, ComputeResource& obj) { 
            DARABONBA_ANY_FROM_JSON(ConnectionProperties, connectionProperties_);
            DARABONBA_PTR_FROM_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
            DARABONBA_PTR_FROM_JSON(WhetherDefault, whetherDefault_);
          };
          ComputeResource() = default ;
          ComputeResource(const ComputeResource &) = default ;
          ComputeResource(ComputeResource &&) = default ;
          ComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ComputeResource() = default ;
          ComputeResource& operator=(const ComputeResource &) = default ;
          ComputeResource& operator=(ComputeResource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->connectionProperties_ == nullptr
        && this->connectionPropertiesMode_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->whetherDefault_ == nullptr; };
          // connectionProperties Field Functions 
          bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
          void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
          inline           const Darabonba::Json & getConnectionProperties() const { DARABONBA_GET(connectionProperties_) };
          Darabonba::Json & getConnectionProperties() { DARABONBA_GET(connectionProperties_) };
          inline ComputeResource& setConnectionProperties(const Darabonba::Json & connectionProperties) { DARABONBA_SET_VALUE(connectionProperties_, connectionProperties) };
          inline ComputeResource& setConnectionProperties(Darabonba::Json && connectionProperties) { DARABONBA_SET_RVALUE(connectionProperties_, connectionProperties) };


          // connectionPropertiesMode Field Functions 
          bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
          void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
          inline string getConnectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
          inline ComputeResource& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline ComputeResource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // createUser Field Functions 
          bool hasCreateUser() const { return this->createUser_ != nullptr;};
          void deleteCreateUser() { this->createUser_ = nullptr;};
          inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
          inline ComputeResource& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ComputeResource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ComputeResource& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
          inline ComputeResource& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // modifyUser Field Functions 
          bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
          void deleteModifyUser() { this->modifyUser_ = nullptr;};
          inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
          inline ComputeResource& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


          // whetherDefault Field Functions 
          bool hasWhetherDefault() const { return this->whetherDefault_ != nullptr;};
          void deleteWhetherDefault() { this->whetherDefault_ = nullptr;};
          inline bool getWhetherDefault() const { DARABONBA_PTR_GET_DEFAULT(whetherDefault_, false) };
          inline ComputeResource& setWhetherDefault(bool whetherDefault) { DARABONBA_PTR_SET_VALUE(whetherDefault_, whetherDefault) };


        protected:
          // The category of the added compute resource. Different types have different subtypes with corresponding parameter constraints. Examples: InstanceMode: The instance mode. UrlMode: The connection string mode.
          Darabonba::Json connectionProperties_ {};
          // The specific connection configuration details for the computing resource, including the connection address, access identity, and environment information. envType, which specifies the computing resource environment, is a property of this object. Valid values:
          // 
          // *   Dev
          // *   Prod Different types of computing resources have different attribute specifications under different configuration modes (ConnectionPropertiesMode).
          shared_ptr<string> connectionPropertiesMode_ {};
          // The creation time (timestamp).
          shared_ptr<int64_t> createTime_ {};
          // The creator ID.
          shared_ptr<string> createUser_ {};
          // The unique identifier of the computing resource.
          shared_ptr<string> description_ {};
          // The computing resource ID, which is the unique identifier for the resource.
          shared_ptr<int64_t> id_ {};
          // The last modified time of the computing resource (timestamp).
          shared_ptr<int64_t> modifyTime_ {};
          // The modifier ID.
          shared_ptr<string> modifyUser_ {};
          // Specifies whether it is the default compute resource.
          shared_ptr<bool> whetherDefault_ {};
        };

        virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // computeResource Field Functions 
        bool hasComputeResource() const { return this->computeResource_ != nullptr;};
        void deleteComputeResource() { this->computeResource_ = nullptr;};
        inline const vector<ComputeResources::ComputeResource> & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, vector<ComputeResources::ComputeResource>) };
        inline vector<ComputeResources::ComputeResource> getComputeResource() { DARABONBA_PTR_GET(computeResource_, vector<ComputeResources::ComputeResource>) };
        inline ComputeResources& setComputeResource(const vector<ComputeResources::ComputeResource> & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
        inline ComputeResources& setComputeResource(vector<ComputeResources::ComputeResource> && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ComputeResources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ComputeResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Details of a single computing resource.
        shared_ptr<vector<ComputeResources::ComputeResource>> computeResource_ {};
        // The name of the computing resource.
        shared_ptr<string> name_ {};
        // The type of the computing resource.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->computeResources_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // computeResources Field Functions 
      bool hasComputeResources() const { return this->computeResources_ != nullptr;};
      void deleteComputeResources() { this->computeResources_ = nullptr;};
      inline const vector<PagingInfo::ComputeResources> & getComputeResources() const { DARABONBA_PTR_GET_CONST(computeResources_, vector<PagingInfo::ComputeResources>) };
      inline vector<PagingInfo::ComputeResources> getComputeResources() { DARABONBA_PTR_GET(computeResources_, vector<PagingInfo::ComputeResources>) };
      inline PagingInfo& setComputeResources(const vector<PagingInfo::ComputeResources> & computeResources) { DARABONBA_PTR_SET_VALUE(computeResources_, computeResources) };
      inline PagingInfo& setComputeResources(vector<PagingInfo::ComputeResources> && computeResources) { DARABONBA_PTR_SET_RVALUE(computeResources_, computeResources) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline PagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline PagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of computing resources. Each element is a computing resource group that contains information about the development environment (if any) and the production environment.
      shared_ptr<vector<PagingInfo::ComputeResources>> computeResources_ {};
      // The current page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of records per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of records.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListComputeResourcesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListComputeResourcesResponseBody::PagingInfo) };
    inline ListComputeResourcesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListComputeResourcesResponseBody::PagingInfo) };
    inline ListComputeResourcesResponseBody& setPagingInfo(const ListComputeResourcesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListComputeResourcesResponseBody& setPagingInfo(ListComputeResourcesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComputeResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Pagination information.
    shared_ptr<ListComputeResourcesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. Used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
