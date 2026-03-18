// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class ListPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListPolicyResponseBody() = default ;
    ListPolicyResponseBody(const ListPolicyResponseBody &) = default ;
    ListPolicyResponseBody(ListPolicyResponseBody &&) = default ;
    ListPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyResponseBody() = default ;
    ListPolicyResponseBody& operator=(const ListPolicyResponseBody &) = default ;
    ListPolicyResponseBody& operator=(ListPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(AttachedCount, attachedCount_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachedCount, attachedCount_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      PolicyList() = default ;
      PolicyList(const PolicyList &) = default ;
      PolicyList(PolicyList &&) = default ;
      PolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyList() = default ;
      PolicyList& operator=(const PolicyList &) = default ;
      PolicyList& operator=(PolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(BlackIpListExpireAt, blackIpListExpireAt_);
          DARABONBA_PTR_TO_JSON(EnableDropIcmp, enableDropIcmp_);
          DARABONBA_PTR_TO_JSON(EnableIntelligence, enableIntelligence_);
          DARABONBA_PTR_TO_JSON(EnableL4Defense, enableL4Defense_);
          DARABONBA_PTR_TO_JSON(FingerPrintRuleList, fingerPrintRuleList_);
          DARABONBA_PTR_TO_JSON(IntelligenceLevel, intelligenceLevel_);
          DARABONBA_PTR_TO_JSON(L4RuleList, l4RuleList_);
          DARABONBA_PTR_TO_JSON(PortRuleList, portRuleList_);
          DARABONBA_PTR_TO_JSON(PortVersion, portVersion_);
          DARABONBA_PTR_TO_JSON(ReflectBlockUdpPortList, reflectBlockUdpPortList_);
          DARABONBA_PTR_TO_JSON(RegionBlockCountryList, regionBlockCountryList_);
          DARABONBA_PTR_TO_JSON(RegionBlockProvinceList, regionBlockProvinceList_);
          DARABONBA_PTR_TO_JSON(SourceBlockList, sourceBlockList_);
          DARABONBA_PTR_TO_JSON(SourceLimit, sourceLimit_);
          DARABONBA_PTR_TO_JSON(WhitenGfbrNets, whitenGfbrNets_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(BlackIpListExpireAt, blackIpListExpireAt_);
          DARABONBA_PTR_FROM_JSON(EnableDropIcmp, enableDropIcmp_);
          DARABONBA_PTR_FROM_JSON(EnableIntelligence, enableIntelligence_);
          DARABONBA_PTR_FROM_JSON(EnableL4Defense, enableL4Defense_);
          DARABONBA_PTR_FROM_JSON(FingerPrintRuleList, fingerPrintRuleList_);
          DARABONBA_PTR_FROM_JSON(IntelligenceLevel, intelligenceLevel_);
          DARABONBA_PTR_FROM_JSON(L4RuleList, l4RuleList_);
          DARABONBA_PTR_FROM_JSON(PortRuleList, portRuleList_);
          DARABONBA_PTR_FROM_JSON(PortVersion, portVersion_);
          DARABONBA_PTR_FROM_JSON(ReflectBlockUdpPortList, reflectBlockUdpPortList_);
          DARABONBA_PTR_FROM_JSON(RegionBlockCountryList, regionBlockCountryList_);
          DARABONBA_PTR_FROM_JSON(RegionBlockProvinceList, regionBlockProvinceList_);
          DARABONBA_PTR_FROM_JSON(SourceBlockList, sourceBlockList_);
          DARABONBA_PTR_FROM_JSON(SourceLimit, sourceLimit_);
          DARABONBA_PTR_FROM_JSON(WhitenGfbrNets, whitenGfbrNets_);
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
        class SourceLimit : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceLimit& obj) { 
            DARABONBA_PTR_TO_JSON(Bps, bps_);
            DARABONBA_PTR_TO_JSON(Pps, pps_);
            DARABONBA_PTR_TO_JSON(SynBps, synBps_);
            DARABONBA_PTR_TO_JSON(SynPps, synPps_);
          };
          friend void from_json(const Darabonba::Json& j, SourceLimit& obj) { 
            DARABONBA_PTR_FROM_JSON(Bps, bps_);
            DARABONBA_PTR_FROM_JSON(Pps, pps_);
            DARABONBA_PTR_FROM_JSON(SynBps, synBps_);
            DARABONBA_PTR_FROM_JSON(SynPps, synPps_);
          };
          SourceLimit() = default ;
          SourceLimit(const SourceLimit &) = default ;
          SourceLimit(SourceLimit &&) = default ;
          SourceLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceLimit() = default ;
          SourceLimit& operator=(const SourceLimit &) = default ;
          SourceLimit& operator=(SourceLimit &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bps_ == nullptr
        && this->pps_ == nullptr && this->synBps_ == nullptr && this->synPps_ == nullptr; };
          // bps Field Functions 
          bool hasBps() const { return this->bps_ != nullptr;};
          void deleteBps() { this->bps_ = nullptr;};
          inline int32_t getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0) };
          inline SourceLimit& setBps(int32_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


          // pps Field Functions 
          bool hasPps() const { return this->pps_ != nullptr;};
          void deletePps() { this->pps_ = nullptr;};
          inline int32_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0) };
          inline SourceLimit& setPps(int32_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


          // synBps Field Functions 
          bool hasSynBps() const { return this->synBps_ != nullptr;};
          void deleteSynBps() { this->synBps_ = nullptr;};
          inline int32_t getSynBps() const { DARABONBA_PTR_GET_DEFAULT(synBps_, 0) };
          inline SourceLimit& setSynBps(int32_t synBps) { DARABONBA_PTR_SET_VALUE(synBps_, synBps) };


          // synPps Field Functions 
          bool hasSynPps() const { return this->synPps_ != nullptr;};
          void deleteSynPps() { this->synPps_ = nullptr;};
          inline int32_t getSynPps() const { DARABONBA_PTR_GET_DEFAULT(synPps_, 0) };
          inline SourceLimit& setSynPps(int32_t synPps) { DARABONBA_PTR_SET_VALUE(synPps_, synPps) };


        protected:
          // The bandwidth limit on source IP addresses. Unit: bytes per second.
          shared_ptr<int32_t> bps_ {};
          // The packets per second (PPS) limit on source IP addresses.
          shared_ptr<int32_t> pps_ {};
          // The bandwidth limit on source SYN packets. Unit: bytes per second.
          shared_ptr<int32_t> synBps_ {};
          // The PPS limit on source SYN packets.
          shared_ptr<int32_t> synPps_ {};
        };

        class SourceBlockList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceBlockList& obj) { 
            DARABONBA_PTR_TO_JSON(BlockExpireSeconds, blockExpireSeconds_);
            DARABONBA_PTR_TO_JSON(EverySeconds, everySeconds_);
            DARABONBA_PTR_TO_JSON(ExceedLimitTimes, exceedLimitTimes_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, SourceBlockList& obj) { 
            DARABONBA_PTR_FROM_JSON(BlockExpireSeconds, blockExpireSeconds_);
            DARABONBA_PTR_FROM_JSON(EverySeconds, everySeconds_);
            DARABONBA_PTR_FROM_JSON(ExceedLimitTimes, exceedLimitTimes_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          SourceBlockList() = default ;
          SourceBlockList(const SourceBlockList &) = default ;
          SourceBlockList(SourceBlockList &&) = default ;
          SourceBlockList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceBlockList() = default ;
          SourceBlockList& operator=(const SourceBlockList &) = default ;
          SourceBlockList& operator=(SourceBlockList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->blockExpireSeconds_ == nullptr
        && this->everySeconds_ == nullptr && this->exceedLimitTimes_ == nullptr && this->type_ == nullptr; };
          // blockExpireSeconds Field Functions 
          bool hasBlockExpireSeconds() const { return this->blockExpireSeconds_ != nullptr;};
          void deleteBlockExpireSeconds() { this->blockExpireSeconds_ = nullptr;};
          inline int32_t getBlockExpireSeconds() const { DARABONBA_PTR_GET_DEFAULT(blockExpireSeconds_, 0) };
          inline SourceBlockList& setBlockExpireSeconds(int32_t blockExpireSeconds) { DARABONBA_PTR_SET_VALUE(blockExpireSeconds_, blockExpireSeconds) };


          // everySeconds Field Functions 
          bool hasEverySeconds() const { return this->everySeconds_ != nullptr;};
          void deleteEverySeconds() { this->everySeconds_ = nullptr;};
          inline int32_t getEverySeconds() const { DARABONBA_PTR_GET_DEFAULT(everySeconds_, 0) };
          inline SourceBlockList& setEverySeconds(int32_t everySeconds) { DARABONBA_PTR_SET_VALUE(everySeconds_, everySeconds) };


          // exceedLimitTimes Field Functions 
          bool hasExceedLimitTimes() const { return this->exceedLimitTimes_ != nullptr;};
          void deleteExceedLimitTimes() { this->exceedLimitTimes_ = nullptr;};
          inline int32_t getExceedLimitTimes() const { DARABONBA_PTR_GET_DEFAULT(exceedLimitTimes_, 0) };
          inline SourceBlockList& setExceedLimitTimes(int32_t exceedLimitTimes) { DARABONBA_PTR_SET_VALUE(exceedLimitTimes_, exceedLimitTimes) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline SourceBlockList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The validity period of the blacklist to which the source IP address is added. Unit: seconds.
          shared_ptr<int32_t> blockExpireSeconds_ {};
          // The statistical period during which the system collects data on source IP addresses to determine whether to add the source IP addresses to the blacklist. Unit: seconds.
          shared_ptr<int32_t> everySeconds_ {};
          // The number of times that the source IP address exceeds a limit in a statistical period.
          shared_ptr<int32_t> exceedLimitTimes_ {};
          // The type of the source rate limit. Valid values:
          // 
          // *   **3**: the PPS limit on source IP addresses.
          // *   **4**: the bandwidth limit on source IP addresses.
          // *   **5**: the PPS limit on source SYN packets.
          // *   **6**: the bandwidth limit on source SYN packets.
          shared_ptr<int32_t> type_ {};
        };

        class PortRuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PortRuleList& obj) { 
            DARABONBA_PTR_TO_JSON(DstPortEnd, dstPortEnd_);
            DARABONBA_PTR_TO_JSON(DstPortStart, dstPortStart_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(MatchAction, matchAction_);
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
            DARABONBA_PTR_TO_JSON(SeqNo, seqNo_);
            DARABONBA_PTR_TO_JSON(SrcPortEnd, srcPortEnd_);
            DARABONBA_PTR_TO_JSON(SrcPortStart, srcPortStart_);
          };
          friend void from_json(const Darabonba::Json& j, PortRuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(DstPortEnd, dstPortEnd_);
            DARABONBA_PTR_FROM_JSON(DstPortStart, dstPortStart_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(MatchAction, matchAction_);
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
            DARABONBA_PTR_FROM_JSON(SeqNo, seqNo_);
            DARABONBA_PTR_FROM_JSON(SrcPortEnd, srcPortEnd_);
            DARABONBA_PTR_FROM_JSON(SrcPortStart, srcPortStart_);
          };
          PortRuleList() = default ;
          PortRuleList(const PortRuleList &) = default ;
          PortRuleList(PortRuleList &&) = default ;
          PortRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PortRuleList() = default ;
          PortRuleList& operator=(const PortRuleList &) = default ;
          PortRuleList& operator=(PortRuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dstPortEnd_ == nullptr
        && this->dstPortStart_ == nullptr && this->id_ == nullptr && this->matchAction_ == nullptr && this->protocol_ == nullptr && this->seqNo_ == nullptr
        && this->srcPortEnd_ == nullptr && this->srcPortStart_ == nullptr; };
          // dstPortEnd Field Functions 
          bool hasDstPortEnd() const { return this->dstPortEnd_ != nullptr;};
          void deleteDstPortEnd() { this->dstPortEnd_ = nullptr;};
          inline int32_t getDstPortEnd() const { DARABONBA_PTR_GET_DEFAULT(dstPortEnd_, 0) };
          inline PortRuleList& setDstPortEnd(int32_t dstPortEnd) { DARABONBA_PTR_SET_VALUE(dstPortEnd_, dstPortEnd) };


          // dstPortStart Field Functions 
          bool hasDstPortStart() const { return this->dstPortStart_ != nullptr;};
          void deleteDstPortStart() { this->dstPortStart_ = nullptr;};
          inline int32_t getDstPortStart() const { DARABONBA_PTR_GET_DEFAULT(dstPortStart_, 0) };
          inline PortRuleList& setDstPortStart(int32_t dstPortStart) { DARABONBA_PTR_SET_VALUE(dstPortStart_, dstPortStart) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline PortRuleList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // matchAction Field Functions 
          bool hasMatchAction() const { return this->matchAction_ != nullptr;};
          void deleteMatchAction() { this->matchAction_ = nullptr;};
          inline string getMatchAction() const { DARABONBA_PTR_GET_DEFAULT(matchAction_, "") };
          inline PortRuleList& setMatchAction(string matchAction) { DARABONBA_PTR_SET_VALUE(matchAction_, matchAction) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline PortRuleList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          // seqNo Field Functions 
          bool hasSeqNo() const { return this->seqNo_ != nullptr;};
          void deleteSeqNo() { this->seqNo_ = nullptr;};
          inline int32_t getSeqNo() const { DARABONBA_PTR_GET_DEFAULT(seqNo_, 0) };
          inline PortRuleList& setSeqNo(int32_t seqNo) { DARABONBA_PTR_SET_VALUE(seqNo_, seqNo) };


          // srcPortEnd Field Functions 
          bool hasSrcPortEnd() const { return this->srcPortEnd_ != nullptr;};
          void deleteSrcPortEnd() { this->srcPortEnd_ = nullptr;};
          inline int32_t getSrcPortEnd() const { DARABONBA_PTR_GET_DEFAULT(srcPortEnd_, 0) };
          inline PortRuleList& setSrcPortEnd(int32_t srcPortEnd) { DARABONBA_PTR_SET_VALUE(srcPortEnd_, srcPortEnd) };


          // srcPortStart Field Functions 
          bool hasSrcPortStart() const { return this->srcPortStart_ != nullptr;};
          void deleteSrcPortStart() { this->srcPortStart_ = nullptr;};
          inline int32_t getSrcPortStart() const { DARABONBA_PTR_GET_DEFAULT(srcPortStart_, 0) };
          inline PortRuleList& setSrcPortStart(int32_t srcPortStart) { DARABONBA_PTR_SET_VALUE(srcPortStart_, srcPortStart) };


        protected:
          // The end of the destination port range. Valid values: **0** to **65535**.
          shared_ptr<int32_t> dstPortEnd_ {};
          // The start of the destination port range. Valid values: **0** to **65535**.
          shared_ptr<int32_t> dstPortStart_ {};
          // The ID of the rule.
          shared_ptr<string> id_ {};
          // The action triggered if the rule is matched. Valid value:
          // 
          // *   **drop**: The traffic is discarded.
          shared_ptr<string> matchAction_ {};
          // The protocol type. Valid values:
          // 
          // *   **tcp**
          // *   **udp**
          shared_ptr<string> protocol_ {};
          // The sequence number that indicates the order for the rule to take effect. The value is an integer.
          shared_ptr<int32_t> seqNo_ {};
          // The end of the source port range. Valid values: **0** to **65535**.
          shared_ptr<int32_t> srcPortEnd_ {};
          // The start of the source port range. Valid values: **0** to **65535**.
          shared_ptr<int32_t> srcPortStart_ {};
        };

        class L4RuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const L4RuleList& obj) { 
            DARABONBA_PTR_TO_JSON(Action, action_);
            DARABONBA_PTR_TO_JSON(ConditionList, conditionList_);
            DARABONBA_PTR_TO_JSON(Limited, limited_);
            DARABONBA_PTR_TO_JSON(Match, match_);
            DARABONBA_PTR_TO_JSON(Method, method_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Priority, priority_);
          };
          friend void from_json(const Darabonba::Json& j, L4RuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(Action, action_);
            DARABONBA_PTR_FROM_JSON(ConditionList, conditionList_);
            DARABONBA_PTR_FROM_JSON(Limited, limited_);
            DARABONBA_PTR_FROM_JSON(Match, match_);
            DARABONBA_PTR_FROM_JSON(Method, method_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Priority, priority_);
          };
          L4RuleList() = default ;
          L4RuleList(const L4RuleList &) = default ;
          L4RuleList(L4RuleList &&) = default ;
          L4RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~L4RuleList() = default ;
          L4RuleList& operator=(const L4RuleList &) = default ;
          L4RuleList& operator=(L4RuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConditionList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConditionList& obj) { 
              DARABONBA_PTR_TO_JSON(Arg, arg_);
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(Depth, depth_);
              DARABONBA_PTR_TO_JSON(Encode, encode_);
              DARABONBA_PTR_TO_JSON(Offset, offset_);
              DARABONBA_PTR_TO_JSON(Pattern, pattern_);
              DARABONBA_PTR_TO_JSON(Position, position_);
            };
            friend void from_json(const Darabonba::Json& j, ConditionList& obj) { 
              DARABONBA_PTR_FROM_JSON(Arg, arg_);
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(Depth, depth_);
              DARABONBA_PTR_FROM_JSON(Encode, encode_);
              DARABONBA_PTR_FROM_JSON(Offset, offset_);
              DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
              DARABONBA_PTR_FROM_JSON(Position, position_);
            };
            ConditionList() = default ;
            ConditionList(const ConditionList &) = default ;
            ConditionList(ConditionList &&) = default ;
            ConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConditionList() = default ;
            ConditionList& operator=(const ConditionList &) = default ;
            ConditionList& operator=(ConditionList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Offset : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Offset& obj) { 
                DARABONBA_PTR_TO_JSON(End, end_);
                DARABONBA_PTR_TO_JSON(Start, start_);
              };
              friend void from_json(const Darabonba::Json& j, Offset& obj) { 
                DARABONBA_PTR_FROM_JSON(End, end_);
                DARABONBA_PTR_FROM_JSON(Start, start_);
              };
              Offset() = default ;
              Offset(const Offset &) = default ;
              Offset(Offset &&) = default ;
              Offset(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Offset() = default ;
              Offset& operator=(const Offset &) = default ;
              Offset& operator=(Offset &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
              // end Field Functions 
              bool hasEnd() const { return this->end_ != nullptr;};
              void deleteEnd() { this->end_ = nullptr;};
              inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
              inline Offset& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


              // start Field Functions 
              bool hasStart() const { return this->start_ != nullptr;};
              void deleteStart() { this->start_ = nullptr;};
              inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
              inline Offset& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


            protected:
              shared_ptr<int32_t> end_ {};
              shared_ptr<int32_t> start_ {};
            };

            virtual bool empty() const override { return this->arg_ == nullptr
        && this->content_ == nullptr && this->depth_ == nullptr && this->encode_ == nullptr && this->offset_ == nullptr && this->pattern_ == nullptr
        && this->position_ == nullptr; };
            // arg Field Functions 
            bool hasArg() const { return this->arg_ != nullptr;};
            void deleteArg() { this->arg_ = nullptr;};
            inline string getArg() const { DARABONBA_PTR_GET_DEFAULT(arg_, "") };
            inline ConditionList& setArg(string arg) { DARABONBA_PTR_SET_VALUE(arg_, arg) };


            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline ConditionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // depth Field Functions 
            bool hasDepth() const { return this->depth_ != nullptr;};
            void deleteDepth() { this->depth_ = nullptr;};
            inline int32_t getDepth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
            inline ConditionList& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


            // encode Field Functions 
            bool hasEncode() const { return this->encode_ != nullptr;};
            void deleteEncode() { this->encode_ = nullptr;};
            inline string getEncode() const { DARABONBA_PTR_GET_DEFAULT(encode_, "") };
            inline ConditionList& setEncode(string encode) { DARABONBA_PTR_SET_VALUE(encode_, encode) };


            // offset Field Functions 
            bool hasOffset() const { return this->offset_ != nullptr;};
            void deleteOffset() { this->offset_ = nullptr;};
            inline const ConditionList::Offset & getOffset() const { DARABONBA_PTR_GET_CONST(offset_, ConditionList::Offset) };
            inline ConditionList::Offset getOffset() { DARABONBA_PTR_GET(offset_, ConditionList::Offset) };
            inline ConditionList& setOffset(const ConditionList::Offset & offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };
            inline ConditionList& setOffset(ConditionList::Offset && offset) { DARABONBA_PTR_SET_RVALUE(offset_, offset) };


            // pattern Field Functions 
            bool hasPattern() const { return this->pattern_ != nullptr;};
            void deletePattern() { this->pattern_ = nullptr;};
            inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
            inline ConditionList& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


            // position Field Functions 
            bool hasPosition() const { return this->position_ != nullptr;};
            void deletePosition() { this->position_ = nullptr;};
            inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
            inline ConditionList& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


          protected:
            // The term that is used for matching.
            // 
            // >  If Method is set to **char**, the value of this parameter must be ASCII strings. If Method is set to **hex**, the value of this parameter must be hexadecimal strings. Maximum length: 2,048.
            shared_ptr<string> arg_ {};
            shared_ptr<string> content_ {};
            // The number of bytes from the start position for matching. Valid values: **1** to **2048**.
            shared_ptr<int32_t> depth_ {};
            shared_ptr<string> encode_ {};
            shared_ptr<ConditionList::Offset> offset_ {};
            shared_ptr<string> pattern_ {};
            // The start position for matching. Valid values: **0** to **2047**.
            shared_ptr<int32_t> position_ {};
          };

          virtual bool empty() const override { return this->action_ == nullptr
        && this->conditionList_ == nullptr && this->limited_ == nullptr && this->match_ == nullptr && this->method_ == nullptr && this->name_ == nullptr
        && this->priority_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
          inline L4RuleList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


          // conditionList Field Functions 
          bool hasConditionList() const { return this->conditionList_ != nullptr;};
          void deleteConditionList() { this->conditionList_ = nullptr;};
          inline const vector<L4RuleList::ConditionList> & getConditionList() const { DARABONBA_PTR_GET_CONST(conditionList_, vector<L4RuleList::ConditionList>) };
          inline vector<L4RuleList::ConditionList> getConditionList() { DARABONBA_PTR_GET(conditionList_, vector<L4RuleList::ConditionList>) };
          inline L4RuleList& setConditionList(const vector<L4RuleList::ConditionList> & conditionList) { DARABONBA_PTR_SET_VALUE(conditionList_, conditionList) };
          inline L4RuleList& setConditionList(vector<L4RuleList::ConditionList> && conditionList) { DARABONBA_PTR_SET_RVALUE(conditionList_, conditionList) };


          // limited Field Functions 
          bool hasLimited() const { return this->limited_ != nullptr;};
          void deleteLimited() { this->limited_ = nullptr;};
          inline int32_t getLimited() const { DARABONBA_PTR_GET_DEFAULT(limited_, 0) };
          inline L4RuleList& setLimited(int32_t limited) { DARABONBA_PTR_SET_VALUE(limited_, limited) };


          // match Field Functions 
          bool hasMatch() const { return this->match_ != nullptr;};
          void deleteMatch() { this->match_ = nullptr;};
          inline string getMatch() const { DARABONBA_PTR_GET_DEFAULT(match_, "") };
          inline L4RuleList& setMatch(string match) { DARABONBA_PTR_SET_VALUE(match_, match) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline L4RuleList& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline L4RuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
          inline L4RuleList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        protected:
          // The action that is specified in the rule. Valid value:
          // 
          // *   **2**: The traffic is discarded.
          shared_ptr<string> action_ {};
          // The match conditions.
          shared_ptr<vector<L4RuleList::ConditionList>> conditionList_ {};
          // The minimum number of bytes in a session to trigger matching. Valid values: **0** to **2048**.
          shared_ptr<int32_t> limited_ {};
          // The condition based on which an action is performed. Valid values:
          // 
          // *   **0**: If the rule is matched, the action specified in the rule is performed.
          // *   **1**: If the rule is not matched, the action specified in the rule is performed.
          shared_ptr<string> match_ {};
          // The type of the rule. Valid values:
          // 
          // *   **char**: string match.
          // *   **hex**: hexadecimal string match.
          shared_ptr<string> method_ {};
          // The name of the rule.
          shared_ptr<string> name_ {};
          // The priority of the rule.
          shared_ptr<int32_t> priority_ {};
        };

        class FingerPrintRuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FingerPrintRuleList& obj) { 
            DARABONBA_PTR_TO_JSON(DstPortEnd, dstPortEnd_);
            DARABONBA_PTR_TO_JSON(DstPortStart, dstPortStart_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(MatchAction, matchAction_);
            DARABONBA_PTR_TO_JSON(MaxPktLen, maxPktLen_);
            DARABONBA_PTR_TO_JSON(MinPktLen, minPktLen_);
            DARABONBA_PTR_TO_JSON(Offset, offset_);
            DARABONBA_PTR_TO_JSON(PayloadBytes, payloadBytes_);
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
            DARABONBA_PTR_TO_JSON(RateValue, rateValue_);
            DARABONBA_PTR_TO_JSON(SeqNo, seqNo_);
            DARABONBA_PTR_TO_JSON(SrcPortEnd, srcPortEnd_);
            DARABONBA_PTR_TO_JSON(SrcPortStart, srcPortStart_);
          };
          friend void from_json(const Darabonba::Json& j, FingerPrintRuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(DstPortEnd, dstPortEnd_);
            DARABONBA_PTR_FROM_JSON(DstPortStart, dstPortStart_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(MatchAction, matchAction_);
            DARABONBA_PTR_FROM_JSON(MaxPktLen, maxPktLen_);
            DARABONBA_PTR_FROM_JSON(MinPktLen, minPktLen_);
            DARABONBA_PTR_FROM_JSON(Offset, offset_);
            DARABONBA_PTR_FROM_JSON(PayloadBytes, payloadBytes_);
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
            DARABONBA_PTR_FROM_JSON(RateValue, rateValue_);
            DARABONBA_PTR_FROM_JSON(SeqNo, seqNo_);
            DARABONBA_PTR_FROM_JSON(SrcPortEnd, srcPortEnd_);
            DARABONBA_PTR_FROM_JSON(SrcPortStart, srcPortStart_);
          };
          FingerPrintRuleList() = default ;
          FingerPrintRuleList(const FingerPrintRuleList &) = default ;
          FingerPrintRuleList(FingerPrintRuleList &&) = default ;
          FingerPrintRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FingerPrintRuleList() = default ;
          FingerPrintRuleList& operator=(const FingerPrintRuleList &) = default ;
          FingerPrintRuleList& operator=(FingerPrintRuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dstPortEnd_ == nullptr
        && this->dstPortStart_ == nullptr && this->id_ == nullptr && this->matchAction_ == nullptr && this->maxPktLen_ == nullptr && this->minPktLen_ == nullptr
        && this->offset_ == nullptr && this->payloadBytes_ == nullptr && this->protocol_ == nullptr && this->rateValue_ == nullptr && this->seqNo_ == nullptr
        && this->srcPortEnd_ == nullptr && this->srcPortStart_ == nullptr; };
          // dstPortEnd Field Functions 
          bool hasDstPortEnd() const { return this->dstPortEnd_ != nullptr;};
          void deleteDstPortEnd() { this->dstPortEnd_ = nullptr;};
          inline int32_t getDstPortEnd() const { DARABONBA_PTR_GET_DEFAULT(dstPortEnd_, 0) };
          inline FingerPrintRuleList& setDstPortEnd(int32_t dstPortEnd) { DARABONBA_PTR_SET_VALUE(dstPortEnd_, dstPortEnd) };


          // dstPortStart Field Functions 
          bool hasDstPortStart() const { return this->dstPortStart_ != nullptr;};
          void deleteDstPortStart() { this->dstPortStart_ = nullptr;};
          inline int32_t getDstPortStart() const { DARABONBA_PTR_GET_DEFAULT(dstPortStart_, 0) };
          inline FingerPrintRuleList& setDstPortStart(int32_t dstPortStart) { DARABONBA_PTR_SET_VALUE(dstPortStart_, dstPortStart) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline FingerPrintRuleList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // matchAction Field Functions 
          bool hasMatchAction() const { return this->matchAction_ != nullptr;};
          void deleteMatchAction() { this->matchAction_ = nullptr;};
          inline string getMatchAction() const { DARABONBA_PTR_GET_DEFAULT(matchAction_, "") };
          inline FingerPrintRuleList& setMatchAction(string matchAction) { DARABONBA_PTR_SET_VALUE(matchAction_, matchAction) };


          // maxPktLen Field Functions 
          bool hasMaxPktLen() const { return this->maxPktLen_ != nullptr;};
          void deleteMaxPktLen() { this->maxPktLen_ = nullptr;};
          inline int32_t getMaxPktLen() const { DARABONBA_PTR_GET_DEFAULT(maxPktLen_, 0) };
          inline FingerPrintRuleList& setMaxPktLen(int32_t maxPktLen) { DARABONBA_PTR_SET_VALUE(maxPktLen_, maxPktLen) };


          // minPktLen Field Functions 
          bool hasMinPktLen() const { return this->minPktLen_ != nullptr;};
          void deleteMinPktLen() { this->minPktLen_ = nullptr;};
          inline int32_t getMinPktLen() const { DARABONBA_PTR_GET_DEFAULT(minPktLen_, 0) };
          inline FingerPrintRuleList& setMinPktLen(int32_t minPktLen) { DARABONBA_PTR_SET_VALUE(minPktLen_, minPktLen) };


          // offset Field Functions 
          bool hasOffset() const { return this->offset_ != nullptr;};
          void deleteOffset() { this->offset_ = nullptr;};
          inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
          inline FingerPrintRuleList& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


          // payloadBytes Field Functions 
          bool hasPayloadBytes() const { return this->payloadBytes_ != nullptr;};
          void deletePayloadBytes() { this->payloadBytes_ = nullptr;};
          inline string getPayloadBytes() const { DARABONBA_PTR_GET_DEFAULT(payloadBytes_, "") };
          inline FingerPrintRuleList& setPayloadBytes(string payloadBytes) { DARABONBA_PTR_SET_VALUE(payloadBytes_, payloadBytes) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline FingerPrintRuleList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          // rateValue Field Functions 
          bool hasRateValue() const { return this->rateValue_ != nullptr;};
          void deleteRateValue() { this->rateValue_ = nullptr;};
          inline int32_t getRateValue() const { DARABONBA_PTR_GET_DEFAULT(rateValue_, 0) };
          inline FingerPrintRuleList& setRateValue(int32_t rateValue) { DARABONBA_PTR_SET_VALUE(rateValue_, rateValue) };


          // seqNo Field Functions 
          bool hasSeqNo() const { return this->seqNo_ != nullptr;};
          void deleteSeqNo() { this->seqNo_ = nullptr;};
          inline int32_t getSeqNo() const { DARABONBA_PTR_GET_DEFAULT(seqNo_, 0) };
          inline FingerPrintRuleList& setSeqNo(int32_t seqNo) { DARABONBA_PTR_SET_VALUE(seqNo_, seqNo) };


          // srcPortEnd Field Functions 
          bool hasSrcPortEnd() const { return this->srcPortEnd_ != nullptr;};
          void deleteSrcPortEnd() { this->srcPortEnd_ = nullptr;};
          inline int32_t getSrcPortEnd() const { DARABONBA_PTR_GET_DEFAULT(srcPortEnd_, 0) };
          inline FingerPrintRuleList& setSrcPortEnd(int32_t srcPortEnd) { DARABONBA_PTR_SET_VALUE(srcPortEnd_, srcPortEnd) };


          // srcPortStart Field Functions 
          bool hasSrcPortStart() const { return this->srcPortStart_ != nullptr;};
          void deleteSrcPortStart() { this->srcPortStart_ = nullptr;};
          inline int32_t getSrcPortStart() const { DARABONBA_PTR_GET_DEFAULT(srcPortStart_, 0) };
          inline FingerPrintRuleList& setSrcPortStart(int32_t srcPortStart) { DARABONBA_PTR_SET_VALUE(srcPortStart_, srcPortStart) };


        protected:
          // The end of the destination port range. Valid values: **0** to **65535**.
          shared_ptr<int32_t> dstPortEnd_ {};
          // The start of the destination port range. Valid values: **0** to **65535**.
          shared_ptr<int32_t> dstPortStart_ {};
          // The ID of the rule.
          shared_ptr<string> id_ {};
          // The action triggered if the rule is matched. Valid values:
          // 
          // *   **accept**: allows the traffic that matches the conditions in the byte-match filter rule.
          // *   **drop**: discards the traffic that matches the conditions in the byte-match filter rule.
          // *   **ip_rate**: limits rates on the source IP address whose traffic matches the conditions in the byte-match filter rule. The rate limit is specified by **RateValue**.
          // *   **session_rate**: limits the number of sessions from the source IP address whose traffic matches the conditions in the byte-match filter rule. The rate limit is specified by **RateValue**.
          shared_ptr<string> matchAction_ {};
          // The maximum packet length. Valid values: **1** to **1500**.
          shared_ptr<int32_t> maxPktLen_ {};
          // The minimum packet length. Valid values: **1** to **1500**.
          shared_ptr<int32_t> minPktLen_ {};
          // The offset. Valid values: **0** to **1500**.
          shared_ptr<int32_t> offset_ {};
          // The payload. The value is a hexadecimal string.
          shared_ptr<string> payloadBytes_ {};
          // The protocol type. Valid values:
          // 
          // *   **tcp**
          // *   **udp**
          shared_ptr<string> protocol_ {};
          // The rate limit. Valid values: **1** to **100000**.
          // 
          // >  This parameter is required when **MatchAction** is set to **ip_rate** or **session_rate**.
          shared_ptr<int32_t> rateValue_ {};
          // The sequence number that indicates the order for the rule to take effect. The value is an integer.
          shared_ptr<int32_t> seqNo_ {};
          // The end of the source port range. Valid values: **0** to **65535**.
          shared_ptr<int32_t> srcPortEnd_ {};
          // The start of the source port range. Valid values: **0** to **65535**.
          shared_ptr<int32_t> srcPortStart_ {};
        };

        virtual bool empty() const override { return this->blackIpListExpireAt_ == nullptr
        && this->enableDropIcmp_ == nullptr && this->enableIntelligence_ == nullptr && this->enableL4Defense_ == nullptr && this->fingerPrintRuleList_ == nullptr && this->intelligenceLevel_ == nullptr
        && this->l4RuleList_ == nullptr && this->portRuleList_ == nullptr && this->portVersion_ == nullptr && this->reflectBlockUdpPortList_ == nullptr && this->regionBlockCountryList_ == nullptr
        && this->regionBlockProvinceList_ == nullptr && this->sourceBlockList_ == nullptr && this->sourceLimit_ == nullptr && this->whitenGfbrNets_ == nullptr; };
        // blackIpListExpireAt Field Functions 
        bool hasBlackIpListExpireAt() const { return this->blackIpListExpireAt_ != nullptr;};
        void deleteBlackIpListExpireAt() { this->blackIpListExpireAt_ = nullptr;};
        inline int64_t getBlackIpListExpireAt() const { DARABONBA_PTR_GET_DEFAULT(blackIpListExpireAt_, 0L) };
        inline Content& setBlackIpListExpireAt(int64_t blackIpListExpireAt) { DARABONBA_PTR_SET_VALUE(blackIpListExpireAt_, blackIpListExpireAt) };


        // enableDropIcmp Field Functions 
        bool hasEnableDropIcmp() const { return this->enableDropIcmp_ != nullptr;};
        void deleteEnableDropIcmp() { this->enableDropIcmp_ = nullptr;};
        inline bool getEnableDropIcmp() const { DARABONBA_PTR_GET_DEFAULT(enableDropIcmp_, false) };
        inline Content& setEnableDropIcmp(bool enableDropIcmp) { DARABONBA_PTR_SET_VALUE(enableDropIcmp_, enableDropIcmp) };


        // enableIntelligence Field Functions 
        bool hasEnableIntelligence() const { return this->enableIntelligence_ != nullptr;};
        void deleteEnableIntelligence() { this->enableIntelligence_ = nullptr;};
        inline bool getEnableIntelligence() const { DARABONBA_PTR_GET_DEFAULT(enableIntelligence_, false) };
        inline Content& setEnableIntelligence(bool enableIntelligence) { DARABONBA_PTR_SET_VALUE(enableIntelligence_, enableIntelligence) };


        // enableL4Defense Field Functions 
        bool hasEnableL4Defense() const { return this->enableL4Defense_ != nullptr;};
        void deleteEnableL4Defense() { this->enableL4Defense_ = nullptr;};
        inline bool getEnableL4Defense() const { DARABONBA_PTR_GET_DEFAULT(enableL4Defense_, false) };
        inline Content& setEnableL4Defense(bool enableL4Defense) { DARABONBA_PTR_SET_VALUE(enableL4Defense_, enableL4Defense) };


        // fingerPrintRuleList Field Functions 
        bool hasFingerPrintRuleList() const { return this->fingerPrintRuleList_ != nullptr;};
        void deleteFingerPrintRuleList() { this->fingerPrintRuleList_ = nullptr;};
        inline const vector<Content::FingerPrintRuleList> & getFingerPrintRuleList() const { DARABONBA_PTR_GET_CONST(fingerPrintRuleList_, vector<Content::FingerPrintRuleList>) };
        inline vector<Content::FingerPrintRuleList> getFingerPrintRuleList() { DARABONBA_PTR_GET(fingerPrintRuleList_, vector<Content::FingerPrintRuleList>) };
        inline Content& setFingerPrintRuleList(const vector<Content::FingerPrintRuleList> & fingerPrintRuleList) { DARABONBA_PTR_SET_VALUE(fingerPrintRuleList_, fingerPrintRuleList) };
        inline Content& setFingerPrintRuleList(vector<Content::FingerPrintRuleList> && fingerPrintRuleList) { DARABONBA_PTR_SET_RVALUE(fingerPrintRuleList_, fingerPrintRuleList) };


        // intelligenceLevel Field Functions 
        bool hasIntelligenceLevel() const { return this->intelligenceLevel_ != nullptr;};
        void deleteIntelligenceLevel() { this->intelligenceLevel_ = nullptr;};
        inline string getIntelligenceLevel() const { DARABONBA_PTR_GET_DEFAULT(intelligenceLevel_, "") };
        inline Content& setIntelligenceLevel(string intelligenceLevel) { DARABONBA_PTR_SET_VALUE(intelligenceLevel_, intelligenceLevel) };


        // l4RuleList Field Functions 
        bool hasL4RuleList() const { return this->l4RuleList_ != nullptr;};
        void deleteL4RuleList() { this->l4RuleList_ = nullptr;};
        inline const vector<Content::L4RuleList> & getL4RuleList() const { DARABONBA_PTR_GET_CONST(l4RuleList_, vector<Content::L4RuleList>) };
        inline vector<Content::L4RuleList> getL4RuleList() { DARABONBA_PTR_GET(l4RuleList_, vector<Content::L4RuleList>) };
        inline Content& setL4RuleList(const vector<Content::L4RuleList> & l4RuleList) { DARABONBA_PTR_SET_VALUE(l4RuleList_, l4RuleList) };
        inline Content& setL4RuleList(vector<Content::L4RuleList> && l4RuleList) { DARABONBA_PTR_SET_RVALUE(l4RuleList_, l4RuleList) };


        // portRuleList Field Functions 
        bool hasPortRuleList() const { return this->portRuleList_ != nullptr;};
        void deletePortRuleList() { this->portRuleList_ = nullptr;};
        inline const vector<Content::PortRuleList> & getPortRuleList() const { DARABONBA_PTR_GET_CONST(portRuleList_, vector<Content::PortRuleList>) };
        inline vector<Content::PortRuleList> getPortRuleList() { DARABONBA_PTR_GET(portRuleList_, vector<Content::PortRuleList>) };
        inline Content& setPortRuleList(const vector<Content::PortRuleList> & portRuleList) { DARABONBA_PTR_SET_VALUE(portRuleList_, portRuleList) };
        inline Content& setPortRuleList(vector<Content::PortRuleList> && portRuleList) { DARABONBA_PTR_SET_RVALUE(portRuleList_, portRuleList) };


        // portVersion Field Functions 
        bool hasPortVersion() const { return this->portVersion_ != nullptr;};
        void deletePortVersion() { this->portVersion_ = nullptr;};
        inline string getPortVersion() const { DARABONBA_PTR_GET_DEFAULT(portVersion_, "") };
        inline Content& setPortVersion(string portVersion) { DARABONBA_PTR_SET_VALUE(portVersion_, portVersion) };


        // reflectBlockUdpPortList Field Functions 
        bool hasReflectBlockUdpPortList() const { return this->reflectBlockUdpPortList_ != nullptr;};
        void deleteReflectBlockUdpPortList() { this->reflectBlockUdpPortList_ = nullptr;};
        inline const vector<int32_t> & getReflectBlockUdpPortList() const { DARABONBA_PTR_GET_CONST(reflectBlockUdpPortList_, vector<int32_t>) };
        inline vector<int32_t> getReflectBlockUdpPortList() { DARABONBA_PTR_GET(reflectBlockUdpPortList_, vector<int32_t>) };
        inline Content& setReflectBlockUdpPortList(const vector<int32_t> & reflectBlockUdpPortList) { DARABONBA_PTR_SET_VALUE(reflectBlockUdpPortList_, reflectBlockUdpPortList) };
        inline Content& setReflectBlockUdpPortList(vector<int32_t> && reflectBlockUdpPortList) { DARABONBA_PTR_SET_RVALUE(reflectBlockUdpPortList_, reflectBlockUdpPortList) };


        // regionBlockCountryList Field Functions 
        bool hasRegionBlockCountryList() const { return this->regionBlockCountryList_ != nullptr;};
        void deleteRegionBlockCountryList() { this->regionBlockCountryList_ = nullptr;};
        inline const vector<int32_t> & getRegionBlockCountryList() const { DARABONBA_PTR_GET_CONST(regionBlockCountryList_, vector<int32_t>) };
        inline vector<int32_t> getRegionBlockCountryList() { DARABONBA_PTR_GET(regionBlockCountryList_, vector<int32_t>) };
        inline Content& setRegionBlockCountryList(const vector<int32_t> & regionBlockCountryList) { DARABONBA_PTR_SET_VALUE(regionBlockCountryList_, regionBlockCountryList) };
        inline Content& setRegionBlockCountryList(vector<int32_t> && regionBlockCountryList) { DARABONBA_PTR_SET_RVALUE(regionBlockCountryList_, regionBlockCountryList) };


        // regionBlockProvinceList Field Functions 
        bool hasRegionBlockProvinceList() const { return this->regionBlockProvinceList_ != nullptr;};
        void deleteRegionBlockProvinceList() { this->regionBlockProvinceList_ = nullptr;};
        inline const vector<int32_t> & getRegionBlockProvinceList() const { DARABONBA_PTR_GET_CONST(regionBlockProvinceList_, vector<int32_t>) };
        inline vector<int32_t> getRegionBlockProvinceList() { DARABONBA_PTR_GET(regionBlockProvinceList_, vector<int32_t>) };
        inline Content& setRegionBlockProvinceList(const vector<int32_t> & regionBlockProvinceList) { DARABONBA_PTR_SET_VALUE(regionBlockProvinceList_, regionBlockProvinceList) };
        inline Content& setRegionBlockProvinceList(vector<int32_t> && regionBlockProvinceList) { DARABONBA_PTR_SET_RVALUE(regionBlockProvinceList_, regionBlockProvinceList) };


        // sourceBlockList Field Functions 
        bool hasSourceBlockList() const { return this->sourceBlockList_ != nullptr;};
        void deleteSourceBlockList() { this->sourceBlockList_ = nullptr;};
        inline const vector<Content::SourceBlockList> & getSourceBlockList() const { DARABONBA_PTR_GET_CONST(sourceBlockList_, vector<Content::SourceBlockList>) };
        inline vector<Content::SourceBlockList> getSourceBlockList() { DARABONBA_PTR_GET(sourceBlockList_, vector<Content::SourceBlockList>) };
        inline Content& setSourceBlockList(const vector<Content::SourceBlockList> & sourceBlockList) { DARABONBA_PTR_SET_VALUE(sourceBlockList_, sourceBlockList) };
        inline Content& setSourceBlockList(vector<Content::SourceBlockList> && sourceBlockList) { DARABONBA_PTR_SET_RVALUE(sourceBlockList_, sourceBlockList) };


        // sourceLimit Field Functions 
        bool hasSourceLimit() const { return this->sourceLimit_ != nullptr;};
        void deleteSourceLimit() { this->sourceLimit_ = nullptr;};
        inline const Content::SourceLimit & getSourceLimit() const { DARABONBA_PTR_GET_CONST(sourceLimit_, Content::SourceLimit) };
        inline Content::SourceLimit getSourceLimit() { DARABONBA_PTR_GET(sourceLimit_, Content::SourceLimit) };
        inline Content& setSourceLimit(const Content::SourceLimit & sourceLimit) { DARABONBA_PTR_SET_VALUE(sourceLimit_, sourceLimit) };
        inline Content& setSourceLimit(Content::SourceLimit && sourceLimit) { DARABONBA_PTR_SET_RVALUE(sourceLimit_, sourceLimit) };


        // whitenGfbrNets Field Functions 
        bool hasWhitenGfbrNets() const { return this->whitenGfbrNets_ != nullptr;};
        void deleteWhitenGfbrNets() { this->whitenGfbrNets_ = nullptr;};
        inline bool getWhitenGfbrNets() const { DARABONBA_PTR_GET_DEFAULT(whitenGfbrNets_, false) };
        inline Content& setWhitenGfbrNets(bool whitenGfbrNets) { DARABONBA_PTR_SET_VALUE(whitenGfbrNets_, whitenGfbrNets) };


      protected:
        // The validity period of the IP address blacklist. The value is a UNIX timestamp.
        shared_ptr<int64_t> blackIpListExpireAt_ {};
        // Indicates whether ICMP blocking is enabled.
        shared_ptr<bool> enableDropIcmp_ {};
        // Indicates whether intelligent protection is enabled.
        shared_ptr<bool> enableIntelligence_ {};
        // Indicates whether port-specific mitigation is enabled.
        shared_ptr<bool> enableL4Defense_ {};
        // The byte-match filter rules.
        shared_ptr<vector<Content::FingerPrintRuleList>> fingerPrintRuleList_ {};
        // The level of intelligent protection. Valid values:
        // 
        // *   **default**: normal.
        // *   **hard**: strict.
        // *   **weak**: loose.
        shared_ptr<string> intelligenceLevel_ {};
        // The port-specific mitigation rules.
        shared_ptr<vector<Content::L4RuleList>> l4RuleList_ {};
        // The port blocking rules.
        shared_ptr<vector<Content::PortRuleList>> portRuleList_ {};
        shared_ptr<string> portVersion_ {};
        // The ports whose traffic is filtered out by the filtering policies for UDP reflection attacks.
        shared_ptr<vector<int32_t>> reflectBlockUdpPortList_ {};
        // The countries in the location blacklist.
        shared_ptr<vector<int32_t>> regionBlockCountryList_ {};
        // The provinces in the location blacklist.
        shared_ptr<vector<int32_t>> regionBlockProvinceList_ {};
        // The source IP addresses that are added to the blacklist.
        shared_ptr<vector<Content::SourceBlockList>> sourceBlockList_ {};
        // The settings for source rate limiting.
        shared_ptr<Content::SourceLimit> sourceLimit_ {};
        // Indicates whether back-to-origin CIDR blocks of Anti-DDoS Proxy are added to the whitelist.
        shared_ptr<bool> whitenGfbrNets_ {};
      };

      virtual bool empty() const override { return this->attachedCount_ == nullptr
        && this->content_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->remark_ == nullptr && this->type_ == nullptr; };
      // attachedCount Field Functions 
      bool hasAttachedCount() const { return this->attachedCount_ != nullptr;};
      void deleteAttachedCount() { this->attachedCount_ = nullptr;};
      inline int32_t getAttachedCount() const { DARABONBA_PTR_GET_DEFAULT(attachedCount_, 0) };
      inline PolicyList& setAttachedCount(int32_t attachedCount) { DARABONBA_PTR_SET_VALUE(attachedCount_, attachedCount) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const PolicyList::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, PolicyList::Content) };
      inline PolicyList::Content getContent() { DARABONBA_PTR_GET(content_, PolicyList::Content) };
      inline PolicyList& setContent(const PolicyList::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline PolicyList& setContent(PolicyList::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline PolicyList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PolicyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline PolicyList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PolicyList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of protected objects that are added to the policy.
      shared_ptr<int32_t> attachedCount_ {};
      // The content of the policy.
      shared_ptr<PolicyList::Content> content_ {};
      // The ID of the policy.
      shared_ptr<string> id_ {};
      // The name of the policy.
      shared_ptr<string> name_ {};
      // The remarks of the policy.
      shared_ptr<string> remark_ {};
      // The type of the policy. Valid values:
      // 
      // *   **default**: the default mitigation policy.
      // *   **l3**: IP-specific mitigation policies.
      // *   **l4**: port-specific mitigation policies.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->policyList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // policyList Field Functions 
    bool hasPolicyList() const { return this->policyList_ != nullptr;};
    void deletePolicyList() { this->policyList_ = nullptr;};
    inline const vector<ListPolicyResponseBody::PolicyList> & getPolicyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<ListPolicyResponseBody::PolicyList>) };
    inline vector<ListPolicyResponseBody::PolicyList> getPolicyList() { DARABONBA_PTR_GET(policyList_, vector<ListPolicyResponseBody::PolicyList>) };
    inline ListPolicyResponseBody& setPolicyList(const vector<ListPolicyResponseBody::PolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
    inline ListPolicyResponseBody& setPolicyList(vector<ListPolicyResponseBody::PolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListPolicyResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The policies.
    shared_ptr<vector<ListPolicyResponseBody::PolicyList>> policyList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of policies.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
