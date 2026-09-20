// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHBASEHADBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHBASEHADBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class QueryHBaseHaDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHBaseHaDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHBaseHaDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryHBaseHaDBResponseBody() = default ;
    QueryHBaseHaDBResponseBody(const QueryHBaseHaDBResponseBody &) = default ;
    QueryHBaseHaDBResponseBody(QueryHBaseHaDBResponseBody &&) = default ;
    QueryHBaseHaDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHBaseHaDBResponseBody() = default ;
    QueryHBaseHaDBResponseBody& operator=(const QueryHBaseHaDBResponseBody &) = default ;
    QueryHBaseHaDBResponseBody& operator=(QueryHBaseHaDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterList& obj) { 
        DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      };
      ClusterList() = default ;
      ClusterList(const ClusterList &) = default ;
      ClusterList(ClusterList &&) = default ;
      ClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterList() = default ;
      ClusterList& operator=(const ClusterList &) = default ;
      ClusterList& operator=(ClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Cluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveName, activeName_);
          DARABONBA_PTR_TO_JSON(BdsName, bdsName_);
          DARABONBA_PTR_TO_JSON(HaName, haName_);
          DARABONBA_PTR_TO_JSON(HaSlbConnList, haSlbConnList_);
          DARABONBA_PTR_TO_JSON(StandbyName, standbyName_);
        };
        friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveName, activeName_);
          DARABONBA_PTR_FROM_JSON(BdsName, bdsName_);
          DARABONBA_PTR_FROM_JSON(HaName, haName_);
          DARABONBA_PTR_FROM_JSON(HaSlbConnList, haSlbConnList_);
          DARABONBA_PTR_FROM_JSON(StandbyName, standbyName_);
        };
        Cluster() = default ;
        Cluster(const Cluster &) = default ;
        Cluster(Cluster &&) = default ;
        Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cluster() = default ;
        Cluster& operator=(const Cluster &) = default ;
        Cluster& operator=(Cluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HaSlbConnList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HaSlbConnList& obj) { 
            DARABONBA_PTR_TO_JSON(HaSlbConn, haSlbConn_);
          };
          friend void from_json(const Darabonba::Json& j, HaSlbConnList& obj) { 
            DARABONBA_PTR_FROM_JSON(HaSlbConn, haSlbConn_);
          };
          HaSlbConnList() = default ;
          HaSlbConnList(const HaSlbConnList &) = default ;
          HaSlbConnList(HaSlbConnList &&) = default ;
          HaSlbConnList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HaSlbConnList() = default ;
          HaSlbConnList& operator=(const HaSlbConnList &) = default ;
          HaSlbConnList& operator=(HaSlbConnList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class HaSlbConn : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HaSlbConn& obj) { 
              DARABONBA_PTR_TO_JSON(HbaseType, hbaseType_);
              DARABONBA_PTR_TO_JSON(SlbConnAddr, slbConnAddr_);
              DARABONBA_PTR_TO_JSON(SlbType, slbType_);
            };
            friend void from_json(const Darabonba::Json& j, HaSlbConn& obj) { 
              DARABONBA_PTR_FROM_JSON(HbaseType, hbaseType_);
              DARABONBA_PTR_FROM_JSON(SlbConnAddr, slbConnAddr_);
              DARABONBA_PTR_FROM_JSON(SlbType, slbType_);
            };
            HaSlbConn() = default ;
            HaSlbConn(const HaSlbConn &) = default ;
            HaSlbConn(HaSlbConn &&) = default ;
            HaSlbConn(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HaSlbConn() = default ;
            HaSlbConn& operator=(const HaSlbConn &) = default ;
            HaSlbConn& operator=(HaSlbConn &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->hbaseType_ == nullptr
        && this->slbConnAddr_ == nullptr && this->slbType_ == nullptr; };
            // hbaseType Field Functions 
            bool hasHbaseType() const { return this->hbaseType_ != nullptr;};
            void deleteHbaseType() { this->hbaseType_ = nullptr;};
            inline string getHbaseType() const { DARABONBA_PTR_GET_DEFAULT(hbaseType_, "") };
            inline HaSlbConn& setHbaseType(string hbaseType) { DARABONBA_PTR_SET_VALUE(hbaseType_, hbaseType) };


            // slbConnAddr Field Functions 
            bool hasSlbConnAddr() const { return this->slbConnAddr_ != nullptr;};
            void deleteSlbConnAddr() { this->slbConnAddr_ = nullptr;};
            inline string getSlbConnAddr() const { DARABONBA_PTR_GET_DEFAULT(slbConnAddr_, "") };
            inline HaSlbConn& setSlbConnAddr(string slbConnAddr) { DARABONBA_PTR_SET_VALUE(slbConnAddr_, slbConnAddr) };


            // slbType Field Functions 
            bool hasSlbType() const { return this->slbType_ != nullptr;};
            void deleteSlbType() { this->slbType_ = nullptr;};
            inline string getSlbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
            inline HaSlbConn& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


          protected:
            shared_ptr<string> hbaseType_ {};
            shared_ptr<string> slbConnAddr_ {};
            shared_ptr<string> slbType_ {};
          };

          virtual bool empty() const override { return this->haSlbConn_ == nullptr; };
          // haSlbConn Field Functions 
          bool hasHaSlbConn() const { return this->haSlbConn_ != nullptr;};
          void deleteHaSlbConn() { this->haSlbConn_ = nullptr;};
          inline const vector<HaSlbConnList::HaSlbConn> & getHaSlbConn() const { DARABONBA_PTR_GET_CONST(haSlbConn_, vector<HaSlbConnList::HaSlbConn>) };
          inline vector<HaSlbConnList::HaSlbConn> getHaSlbConn() { DARABONBA_PTR_GET(haSlbConn_, vector<HaSlbConnList::HaSlbConn>) };
          inline HaSlbConnList& setHaSlbConn(const vector<HaSlbConnList::HaSlbConn> & haSlbConn) { DARABONBA_PTR_SET_VALUE(haSlbConn_, haSlbConn) };
          inline HaSlbConnList& setHaSlbConn(vector<HaSlbConnList::HaSlbConn> && haSlbConn) { DARABONBA_PTR_SET_RVALUE(haSlbConn_, haSlbConn) };


        protected:
          shared_ptr<vector<HaSlbConnList::HaSlbConn>> haSlbConn_ {};
        };

        virtual bool empty() const override { return this->activeName_ == nullptr
        && this->bdsName_ == nullptr && this->haName_ == nullptr && this->haSlbConnList_ == nullptr && this->standbyName_ == nullptr; };
        // activeName Field Functions 
        bool hasActiveName() const { return this->activeName_ != nullptr;};
        void deleteActiveName() { this->activeName_ = nullptr;};
        inline string getActiveName() const { DARABONBA_PTR_GET_DEFAULT(activeName_, "") };
        inline Cluster& setActiveName(string activeName) { DARABONBA_PTR_SET_VALUE(activeName_, activeName) };


        // bdsName Field Functions 
        bool hasBdsName() const { return this->bdsName_ != nullptr;};
        void deleteBdsName() { this->bdsName_ = nullptr;};
        inline string getBdsName() const { DARABONBA_PTR_GET_DEFAULT(bdsName_, "") };
        inline Cluster& setBdsName(string bdsName) { DARABONBA_PTR_SET_VALUE(bdsName_, bdsName) };


        // haName Field Functions 
        bool hasHaName() const { return this->haName_ != nullptr;};
        void deleteHaName() { this->haName_ = nullptr;};
        inline string getHaName() const { DARABONBA_PTR_GET_DEFAULT(haName_, "") };
        inline Cluster& setHaName(string haName) { DARABONBA_PTR_SET_VALUE(haName_, haName) };


        // haSlbConnList Field Functions 
        bool hasHaSlbConnList() const { return this->haSlbConnList_ != nullptr;};
        void deleteHaSlbConnList() { this->haSlbConnList_ = nullptr;};
        inline const Cluster::HaSlbConnList & getHaSlbConnList() const { DARABONBA_PTR_GET_CONST(haSlbConnList_, Cluster::HaSlbConnList) };
        inline Cluster::HaSlbConnList getHaSlbConnList() { DARABONBA_PTR_GET(haSlbConnList_, Cluster::HaSlbConnList) };
        inline Cluster& setHaSlbConnList(const Cluster::HaSlbConnList & haSlbConnList) { DARABONBA_PTR_SET_VALUE(haSlbConnList_, haSlbConnList) };
        inline Cluster& setHaSlbConnList(Cluster::HaSlbConnList && haSlbConnList) { DARABONBA_PTR_SET_RVALUE(haSlbConnList_, haSlbConnList) };


        // standbyName Field Functions 
        bool hasStandbyName() const { return this->standbyName_ != nullptr;};
        void deleteStandbyName() { this->standbyName_ = nullptr;};
        inline string getStandbyName() const { DARABONBA_PTR_GET_DEFAULT(standbyName_, "") };
        inline Cluster& setStandbyName(string standbyName) { DARABONBA_PTR_SET_VALUE(standbyName_, standbyName) };


      protected:
        shared_ptr<string> activeName_ {};
        shared_ptr<string> bdsName_ {};
        shared_ptr<string> haName_ {};
        shared_ptr<Cluster::HaSlbConnList> haSlbConnList_ {};
        shared_ptr<string> standbyName_ {};
      };

      virtual bool empty() const override { return this->cluster_ == nullptr; };
      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline const vector<ClusterList::Cluster> & getCluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<ClusterList::Cluster>) };
      inline vector<ClusterList::Cluster> getCluster() { DARABONBA_PTR_GET(cluster_, vector<ClusterList::Cluster>) };
      inline ClusterList& setCluster(const vector<ClusterList::Cluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
      inline ClusterList& setCluster(vector<ClusterList::Cluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    protected:
      shared_ptr<vector<ClusterList::Cluster>> cluster_ {};
    };

    virtual bool empty() const override { return this->clusterList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const QueryHBaseHaDBResponseBody::ClusterList & getClusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, QueryHBaseHaDBResponseBody::ClusterList) };
    inline QueryHBaseHaDBResponseBody::ClusterList getClusterList() { DARABONBA_PTR_GET(clusterList_, QueryHBaseHaDBResponseBody::ClusterList) };
    inline QueryHBaseHaDBResponseBody& setClusterList(const QueryHBaseHaDBResponseBody::ClusterList & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline QueryHBaseHaDBResponseBody& setClusterList(QueryHBaseHaDBResponseBody::ClusterList && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryHBaseHaDBResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryHBaseHaDBResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHBaseHaDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryHBaseHaDBResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<QueryHBaseHaDBResponseBody::ClusterList> clusterList_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries in the list.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
