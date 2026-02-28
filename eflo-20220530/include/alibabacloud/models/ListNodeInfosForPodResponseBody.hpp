// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEINFOSFORPODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEINFOSFORPODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListNodeInfosForPodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeInfosForPodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeInfosForPodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNodeInfosForPodResponseBody() = default ;
    ListNodeInfosForPodResponseBody(const ListNodeInfosForPodResponseBody &) = default ;
    ListNodeInfosForPodResponseBody(ListNodeInfosForPodResponseBody &&) = default ;
    ListNodeInfosForPodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeInfosForPodResponseBody() = default ;
    ListNodeInfosForPodResponseBody& operator=(const ListNodeInfosForPodResponseBody &) = default ;
    ListNodeInfosForPodResponseBody& operator=(ListNodeInfosForPodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(HdeniQuota, hdeniQuota_);
        DARABONBA_PTR_TO_JSON(LeniQuota, leniQuota_);
        DARABONBA_PTR_TO_JSON(LeniSipQuota, leniSipQuota_);
        DARABONBA_PTR_TO_JSON(LniSipQuota, lniSipQuota_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(HdeniQuota, hdeniQuota_);
        DARABONBA_PTR_FROM_JSON(LeniQuota, leniQuota_);
        DARABONBA_PTR_FROM_JSON(LeniSipQuota, leniSipQuota_);
        DARABONBA_PTR_FROM_JSON(LniSipQuota, lniSipQuota_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->hdeniQuota_ == nullptr && this->leniQuota_ == nullptr && this->leniSipQuota_ == nullptr && this->lniSipQuota_ == nullptr && this->nodeId_ == nullptr
        && this->regionId_ == nullptr && this->vSwitches_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Content& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // hdeniQuota Field Functions 
      bool hasHdeniQuota() const { return this->hdeniQuota_ != nullptr;};
      void deleteHdeniQuota() { this->hdeniQuota_ = nullptr;};
      inline int32_t getHdeniQuota() const { DARABONBA_PTR_GET_DEFAULT(hdeniQuota_, 0) };
      inline Content& setHdeniQuota(int32_t hdeniQuota) { DARABONBA_PTR_SET_VALUE(hdeniQuota_, hdeniQuota) };


      // leniQuota Field Functions 
      bool hasLeniQuota() const { return this->leniQuota_ != nullptr;};
      void deleteLeniQuota() { this->leniQuota_ = nullptr;};
      inline int32_t getLeniQuota() const { DARABONBA_PTR_GET_DEFAULT(leniQuota_, 0) };
      inline Content& setLeniQuota(int32_t leniQuota) { DARABONBA_PTR_SET_VALUE(leniQuota_, leniQuota) };


      // leniSipQuota Field Functions 
      bool hasLeniSipQuota() const { return this->leniSipQuota_ != nullptr;};
      void deleteLeniSipQuota() { this->leniSipQuota_ = nullptr;};
      inline int32_t getLeniSipQuota() const { DARABONBA_PTR_GET_DEFAULT(leniSipQuota_, 0) };
      inline Content& setLeniSipQuota(int32_t leniSipQuota) { DARABONBA_PTR_SET_VALUE(leniSipQuota_, leniSipQuota) };


      // lniSipQuota Field Functions 
      bool hasLniSipQuota() const { return this->lniSipQuota_ != nullptr;};
      void deleteLniSipQuota() { this->lniSipQuota_ = nullptr;};
      inline int32_t getLniSipQuota() const { DARABONBA_PTR_GET_DEFAULT(lniSipQuota_, 0) };
      inline Content& setLniSipQuota(int32_t lniSipQuota) { DARABONBA_PTR_SET_VALUE(lniSipQuota_, lniSipQuota) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Content& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vSwitches Field Functions 
      bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
      void deleteVSwitches() { this->vSwitches_ = nullptr;};
      inline const vector<string> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<string>) };
      inline vector<string> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<string>) };
      inline Content& setVSwitches(const vector<string> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
      inline Content& setVSwitches(vector<string> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Content& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Content& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // Lingjun Gaomi network interface controller quota
      shared_ptr<int32_t> hdeniQuota_ {};
      // Lingjun Elastic Network Interface quota, excluding system type
      shared_ptr<int32_t> leniQuota_ {};
      // Lingjun Elastic Network Interface Secondary Private IP Quota
      shared_ptr<int32_t> leniSipQuota_ {};
      // Lingjun network interface controller Secondary Private IP Quota
      shared_ptr<int32_t> lniSipQuota_ {};
      // The ID of the node for this operation.
      shared_ptr<string> nodeId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // List of VSwitches to which IP addresses can be applied for this node
      shared_ptr<vector<string>> vSwitches_ {};
      // The ID of the Virtual Private Cloud to which the current node belongs.
      shared_ptr<string> vpcId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListNodeInfosForPodResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListNodeInfosForPodResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<ListNodeInfosForPodResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<ListNodeInfosForPodResponseBody::Content>) };
    inline vector<ListNodeInfosForPodResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<ListNodeInfosForPodResponseBody::Content>) };
    inline ListNodeInfosForPodResponseBody& setContent(const vector<ListNodeInfosForPodResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListNodeInfosForPodResponseBody& setContent(vector<ListNodeInfosForPodResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNodeInfosForPodResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodeInfosForPodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // Response body
    shared_ptr<vector<ListNodeInfosForPodResponseBody::Content>> content_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
