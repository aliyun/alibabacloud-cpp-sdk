// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterMemberPage, clusterMemberPage_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterMemberPage, clusterMemberPage_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterMembersResponseBody() = default ;
    ListClusterMembersResponseBody(const ListClusterMembersResponseBody &) = default ;
    ListClusterMembersResponseBody(ListClusterMembersResponseBody &&) = default ;
    ListClusterMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterMembersResponseBody() = default ;
    ListClusterMembersResponseBody& operator=(const ListClusterMembersResponseBody &) = default ;
    ListClusterMembersResponseBody& operator=(ListClusterMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterMemberPage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterMemberPage& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterMemberList, clusterMemberList_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterMemberPage& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterMemberList, clusterMemberList_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      };
      ClusterMemberPage() = default ;
      ClusterMemberPage(const ClusterMemberPage &) = default ;
      ClusterMemberPage(ClusterMemberPage &&) = default ;
      ClusterMemberPage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterMemberPage() = default ;
      ClusterMemberPage& operator=(const ClusterMemberPage &) = default ;
      ClusterMemberPage& operator=(ClusterMemberPage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClusterMemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterMemberList& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterMember, clusterMember_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterMemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterMember, clusterMember_);
        };
        ClusterMemberList() = default ;
        ClusterMemberList(const ClusterMemberList &) = default ;
        ClusterMemberList(ClusterMemberList &&) = default ;
        ClusterMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterMemberList() = default ;
        ClusterMemberList& operator=(const ClusterMemberList &) = default ;
        ClusterMemberList& operator=(ClusterMemberList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ClusterMember : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClusterMember& obj) { 
            DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(ClusterMemberId, clusterMemberId_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(EcsId, ecsId_);
            DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
            DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          };
          friend void from_json(const Darabonba::Json& j, ClusterMember& obj) { 
            DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_FROM_JSON(ClusterMemberId, clusterMemberId_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(EcsId, ecsId_);
            DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
            DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          };
          ClusterMember() = default ;
          ClusterMember(const ClusterMember &) = default ;
          ClusterMember(ClusterMember &&) = default ;
          ClusterMember(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ClusterMember() = default ;
          ClusterMember& operator=(const ClusterMember &) = default ;
          ClusterMember& operator=(ClusterMember &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterMemberId_ == nullptr && this->createTime_ == nullptr && this->ecsId_ == nullptr && this->ecuId_ == nullptr && this->privateIp_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline ClusterMember& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


          // clusterMemberId Field Functions 
          bool hasClusterMemberId() const { return this->clusterMemberId_ != nullptr;};
          void deleteClusterMemberId() { this->clusterMemberId_ = nullptr;};
          inline string getClusterMemberId() const { DARABONBA_PTR_GET_DEFAULT(clusterMemberId_, "") };
          inline ClusterMember& setClusterMemberId(string clusterMemberId) { DARABONBA_PTR_SET_VALUE(clusterMemberId_, clusterMemberId) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline ClusterMember& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // ecsId Field Functions 
          bool hasEcsId() const { return this->ecsId_ != nullptr;};
          void deleteEcsId() { this->ecsId_ = nullptr;};
          inline string getEcsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
          inline ClusterMember& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


          // ecuId Field Functions 
          bool hasEcuId() const { return this->ecuId_ != nullptr;};
          void deleteEcuId() { this->ecuId_ = nullptr;};
          inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
          inline ClusterMember& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


          // privateIp Field Functions 
          bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
          void deletePrivateIp() { this->privateIp_ = nullptr;};
          inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
          inline ClusterMember& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline ClusterMember& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
          inline ClusterMember& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        protected:
          shared_ptr<string> clusterId_ {};
          shared_ptr<string> clusterMemberId_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> ecsId_ {};
          shared_ptr<string> ecuId_ {};
          shared_ptr<string> privateIp_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<int64_t> updateTime_ {};
        };

        virtual bool empty() const override { return this->clusterMember_ == nullptr; };
        // clusterMember Field Functions 
        bool hasClusterMember() const { return this->clusterMember_ != nullptr;};
        void deleteClusterMember() { this->clusterMember_ = nullptr;};
        inline const vector<ClusterMemberList::ClusterMember> & getClusterMember() const { DARABONBA_PTR_GET_CONST(clusterMember_, vector<ClusterMemberList::ClusterMember>) };
        inline vector<ClusterMemberList::ClusterMember> getClusterMember() { DARABONBA_PTR_GET(clusterMember_, vector<ClusterMemberList::ClusterMember>) };
        inline ClusterMemberList& setClusterMember(const vector<ClusterMemberList::ClusterMember> & clusterMember) { DARABONBA_PTR_SET_VALUE(clusterMember_, clusterMember) };
        inline ClusterMemberList& setClusterMember(vector<ClusterMemberList::ClusterMember> && clusterMember) { DARABONBA_PTR_SET_RVALUE(clusterMember_, clusterMember) };


      protected:
        shared_ptr<vector<ClusterMemberList::ClusterMember>> clusterMember_ {};
      };

      virtual bool empty() const override { return this->clusterMemberList_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // clusterMemberList Field Functions 
      bool hasClusterMemberList() const { return this->clusterMemberList_ != nullptr;};
      void deleteClusterMemberList() { this->clusterMemberList_ = nullptr;};
      inline const ClusterMemberPage::ClusterMemberList & getClusterMemberList() const { DARABONBA_PTR_GET_CONST(clusterMemberList_, ClusterMemberPage::ClusterMemberList) };
      inline ClusterMemberPage::ClusterMemberList getClusterMemberList() { DARABONBA_PTR_GET(clusterMemberList_, ClusterMemberPage::ClusterMemberList) };
      inline ClusterMemberPage& setClusterMemberList(const ClusterMemberPage::ClusterMemberList & clusterMemberList) { DARABONBA_PTR_SET_VALUE(clusterMemberList_, clusterMemberList) };
      inline ClusterMemberPage& setClusterMemberList(ClusterMemberPage::ClusterMemberList && clusterMemberList) { DARABONBA_PTR_SET_RVALUE(clusterMemberList_, clusterMemberList) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline ClusterMemberPage& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ClusterMemberPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline ClusterMemberPage& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<ClusterMemberPage::ClusterMemberList> clusterMemberList_ {};
      // The page number of the returned page. If this parameter is not returned, the first page is returned.
      shared_ptr<int32_t> currentPage_ {};
      // The number of ECS instances returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of pages returned when all ECS instances are returned based on the specified PageSize parameter.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->clusterMemberPage_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // clusterMemberPage Field Functions 
    bool hasClusterMemberPage() const { return this->clusterMemberPage_ != nullptr;};
    void deleteClusterMemberPage() { this->clusterMemberPage_ = nullptr;};
    inline const ListClusterMembersResponseBody::ClusterMemberPage & getClusterMemberPage() const { DARABONBA_PTR_GET_CONST(clusterMemberPage_, ListClusterMembersResponseBody::ClusterMemberPage) };
    inline ListClusterMembersResponseBody::ClusterMemberPage getClusterMemberPage() { DARABONBA_PTR_GET(clusterMemberPage_, ListClusterMembersResponseBody::ClusterMemberPage) };
    inline ListClusterMembersResponseBody& setClusterMemberPage(const ListClusterMembersResponseBody::ClusterMemberPage & clusterMemberPage) { DARABONBA_PTR_SET_VALUE(clusterMemberPage_, clusterMemberPage) };
    inline ListClusterMembersResponseBody& setClusterMemberPage(ListClusterMembersResponseBody::ClusterMemberPage && clusterMemberPage) { DARABONBA_PTR_SET_RVALUE(clusterMemberPage_, clusterMemberPage) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListClusterMembersResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListClusterMembersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ECS instances in the cluster.
    shared_ptr<ListClusterMembersResponseBody::ClusterMemberPage> clusterMemberPage_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
