// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTAINERNETWORKCONNECTRESPONSEBODY_HPP_
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
  class FindContainerNetworkConnectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContainerNetworkConnectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connects, connects_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, FindContainerNetworkConnectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connects, connects_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    FindContainerNetworkConnectResponseBody() = default ;
    FindContainerNetworkConnectResponseBody(const FindContainerNetworkConnectResponseBody &) = default ;
    FindContainerNetworkConnectResponseBody(FindContainerNetworkConnectResponseBody &&) = default ;
    FindContainerNetworkConnectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContainerNetworkConnectResponseBody() = default ;
    FindContainerNetworkConnectResponseBody& operator=(const FindContainerNetworkConnectResponseBody &) = default ;
    FindContainerNetworkConnectResponseBody& operator=(FindContainerNetworkConnectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline PageInfo& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline PageInfo& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline PageInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int64_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    class Connects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Connects& obj) { 
        DARABONBA_PTR_TO_JSON(DstContainer, dstContainer_);
        DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
        DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(SrcContainer, srcContainer_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
      };
      friend void from_json(const Darabonba::Json& j, Connects& obj) { 
        DARABONBA_PTR_FROM_JSON(DstContainer, dstContainer_);
        DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
        DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(SrcContainer, srcContainer_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
      };
      Connects() = default ;
      Connects(const Connects &) = default ;
      Connects(Connects &&) = default ;
      Connects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Connects() = default ;
      Connects& operator=(const Connects &) = default ;
      Connects& operator=(Connects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SrcContainer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SrcContainer& obj) { 
          DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        };
        friend void from_json(const Darabonba::Json& j, SrcContainer& obj) { 
          DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        };
        SrcContainer() = default ;
        SrcContainer(const SrcContainer &) = default ;
        SrcContainer(SrcContainer &&) = default ;
        SrcContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SrcContainer() = default ;
        SrcContainer& operator=(const SrcContainer &) = default ;
        SrcContainer& operator=(SrcContainer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->containerId_ == nullptr; };
        // containerId Field Functions 
        bool hasContainerId() const { return this->containerId_ != nullptr;};
        void deleteContainerId() { this->containerId_ = nullptr;};
        inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
        inline SrcContainer& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      protected:
        // The ID of the source container.
        shared_ptr<string> containerId_ {};
      };

      class DstContainer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DstContainer& obj) { 
          DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        };
        friend void from_json(const Darabonba::Json& j, DstContainer& obj) { 
          DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        };
        DstContainer() = default ;
        DstContainer(const DstContainer &) = default ;
        DstContainer(DstContainer &&) = default ;
        DstContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DstContainer() = default ;
        DstContainer& operator=(const DstContainer &) = default ;
        DstContainer& operator=(DstContainer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->containerId_ == nullptr; };
        // containerId Field Functions 
        bool hasContainerId() const { return this->containerId_ != nullptr;};
        void deleteContainerId() { this->containerId_ = nullptr;};
        inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
        inline DstContainer& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      protected:
        // The ID of the destination container.
        shared_ptr<string> containerId_ {};
      };

      virtual bool empty() const override { return this->dstContainer_ == nullptr
        && this->dstIp_ == nullptr && this->dstPort_ == nullptr && this->firstTime_ == nullptr && this->id_ == nullptr && this->lastTime_ == nullptr
        && this->srcContainer_ == nullptr && this->srcIp_ == nullptr && this->srcPort_ == nullptr; };
      // dstContainer Field Functions 
      bool hasDstContainer() const { return this->dstContainer_ != nullptr;};
      void deleteDstContainer() { this->dstContainer_ = nullptr;};
      inline const Connects::DstContainer & getDstContainer() const { DARABONBA_PTR_GET_CONST(dstContainer_, Connects::DstContainer) };
      inline Connects::DstContainer getDstContainer() { DARABONBA_PTR_GET(dstContainer_, Connects::DstContainer) };
      inline Connects& setDstContainer(const Connects::DstContainer & dstContainer) { DARABONBA_PTR_SET_VALUE(dstContainer_, dstContainer) };
      inline Connects& setDstContainer(Connects::DstContainer && dstContainer) { DARABONBA_PTR_SET_RVALUE(dstContainer_, dstContainer) };


      // dstIp Field Functions 
      bool hasDstIp() const { return this->dstIp_ != nullptr;};
      void deleteDstIp() { this->dstIp_ = nullptr;};
      inline string getDstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
      inline Connects& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline string getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
      inline Connects& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline Connects& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Connects& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline Connects& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // srcContainer Field Functions 
      bool hasSrcContainer() const { return this->srcContainer_ != nullptr;};
      void deleteSrcContainer() { this->srcContainer_ = nullptr;};
      inline const Connects::SrcContainer & getSrcContainer() const { DARABONBA_PTR_GET_CONST(srcContainer_, Connects::SrcContainer) };
      inline Connects::SrcContainer getSrcContainer() { DARABONBA_PTR_GET(srcContainer_, Connects::SrcContainer) };
      inline Connects& setSrcContainer(const Connects::SrcContainer & srcContainer) { DARABONBA_PTR_SET_VALUE(srcContainer_, srcContainer) };
      inline Connects& setSrcContainer(Connects::SrcContainer && srcContainer) { DARABONBA_PTR_SET_RVALUE(srcContainer_, srcContainer) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline Connects& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


      // srcPort Field Functions 
      bool hasSrcPort() const { return this->srcPort_ != nullptr;};
      void deleteSrcPort() { this->srcPort_ = nullptr;};
      inline string getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, "") };
      inline Connects& setSrcPort(string srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


    protected:
      // The information about the destination container.
      // 
      // > This parameter is not supported.
      shared_ptr<Connects::DstContainer> dstContainer_ {};
      // The destination IP address.
      shared_ptr<string> dstIp_ {};
      // The destination port.
      shared_ptr<string> dstPort_ {};
      // The timestamp when the connection was first established.
      shared_ptr<int64_t> firstTime_ {};
      // The ID of the network connection.
      shared_ptr<int64_t> id_ {};
      // The timestamp when the connection was last established.
      shared_ptr<int64_t> lastTime_ {};
      // The information about the source container.
      // 
      // > This parameter is not supported.
      shared_ptr<Connects::SrcContainer> srcContainer_ {};
      // The source IP address.
      shared_ptr<string> srcIp_ {};
      // The source port.
      shared_ptr<string> srcPort_ {};
    };

    virtual bool empty() const override { return this->connects_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // connects Field Functions 
    bool hasConnects() const { return this->connects_ != nullptr;};
    void deleteConnects() { this->connects_ = nullptr;};
    inline const vector<FindContainerNetworkConnectResponseBody::Connects> & getConnects() const { DARABONBA_PTR_GET_CONST(connects_, vector<FindContainerNetworkConnectResponseBody::Connects>) };
    inline vector<FindContainerNetworkConnectResponseBody::Connects> getConnects() { DARABONBA_PTR_GET(connects_, vector<FindContainerNetworkConnectResponseBody::Connects>) };
    inline FindContainerNetworkConnectResponseBody& setConnects(const vector<FindContainerNetworkConnectResponseBody::Connects> & connects) { DARABONBA_PTR_SET_VALUE(connects_, connects) };
    inline FindContainerNetworkConnectResponseBody& setConnects(vector<FindContainerNetworkConnectResponseBody::Connects> && connects) { DARABONBA_PTR_SET_RVALUE(connects_, connects) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const FindContainerNetworkConnectResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, FindContainerNetworkConnectResponseBody::PageInfo) };
    inline FindContainerNetworkConnectResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, FindContainerNetworkConnectResponseBody::PageInfo) };
    inline FindContainerNetworkConnectResponseBody& setPageInfo(const FindContainerNetworkConnectResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline FindContainerNetworkConnectResponseBody& setPageInfo(FindContainerNetworkConnectResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindContainerNetworkConnectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the network connections.
    shared_ptr<vector<FindContainerNetworkConnectResponseBody::Connects>> connects_ {};
    // The pagination information.
    shared_ptr<FindContainerNetworkConnectResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
