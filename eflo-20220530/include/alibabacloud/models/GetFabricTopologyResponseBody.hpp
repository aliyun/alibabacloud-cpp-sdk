// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFABRICTOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFABRICTOPOLOGYRESPONSEBODY_HPP_
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
  class GetFabricTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFabricTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFabricTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFabricTopologyResponseBody() = default ;
    GetFabricTopologyResponseBody(const GetFabricTopologyResponseBody &) = default ;
    GetFabricTopologyResponseBody(GetFabricTopologyResponseBody &&) = default ;
    GetFabricTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFabricTopologyResponseBody() = default ;
    GetFabricTopologyResponseBody& operator=(const GetFabricTopologyResponseBody &) = default ;
    GetFabricTopologyResponseBody& operator=(GetFabricTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TopoInfo, topoInfo_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TopoInfo, topoInfo_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
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
      class TopoInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopoInfo& obj) { 
          DARABONBA_PTR_TO_JSON(LayerName, layerName_);
          DARABONBA_PTR_TO_JSON(LayerType, layerType_);
          DARABONBA_PTR_TO_JSON(NextLayer, nextLayer_);
        };
        friend void from_json(const Darabonba::Json& j, TopoInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(LayerName, layerName_);
          DARABONBA_PTR_FROM_JSON(LayerType, layerType_);
          DARABONBA_PTR_FROM_JSON(NextLayer, nextLayer_);
        };
        TopoInfo() = default ;
        TopoInfo(const TopoInfo &) = default ;
        TopoInfo(TopoInfo &&) = default ;
        TopoInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopoInfo() = default ;
        TopoInfo& operator=(const TopoInfo &) = default ;
        TopoInfo& operator=(TopoInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->layerName_ == nullptr
        && this->layerType_ == nullptr && this->nextLayer_ == nullptr; };
        // layerName Field Functions 
        bool hasLayerName() const { return this->layerName_ != nullptr;};
        void deleteLayerName() { this->layerName_ = nullptr;};
        inline string getLayerName() const { DARABONBA_PTR_GET_DEFAULT(layerName_, "") };
        inline TopoInfo& setLayerName(string layerName) { DARABONBA_PTR_SET_VALUE(layerName_, layerName) };


        // layerType Field Functions 
        bool hasLayerType() const { return this->layerType_ != nullptr;};
        void deleteLayerType() { this->layerType_ = nullptr;};
        inline string getLayerType() const { DARABONBA_PTR_GET_DEFAULT(layerType_, "") };
        inline TopoInfo& setLayerType(string layerType) { DARABONBA_PTR_SET_VALUE(layerType_, layerType) };


        // nextLayer Field Functions 
        bool hasNextLayer() const { return this->nextLayer_ != nullptr;};
        void deleteNextLayer() { this->nextLayer_ = nullptr;};
        inline const vector<Darabonba::Json> & getNextLayer() const { DARABONBA_PTR_GET_CONST(nextLayer_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getNextLayer() { DARABONBA_PTR_GET(nextLayer_, vector<Darabonba::Json>) };
        inline TopoInfo& setNextLayer(const vector<Darabonba::Json> & nextLayer) { DARABONBA_PTR_SET_VALUE(nextLayer_, nextLayer) };
        inline TopoInfo& setNextLayer(vector<Darabonba::Json> && nextLayer) { DARABONBA_PTR_SET_RVALUE(nextLayer_, nextLayer) };


      protected:
        // The resource name.
        shared_ptr<string> layerName_ {};
        // Hierarchical resource types
        // 
        // Valid value:
        // 
        // *   core: core layer.
        // *   node: Lingjun node.
        // *   lni: lingjun network interface controller.
        // *   spine: backbone layer.
        // *   leaf: access layer
        shared_ptr<string> layerType_ {};
        // Next Level
        shared_ptr<vector<Darabonba::Json>> nextLayer_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->regionId_ == nullptr && this->topoInfo_ == nullptr && this->vpcId_ == nullptr && this->vpdId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Content& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // topoInfo Field Functions 
      bool hasTopoInfo() const { return this->topoInfo_ != nullptr;};
      void deleteTopoInfo() { this->topoInfo_ = nullptr;};
      inline const vector<Content::TopoInfo> & getTopoInfo() const { DARABONBA_PTR_GET_CONST(topoInfo_, vector<Content::TopoInfo>) };
      inline vector<Content::TopoInfo> getTopoInfo() { DARABONBA_PTR_GET(topoInfo_, vector<Content::TopoInfo>) };
      inline Content& setTopoInfo(const vector<Content::TopoInfo> & topoInfo) { DARABONBA_PTR_SET_VALUE(topoInfo_, topoInfo) };
      inline Content& setTopoInfo(vector<Content::TopoInfo> && topoInfo) { DARABONBA_PTR_SET_RVALUE(topoInfo_, topoInfo) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Content& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpdId Field Functions 
      bool hasVpdId() const { return this->vpdId_ != nullptr;};
      void deleteVpdId() { this->vpdId_ = nullptr;};
      inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
      inline Content& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // network interface controller Topology Information
      shared_ptr<vector<Content::TopoInfo>> topoInfo_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
      // Lingjun CIDR block ID
      shared_ptr<string> vpdId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetFabricTopologyResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetFabricTopologyResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetFabricTopologyResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetFabricTopologyResponseBody::Content) };
    inline GetFabricTopologyResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetFabricTopologyResponseBody::Content) };
    inline GetFabricTopologyResponseBody& setContent(const GetFabricTopologyResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetFabricTopologyResponseBody& setContent(GetFabricTopologyResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFabricTopologyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFabricTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetFabricTopologyResponseBody::Content> content_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
