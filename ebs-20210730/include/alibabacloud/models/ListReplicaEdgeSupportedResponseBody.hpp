// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPLICAEDGESUPPORTEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ListReplicaEdgeSupportedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReplicaEdgeSupportedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportedRegions, supportedRegions_);
    };
    friend void from_json(const Darabonba::Json& j, ListReplicaEdgeSupportedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportedRegions, supportedRegions_);
    };
    ListReplicaEdgeSupportedResponseBody() = default ;
    ListReplicaEdgeSupportedResponseBody(const ListReplicaEdgeSupportedResponseBody &) = default ;
    ListReplicaEdgeSupportedResponseBody(ListReplicaEdgeSupportedResponseBody &&) = default ;
    ListReplicaEdgeSupportedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReplicaEdgeSupportedResponseBody() = default ;
    ListReplicaEdgeSupportedResponseBody& operator=(const ListReplicaEdgeSupportedResponseBody &) = default ;
    ListReplicaEdgeSupportedResponseBody& operator=(ListReplicaEdgeSupportedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportedRegions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportedRegions& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, SupportedRegions& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Zones, zones_);
      };
      SupportedRegions() = default ;
      SupportedRegions(const SupportedRegions &) = default ;
      SupportedRegions(SupportedRegions &&) = default ;
      SupportedRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportedRegions() = default ;
      SupportedRegions& operator=(const SupportedRegions &) = default ;
      SupportedRegions& operator=(SupportedRegions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Zones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zones& obj) { 
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Zones& obj) { 
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Zones() = default ;
        Zones(const Zones &) = default ;
        Zones(Zones &&) = default ;
        Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zones() = default ;
        Zones& operator=(const Zones &) = default ;
        Zones& operator=(Zones &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->zoneId_ == nullptr; };
        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->zones_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SupportedRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<SupportedRegions::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<SupportedRegions::Zones>) };
      inline vector<SupportedRegions::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<SupportedRegions::Zones>) };
      inline SupportedRegions& setZones(const vector<SupportedRegions::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline SupportedRegions& setZones(vector<SupportedRegions::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<vector<SupportedRegions::Zones>> zones_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->supportedRegions_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListReplicaEdgeSupportedResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReplicaEdgeSupportedResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReplicaEdgeSupportedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportedRegions Field Functions 
    bool hasSupportedRegions() const { return this->supportedRegions_ != nullptr;};
    void deleteSupportedRegions() { this->supportedRegions_ = nullptr;};
    inline const vector<ListReplicaEdgeSupportedResponseBody::SupportedRegions> & getSupportedRegions() const { DARABONBA_PTR_GET_CONST(supportedRegions_, vector<ListReplicaEdgeSupportedResponseBody::SupportedRegions>) };
    inline vector<ListReplicaEdgeSupportedResponseBody::SupportedRegions> getSupportedRegions() { DARABONBA_PTR_GET(supportedRegions_, vector<ListReplicaEdgeSupportedResponseBody::SupportedRegions>) };
    inline ListReplicaEdgeSupportedResponseBody& setSupportedRegions(const vector<ListReplicaEdgeSupportedResponseBody::SupportedRegions> & supportedRegions) { DARABONBA_PTR_SET_VALUE(supportedRegions_, supportedRegions) };
    inline ListReplicaEdgeSupportedResponseBody& setSupportedRegions(vector<ListReplicaEdgeSupportedResponseBody::SupportedRegions> && supportedRegions) { DARABONBA_PTR_SET_RVALUE(supportedRegions_, supportedRegions) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListReplicaEdgeSupportedResponseBody::SupportedRegions>> supportedRegions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
