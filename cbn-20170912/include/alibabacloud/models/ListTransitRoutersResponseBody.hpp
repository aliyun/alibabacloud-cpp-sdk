// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRoutersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRoutersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouters, transitRouters_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRoutersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouters, transitRouters_);
    };
    ListTransitRoutersResponseBody() = default ;
    ListTransitRoutersResponseBody(const ListTransitRoutersResponseBody &) = default ;
    ListTransitRoutersResponseBody(ListTransitRoutersResponseBody &&) = default ;
    ListTransitRoutersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRoutersResponseBody() = default ;
    ListTransitRoutersResponseBody& operator=(const ListTransitRoutersResponseBody &) = default ;
    ListTransitRoutersResponseBody& operator=(ListTransitRoutersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouters& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportMulticast, supportMulticast_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TransitRouterCidrList, transitRouterCidrList_);
        DARABONBA_PTR_TO_JSON(TransitRouterDescription, transitRouterDescription_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouters& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportMulticast, supportMulticast_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TransitRouterCidrList, transitRouterCidrList_);
        DARABONBA_PTR_FROM_JSON(TransitRouterDescription, transitRouterDescription_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      TransitRouters() = default ;
      TransitRouters(const TransitRouters &) = default ;
      TransitRouters(TransitRouters &&) = default ;
      TransitRouters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouters() = default ;
      TransitRouters& operator=(const TransitRouters &) = default ;
      TransitRouters& operator=(TransitRouters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TransitRouterCidrList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransitRouterCidrList& obj) { 
          DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PublishCidrRoute, publishCidrRoute_);
          DARABONBA_PTR_TO_JSON(TransitRouterCidrId, transitRouterCidrId_);
        };
        friend void from_json(const Darabonba::Json& j, TransitRouterCidrList& obj) { 
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PublishCidrRoute, publishCidrRoute_);
          DARABONBA_PTR_FROM_JSON(TransitRouterCidrId, transitRouterCidrId_);
        };
        TransitRouterCidrList() = default ;
        TransitRouterCidrList(const TransitRouterCidrList &) = default ;
        TransitRouterCidrList(TransitRouterCidrList &&) = default ;
        TransitRouterCidrList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransitRouterCidrList() = default ;
        TransitRouterCidrList& operator=(const TransitRouterCidrList &) = default ;
        TransitRouterCidrList& operator=(TransitRouterCidrList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidr_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->publishCidrRoute_ == nullptr && this->transitRouterCidrId_ == nullptr; };
        // cidr Field Functions 
        bool hasCidr() const { return this->cidr_ != nullptr;};
        void deleteCidr() { this->cidr_ = nullptr;};
        inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
        inline TransitRouterCidrList& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TransitRouterCidrList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TransitRouterCidrList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // publishCidrRoute Field Functions 
        bool hasPublishCidrRoute() const { return this->publishCidrRoute_ != nullptr;};
        void deletePublishCidrRoute() { this->publishCidrRoute_ = nullptr;};
        inline bool getPublishCidrRoute() const { DARABONBA_PTR_GET_DEFAULT(publishCidrRoute_, false) };
        inline TransitRouterCidrList& setPublishCidrRoute(bool publishCidrRoute) { DARABONBA_PTR_SET_VALUE(publishCidrRoute_, publishCidrRoute) };


        // transitRouterCidrId Field Functions 
        bool hasTransitRouterCidrId() const { return this->transitRouterCidrId_ != nullptr;};
        void deleteTransitRouterCidrId() { this->transitRouterCidrId_ = nullptr;};
        inline string getTransitRouterCidrId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterCidrId_, "") };
        inline TransitRouterCidrList& setTransitRouterCidrId(string transitRouterCidrId) { DARABONBA_PTR_SET_VALUE(transitRouterCidrId_, transitRouterCidrId) };


      protected:
        // The CIDR block of the transit router.
        shared_ptr<string> cidr_ {};
        // The description of the CIDR block.
        shared_ptr<string> description_ {};
        // The name of the CIDR block.
        shared_ptr<string> name_ {};
        // Indicates whether the system is allowed to automatically add a route to the route table of the transit router. Valid values:
        // 
        // - **true**: yes
        // 
        //   A value of **true** indicates that after you create a private VPN connection and create a route learning correlation for the private VPC connection, the system automatically adds the following route to the route table of the transit router that is in route learning correlation with the private VPN connection: A blackhole route whose destination CIDR block is the CIDR block of the transit router. The CIDR block of the transit router refers to the CIDR block from which gateway IP addresses are allocated to IPsec-VPN connections. 
        //          
        //   The blackhole route is advertised only to the route tables of virtual border routers (VBRs) that are connected to the transit router. 
        // 
        // - **false**: no
        shared_ptr<bool> publishCidrRoute_ {};
        // The ID of the CIDR block.
        shared_ptr<string> transitRouterCidrId_ {};
      };

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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->cenId_ == nullptr && this->creationTime_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->supportMulticast_ == nullptr
        && this->tags_ == nullptr && this->transitRouterCidrList_ == nullptr && this->transitRouterDescription_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterName_ == nullptr
        && this->type_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline TransitRouters& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline TransitRouters& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TransitRouters& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TransitRouters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TransitRouters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportMulticast Field Functions 
      bool hasSupportMulticast() const { return this->supportMulticast_ != nullptr;};
      void deleteSupportMulticast() { this->supportMulticast_ = nullptr;};
      inline bool getSupportMulticast() const { DARABONBA_PTR_GET_DEFAULT(supportMulticast_, false) };
      inline TransitRouters& setSupportMulticast(bool supportMulticast) { DARABONBA_PTR_SET_VALUE(supportMulticast_, supportMulticast) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TransitRouters::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TransitRouters::Tags>) };
      inline vector<TransitRouters::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TransitRouters::Tags>) };
      inline TransitRouters& setTags(const vector<TransitRouters::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TransitRouters& setTags(vector<TransitRouters::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transitRouterCidrList Field Functions 
      bool hasTransitRouterCidrList() const { return this->transitRouterCidrList_ != nullptr;};
      void deleteTransitRouterCidrList() { this->transitRouterCidrList_ = nullptr;};
      inline const vector<TransitRouters::TransitRouterCidrList> & getTransitRouterCidrList() const { DARABONBA_PTR_GET_CONST(transitRouterCidrList_, vector<TransitRouters::TransitRouterCidrList>) };
      inline vector<TransitRouters::TransitRouterCidrList> getTransitRouterCidrList() { DARABONBA_PTR_GET(transitRouterCidrList_, vector<TransitRouters::TransitRouterCidrList>) };
      inline TransitRouters& setTransitRouterCidrList(const vector<TransitRouters::TransitRouterCidrList> & transitRouterCidrList) { DARABONBA_PTR_SET_VALUE(transitRouterCidrList_, transitRouterCidrList) };
      inline TransitRouters& setTransitRouterCidrList(vector<TransitRouters::TransitRouterCidrList> && transitRouterCidrList) { DARABONBA_PTR_SET_RVALUE(transitRouterCidrList_, transitRouterCidrList) };


      // transitRouterDescription Field Functions 
      bool hasTransitRouterDescription() const { return this->transitRouterDescription_ != nullptr;};
      void deleteTransitRouterDescription() { this->transitRouterDescription_ = nullptr;};
      inline string getTransitRouterDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDescription_, "") };
      inline TransitRouters& setTransitRouterDescription(string transitRouterDescription) { DARABONBA_PTR_SET_VALUE(transitRouterDescription_, transitRouterDescription) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline TransitRouters& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterName Field Functions 
      bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
      void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
      inline string getTransitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
      inline TransitRouters& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TransitRouters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the Alibaba Cloud account to which the CEN instance belongs.
      shared_ptr<int64_t> aliUid_ {};
      // The ID of the CEN instance.
      shared_ptr<string> cenId_ {};
      // The time when the transit router was created.
      // 
      // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The ID of the region where the transit router is deployed.
      shared_ptr<string> regionId_ {};
      // The status of the transit router. Valid values:
      // 
      // *   **Creating**: The transit router is being created.
      // *   **Active**: The transit router is available.
      // *   **Modifying**: The transit router is being modified
      // *   **Deleting**: The transit router is being deleted.
      // *   **Upgrading**: The transit router is being upgraded.
      shared_ptr<string> status_ {};
      // Indicates whether multicast is enabled for the transit router. Valid values:
      // 
      // *   **true**: enabled
      // *   **false**: disabled
      shared_ptr<bool> supportMulticast_ {};
      // A list of tags.
      shared_ptr<vector<TransitRouters::Tags>> tags_ {};
      // The CIDR blocks of the transit router.
      shared_ptr<vector<TransitRouters::TransitRouterCidrList>> transitRouterCidrList_ {};
      // The description of the transit router.
      shared_ptr<string> transitRouterDescription_ {};
      // The ID of the transit router.
      shared_ptr<string> transitRouterId_ {};
      // The name of the transit router.
      shared_ptr<string> transitRouterName_ {};
      // The edition of the transit router. Valid values:
      // 
      // *   **Enterprise**: Enhance Edition
      // *   **Basic**: Basic Edition
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouters_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTransitRoutersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTransitRoutersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRoutersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRoutersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouters Field Functions 
    bool hasTransitRouters() const { return this->transitRouters_ != nullptr;};
    void deleteTransitRouters() { this->transitRouters_ = nullptr;};
    inline const vector<ListTransitRoutersResponseBody::TransitRouters> & getTransitRouters() const { DARABONBA_PTR_GET_CONST(transitRouters_, vector<ListTransitRoutersResponseBody::TransitRouters>) };
    inline vector<ListTransitRoutersResponseBody::TransitRouters> getTransitRouters() { DARABONBA_PTR_GET(transitRouters_, vector<ListTransitRoutersResponseBody::TransitRouters>) };
    inline ListTransitRoutersResponseBody& setTransitRouters(const vector<ListTransitRoutersResponseBody::TransitRouters> & transitRouters) { DARABONBA_PTR_SET_VALUE(transitRouters_, transitRouters) };
    inline ListTransitRoutersResponseBody& setTransitRouters(vector<ListTransitRoutersResponseBody::TransitRouters> && transitRouters) { DARABONBA_PTR_SET_RVALUE(transitRouters_, transitRouters) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // A list of transit routers.
    shared_ptr<vector<ListTransitRoutersResponseBody::TransitRouters>> transitRouters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
