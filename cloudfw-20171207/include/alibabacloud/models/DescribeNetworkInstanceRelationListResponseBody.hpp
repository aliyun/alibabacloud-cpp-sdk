// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCERELATIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceRelationListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceRelationListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInstanceList, networkInstanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceRelationListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInstanceList, networkInstanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkInstanceRelationListResponseBody() = default ;
    DescribeNetworkInstanceRelationListResponseBody(const DescribeNetworkInstanceRelationListResponseBody &) = default ;
    DescribeNetworkInstanceRelationListResponseBody(DescribeNetworkInstanceRelationListResponseBody &&) = default ;
    DescribeNetworkInstanceRelationListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceRelationListResponseBody() = default ;
    DescribeNetworkInstanceRelationListResponseBody& operator=(const DescribeNetworkInstanceRelationListResponseBody &) = default ;
    DescribeNetworkInstanceRelationListResponseBody& operator=(DescribeNetworkInstanceRelationListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedCen, associatedCen_);
        DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
        DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
        DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
        DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
        DARABONBA_PTR_TO_JSON(PeerNetworkInstanceList, peerNetworkInstanceList_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedCen, associatedCen_);
        DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
        DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
        DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
        DARABONBA_PTR_FROM_JSON(PeerNetworkInstanceList, peerNetworkInstanceList_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      };
      NetworkInstanceList() = default ;
      NetworkInstanceList(const NetworkInstanceList &) = default ;
      NetworkInstanceList(NetworkInstanceList &&) = default ;
      NetworkInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInstanceList() = default ;
      NetworkInstanceList& operator=(const NetworkInstanceList &) = default ;
      NetworkInstanceList& operator=(NetworkInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PeerNetworkInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeerNetworkInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedCen, associatedCen_);
          DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
          DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
          DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        };
        friend void from_json(const Darabonba::Json& j, PeerNetworkInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedCen, associatedCen_);
          DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
          DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
          DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        };
        PeerNetworkInstanceList() = default ;
        PeerNetworkInstanceList(const PeerNetworkInstanceList &) = default ;
        PeerNetworkInstanceList(PeerNetworkInstanceList &&) = default ;
        PeerNetworkInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeerNetworkInstanceList() = default ;
        PeerNetworkInstanceList& operator=(const PeerNetworkInstanceList &) = default ;
        PeerNetworkInstanceList& operator=(PeerNetworkInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AssociatedCen : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedCen& obj) { 
            DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
            DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
            DARABONBA_PTR_TO_JSON(CenId, cenId_);
            DARABONBA_PTR_TO_JSON(CenName, cenName_);
            DARABONBA_PTR_TO_JSON(TransitRouterType, transitRouterType_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedCen& obj) { 
            DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
            DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
            DARABONBA_PTR_FROM_JSON(CenId, cenId_);
            DARABONBA_PTR_FROM_JSON(CenName, cenName_);
            DARABONBA_PTR_FROM_JSON(TransitRouterType, transitRouterType_);
          };
          AssociatedCen() = default ;
          AssociatedCen(const AssociatedCen &) = default ;
          AssociatedCen(AssociatedCen &&) = default ;
          AssociatedCen(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedCen() = default ;
          AssociatedCen& operator=(const AssociatedCen &) = default ;
          AssociatedCen& operator=(AssociatedCen &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attachmentId_ == nullptr
        && this->attachmentName_ == nullptr && this->cenId_ == nullptr && this->cenName_ == nullptr && this->transitRouterType_ == nullptr; };
          // attachmentId Field Functions 
          bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
          void deleteAttachmentId() { this->attachmentId_ = nullptr;};
          inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
          inline AssociatedCen& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


          // attachmentName Field Functions 
          bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
          void deleteAttachmentName() { this->attachmentName_ = nullptr;};
          inline string getAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
          inline AssociatedCen& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


          // cenId Field Functions 
          bool hasCenId() const { return this->cenId_ != nullptr;};
          void deleteCenId() { this->cenId_ = nullptr;};
          inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
          inline AssociatedCen& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


          // cenName Field Functions 
          bool hasCenName() const { return this->cenName_ != nullptr;};
          void deleteCenName() { this->cenName_ = nullptr;};
          inline string getCenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
          inline AssociatedCen& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


          // transitRouterType Field Functions 
          bool hasTransitRouterType() const { return this->transitRouterType_ != nullptr;};
          void deleteTransitRouterType() { this->transitRouterType_ = nullptr;};
          inline string getTransitRouterType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterType_, "") };
          inline AssociatedCen& setTransitRouterType(string transitRouterType) { DARABONBA_PTR_SET_VALUE(transitRouterType_, transitRouterType) };


        protected:
          shared_ptr<string> attachmentId_ {};
          shared_ptr<string> attachmentName_ {};
          shared_ptr<string> cenId_ {};
          shared_ptr<string> cenName_ {};
          shared_ptr<string> transitRouterType_ {};
        };

        virtual bool empty() const override { return this->associatedCen_ == nullptr
        && this->networkInstanceId_ == nullptr && this->networkInstanceName_ == nullptr && this->networkInstanceType_ == nullptr && this->regionNo_ == nullptr; };
        // associatedCen Field Functions 
        bool hasAssociatedCen() const { return this->associatedCen_ != nullptr;};
        void deleteAssociatedCen() { this->associatedCen_ = nullptr;};
        inline const vector<PeerNetworkInstanceList::AssociatedCen> & getAssociatedCen() const { DARABONBA_PTR_GET_CONST(associatedCen_, vector<PeerNetworkInstanceList::AssociatedCen>) };
        inline vector<PeerNetworkInstanceList::AssociatedCen> getAssociatedCen() { DARABONBA_PTR_GET(associatedCen_, vector<PeerNetworkInstanceList::AssociatedCen>) };
        inline PeerNetworkInstanceList& setAssociatedCen(const vector<PeerNetworkInstanceList::AssociatedCen> & associatedCen) { DARABONBA_PTR_SET_VALUE(associatedCen_, associatedCen) };
        inline PeerNetworkInstanceList& setAssociatedCen(vector<PeerNetworkInstanceList::AssociatedCen> && associatedCen) { DARABONBA_PTR_SET_RVALUE(associatedCen_, associatedCen) };


        // networkInstanceId Field Functions 
        bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
        void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
        inline string getNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
        inline PeerNetworkInstanceList& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


        // networkInstanceName Field Functions 
        bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
        void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
        inline string getNetworkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
        inline PeerNetworkInstanceList& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


        // networkInstanceType Field Functions 
        bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
        void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
        inline string getNetworkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
        inline PeerNetworkInstanceList& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline PeerNetworkInstanceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      protected:
        shared_ptr<vector<PeerNetworkInstanceList::AssociatedCen>> associatedCen_ {};
        shared_ptr<string> networkInstanceId_ {};
        shared_ptr<string> networkInstanceName_ {};
        shared_ptr<string> networkInstanceType_ {};
        shared_ptr<string> regionNo_ {};
      };

      class AssociatedCen : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedCen& obj) { 
          DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
          DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(CenName, cenName_);
          DARABONBA_PTR_TO_JSON(TransitRouterType, transitRouterType_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedCen& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
          DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(CenName, cenName_);
          DARABONBA_PTR_FROM_JSON(TransitRouterType, transitRouterType_);
        };
        AssociatedCen() = default ;
        AssociatedCen(const AssociatedCen &) = default ;
        AssociatedCen(AssociatedCen &&) = default ;
        AssociatedCen(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedCen() = default ;
        AssociatedCen& operator=(const AssociatedCen &) = default ;
        AssociatedCen& operator=(AssociatedCen &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachmentId_ == nullptr
        && this->attachmentName_ == nullptr && this->cenId_ == nullptr && this->cenName_ == nullptr && this->transitRouterType_ == nullptr; };
        // attachmentId Field Functions 
        bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
        void deleteAttachmentId() { this->attachmentId_ = nullptr;};
        inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
        inline AssociatedCen& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


        // attachmentName Field Functions 
        bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
        void deleteAttachmentName() { this->attachmentName_ = nullptr;};
        inline string getAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
        inline AssociatedCen& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline AssociatedCen& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // cenName Field Functions 
        bool hasCenName() const { return this->cenName_ != nullptr;};
        void deleteCenName() { this->cenName_ = nullptr;};
        inline string getCenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
        inline AssociatedCen& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


        // transitRouterType Field Functions 
        bool hasTransitRouterType() const { return this->transitRouterType_ != nullptr;};
        void deleteTransitRouterType() { this->transitRouterType_ = nullptr;};
        inline string getTransitRouterType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterType_, "") };
        inline AssociatedCen& setTransitRouterType(string transitRouterType) { DARABONBA_PTR_SET_VALUE(transitRouterType_, transitRouterType) };


      protected:
        shared_ptr<string> attachmentId_ {};
        shared_ptr<string> attachmentName_ {};
        shared_ptr<string> cenId_ {};
        shared_ptr<string> cenName_ {};
        shared_ptr<string> transitRouterType_ {};
      };

      virtual bool empty() const override { return this->associatedCen_ == nullptr
        && this->connectType_ == nullptr && this->networkInstanceId_ == nullptr && this->networkInstanceName_ == nullptr && this->networkInstanceType_ == nullptr && this->peerNetworkInstanceList_ == nullptr
        && this->regionNo_ == nullptr; };
      // associatedCen Field Functions 
      bool hasAssociatedCen() const { return this->associatedCen_ != nullptr;};
      void deleteAssociatedCen() { this->associatedCen_ = nullptr;};
      inline const vector<NetworkInstanceList::AssociatedCen> & getAssociatedCen() const { DARABONBA_PTR_GET_CONST(associatedCen_, vector<NetworkInstanceList::AssociatedCen>) };
      inline vector<NetworkInstanceList::AssociatedCen> getAssociatedCen() { DARABONBA_PTR_GET(associatedCen_, vector<NetworkInstanceList::AssociatedCen>) };
      inline NetworkInstanceList& setAssociatedCen(const vector<NetworkInstanceList::AssociatedCen> & associatedCen) { DARABONBA_PTR_SET_VALUE(associatedCen_, associatedCen) };
      inline NetworkInstanceList& setAssociatedCen(vector<NetworkInstanceList::AssociatedCen> && associatedCen) { DARABONBA_PTR_SET_RVALUE(associatedCen_, associatedCen) };


      // connectType Field Functions 
      bool hasConnectType() const { return this->connectType_ != nullptr;};
      void deleteConnectType() { this->connectType_ = nullptr;};
      inline string getConnectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
      inline NetworkInstanceList& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


      // networkInstanceId Field Functions 
      bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
      void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
      inline string getNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
      inline NetworkInstanceList& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


      // networkInstanceName Field Functions 
      bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
      void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
      inline string getNetworkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
      inline NetworkInstanceList& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


      // networkInstanceType Field Functions 
      bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
      void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
      inline string getNetworkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
      inline NetworkInstanceList& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


      // peerNetworkInstanceList Field Functions 
      bool hasPeerNetworkInstanceList() const { return this->peerNetworkInstanceList_ != nullptr;};
      void deletePeerNetworkInstanceList() { this->peerNetworkInstanceList_ = nullptr;};
      inline const vector<NetworkInstanceList::PeerNetworkInstanceList> & getPeerNetworkInstanceList() const { DARABONBA_PTR_GET_CONST(peerNetworkInstanceList_, vector<NetworkInstanceList::PeerNetworkInstanceList>) };
      inline vector<NetworkInstanceList::PeerNetworkInstanceList> getPeerNetworkInstanceList() { DARABONBA_PTR_GET(peerNetworkInstanceList_, vector<NetworkInstanceList::PeerNetworkInstanceList>) };
      inline NetworkInstanceList& setPeerNetworkInstanceList(const vector<NetworkInstanceList::PeerNetworkInstanceList> & peerNetworkInstanceList) { DARABONBA_PTR_SET_VALUE(peerNetworkInstanceList_, peerNetworkInstanceList) };
      inline NetworkInstanceList& setPeerNetworkInstanceList(vector<NetworkInstanceList::PeerNetworkInstanceList> && peerNetworkInstanceList) { DARABONBA_PTR_SET_RVALUE(peerNetworkInstanceList_, peerNetworkInstanceList) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline NetworkInstanceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    protected:
      shared_ptr<vector<NetworkInstanceList::AssociatedCen>> associatedCen_ {};
      shared_ptr<string> connectType_ {};
      shared_ptr<string> networkInstanceId_ {};
      shared_ptr<string> networkInstanceName_ {};
      shared_ptr<string> networkInstanceType_ {};
      shared_ptr<vector<NetworkInstanceList::PeerNetworkInstanceList>> peerNetworkInstanceList_ {};
      shared_ptr<string> regionNo_ {};
    };

    virtual bool empty() const override { return this->networkInstanceList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkInstanceList Field Functions 
    bool hasNetworkInstanceList() const { return this->networkInstanceList_ != nullptr;};
    void deleteNetworkInstanceList() { this->networkInstanceList_ = nullptr;};
    inline const vector<DescribeNetworkInstanceRelationListResponseBody::NetworkInstanceList> & getNetworkInstanceList() const { DARABONBA_PTR_GET_CONST(networkInstanceList_, vector<DescribeNetworkInstanceRelationListResponseBody::NetworkInstanceList>) };
    inline vector<DescribeNetworkInstanceRelationListResponseBody::NetworkInstanceList> getNetworkInstanceList() { DARABONBA_PTR_GET(networkInstanceList_, vector<DescribeNetworkInstanceRelationListResponseBody::NetworkInstanceList>) };
    inline DescribeNetworkInstanceRelationListResponseBody& setNetworkInstanceList(const vector<DescribeNetworkInstanceRelationListResponseBody::NetworkInstanceList> & networkInstanceList) { DARABONBA_PTR_SET_VALUE(networkInstanceList_, networkInstanceList) };
    inline DescribeNetworkInstanceRelationListResponseBody& setNetworkInstanceList(vector<DescribeNetworkInstanceRelationListResponseBody::NetworkInstanceList> && networkInstanceList) { DARABONBA_PTR_SET_RVALUE(networkInstanceList_, networkInstanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInstanceRelationListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNetworkInstanceRelationListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeNetworkInstanceRelationListResponseBody::NetworkInstanceList>> networkInstanceList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
