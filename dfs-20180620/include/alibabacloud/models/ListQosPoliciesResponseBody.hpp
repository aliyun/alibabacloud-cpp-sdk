// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQOSPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQOSPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListQosPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(QosPolicies, qosPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(QosPolicies, qosPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListQosPoliciesResponseBody() = default ;
    ListQosPoliciesResponseBody(const ListQosPoliciesResponseBody &) = default ;
    ListQosPoliciesResponseBody(ListQosPoliciesResponseBody &&) = default ;
    ListQosPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQosPoliciesResponseBody() = default ;
    ListQosPoliciesResponseBody& operator=(const ListQosPoliciesResponseBody &) = default ;
    ListQosPoliciesResponseBody& operator=(ListQosPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QosPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QosPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FederationId, federationId_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(FlowIds, flowIds_);
        DARABONBA_PTR_TO_JSON(MaxIOBandWidth, maxIOBandWidth_);
        DARABONBA_PTR_TO_JSON(MaxIOps, maxIOps_);
        DARABONBA_PTR_TO_JSON(MaxMetaQps, maxMetaQps_);
        DARABONBA_PTR_TO_JSON(QosPolicyId, qosPolicyId_);
        DARABONBA_PTR_TO_JSON(ReqTags, reqTags_);
        DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
      };
      friend void from_json(const Darabonba::Json& j, QosPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FederationId, federationId_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(FlowIds, flowIds_);
        DARABONBA_PTR_FROM_JSON(MaxIOBandWidth, maxIOBandWidth_);
        DARABONBA_PTR_FROM_JSON(MaxIOps, maxIOps_);
        DARABONBA_PTR_FROM_JSON(MaxMetaQps, maxMetaQps_);
        DARABONBA_PTR_FROM_JSON(QosPolicyId, qosPolicyId_);
        DARABONBA_PTR_FROM_JSON(ReqTags, reqTags_);
        DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
      };
      QosPolicies() = default ;
      QosPolicies(const QosPolicies &) = default ;
      QosPolicies(QosPolicies &&) = default ;
      QosPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QosPolicies() = default ;
      QosPolicies& operator=(const QosPolicies &) = default ;
      QosPolicies& operator=(QosPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->federationId_ == nullptr && this->fileSystemId_ == nullptr && this->flowIds_ == nullptr && this->maxIOBandWidth_ == nullptr && this->maxIOps_ == nullptr
        && this->maxMetaQps_ == nullptr && this->qosPolicyId_ == nullptr && this->reqTags_ == nullptr && this->zoneIds_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline QosPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // federationId Field Functions 
      bool hasFederationId() const { return this->federationId_ != nullptr;};
      void deleteFederationId() { this->federationId_ = nullptr;};
      inline string getFederationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
      inline QosPolicies& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline QosPolicies& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // flowIds Field Functions 
      bool hasFlowIds() const { return this->flowIds_ != nullptr;};
      void deleteFlowIds() { this->flowIds_ = nullptr;};
      inline string getFlowIds() const { DARABONBA_PTR_GET_DEFAULT(flowIds_, "") };
      inline QosPolicies& setFlowIds(string flowIds) { DARABONBA_PTR_SET_VALUE(flowIds_, flowIds) };


      // maxIOBandWidth Field Functions 
      bool hasMaxIOBandWidth() const { return this->maxIOBandWidth_ != nullptr;};
      void deleteMaxIOBandWidth() { this->maxIOBandWidth_ = nullptr;};
      inline int64_t getMaxIOBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxIOBandWidth_, 0L) };
      inline QosPolicies& setMaxIOBandWidth(int64_t maxIOBandWidth) { DARABONBA_PTR_SET_VALUE(maxIOBandWidth_, maxIOBandWidth) };


      // maxIOps Field Functions 
      bool hasMaxIOps() const { return this->maxIOps_ != nullptr;};
      void deleteMaxIOps() { this->maxIOps_ = nullptr;};
      inline int64_t getMaxIOps() const { DARABONBA_PTR_GET_DEFAULT(maxIOps_, 0L) };
      inline QosPolicies& setMaxIOps(int64_t maxIOps) { DARABONBA_PTR_SET_VALUE(maxIOps_, maxIOps) };


      // maxMetaQps Field Functions 
      bool hasMaxMetaQps() const { return this->maxMetaQps_ != nullptr;};
      void deleteMaxMetaQps() { this->maxMetaQps_ = nullptr;};
      inline int64_t getMaxMetaQps() const { DARABONBA_PTR_GET_DEFAULT(maxMetaQps_, 0L) };
      inline QosPolicies& setMaxMetaQps(int64_t maxMetaQps) { DARABONBA_PTR_SET_VALUE(maxMetaQps_, maxMetaQps) };


      // qosPolicyId Field Functions 
      bool hasQosPolicyId() const { return this->qosPolicyId_ != nullptr;};
      void deleteQosPolicyId() { this->qosPolicyId_ = nullptr;};
      inline string getQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(qosPolicyId_, "") };
      inline QosPolicies& setQosPolicyId(string qosPolicyId) { DARABONBA_PTR_SET_VALUE(qosPolicyId_, qosPolicyId) };


      // reqTags Field Functions 
      bool hasReqTags() const { return this->reqTags_ != nullptr;};
      void deleteReqTags() { this->reqTags_ = nullptr;};
      inline string getReqTags() const { DARABONBA_PTR_GET_DEFAULT(reqTags_, "") };
      inline QosPolicies& setReqTags(string reqTags) { DARABONBA_PTR_SET_VALUE(reqTags_, reqTags) };


      // zoneIds Field Functions 
      bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
      void deleteZoneIds() { this->zoneIds_ = nullptr;};
      inline string getZoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
      inline QosPolicies& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> federationId_ {};
      shared_ptr<string> fileSystemId_ {};
      shared_ptr<string> flowIds_ {};
      shared_ptr<int64_t> maxIOBandWidth_ {};
      shared_ptr<int64_t> maxIOps_ {};
      shared_ptr<int64_t> maxMetaQps_ {};
      shared_ptr<string> qosPolicyId_ {};
      shared_ptr<string> reqTags_ {};
      shared_ptr<string> zoneIds_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->qosPolicies_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQosPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQosPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // qosPolicies Field Functions 
    bool hasQosPolicies() const { return this->qosPolicies_ != nullptr;};
    void deleteQosPolicies() { this->qosPolicies_ = nullptr;};
    inline const vector<ListQosPoliciesResponseBody::QosPolicies> & getQosPolicies() const { DARABONBA_PTR_GET_CONST(qosPolicies_, vector<ListQosPoliciesResponseBody::QosPolicies>) };
    inline vector<ListQosPoliciesResponseBody::QosPolicies> getQosPolicies() { DARABONBA_PTR_GET(qosPolicies_, vector<ListQosPoliciesResponseBody::QosPolicies>) };
    inline ListQosPoliciesResponseBody& setQosPolicies(const vector<ListQosPoliciesResponseBody::QosPolicies> & qosPolicies) { DARABONBA_PTR_SET_VALUE(qosPolicies_, qosPolicies) };
    inline ListQosPoliciesResponseBody& setQosPolicies(vector<ListQosPoliciesResponseBody::QosPolicies> && qosPolicies) { DARABONBA_PTR_SET_RVALUE(qosPolicies_, qosPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQosPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListQosPoliciesResponseBody::QosPolicies>> qosPolicies_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
