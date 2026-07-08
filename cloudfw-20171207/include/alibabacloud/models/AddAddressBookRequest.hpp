// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDADDRESSBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDADDRESSBOOKREQUEST_HPP_
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
  class AddAddressBookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAddressBookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AckClusterConnectorId, ackClusterConnectorId_);
      DARABONBA_PTR_TO_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_TO_JSON(AckNamespaces, ackNamespaces_);
      DARABONBA_PTR_TO_JSON(AddressList, addressList_);
      DARABONBA_PTR_TO_JSON(AssetMemberUids, assetMemberUids_);
      DARABONBA_PTR_TO_JSON(AssetRegionResourceTypes, assetRegionResourceTypes_);
      DARABONBA_PTR_TO_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TagRelation, tagRelation_);
    };
    friend void from_json(const Darabonba::Json& j, AddAddressBookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AckClusterConnectorId, ackClusterConnectorId_);
      DARABONBA_PTR_FROM_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_FROM_JSON(AckNamespaces, ackNamespaces_);
      DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
      DARABONBA_PTR_FROM_JSON(AssetMemberUids, assetMemberUids_);
      DARABONBA_PTR_FROM_JSON(AssetRegionResourceTypes, assetRegionResourceTypes_);
      DARABONBA_PTR_FROM_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TagRelation, tagRelation_);
    };
    AddAddressBookRequest() = default ;
    AddAddressBookRequest(const AddAddressBookRequest &) = default ;
    AddAddressBookRequest(AddAddressBookRequest &&) = default ;
    AddAddressBookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAddressBookRequest() = default ;
    AddAddressBookRequest& operator=(const AddAddressBookRequest &) = default ;
    AddAddressBookRequest& operator=(AddAddressBookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagList& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, TagList& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      TagList() = default ;
      TagList(const TagList &) = default ;
      TagList(TagList &&) = default ;
      TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagList() = default ;
      TagList& operator=(const TagList &) = default ;
      TagList& operator=(TagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The key of the ECS tag.
      shared_ptr<string> tagKey_ {};
      // The value of the ECS tag.
      shared_ptr<string> tagValue_ {};
    };

    class AssetRegionResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetRegionResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(AssetRegionId, assetRegionId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, AssetRegionResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetRegionId, assetRegionId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      AssetRegionResourceTypes() = default ;
      AssetRegionResourceTypes(const AssetRegionResourceTypes &) = default ;
      AssetRegionResourceTypes(AssetRegionResourceTypes &&) = default ;
      AssetRegionResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetRegionResourceTypes() = default ;
      AssetRegionResourceTypes& operator=(const AssetRegionResourceTypes &) = default ;
      AssetRegionResourceTypes& operator=(AssetRegionResourceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceType& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv4, ipv4_);
          DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceType& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv4, ipv4_);
          DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
        };
        ResourceType() = default ;
        ResourceType(const ResourceType &) = default ;
        ResourceType(ResourceType &&) = default ;
        ResourceType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceType() = default ;
        ResourceType& operator=(const ResourceType &) = default ;
        ResourceType& operator=(ResourceType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ipv6 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv6& obj) { 
            DARABONBA_PTR_TO_JSON(AiGatewayEIPv6, aiGatewayEIPv6_);
            DARABONBA_PTR_TO_JSON(AlbIPv6, albIPv6_);
            DARABONBA_PTR_TO_JSON(ApiGatewayEIPv6, apiGatewayEIPv6_);
            DARABONBA_PTR_TO_JSON(EcsIPv6, ecsIPv6_);
            DARABONBA_PTR_TO_JSON(EniEIPv6, eniEIPv6_);
            DARABONBA_PTR_TO_JSON(GaEIPv6, gaEIPv6_);
            DARABONBA_PTR_TO_JSON(NlbIPv6, nlbIPv6_);
            DARABONBA_PTR_TO_JSON(SlbIPv6, slbIPv6_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv6& obj) { 
            DARABONBA_PTR_FROM_JSON(AiGatewayEIPv6, aiGatewayEIPv6_);
            DARABONBA_PTR_FROM_JSON(AlbIPv6, albIPv6_);
            DARABONBA_PTR_FROM_JSON(ApiGatewayEIPv6, apiGatewayEIPv6_);
            DARABONBA_PTR_FROM_JSON(EcsIPv6, ecsIPv6_);
            DARABONBA_PTR_FROM_JSON(EniEIPv6, eniEIPv6_);
            DARABONBA_PTR_FROM_JSON(GaEIPv6, gaEIPv6_);
            DARABONBA_PTR_FROM_JSON(NlbIPv6, nlbIPv6_);
            DARABONBA_PTR_FROM_JSON(SlbIPv6, slbIPv6_);
          };
          Ipv6() = default ;
          Ipv6(const Ipv6 &) = default ;
          Ipv6(Ipv6 &&) = default ;
          Ipv6(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv6() = default ;
          Ipv6& operator=(const Ipv6 &) = default ;
          Ipv6& operator=(Ipv6 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aiGatewayEIPv6_ == nullptr
        && this->albIPv6_ == nullptr && this->apiGatewayEIPv6_ == nullptr && this->ecsIPv6_ == nullptr && this->eniEIPv6_ == nullptr && this->gaEIPv6_ == nullptr
        && this->nlbIPv6_ == nullptr && this->slbIPv6_ == nullptr; };
          // aiGatewayEIPv6 Field Functions 
          bool hasAiGatewayEIPv6() const { return this->aiGatewayEIPv6_ != nullptr;};
          void deleteAiGatewayEIPv6() { this->aiGatewayEIPv6_ = nullptr;};
          inline bool getAiGatewayEIPv6() const { DARABONBA_PTR_GET_DEFAULT(aiGatewayEIPv6_, false) };
          inline Ipv6& setAiGatewayEIPv6(bool aiGatewayEIPv6) { DARABONBA_PTR_SET_VALUE(aiGatewayEIPv6_, aiGatewayEIPv6) };


          // albIPv6 Field Functions 
          bool hasAlbIPv6() const { return this->albIPv6_ != nullptr;};
          void deleteAlbIPv6() { this->albIPv6_ = nullptr;};
          inline bool getAlbIPv6() const { DARABONBA_PTR_GET_DEFAULT(albIPv6_, false) };
          inline Ipv6& setAlbIPv6(bool albIPv6) { DARABONBA_PTR_SET_VALUE(albIPv6_, albIPv6) };


          // apiGatewayEIPv6 Field Functions 
          bool hasApiGatewayEIPv6() const { return this->apiGatewayEIPv6_ != nullptr;};
          void deleteApiGatewayEIPv6() { this->apiGatewayEIPv6_ = nullptr;};
          inline bool getApiGatewayEIPv6() const { DARABONBA_PTR_GET_DEFAULT(apiGatewayEIPv6_, false) };
          inline Ipv6& setApiGatewayEIPv6(bool apiGatewayEIPv6) { DARABONBA_PTR_SET_VALUE(apiGatewayEIPv6_, apiGatewayEIPv6) };


          // ecsIPv6 Field Functions 
          bool hasEcsIPv6() const { return this->ecsIPv6_ != nullptr;};
          void deleteEcsIPv6() { this->ecsIPv6_ = nullptr;};
          inline bool getEcsIPv6() const { DARABONBA_PTR_GET_DEFAULT(ecsIPv6_, false) };
          inline Ipv6& setEcsIPv6(bool ecsIPv6) { DARABONBA_PTR_SET_VALUE(ecsIPv6_, ecsIPv6) };


          // eniEIPv6 Field Functions 
          bool hasEniEIPv6() const { return this->eniEIPv6_ != nullptr;};
          void deleteEniEIPv6() { this->eniEIPv6_ = nullptr;};
          inline bool getEniEIPv6() const { DARABONBA_PTR_GET_DEFAULT(eniEIPv6_, false) };
          inline Ipv6& setEniEIPv6(bool eniEIPv6) { DARABONBA_PTR_SET_VALUE(eniEIPv6_, eniEIPv6) };


          // gaEIPv6 Field Functions 
          bool hasGaEIPv6() const { return this->gaEIPv6_ != nullptr;};
          void deleteGaEIPv6() { this->gaEIPv6_ = nullptr;};
          inline bool getGaEIPv6() const { DARABONBA_PTR_GET_DEFAULT(gaEIPv6_, false) };
          inline Ipv6& setGaEIPv6(bool gaEIPv6) { DARABONBA_PTR_SET_VALUE(gaEIPv6_, gaEIPv6) };


          // nlbIPv6 Field Functions 
          bool hasNlbIPv6() const { return this->nlbIPv6_ != nullptr;};
          void deleteNlbIPv6() { this->nlbIPv6_ = nullptr;};
          inline bool getNlbIPv6() const { DARABONBA_PTR_GET_DEFAULT(nlbIPv6_, false) };
          inline Ipv6& setNlbIPv6(bool nlbIPv6) { DARABONBA_PTR_SET_VALUE(nlbIPv6_, nlbIPv6) };


          // slbIPv6 Field Functions 
          bool hasSlbIPv6() const { return this->slbIPv6_ != nullptr;};
          void deleteSlbIPv6() { this->slbIPv6_ = nullptr;};
          inline bool getSlbIPv6() const { DARABONBA_PTR_GET_DEFAULT(slbIPv6_, false) };
          inline Ipv6& setSlbIPv6(bool slbIPv6) { DARABONBA_PTR_SET_VALUE(slbIPv6_, slbIPv6) };


        protected:
          // The asset type: AIGatewayEIPv6.
          shared_ptr<bool> aiGatewayEIPv6_ {};
          // The asset type: AlbIPv6.
          shared_ptr<bool> albIPv6_ {};
          // The asset type: ApigEIPv6.
          shared_ptr<bool> apiGatewayEIPv6_ {};
          // The asset type: EcsIPv6.
          shared_ptr<bool> ecsIPv6_ {};
          // The asset type: EniEIPv6.
          shared_ptr<bool> eniEIPv6_ {};
          // The asset type: GaEIPv6.
          shared_ptr<bool> gaEIPv6_ {};
          // The asset type: NlbIPv6.
          shared_ptr<bool> nlbIPv6_ {};
          // The asset type: SlbIPv6.
          shared_ptr<bool> slbIPv6_ {};
        };

        class Ipv4 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv4& obj) { 
            DARABONBA_PTR_TO_JSON(AiGatewayEIP, aiGatewayEIP_);
            DARABONBA_PTR_TO_JSON(AlbEIP, albEIP_);
            DARABONBA_PTR_TO_JSON(ApiGatewayEIP, apiGatewayEIP_);
            DARABONBA_PTR_TO_JSON(BastionHostEgressIP, bastionHostEgressIP_);
            DARABONBA_PTR_TO_JSON(BastionHostIP, bastionHostIP_);
            DARABONBA_PTR_TO_JSON(BastionHostIngressIP, bastionHostIngressIP_);
            DARABONBA_PTR_TO_JSON(EIP, EIP_);
            DARABONBA_PTR_TO_JSON(EcsEIP, ecsEIP_);
            DARABONBA_PTR_TO_JSON(EcsPublicIP, ecsPublicIP_);
            DARABONBA_PTR_TO_JSON(EniEIP, eniEIP_);
            DARABONBA_PTR_TO_JSON(GaEIP, gaEIP_);
            DARABONBA_PTR_TO_JSON(HAVIP, HAVIP_);
            DARABONBA_PTR_TO_JSON(NatEIP, natEIP_);
            DARABONBA_PTR_TO_JSON(NatPublicIP, natPublicIP_);
            DARABONBA_PTR_TO_JSON(NlbEIP, nlbEIP_);
            DARABONBA_PTR_TO_JSON(SlbEIP, slbEIP_);
            DARABONBA_PTR_TO_JSON(SlbPublicIP, slbPublicIP_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv4& obj) { 
            DARABONBA_PTR_FROM_JSON(AiGatewayEIP, aiGatewayEIP_);
            DARABONBA_PTR_FROM_JSON(AlbEIP, albEIP_);
            DARABONBA_PTR_FROM_JSON(ApiGatewayEIP, apiGatewayEIP_);
            DARABONBA_PTR_FROM_JSON(BastionHostEgressIP, bastionHostEgressIP_);
            DARABONBA_PTR_FROM_JSON(BastionHostIP, bastionHostIP_);
            DARABONBA_PTR_FROM_JSON(BastionHostIngressIP, bastionHostIngressIP_);
            DARABONBA_PTR_FROM_JSON(EIP, EIP_);
            DARABONBA_PTR_FROM_JSON(EcsEIP, ecsEIP_);
            DARABONBA_PTR_FROM_JSON(EcsPublicIP, ecsPublicIP_);
            DARABONBA_PTR_FROM_JSON(EniEIP, eniEIP_);
            DARABONBA_PTR_FROM_JSON(GaEIP, gaEIP_);
            DARABONBA_PTR_FROM_JSON(HAVIP, HAVIP_);
            DARABONBA_PTR_FROM_JSON(NatEIP, natEIP_);
            DARABONBA_PTR_FROM_JSON(NatPublicIP, natPublicIP_);
            DARABONBA_PTR_FROM_JSON(NlbEIP, nlbEIP_);
            DARABONBA_PTR_FROM_JSON(SlbEIP, slbEIP_);
            DARABONBA_PTR_FROM_JSON(SlbPublicIP, slbPublicIP_);
          };
          Ipv4() = default ;
          Ipv4(const Ipv4 &) = default ;
          Ipv4(Ipv4 &&) = default ;
          Ipv4(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv4() = default ;
          Ipv4& operator=(const Ipv4 &) = default ;
          Ipv4& operator=(Ipv4 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aiGatewayEIP_ == nullptr
        && this->albEIP_ == nullptr && this->apiGatewayEIP_ == nullptr && this->bastionHostEgressIP_ == nullptr && this->bastionHostIP_ == nullptr && this->bastionHostIngressIP_ == nullptr
        && this->EIP_ == nullptr && this->ecsEIP_ == nullptr && this->ecsPublicIP_ == nullptr && this->eniEIP_ == nullptr && this->gaEIP_ == nullptr
        && this->HAVIP_ == nullptr && this->natEIP_ == nullptr && this->natPublicIP_ == nullptr && this->nlbEIP_ == nullptr && this->slbEIP_ == nullptr
        && this->slbPublicIP_ == nullptr; };
          // aiGatewayEIP Field Functions 
          bool hasAiGatewayEIP() const { return this->aiGatewayEIP_ != nullptr;};
          void deleteAiGatewayEIP() { this->aiGatewayEIP_ = nullptr;};
          inline bool getAiGatewayEIP() const { DARABONBA_PTR_GET_DEFAULT(aiGatewayEIP_, false) };
          inline Ipv4& setAiGatewayEIP(bool aiGatewayEIP) { DARABONBA_PTR_SET_VALUE(aiGatewayEIP_, aiGatewayEIP) };


          // albEIP Field Functions 
          bool hasAlbEIP() const { return this->albEIP_ != nullptr;};
          void deleteAlbEIP() { this->albEIP_ = nullptr;};
          inline bool getAlbEIP() const { DARABONBA_PTR_GET_DEFAULT(albEIP_, false) };
          inline Ipv4& setAlbEIP(bool albEIP) { DARABONBA_PTR_SET_VALUE(albEIP_, albEIP) };


          // apiGatewayEIP Field Functions 
          bool hasApiGatewayEIP() const { return this->apiGatewayEIP_ != nullptr;};
          void deleteApiGatewayEIP() { this->apiGatewayEIP_ = nullptr;};
          inline bool getApiGatewayEIP() const { DARABONBA_PTR_GET_DEFAULT(apiGatewayEIP_, false) };
          inline Ipv4& setApiGatewayEIP(bool apiGatewayEIP) { DARABONBA_PTR_SET_VALUE(apiGatewayEIP_, apiGatewayEIP) };


          // bastionHostEgressIP Field Functions 
          bool hasBastionHostEgressIP() const { return this->bastionHostEgressIP_ != nullptr;};
          void deleteBastionHostEgressIP() { this->bastionHostEgressIP_ = nullptr;};
          inline bool getBastionHostEgressIP() const { DARABONBA_PTR_GET_DEFAULT(bastionHostEgressIP_, false) };
          inline Ipv4& setBastionHostEgressIP(bool bastionHostEgressIP) { DARABONBA_PTR_SET_VALUE(bastionHostEgressIP_, bastionHostEgressIP) };


          // bastionHostIP Field Functions 
          bool hasBastionHostIP() const { return this->bastionHostIP_ != nullptr;};
          void deleteBastionHostIP() { this->bastionHostIP_ = nullptr;};
          inline bool getBastionHostIP() const { DARABONBA_PTR_GET_DEFAULT(bastionHostIP_, false) };
          inline Ipv4& setBastionHostIP(bool bastionHostIP) { DARABONBA_PTR_SET_VALUE(bastionHostIP_, bastionHostIP) };


          // bastionHostIngressIP Field Functions 
          bool hasBastionHostIngressIP() const { return this->bastionHostIngressIP_ != nullptr;};
          void deleteBastionHostIngressIP() { this->bastionHostIngressIP_ = nullptr;};
          inline bool getBastionHostIngressIP() const { DARABONBA_PTR_GET_DEFAULT(bastionHostIngressIP_, false) };
          inline Ipv4& setBastionHostIngressIP(bool bastionHostIngressIP) { DARABONBA_PTR_SET_VALUE(bastionHostIngressIP_, bastionHostIngressIP) };


          // EIP Field Functions 
          bool hasEIP() const { return this->EIP_ != nullptr;};
          void deleteEIP() { this->EIP_ = nullptr;};
          inline bool getEIP() const { DARABONBA_PTR_GET_DEFAULT(EIP_, false) };
          inline Ipv4& setEIP(bool EIP) { DARABONBA_PTR_SET_VALUE(EIP_, EIP) };


          // ecsEIP Field Functions 
          bool hasEcsEIP() const { return this->ecsEIP_ != nullptr;};
          void deleteEcsEIP() { this->ecsEIP_ = nullptr;};
          inline bool getEcsEIP() const { DARABONBA_PTR_GET_DEFAULT(ecsEIP_, false) };
          inline Ipv4& setEcsEIP(bool ecsEIP) { DARABONBA_PTR_SET_VALUE(ecsEIP_, ecsEIP) };


          // ecsPublicIP Field Functions 
          bool hasEcsPublicIP() const { return this->ecsPublicIP_ != nullptr;};
          void deleteEcsPublicIP() { this->ecsPublicIP_ = nullptr;};
          inline bool getEcsPublicIP() const { DARABONBA_PTR_GET_DEFAULT(ecsPublicIP_, false) };
          inline Ipv4& setEcsPublicIP(bool ecsPublicIP) { DARABONBA_PTR_SET_VALUE(ecsPublicIP_, ecsPublicIP) };


          // eniEIP Field Functions 
          bool hasEniEIP() const { return this->eniEIP_ != nullptr;};
          void deleteEniEIP() { this->eniEIP_ = nullptr;};
          inline bool getEniEIP() const { DARABONBA_PTR_GET_DEFAULT(eniEIP_, false) };
          inline Ipv4& setEniEIP(bool eniEIP) { DARABONBA_PTR_SET_VALUE(eniEIP_, eniEIP) };


          // gaEIP Field Functions 
          bool hasGaEIP() const { return this->gaEIP_ != nullptr;};
          void deleteGaEIP() { this->gaEIP_ = nullptr;};
          inline bool getGaEIP() const { DARABONBA_PTR_GET_DEFAULT(gaEIP_, false) };
          inline Ipv4& setGaEIP(bool gaEIP) { DARABONBA_PTR_SET_VALUE(gaEIP_, gaEIP) };


          // HAVIP Field Functions 
          bool hasHAVIP() const { return this->HAVIP_ != nullptr;};
          void deleteHAVIP() { this->HAVIP_ = nullptr;};
          inline bool getHAVIP() const { DARABONBA_PTR_GET_DEFAULT(HAVIP_, false) };
          inline Ipv4& setHAVIP(bool HAVIP) { DARABONBA_PTR_SET_VALUE(HAVIP_, HAVIP) };


          // natEIP Field Functions 
          bool hasNatEIP() const { return this->natEIP_ != nullptr;};
          void deleteNatEIP() { this->natEIP_ = nullptr;};
          inline bool getNatEIP() const { DARABONBA_PTR_GET_DEFAULT(natEIP_, false) };
          inline Ipv4& setNatEIP(bool natEIP) { DARABONBA_PTR_SET_VALUE(natEIP_, natEIP) };


          // natPublicIP Field Functions 
          bool hasNatPublicIP() const { return this->natPublicIP_ != nullptr;};
          void deleteNatPublicIP() { this->natPublicIP_ = nullptr;};
          inline bool getNatPublicIP() const { DARABONBA_PTR_GET_DEFAULT(natPublicIP_, false) };
          inline Ipv4& setNatPublicIP(bool natPublicIP) { DARABONBA_PTR_SET_VALUE(natPublicIP_, natPublicIP) };


          // nlbEIP Field Functions 
          bool hasNlbEIP() const { return this->nlbEIP_ != nullptr;};
          void deleteNlbEIP() { this->nlbEIP_ = nullptr;};
          inline bool getNlbEIP() const { DARABONBA_PTR_GET_DEFAULT(nlbEIP_, false) };
          inline Ipv4& setNlbEIP(bool nlbEIP) { DARABONBA_PTR_SET_VALUE(nlbEIP_, nlbEIP) };


          // slbEIP Field Functions 
          bool hasSlbEIP() const { return this->slbEIP_ != nullptr;};
          void deleteSlbEIP() { this->slbEIP_ = nullptr;};
          inline bool getSlbEIP() const { DARABONBA_PTR_GET_DEFAULT(slbEIP_, false) };
          inline Ipv4& setSlbEIP(bool slbEIP) { DARABONBA_PTR_SET_VALUE(slbEIP_, slbEIP) };


          // slbPublicIP Field Functions 
          bool hasSlbPublicIP() const { return this->slbPublicIP_ != nullptr;};
          void deleteSlbPublicIP() { this->slbPublicIP_ = nullptr;};
          inline bool getSlbPublicIP() const { DARABONBA_PTR_GET_DEFAULT(slbPublicIP_, false) };
          inline Ipv4& setSlbPublicIP(bool slbPublicIP) { DARABONBA_PTR_SET_VALUE(slbPublicIP_, slbPublicIP) };


        protected:
          // The asset type: AIGatewayEIP.
          shared_ptr<bool> aiGatewayEIP_ {};
          // The asset type: AlbEIP.
          shared_ptr<bool> albEIP_ {};
          // The asset type: ApigEIP.
          shared_ptr<bool> apiGatewayEIP_ {};
          // The asset type: BastionHostEgressIP.
          shared_ptr<bool> bastionHostEgressIP_ {};
          // The asset type: BastionHostIP.
          shared_ptr<bool> bastionHostIP_ {};
          // The asset type: BastionHostIngressIP.
          shared_ptr<bool> bastionHostIngressIP_ {};
          // The asset type: EIP.
          shared_ptr<bool> EIP_ {};
          // The asset type: EcsEIP.
          shared_ptr<bool> ecsEIP_ {};
          // The asset type: EcsPublicIP.
          shared_ptr<bool> ecsPublicIP_ {};
          // The asset type: EniEIP.
          shared_ptr<bool> eniEIP_ {};
          // The asset type: GaEIP.
          shared_ptr<bool> gaEIP_ {};
          // The asset type: HAVIP.
          shared_ptr<bool> HAVIP_ {};
          // The asset type: NatEIP.
          shared_ptr<bool> natEIP_ {};
          // The asset type: NatPublicIP.
          shared_ptr<bool> natPublicIP_ {};
          // The asset type: NlbEIP.
          shared_ptr<bool> nlbEIP_ {};
          // The asset type: SlbEIP.
          shared_ptr<bool> slbEIP_ {};
          // The asset type: SlbPublicIP.
          shared_ptr<bool> slbPublicIP_ {};
        };

        virtual bool empty() const override { return this->ipv4_ == nullptr
        && this->ipv6_ == nullptr; };
        // ipv4 Field Functions 
        bool hasIpv4() const { return this->ipv4_ != nullptr;};
        void deleteIpv4() { this->ipv4_ = nullptr;};
        inline const ResourceType::Ipv4 & getIpv4() const { DARABONBA_PTR_GET_CONST(ipv4_, ResourceType::Ipv4) };
        inline ResourceType::Ipv4 getIpv4() { DARABONBA_PTR_GET(ipv4_, ResourceType::Ipv4) };
        inline ResourceType& setIpv4(const ResourceType::Ipv4 & ipv4) { DARABONBA_PTR_SET_VALUE(ipv4_, ipv4) };
        inline ResourceType& setIpv4(ResourceType::Ipv4 && ipv4) { DARABONBA_PTR_SET_RVALUE(ipv4_, ipv4) };


        // ipv6 Field Functions 
        bool hasIpv6() const { return this->ipv6_ != nullptr;};
        void deleteIpv6() { this->ipv6_ = nullptr;};
        inline const ResourceType::Ipv6 & getIpv6() const { DARABONBA_PTR_GET_CONST(ipv6_, ResourceType::Ipv6) };
        inline ResourceType::Ipv6 getIpv6() { DARABONBA_PTR_GET(ipv6_, ResourceType::Ipv6) };
        inline ResourceType& setIpv6(const ResourceType::Ipv6 & ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };
        inline ResourceType& setIpv6(ResourceType::Ipv6 && ipv6) { DARABONBA_PTR_SET_RVALUE(ipv6_, ipv6) };


      protected:
        // The IPv4 asset type.
        shared_ptr<ResourceType::Ipv4> ipv4_ {};
        // The IPv6 asset type.
        shared_ptr<ResourceType::Ipv6> ipv6_ {};
      };

      virtual bool empty() const override { return this->assetRegionId_ == nullptr
        && this->resourceType_ == nullptr; };
      // assetRegionId Field Functions 
      bool hasAssetRegionId() const { return this->assetRegionId_ != nullptr;};
      void deleteAssetRegionId() { this->assetRegionId_ = nullptr;};
      inline string getAssetRegionId() const { DARABONBA_PTR_GET_DEFAULT(assetRegionId_, "") };
      inline AssetRegionResourceTypes& setAssetRegionId(string assetRegionId) { DARABONBA_PTR_SET_VALUE(assetRegionId_, assetRegionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline const AssetRegionResourceTypes::ResourceType & getResourceType() const { DARABONBA_PTR_GET_CONST(resourceType_, AssetRegionResourceTypes::ResourceType) };
      inline AssetRegionResourceTypes::ResourceType getResourceType() { DARABONBA_PTR_GET(resourceType_, AssetRegionResourceTypes::ResourceType) };
      inline AssetRegionResourceTypes& setResourceType(const AssetRegionResourceTypes::ResourceType & resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };
      inline AssetRegionResourceTypes& setResourceType(AssetRegionResourceTypes::ResourceType && resourceType) { DARABONBA_PTR_SET_RVALUE(resourceType_, resourceType) };


    protected:
      // The region ID of the asset.
      shared_ptr<string> assetRegionId_ {};
      // The asset type.
      shared_ptr<AssetRegionResourceTypes::ResourceType> resourceType_ {};
    };

    class AckLabels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AckLabels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AckLabels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AckLabels() = default ;
      AckLabels(const AckLabels &) = default ;
      AckLabels(AckLabels &&) = default ;
      AckLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AckLabels() = default ;
      AckLabels& operator=(const AckLabels &) = default ;
      AckLabels& operator=(AckLabels &&) = default ;
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
      inline AckLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AckLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the ACK cluster pod label.
      shared_ptr<string> key_ {};
      // The value of the ACK cluster pod label.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ackClusterConnectorId_ == nullptr
        && this->ackLabels_ == nullptr && this->ackNamespaces_ == nullptr && this->addressList_ == nullptr && this->assetMemberUids_ == nullptr && this->assetRegionResourceTypes_ == nullptr
        && this->autoAddTagEcs_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->lang_ == nullptr
        && this->sourceIp_ == nullptr && this->tagList_ == nullptr && this->tagRelation_ == nullptr; };
    // ackClusterConnectorId Field Functions 
    bool hasAckClusterConnectorId() const { return this->ackClusterConnectorId_ != nullptr;};
    void deleteAckClusterConnectorId() { this->ackClusterConnectorId_ = nullptr;};
    inline string getAckClusterConnectorId() const { DARABONBA_PTR_GET_DEFAULT(ackClusterConnectorId_, "") };
    inline AddAddressBookRequest& setAckClusterConnectorId(string ackClusterConnectorId) { DARABONBA_PTR_SET_VALUE(ackClusterConnectorId_, ackClusterConnectorId) };


    // ackLabels Field Functions 
    bool hasAckLabels() const { return this->ackLabels_ != nullptr;};
    void deleteAckLabels() { this->ackLabels_ = nullptr;};
    inline const vector<AddAddressBookRequest::AckLabels> & getAckLabels() const { DARABONBA_PTR_GET_CONST(ackLabels_, vector<AddAddressBookRequest::AckLabels>) };
    inline vector<AddAddressBookRequest::AckLabels> getAckLabels() { DARABONBA_PTR_GET(ackLabels_, vector<AddAddressBookRequest::AckLabels>) };
    inline AddAddressBookRequest& setAckLabels(const vector<AddAddressBookRequest::AckLabels> & ackLabels) { DARABONBA_PTR_SET_VALUE(ackLabels_, ackLabels) };
    inline AddAddressBookRequest& setAckLabels(vector<AddAddressBookRequest::AckLabels> && ackLabels) { DARABONBA_PTR_SET_RVALUE(ackLabels_, ackLabels) };


    // ackNamespaces Field Functions 
    bool hasAckNamespaces() const { return this->ackNamespaces_ != nullptr;};
    void deleteAckNamespaces() { this->ackNamespaces_ = nullptr;};
    inline const vector<string> & getAckNamespaces() const { DARABONBA_PTR_GET_CONST(ackNamespaces_, vector<string>) };
    inline vector<string> getAckNamespaces() { DARABONBA_PTR_GET(ackNamespaces_, vector<string>) };
    inline AddAddressBookRequest& setAckNamespaces(const vector<string> & ackNamespaces) { DARABONBA_PTR_SET_VALUE(ackNamespaces_, ackNamespaces) };
    inline AddAddressBookRequest& setAckNamespaces(vector<string> && ackNamespaces) { DARABONBA_PTR_SET_RVALUE(ackNamespaces_, ackNamespaces) };


    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline string getAddressList() const { DARABONBA_PTR_GET_DEFAULT(addressList_, "") };
    inline AddAddressBookRequest& setAddressList(string addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };


    // assetMemberUids Field Functions 
    bool hasAssetMemberUids() const { return this->assetMemberUids_ != nullptr;};
    void deleteAssetMemberUids() { this->assetMemberUids_ = nullptr;};
    inline const vector<int64_t> & getAssetMemberUids() const { DARABONBA_PTR_GET_CONST(assetMemberUids_, vector<int64_t>) };
    inline vector<int64_t> getAssetMemberUids() { DARABONBA_PTR_GET(assetMemberUids_, vector<int64_t>) };
    inline AddAddressBookRequest& setAssetMemberUids(const vector<int64_t> & assetMemberUids) { DARABONBA_PTR_SET_VALUE(assetMemberUids_, assetMemberUids) };
    inline AddAddressBookRequest& setAssetMemberUids(vector<int64_t> && assetMemberUids) { DARABONBA_PTR_SET_RVALUE(assetMemberUids_, assetMemberUids) };


    // assetRegionResourceTypes Field Functions 
    bool hasAssetRegionResourceTypes() const { return this->assetRegionResourceTypes_ != nullptr;};
    void deleteAssetRegionResourceTypes() { this->assetRegionResourceTypes_ = nullptr;};
    inline const vector<AddAddressBookRequest::AssetRegionResourceTypes> & getAssetRegionResourceTypes() const { DARABONBA_PTR_GET_CONST(assetRegionResourceTypes_, vector<AddAddressBookRequest::AssetRegionResourceTypes>) };
    inline vector<AddAddressBookRequest::AssetRegionResourceTypes> getAssetRegionResourceTypes() { DARABONBA_PTR_GET(assetRegionResourceTypes_, vector<AddAddressBookRequest::AssetRegionResourceTypes>) };
    inline AddAddressBookRequest& setAssetRegionResourceTypes(const vector<AddAddressBookRequest::AssetRegionResourceTypes> & assetRegionResourceTypes) { DARABONBA_PTR_SET_VALUE(assetRegionResourceTypes_, assetRegionResourceTypes) };
    inline AddAddressBookRequest& setAssetRegionResourceTypes(vector<AddAddressBookRequest::AssetRegionResourceTypes> && assetRegionResourceTypes) { DARABONBA_PTR_SET_RVALUE(assetRegionResourceTypes_, assetRegionResourceTypes) };


    // autoAddTagEcs Field Functions 
    bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
    void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
    inline string getAutoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, "") };
    inline AddAddressBookRequest& setAutoAddTagEcs(string autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddAddressBookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddAddressBookRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline AddAddressBookRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddAddressBookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline AddAddressBookRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<AddAddressBookRequest::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<AddAddressBookRequest::TagList>) };
    inline vector<AddAddressBookRequest::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<AddAddressBookRequest::TagList>) };
    inline AddAddressBookRequest& setTagList(const vector<AddAddressBookRequest::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline AddAddressBookRequest& setTagList(vector<AddAddressBookRequest::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRelation Field Functions 
    bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
    void deleteTagRelation() { this->tagRelation_ = nullptr;};
    inline string getTagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
    inline AddAddressBookRequest& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


  protected:
    // The ACK cluster connector ID. You can obtain the value from the following operation:
    // - [DescribeAckClusterConnectors](~~DescribeAckClusterConnectors~~): Lists ACK cluster connectors.
    shared_ptr<string> ackClusterConnectorId_ {};
    // The list of ACK cluster pod labels.
    // 
    // > A maximum of 10 labels are supported.
    shared_ptr<vector<AddAddressBookRequest::AckLabels>> ackLabels_ {};
    // The list of ACK cluster pod namespaces.
    // > A maximum of 10 namespaces are supported.
    shared_ptr<vector<string>> ackNamespaces_ {};
    // The addresses in the address book. Separate multiple addresses with commas (,). Use a space to separate an address from its description within a single address element.
    // 
    // > This parameter is required when GroupType is set to `ip`, `port`, or `domain`.
    // 
    // - When GroupType is set to `ip`, enter IP addresses in the address list. Example: 192.0.XX.XX/32 Development CIDR block,10.0.0.X/24,192.0.XX.XX/24 Test CIDR block.
    // 
    // - When GroupType is set to `port`, enter ports or port ranges in the address list. Example: 80 HTTP port,100/200,3306 Database port.
    // 
    // - When GroupType is set to `domain`, enter domain names in the address list. Example: example.com Test domain name,aliyundoc.com,www.aliyun.com Alibaba Cloud official website.
    shared_ptr<string> addressList_ {};
    // The list of member accounts for the asset address book.
    shared_ptr<vector<int64_t>> assetMemberUids_ {};
    // The list of regions and resource types for the asset address book.
    shared_ptr<vector<AddAddressBookRequest::AssetRegionResourceTypes>> assetRegionResourceTypes_ {};
    // Indicates whether to automatically add the public IP addresses of Elastic Compute Service (ECS) instances that match the specified tags to the address book.
    shared_ptr<string> autoAddTagEcs_ {};
    // The description of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The name of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // The language type of the address book description.
    shared_ptr<string> lang_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The ECS tag list.
    shared_ptr<vector<AddAddressBookRequest::TagList>> tagList_ {};
    // The logical relationship among multiple ECS tags to match.
    shared_ptr<string> tagRelation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
