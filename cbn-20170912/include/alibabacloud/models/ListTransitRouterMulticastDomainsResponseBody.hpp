// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINSRESPONSEBODY_HPP_
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
  class ListTransitRouterMulticastDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomains, transitRouterMulticastDomains_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomains, transitRouterMulticastDomains_);
    };
    ListTransitRouterMulticastDomainsResponseBody() = default ;
    ListTransitRouterMulticastDomainsResponseBody(const ListTransitRouterMulticastDomainsResponseBody &) = default ;
    ListTransitRouterMulticastDomainsResponseBody(ListTransitRouterMulticastDomainsResponseBody &&) = default ;
    ListTransitRouterMulticastDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastDomainsResponseBody() = default ;
    ListTransitRouterMulticastDomainsResponseBody& operator=(const ListTransitRouterMulticastDomainsResponseBody &) = default ;
    ListTransitRouterMulticastDomainsResponseBody& operator=(ListTransitRouterMulticastDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterMulticastDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterMulticastDomains& obj) { 
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(Options, options_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainDescription, transitRouterMulticastDomainDescription_);
        DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
        DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainName, transitRouterMulticastDomainName_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterMulticastDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainDescription, transitRouterMulticastDomainDescription_);
        DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainName, transitRouterMulticastDomainName_);
      };
      TransitRouterMulticastDomains() = default ;
      TransitRouterMulticastDomains(const TransitRouterMulticastDomains &) = default ;
      TransitRouterMulticastDomains(TransitRouterMulticastDomains &&) = default ;
      TransitRouterMulticastDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterMulticastDomains() = default ;
      TransitRouterMulticastDomains& operator=(const TransitRouterMulticastDomains &) = default ;
      TransitRouterMulticastDomains& operator=(TransitRouterMulticastDomains &&) = default ;
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Options : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Options& obj) { 
          DARABONBA_PTR_TO_JSON(Igmpv2Support, igmpv2Support_);
        };
        friend void from_json(const Darabonba::Json& j, Options& obj) { 
          DARABONBA_PTR_FROM_JSON(Igmpv2Support, igmpv2Support_);
        };
        Options() = default ;
        Options(const Options &) = default ;
        Options(Options &&) = default ;
        Options(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Options() = default ;
        Options& operator=(const Options &) = default ;
        Options& operator=(Options &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->igmpv2Support_ == nullptr; };
        // igmpv2Support Field Functions 
        bool hasIgmpv2Support() const { return this->igmpv2Support_ != nullptr;};
        void deleteIgmpv2Support() { this->igmpv2Support_ = nullptr;};
        inline string getIgmpv2Support() const { DARABONBA_PTR_GET_DEFAULT(igmpv2Support_, "") };
        inline Options& setIgmpv2Support(string igmpv2Support) { DARABONBA_PTR_SET_VALUE(igmpv2Support_, igmpv2Support) };


      protected:
        // Indicates whether the IGMP feature is enabled for the multicast domain.
        shared_ptr<string> igmpv2Support_ {};
      };

      virtual bool empty() const override { return this->cenId_ == nullptr
        && this->options_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->transitRouterId_ == nullptr
        && this->transitRouterMulticastDomainDescription_ == nullptr && this->transitRouterMulticastDomainId_ == nullptr && this->transitRouterMulticastDomainName_ == nullptr; };
      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline TransitRouterMulticastDomains& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline const TransitRouterMulticastDomains::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, TransitRouterMulticastDomains::Options) };
      inline TransitRouterMulticastDomains::Options getOptions() { DARABONBA_PTR_GET(options_, TransitRouterMulticastDomains::Options) };
      inline TransitRouterMulticastDomains& setOptions(const TransitRouterMulticastDomains::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
      inline TransitRouterMulticastDomains& setOptions(TransitRouterMulticastDomains::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TransitRouterMulticastDomains& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TransitRouterMulticastDomains& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TransitRouterMulticastDomains::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TransitRouterMulticastDomains::Tags>) };
      inline vector<TransitRouterMulticastDomains::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TransitRouterMulticastDomains::Tags>) };
      inline TransitRouterMulticastDomains& setTags(const vector<TransitRouterMulticastDomains::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TransitRouterMulticastDomains& setTags(vector<TransitRouterMulticastDomains::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline TransitRouterMulticastDomains& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterMulticastDomainDescription Field Functions 
      bool hasTransitRouterMulticastDomainDescription() const { return this->transitRouterMulticastDomainDescription_ != nullptr;};
      void deleteTransitRouterMulticastDomainDescription() { this->transitRouterMulticastDomainDescription_ = nullptr;};
      inline string getTransitRouterMulticastDomainDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainDescription_, "") };
      inline TransitRouterMulticastDomains& setTransitRouterMulticastDomainDescription(string transitRouterMulticastDomainDescription) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainDescription_, transitRouterMulticastDomainDescription) };


      // transitRouterMulticastDomainId Field Functions 
      bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
      void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
      inline string getTransitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
      inline TransitRouterMulticastDomains& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


      // transitRouterMulticastDomainName Field Functions 
      bool hasTransitRouterMulticastDomainName() const { return this->transitRouterMulticastDomainName_ != nullptr;};
      void deleteTransitRouterMulticastDomainName() { this->transitRouterMulticastDomainName_ = nullptr;};
      inline string getTransitRouterMulticastDomainName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainName_, "") };
      inline TransitRouterMulticastDomains& setTransitRouterMulticastDomainName(string transitRouterMulticastDomainName) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainName_, transitRouterMulticastDomainName) };


    protected:
      // The CEN instance ID.
      shared_ptr<string> cenId_ {};
      // Multicast domain feature.
      shared_ptr<TransitRouterMulticastDomains::Options> options_ {};
      // The region ID of the transit router.
      // 
      // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
      shared_ptr<string> regionId_ {};
      // The status of the multicast domain.
      // 
      // The valid value is **Active**, which indicates that the multicast domain is available.
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<TransitRouterMulticastDomains::Tags>> tags_ {};
      // The transit router ID.
      shared_ptr<string> transitRouterId_ {};
      // The description of the multicast domain.
      shared_ptr<string> transitRouterMulticastDomainDescription_ {};
      // The ID of the multicast domain.
      shared_ptr<string> transitRouterMulticastDomainId_ {};
      // The name of the multicast domain.
      shared_ptr<string> transitRouterMulticastDomainName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterMulticastDomains_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterMulticastDomainsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterMulticastDomainsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterMulticastDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterMulticastDomainsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterMulticastDomains Field Functions 
    bool hasTransitRouterMulticastDomains() const { return this->transitRouterMulticastDomains_ != nullptr;};
    void deleteTransitRouterMulticastDomains() { this->transitRouterMulticastDomains_ = nullptr;};
    inline const vector<ListTransitRouterMulticastDomainsResponseBody::TransitRouterMulticastDomains> & getTransitRouterMulticastDomains() const { DARABONBA_PTR_GET_CONST(transitRouterMulticastDomains_, vector<ListTransitRouterMulticastDomainsResponseBody::TransitRouterMulticastDomains>) };
    inline vector<ListTransitRouterMulticastDomainsResponseBody::TransitRouterMulticastDomains> getTransitRouterMulticastDomains() { DARABONBA_PTR_GET(transitRouterMulticastDomains_, vector<ListTransitRouterMulticastDomainsResponseBody::TransitRouterMulticastDomains>) };
    inline ListTransitRouterMulticastDomainsResponseBody& setTransitRouterMulticastDomains(const vector<ListTransitRouterMulticastDomainsResponseBody::TransitRouterMulticastDomains> & transitRouterMulticastDomains) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomains_, transitRouterMulticastDomains) };
    inline ListTransitRouterMulticastDomainsResponseBody& setTransitRouterMulticastDomains(vector<ListTransitRouterMulticastDomainsResponseBody::TransitRouterMulticastDomains> && transitRouterMulticastDomains) { DARABONBA_PTR_SET_RVALUE(transitRouterMulticastDomains_, transitRouterMulticastDomains) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The list of multicast domains.
    shared_ptr<vector<ListTransitRouterMulticastDomainsResponseBody::TransitRouterMulticastDomains>> transitRouterMulticastDomains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
