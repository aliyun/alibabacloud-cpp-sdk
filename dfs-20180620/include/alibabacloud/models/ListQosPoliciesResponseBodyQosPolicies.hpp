// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQOSPOLICIESRESPONSEBODYQOSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTQOSPOLICIESRESPONSEBODYQOSPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListQosPoliciesResponseBodyQosPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQosPoliciesResponseBodyQosPolicies& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListQosPoliciesResponseBodyQosPolicies& obj) { 
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
    ListQosPoliciesResponseBodyQosPolicies() = default ;
    ListQosPoliciesResponseBodyQosPolicies(const ListQosPoliciesResponseBodyQosPolicies &) = default ;
    ListQosPoliciesResponseBodyQosPolicies(ListQosPoliciesResponseBodyQosPolicies &&) = default ;
    ListQosPoliciesResponseBodyQosPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQosPoliciesResponseBodyQosPolicies() = default ;
    ListQosPoliciesResponseBodyQosPolicies& operator=(const ListQosPoliciesResponseBodyQosPolicies &) = default ;
    ListQosPoliciesResponseBodyQosPolicies& operator=(ListQosPoliciesResponseBodyQosPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->federationId_ == nullptr && return this->fileSystemId_ == nullptr && return this->flowIds_ == nullptr && return this->maxIOBandWidth_ == nullptr && return this->maxIOps_ == nullptr
        && return this->maxMetaQps_ == nullptr && return this->qosPolicyId_ == nullptr && return this->reqTags_ == nullptr && return this->zoneIds_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListQosPoliciesResponseBodyQosPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federationId Field Functions 
    bool hasFederationId() const { return this->federationId_ != nullptr;};
    void deleteFederationId() { this->federationId_ = nullptr;};
    inline string federationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
    inline ListQosPoliciesResponseBodyQosPolicies& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListQosPoliciesResponseBodyQosPolicies& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // flowIds Field Functions 
    bool hasFlowIds() const { return this->flowIds_ != nullptr;};
    void deleteFlowIds() { this->flowIds_ = nullptr;};
    inline string flowIds() const { DARABONBA_PTR_GET_DEFAULT(flowIds_, "") };
    inline ListQosPoliciesResponseBodyQosPolicies& setFlowIds(string flowIds) { DARABONBA_PTR_SET_VALUE(flowIds_, flowIds) };


    // maxIOBandWidth Field Functions 
    bool hasMaxIOBandWidth() const { return this->maxIOBandWidth_ != nullptr;};
    void deleteMaxIOBandWidth() { this->maxIOBandWidth_ = nullptr;};
    inline int64_t maxIOBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxIOBandWidth_, 0L) };
    inline ListQosPoliciesResponseBodyQosPolicies& setMaxIOBandWidth(int64_t maxIOBandWidth) { DARABONBA_PTR_SET_VALUE(maxIOBandWidth_, maxIOBandWidth) };


    // maxIOps Field Functions 
    bool hasMaxIOps() const { return this->maxIOps_ != nullptr;};
    void deleteMaxIOps() { this->maxIOps_ = nullptr;};
    inline int64_t maxIOps() const { DARABONBA_PTR_GET_DEFAULT(maxIOps_, 0L) };
    inline ListQosPoliciesResponseBodyQosPolicies& setMaxIOps(int64_t maxIOps) { DARABONBA_PTR_SET_VALUE(maxIOps_, maxIOps) };


    // maxMetaQps Field Functions 
    bool hasMaxMetaQps() const { return this->maxMetaQps_ != nullptr;};
    void deleteMaxMetaQps() { this->maxMetaQps_ = nullptr;};
    inline int64_t maxMetaQps() const { DARABONBA_PTR_GET_DEFAULT(maxMetaQps_, 0L) };
    inline ListQosPoliciesResponseBodyQosPolicies& setMaxMetaQps(int64_t maxMetaQps) { DARABONBA_PTR_SET_VALUE(maxMetaQps_, maxMetaQps) };


    // qosPolicyId Field Functions 
    bool hasQosPolicyId() const { return this->qosPolicyId_ != nullptr;};
    void deleteQosPolicyId() { this->qosPolicyId_ = nullptr;};
    inline string qosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(qosPolicyId_, "") };
    inline ListQosPoliciesResponseBodyQosPolicies& setQosPolicyId(string qosPolicyId) { DARABONBA_PTR_SET_VALUE(qosPolicyId_, qosPolicyId) };


    // reqTags Field Functions 
    bool hasReqTags() const { return this->reqTags_ != nullptr;};
    void deleteReqTags() { this->reqTags_ = nullptr;};
    inline string reqTags() const { DARABONBA_PTR_GET_DEFAULT(reqTags_, "") };
    inline ListQosPoliciesResponseBodyQosPolicies& setReqTags(string reqTags) { DARABONBA_PTR_SET_VALUE(reqTags_, reqTags) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline string zoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
    inline ListQosPoliciesResponseBodyQosPolicies& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> federationId_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<string> flowIds_ = nullptr;
    std::shared_ptr<int64_t> maxIOBandWidth_ = nullptr;
    std::shared_ptr<int64_t> maxIOps_ = nullptr;
    std::shared_ptr<int64_t> maxMetaQps_ = nullptr;
    std::shared_ptr<string> qosPolicyId_ = nullptr;
    std::shared_ptr<string> reqTags_ = nullptr;
    std::shared_ptr<string> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
