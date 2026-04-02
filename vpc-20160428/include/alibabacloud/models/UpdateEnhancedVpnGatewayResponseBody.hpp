// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENHANCEDVPNGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENHANCEDVPNGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateEnhancedVpnGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnhancedVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPropagate, autoPropagate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_TO_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_TO_JSON(EniInstanceIds, eniInstanceIds_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_TO_JSON(VpnType, vpnType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnhancedVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPropagate, autoPropagate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_FROM_JSON(EniInstanceIds, eniInstanceIds_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_FROM_JSON(VpnType, vpnType_);
    };
    UpdateEnhancedVpnGatewayResponseBody() = default ;
    UpdateEnhancedVpnGatewayResponseBody(const UpdateEnhancedVpnGatewayResponseBody &) = default ;
    UpdateEnhancedVpnGatewayResponseBody(UpdateEnhancedVpnGatewayResponseBody &&) = default ;
    UpdateEnhancedVpnGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnhancedVpnGatewayResponseBody() = default ;
    UpdateEnhancedVpnGatewayResponseBody& operator=(const UpdateEnhancedVpnGatewayResponseBody &) = default ;
    UpdateEnhancedVpnGatewayResponseBody& operator=(UpdateEnhancedVpnGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
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
        inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
      inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
      inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<Tags::Tag>> tag_ {};
    };

    class EniInstanceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EniInstanceIds& obj) { 
        DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, EniInstanceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
      };
      EniInstanceIds() = default ;
      EniInstanceIds(const EniInstanceIds &) = default ;
      EniInstanceIds(EniInstanceIds &&) = default ;
      EniInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EniInstanceIds() = default ;
      EniInstanceIds& operator=(const EniInstanceIds &) = default ;
      EniInstanceIds& operator=(EniInstanceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eniInstanceId_ == nullptr; };
      // eniInstanceId Field Functions 
      bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
      void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
      inline const vector<string> & getEniInstanceId() const { DARABONBA_PTR_GET_CONST(eniInstanceId_, vector<string>) };
      inline vector<string> getEniInstanceId() { DARABONBA_PTR_GET(eniInstanceId_, vector<string>) };
      inline EniInstanceIds& setEniInstanceId(const vector<string> & eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };
      inline EniInstanceIds& setEniInstanceId(vector<string> && eniInstanceId) { DARABONBA_PTR_SET_RVALUE(eniInstanceId_, eniInstanceId) };


    protected:
      shared_ptr<vector<string>> eniInstanceId_ {};
    };

    virtual bool empty() const override { return this->autoPropagate_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->disasterRecoveryVSwitchId_ == nullptr && this->enableBgp_ == nullptr && this->eniInstanceIds_ == nullptr
        && this->gatewayType_ == nullptr && this->name_ == nullptr && this->networkType_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->vpnGatewayId_ == nullptr && this->vpnType_ == nullptr; };
    // autoPropagate Field Functions 
    bool hasAutoPropagate() const { return this->autoPropagate_ != nullptr;};
    void deleteAutoPropagate() { this->autoPropagate_ = nullptr;};
    inline bool getAutoPropagate() const { DARABONBA_PTR_GET_DEFAULT(autoPropagate_, false) };
    inline UpdateEnhancedVpnGatewayResponseBody& setAutoPropagate(bool autoPropagate) { DARABONBA_PTR_SET_VALUE(autoPropagate_, autoPropagate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline UpdateEnhancedVpnGatewayResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disasterRecoveryVSwitchId Field Functions 
    bool hasDisasterRecoveryVSwitchId() const { return this->disasterRecoveryVSwitchId_ != nullptr;};
    void deleteDisasterRecoveryVSwitchId() { this->disasterRecoveryVSwitchId_ = nullptr;};
    inline string getDisasterRecoveryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryVSwitchId_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setDisasterRecoveryVSwitchId(string disasterRecoveryVSwitchId) { DARABONBA_PTR_SET_VALUE(disasterRecoveryVSwitchId_, disasterRecoveryVSwitchId) };


    // enableBgp Field Functions 
    bool hasEnableBgp() const { return this->enableBgp_ != nullptr;};
    void deleteEnableBgp() { this->enableBgp_ = nullptr;};
    inline bool getEnableBgp() const { DARABONBA_PTR_GET_DEFAULT(enableBgp_, false) };
    inline UpdateEnhancedVpnGatewayResponseBody& setEnableBgp(bool enableBgp) { DARABONBA_PTR_SET_VALUE(enableBgp_, enableBgp) };


    // eniInstanceIds Field Functions 
    bool hasEniInstanceIds() const { return this->eniInstanceIds_ != nullptr;};
    void deleteEniInstanceIds() { this->eniInstanceIds_ = nullptr;};
    inline const UpdateEnhancedVpnGatewayResponseBody::EniInstanceIds & getEniInstanceIds() const { DARABONBA_PTR_GET_CONST(eniInstanceIds_, UpdateEnhancedVpnGatewayResponseBody::EniInstanceIds) };
    inline UpdateEnhancedVpnGatewayResponseBody::EniInstanceIds getEniInstanceIds() { DARABONBA_PTR_GET(eniInstanceIds_, UpdateEnhancedVpnGatewayResponseBody::EniInstanceIds) };
    inline UpdateEnhancedVpnGatewayResponseBody& setEniInstanceIds(const UpdateEnhancedVpnGatewayResponseBody::EniInstanceIds & eniInstanceIds) { DARABONBA_PTR_SET_VALUE(eniInstanceIds_, eniInstanceIds) };
    inline UpdateEnhancedVpnGatewayResponseBody& setEniInstanceIds(UpdateEnhancedVpnGatewayResponseBody::EniInstanceIds && eniInstanceIds) { DARABONBA_PTR_SET_RVALUE(eniInstanceIds_, eniInstanceIds) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const UpdateEnhancedVpnGatewayResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, UpdateEnhancedVpnGatewayResponseBody::Tags) };
    inline UpdateEnhancedVpnGatewayResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, UpdateEnhancedVpnGatewayResponseBody::Tags) };
    inline UpdateEnhancedVpnGatewayResponseBody& setTags(const UpdateEnhancedVpnGatewayResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateEnhancedVpnGatewayResponseBody& setTags(UpdateEnhancedVpnGatewayResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    // vpnType Field Functions 
    bool hasVpnType() const { return this->vpnType_ != nullptr;};
    void deleteVpnType() { this->vpnType_ = nullptr;};
    inline string getVpnType() const { DARABONBA_PTR_GET_DEFAULT(vpnType_, "") };
    inline UpdateEnhancedVpnGatewayResponseBody& setVpnType(string vpnType) { DARABONBA_PTR_SET_VALUE(vpnType_, vpnType) };


  protected:
    shared_ptr<bool> autoPropagate_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> disasterRecoveryVSwitchId_ {};
    shared_ptr<bool> enableBgp_ {};
    shared_ptr<UpdateEnhancedVpnGatewayResponseBody::EniInstanceIds> eniInstanceIds_ {};
    shared_ptr<string> gatewayType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> tag_ {};
    shared_ptr<UpdateEnhancedVpnGatewayResponseBody::Tags> tags_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> vpnGatewayId_ {};
    shared_ptr<string> vpnType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
