// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliDomain, aliDomain_);
      DARABONBA_PTR_TO_JSON(AvailableTtls, availableTtls_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainLoggingSwitchStatus, domainLoggingSwitchStatus_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InBlackHole, inBlackHole_);
      DARABONBA_PTR_TO_JSON(InClean, inClean_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LineType, lineType_);
      DARABONBA_PTR_TO_JSON(MinTtl, minTtl_);
      DARABONBA_PTR_TO_JSON(PunyCode, punyCode_);
      DARABONBA_PTR_TO_JSON(RecordLineTreeJson, recordLineTreeJson_);
      DARABONBA_PTR_TO_JSON(RecordLines, recordLines_);
      DARABONBA_PTR_TO_JSON(RegionLines, regionLines_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveDns, slaveDns_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliDomain, aliDomain_);
      DARABONBA_PTR_FROM_JSON(AvailableTtls, availableTtls_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainLoggingSwitchStatus, domainLoggingSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InBlackHole, inBlackHole_);
      DARABONBA_PTR_FROM_JSON(InClean, inClean_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LineType, lineType_);
      DARABONBA_PTR_FROM_JSON(MinTtl, minTtl_);
      DARABONBA_PTR_FROM_JSON(PunyCode, punyCode_);
      DARABONBA_PTR_FROM_JSON(RecordLineTreeJson, recordLineTreeJson_);
      DARABONBA_PTR_FROM_JSON(RecordLines, recordLines_);
      DARABONBA_PTR_FROM_JSON(RegionLines, regionLines_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveDns, slaveDns_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    DescribeDomainInfoResponseBody() = default ;
    DescribeDomainInfoResponseBody(const DescribeDomainInfoResponseBody &) = default ;
    DescribeDomainInfoResponseBody(DescribeDomainInfoResponseBody &&) = default ;
    DescribeDomainInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainInfoResponseBody() = default ;
    DescribeDomainInfoResponseBody& operator=(const DescribeDomainInfoResponseBody &) = default ;
    DescribeDomainInfoResponseBody& operator=(DescribeDomainInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordLines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordLines& obj) { 
        DARABONBA_PTR_TO_JSON(RecordLine, recordLine_);
      };
      friend void from_json(const Darabonba::Json& j, RecordLines& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordLine, recordLine_);
      };
      RecordLines() = default ;
      RecordLines(const RecordLines &) = default ;
      RecordLines(RecordLines &&) = default ;
      RecordLines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordLines() = default ;
      RecordLines& operator=(const RecordLines &) = default ;
      RecordLines& operator=(RecordLines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordLine : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordLine& obj) { 
          DARABONBA_PTR_TO_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
          DARABONBA_PTR_TO_JSON(LineDisplayName, lineDisplayName_);
          DARABONBA_PTR_TO_JSON(LineName, lineName_);
        };
        friend void from_json(const Darabonba::Json& j, RecordLine& obj) { 
          DARABONBA_PTR_FROM_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
          DARABONBA_PTR_FROM_JSON(LineDisplayName, lineDisplayName_);
          DARABONBA_PTR_FROM_JSON(LineName, lineName_);
        };
        RecordLine() = default ;
        RecordLine(const RecordLine &) = default ;
        RecordLine(RecordLine &&) = default ;
        RecordLine(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordLine() = default ;
        RecordLine& operator=(const RecordLine &) = default ;
        RecordLine& operator=(RecordLine &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fatherCode_ == nullptr
        && this->lineCode_ == nullptr && this->lineDisplayName_ == nullptr && this->lineName_ == nullptr; };
        // fatherCode Field Functions 
        bool hasFatherCode() const { return this->fatherCode_ != nullptr;};
        void deleteFatherCode() { this->fatherCode_ = nullptr;};
        inline string getFatherCode() const { DARABONBA_PTR_GET_DEFAULT(fatherCode_, "") };
        inline RecordLine& setFatherCode(string fatherCode) { DARABONBA_PTR_SET_VALUE(fatherCode_, fatherCode) };


        // lineCode Field Functions 
        bool hasLineCode() const { return this->lineCode_ != nullptr;};
        void deleteLineCode() { this->lineCode_ = nullptr;};
        inline string getLineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
        inline RecordLine& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


        // lineDisplayName Field Functions 
        bool hasLineDisplayName() const { return this->lineDisplayName_ != nullptr;};
        void deleteLineDisplayName() { this->lineDisplayName_ = nullptr;};
        inline string getLineDisplayName() const { DARABONBA_PTR_GET_DEFAULT(lineDisplayName_, "") };
        inline RecordLine& setLineDisplayName(string lineDisplayName) { DARABONBA_PTR_SET_VALUE(lineDisplayName_, lineDisplayName) };


        // lineName Field Functions 
        bool hasLineName() const { return this->lineName_ != nullptr;};
        void deleteLineName() { this->lineName_ = nullptr;};
        inline string getLineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
        inline RecordLine& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


      protected:
        // The code of the parent line. This parameter is not returned if the line has no parent line.
        shared_ptr<string> fatherCode_ {};
        // The code of the line.
        shared_ptr<string> lineCode_ {};
        // The name of the parent line.
        shared_ptr<string> lineDisplayName_ {};
        // The name of the line.
        shared_ptr<string> lineName_ {};
      };

      virtual bool empty() const override { return this->recordLine_ == nullptr; };
      // recordLine Field Functions 
      bool hasRecordLine() const { return this->recordLine_ != nullptr;};
      void deleteRecordLine() { this->recordLine_ = nullptr;};
      inline const vector<RecordLines::RecordLine> & getRecordLine() const { DARABONBA_PTR_GET_CONST(recordLine_, vector<RecordLines::RecordLine>) };
      inline vector<RecordLines::RecordLine> getRecordLine() { DARABONBA_PTR_GET(recordLine_, vector<RecordLines::RecordLine>) };
      inline RecordLines& setRecordLine(const vector<RecordLines::RecordLine> & recordLine) { DARABONBA_PTR_SET_VALUE(recordLine_, recordLine) };
      inline RecordLines& setRecordLine(vector<RecordLines::RecordLine> && recordLine) { DARABONBA_PTR_SET_RVALUE(recordLine_, recordLine) };


    protected:
      shared_ptr<vector<RecordLines::RecordLine>> recordLine_ {};
    };

    class DnsServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnsServers& obj) { 
        DARABONBA_PTR_TO_JSON(DnsServer, dnsServer_);
      };
      friend void from_json(const Darabonba::Json& j, DnsServers& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsServer, dnsServer_);
      };
      DnsServers() = default ;
      DnsServers(const DnsServers &) = default ;
      DnsServers(DnsServers &&) = default ;
      DnsServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnsServers() = default ;
      DnsServers& operator=(const DnsServers &) = default ;
      DnsServers& operator=(DnsServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dnsServer_ == nullptr; };
      // dnsServer Field Functions 
      bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
      void deleteDnsServer() { this->dnsServer_ = nullptr;};
      inline const vector<string> & getDnsServer() const { DARABONBA_PTR_GET_CONST(dnsServer_, vector<string>) };
      inline vector<string> getDnsServer() { DARABONBA_PTR_GET(dnsServer_, vector<string>) };
      inline DnsServers& setDnsServer(const vector<string> & dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };
      inline DnsServers& setDnsServer(vector<string> && dnsServer) { DARABONBA_PTR_SET_RVALUE(dnsServer_, dnsServer) };


    protected:
      shared_ptr<vector<string>> dnsServer_ {};
    };

    class AvailableTtls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableTtls& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableTtl, availableTtl_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableTtls& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableTtl, availableTtl_);
      };
      AvailableTtls() = default ;
      AvailableTtls(const AvailableTtls &) = default ;
      AvailableTtls(AvailableTtls &&) = default ;
      AvailableTtls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableTtls() = default ;
      AvailableTtls& operator=(const AvailableTtls &) = default ;
      AvailableTtls& operator=(AvailableTtls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->availableTtl_ == nullptr; };
      // availableTtl Field Functions 
      bool hasAvailableTtl() const { return this->availableTtl_ != nullptr;};
      void deleteAvailableTtl() { this->availableTtl_ = nullptr;};
      inline const vector<string> & getAvailableTtl() const { DARABONBA_PTR_GET_CONST(availableTtl_, vector<string>) };
      inline vector<string> getAvailableTtl() { DARABONBA_PTR_GET(availableTtl_, vector<string>) };
      inline AvailableTtls& setAvailableTtl(const vector<string> & availableTtl) { DARABONBA_PTR_SET_VALUE(availableTtl_, availableTtl) };
      inline AvailableTtls& setAvailableTtl(vector<string> && availableTtl) { DARABONBA_PTR_SET_RVALUE(availableTtl_, availableTtl) };


    protected:
      shared_ptr<vector<string>> availableTtl_ {};
    };

    virtual bool empty() const override { return this->aliDomain_ == nullptr
        && this->availableTtls_ == nullptr && this->createTime_ == nullptr && this->dnsServers_ == nullptr && this->domainId_ == nullptr && this->domainLoggingSwitchStatus_ == nullptr
        && this->domainName_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->inBlackHole_ == nullptr && this->inClean_ == nullptr
        && this->instanceId_ == nullptr && this->lineType_ == nullptr && this->minTtl_ == nullptr && this->punyCode_ == nullptr && this->recordLineTreeJson_ == nullptr
        && this->recordLines_ == nullptr && this->regionLines_ == nullptr && this->remark_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->slaveDns_ == nullptr && this->subDomain_ == nullptr && this->versionCode_ == nullptr && this->versionName_ == nullptr; };
    // aliDomain Field Functions 
    bool hasAliDomain() const { return this->aliDomain_ != nullptr;};
    void deleteAliDomain() { this->aliDomain_ = nullptr;};
    inline bool getAliDomain() const { DARABONBA_PTR_GET_DEFAULT(aliDomain_, false) };
    inline DescribeDomainInfoResponseBody& setAliDomain(bool aliDomain) { DARABONBA_PTR_SET_VALUE(aliDomain_, aliDomain) };


    // availableTtls Field Functions 
    bool hasAvailableTtls() const { return this->availableTtls_ != nullptr;};
    void deleteAvailableTtls() { this->availableTtls_ = nullptr;};
    inline const DescribeDomainInfoResponseBody::AvailableTtls & getAvailableTtls() const { DARABONBA_PTR_GET_CONST(availableTtls_, DescribeDomainInfoResponseBody::AvailableTtls) };
    inline DescribeDomainInfoResponseBody::AvailableTtls getAvailableTtls() { DARABONBA_PTR_GET(availableTtls_, DescribeDomainInfoResponseBody::AvailableTtls) };
    inline DescribeDomainInfoResponseBody& setAvailableTtls(const DescribeDomainInfoResponseBody::AvailableTtls & availableTtls) { DARABONBA_PTR_SET_VALUE(availableTtls_, availableTtls) };
    inline DescribeDomainInfoResponseBody& setAvailableTtls(DescribeDomainInfoResponseBody::AvailableTtls && availableTtls) { DARABONBA_PTR_SET_RVALUE(availableTtls_, availableTtls) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDomainInfoResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const DescribeDomainInfoResponseBody::DnsServers & getDnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, DescribeDomainInfoResponseBody::DnsServers) };
    inline DescribeDomainInfoResponseBody::DnsServers getDnsServers() { DARABONBA_PTR_GET(dnsServers_, DescribeDomainInfoResponseBody::DnsServers) };
    inline DescribeDomainInfoResponseBody& setDnsServers(const DescribeDomainInfoResponseBody::DnsServers & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline DescribeDomainInfoResponseBody& setDnsServers(DescribeDomainInfoResponseBody::DnsServers && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescribeDomainInfoResponseBody& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainLoggingSwitchStatus Field Functions 
    bool hasDomainLoggingSwitchStatus() const { return this->domainLoggingSwitchStatus_ != nullptr;};
    void deleteDomainLoggingSwitchStatus() { this->domainLoggingSwitchStatus_ = nullptr;};
    inline string getDomainLoggingSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLoggingSwitchStatus_, "") };
    inline DescribeDomainInfoResponseBody& setDomainLoggingSwitchStatus(string domainLoggingSwitchStatus) { DARABONBA_PTR_SET_VALUE(domainLoggingSwitchStatus_, domainLoggingSwitchStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainInfoResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDomainInfoResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDomainInfoResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // inBlackHole Field Functions 
    bool hasInBlackHole() const { return this->inBlackHole_ != nullptr;};
    void deleteInBlackHole() { this->inBlackHole_ = nullptr;};
    inline bool getInBlackHole() const { DARABONBA_PTR_GET_DEFAULT(inBlackHole_, false) };
    inline DescribeDomainInfoResponseBody& setInBlackHole(bool inBlackHole) { DARABONBA_PTR_SET_VALUE(inBlackHole_, inBlackHole) };


    // inClean Field Functions 
    bool hasInClean() const { return this->inClean_ != nullptr;};
    void deleteInClean() { this->inClean_ = nullptr;};
    inline bool getInClean() const { DARABONBA_PTR_GET_DEFAULT(inClean_, false) };
    inline DescribeDomainInfoResponseBody& setInClean(bool inClean) { DARABONBA_PTR_SET_VALUE(inClean_, inClean) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDomainInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lineType Field Functions 
    bool hasLineType() const { return this->lineType_ != nullptr;};
    void deleteLineType() { this->lineType_ = nullptr;};
    inline string getLineType() const { DARABONBA_PTR_GET_DEFAULT(lineType_, "") };
    inline DescribeDomainInfoResponseBody& setLineType(string lineType) { DARABONBA_PTR_SET_VALUE(lineType_, lineType) };


    // minTtl Field Functions 
    bool hasMinTtl() const { return this->minTtl_ != nullptr;};
    void deleteMinTtl() { this->minTtl_ = nullptr;};
    inline int64_t getMinTtl() const { DARABONBA_PTR_GET_DEFAULT(minTtl_, 0L) };
    inline DescribeDomainInfoResponseBody& setMinTtl(int64_t minTtl) { DARABONBA_PTR_SET_VALUE(minTtl_, minTtl) };


    // punyCode Field Functions 
    bool hasPunyCode() const { return this->punyCode_ != nullptr;};
    void deletePunyCode() { this->punyCode_ = nullptr;};
    inline string getPunyCode() const { DARABONBA_PTR_GET_DEFAULT(punyCode_, "") };
    inline DescribeDomainInfoResponseBody& setPunyCode(string punyCode) { DARABONBA_PTR_SET_VALUE(punyCode_, punyCode) };


    // recordLineTreeJson Field Functions 
    bool hasRecordLineTreeJson() const { return this->recordLineTreeJson_ != nullptr;};
    void deleteRecordLineTreeJson() { this->recordLineTreeJson_ = nullptr;};
    inline string getRecordLineTreeJson() const { DARABONBA_PTR_GET_DEFAULT(recordLineTreeJson_, "") };
    inline DescribeDomainInfoResponseBody& setRecordLineTreeJson(string recordLineTreeJson) { DARABONBA_PTR_SET_VALUE(recordLineTreeJson_, recordLineTreeJson) };


    // recordLines Field Functions 
    bool hasRecordLines() const { return this->recordLines_ != nullptr;};
    void deleteRecordLines() { this->recordLines_ = nullptr;};
    inline const DescribeDomainInfoResponseBody::RecordLines & getRecordLines() const { DARABONBA_PTR_GET_CONST(recordLines_, DescribeDomainInfoResponseBody::RecordLines) };
    inline DescribeDomainInfoResponseBody::RecordLines getRecordLines() { DARABONBA_PTR_GET(recordLines_, DescribeDomainInfoResponseBody::RecordLines) };
    inline DescribeDomainInfoResponseBody& setRecordLines(const DescribeDomainInfoResponseBody::RecordLines & recordLines) { DARABONBA_PTR_SET_VALUE(recordLines_, recordLines) };
    inline DescribeDomainInfoResponseBody& setRecordLines(DescribeDomainInfoResponseBody::RecordLines && recordLines) { DARABONBA_PTR_SET_RVALUE(recordLines_, recordLines) };


    // regionLines Field Functions 
    bool hasRegionLines() const { return this->regionLines_ != nullptr;};
    void deleteRegionLines() { this->regionLines_ = nullptr;};
    inline bool getRegionLines() const { DARABONBA_PTR_GET_DEFAULT(regionLines_, false) };
    inline DescribeDomainInfoResponseBody& setRegionLines(bool regionLines) { DARABONBA_PTR_SET_VALUE(regionLines_, regionLines) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeDomainInfoResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDomainInfoResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDns Field Functions 
    bool hasSlaveDns() const { return this->slaveDns_ != nullptr;};
    void deleteSlaveDns() { this->slaveDns_ = nullptr;};
    inline bool getSlaveDns() const { DARABONBA_PTR_GET_DEFAULT(slaveDns_, false) };
    inline DescribeDomainInfoResponseBody& setSlaveDns(bool slaveDns) { DARABONBA_PTR_SET_VALUE(slaveDns_, slaveDns) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline bool getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, false) };
    inline DescribeDomainInfoResponseBody& setSubDomain(bool subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeDomainInfoResponseBody& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline DescribeDomainInfoResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // Indicates whether the domain name was registered in Alibaba Cloud.
    shared_ptr<bool> aliDomain_ {};
    // The available time to live (TTL) values that can be configured for the domain name. Available TTL values are not returned by default. If you want to query such information, set NeedDetailAttributes to true.
    shared_ptr<DescribeDomainInfoResponseBody::AvailableTtls> availableTtls_ {};
    // The time when the domain name was created.
    shared_ptr<string> createTime_ {};
    // The DNS servers that are used to resolve the domain name.
    shared_ptr<DescribeDomainInfoResponseBody::DnsServers> dnsServers_ {};
    // The ID of the domain name.
    shared_ptr<string> domainId_ {};
    // Indicates whether the DNS traffic analysis feature is enabled. Valid values:
    shared_ptr<string> domainLoggingSwitchStatus_ {};
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The ID of the domain name group.
    shared_ptr<string> groupId_ {};
    // The name of the domain name group.
    shared_ptr<string> groupName_ {};
    // Indicates whether blackhole filtering was triggered.
    shared_ptr<bool> inBlackHole_ {};
    // Indicates whether traffic scrubbing was in progress.
    shared_ptr<bool> inClean_ {};
    // The ID of the Alibaba Cloud DNS instance.
    shared_ptr<string> instanceId_ {};
    // The type of the DNS request line.
    shared_ptr<string> lineType_ {};
    // The minimum TTL value.
    shared_ptr<int64_t> minTtl_ {};
    // The Punycode for the domain name. This parameter is returned only for Chinese domain names.
    shared_ptr<string> punyCode_ {};
    // The tree-structure DNS request lines.
    shared_ptr<string> recordLineTreeJson_ {};
    // The DNS request lines.
    shared_ptr<DescribeDomainInfoResponseBody::RecordLines> recordLines_ {};
    // Indicates whether the DNS request lines are regional lines.
    shared_ptr<bool> regionLines_ {};
    // The description.
    shared_ptr<string> remark_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // Indicates whether secondary DNS is supported.
    shared_ptr<bool> slaveDns_ {};
    // Indicates whether the queried domain name is a hosted subdomain name. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> subDomain_ {};
    // The version ID of Alibaba Cloud DNS.
    shared_ptr<string> versionCode_ {};
    // The edition of Alibaba Cloud DNS.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
