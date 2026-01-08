// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODY_HPP_
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
  class DescribeAssetStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GeneralInstanceSpecStatistic, generalInstanceSpecStatistic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceSpecStatistic, resourceSpecStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GeneralInstanceSpecStatistic, generalInstanceSpecStatistic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceSpecStatistic, resourceSpecStatistic_);
    };
    DescribeAssetStatisticResponseBody() = default ;
    DescribeAssetStatisticResponseBody(const DescribeAssetStatisticResponseBody &) = default ;
    DescribeAssetStatisticResponseBody(DescribeAssetStatisticResponseBody &&) = default ;
    DescribeAssetStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetStatisticResponseBody() = default ;
    DescribeAssetStatisticResponseBody& operator=(const DescribeAssetStatisticResponseBody &) = default ;
    DescribeAssetStatisticResponseBody& operator=(DescribeAssetStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceSpecStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSpecStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(IpNumSpec, ipNumSpec_);
        DARABONBA_PTR_TO_JSON(IpNumUsed, ipNumUsed_);
        DARABONBA_PTR_TO_JSON(SensitiveDataIpNumSpec, sensitiveDataIpNumSpec_);
        DARABONBA_PTR_TO_JSON(SensitiveDataIpNumUsed, sensitiveDataIpNumUsed_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSpecStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(IpNumSpec, ipNumSpec_);
        DARABONBA_PTR_FROM_JSON(IpNumUsed, ipNumUsed_);
        DARABONBA_PTR_FROM_JSON(SensitiveDataIpNumSpec, sensitiveDataIpNumSpec_);
        DARABONBA_PTR_FROM_JSON(SensitiveDataIpNumUsed, sensitiveDataIpNumUsed_);
      };
      ResourceSpecStatistic() = default ;
      ResourceSpecStatistic(const ResourceSpecStatistic &) = default ;
      ResourceSpecStatistic(ResourceSpecStatistic &&) = default ;
      ResourceSpecStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceSpecStatistic() = default ;
      ResourceSpecStatistic& operator=(const ResourceSpecStatistic &) = default ;
      ResourceSpecStatistic& operator=(ResourceSpecStatistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipNumSpec_ == nullptr
        && this->ipNumUsed_ == nullptr && this->sensitiveDataIpNumSpec_ == nullptr && this->sensitiveDataIpNumUsed_ == nullptr; };
      // ipNumSpec Field Functions 
      bool hasIpNumSpec() const { return this->ipNumSpec_ != nullptr;};
      void deleteIpNumSpec() { this->ipNumSpec_ = nullptr;};
      inline int32_t getIpNumSpec() const { DARABONBA_PTR_GET_DEFAULT(ipNumSpec_, 0) };
      inline ResourceSpecStatistic& setIpNumSpec(int32_t ipNumSpec) { DARABONBA_PTR_SET_VALUE(ipNumSpec_, ipNumSpec) };


      // ipNumUsed Field Functions 
      bool hasIpNumUsed() const { return this->ipNumUsed_ != nullptr;};
      void deleteIpNumUsed() { this->ipNumUsed_ = nullptr;};
      inline int32_t getIpNumUsed() const { DARABONBA_PTR_GET_DEFAULT(ipNumUsed_, 0) };
      inline ResourceSpecStatistic& setIpNumUsed(int32_t ipNumUsed) { DARABONBA_PTR_SET_VALUE(ipNumUsed_, ipNumUsed) };


      // sensitiveDataIpNumSpec Field Functions 
      bool hasSensitiveDataIpNumSpec() const { return this->sensitiveDataIpNumSpec_ != nullptr;};
      void deleteSensitiveDataIpNumSpec() { this->sensitiveDataIpNumSpec_ = nullptr;};
      inline int64_t getSensitiveDataIpNumSpec() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataIpNumSpec_, 0L) };
      inline ResourceSpecStatistic& setSensitiveDataIpNumSpec(int64_t sensitiveDataIpNumSpec) { DARABONBA_PTR_SET_VALUE(sensitiveDataIpNumSpec_, sensitiveDataIpNumSpec) };


      // sensitiveDataIpNumUsed Field Functions 
      bool hasSensitiveDataIpNumUsed() const { return this->sensitiveDataIpNumUsed_ != nullptr;};
      void deleteSensitiveDataIpNumUsed() { this->sensitiveDataIpNumUsed_ = nullptr;};
      inline int64_t getSensitiveDataIpNumUsed() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataIpNumUsed_, 0L) };
      inline ResourceSpecStatistic& setSensitiveDataIpNumUsed(int64_t sensitiveDataIpNumUsed) { DARABONBA_PTR_SET_VALUE(sensitiveDataIpNumUsed_, sensitiveDataIpNumUsed) };


    protected:
      // The number of public IP addresses that can be protected.
      shared_ptr<int32_t> ipNumSpec_ {};
      // The number of public IP addresses that are protected.
      shared_ptr<int32_t> ipNumUsed_ {};
      // The number of public IP addresses that can enable data leakage detection.
      shared_ptr<int64_t> sensitiveDataIpNumSpec_ {};
      // The number of public IP addresses that enabled data leakage detection.
      shared_ptr<int64_t> sensitiveDataIpNumUsed_ {};
    };

    class GeneralInstanceSpecStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GeneralInstanceSpecStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(CfwGeneralInstanceRegionStatistic, cfwGeneralInstanceRegionStatistic_);
        DARABONBA_PTR_TO_JSON(CfwTotalGeneralInstanceRegionStatistic, cfwTotalGeneralInstanceRegionStatistic_);
        DARABONBA_PTR_TO_JSON(TotalCfwGeneralInstanceCnt, totalCfwGeneralInstanceCnt_);
        DARABONBA_PTR_TO_JSON(TotalCfwGeneralInstanceUsedCnt, totalCfwGeneralInstanceUsedCnt_);
        DARABONBA_PTR_TO_JSON(TotalGeneralInstanceUsedCnt, totalGeneralInstanceUsedCnt_);
        DARABONBA_PTR_TO_JSON(TotalNatGeneralInstanceCnt, totalNatGeneralInstanceCnt_);
        DARABONBA_PTR_TO_JSON(TotalNatGeneralInstanceUsedCnt, totalNatGeneralInstanceUsedCnt_);
        DARABONBA_PTR_TO_JSON(TotalVfwGeneralInstanceUsedCnt, totalVfwGeneralInstanceUsedCnt_);
      };
      friend void from_json(const Darabonba::Json& j, GeneralInstanceSpecStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(CfwGeneralInstanceRegionStatistic, cfwGeneralInstanceRegionStatistic_);
        DARABONBA_PTR_FROM_JSON(CfwTotalGeneralInstanceRegionStatistic, cfwTotalGeneralInstanceRegionStatistic_);
        DARABONBA_PTR_FROM_JSON(TotalCfwGeneralInstanceCnt, totalCfwGeneralInstanceCnt_);
        DARABONBA_PTR_FROM_JSON(TotalCfwGeneralInstanceUsedCnt, totalCfwGeneralInstanceUsedCnt_);
        DARABONBA_PTR_FROM_JSON(TotalGeneralInstanceUsedCnt, totalGeneralInstanceUsedCnt_);
        DARABONBA_PTR_FROM_JSON(TotalNatGeneralInstanceCnt, totalNatGeneralInstanceCnt_);
        DARABONBA_PTR_FROM_JSON(TotalNatGeneralInstanceUsedCnt, totalNatGeneralInstanceUsedCnt_);
        DARABONBA_PTR_FROM_JSON(TotalVfwGeneralInstanceUsedCnt, totalVfwGeneralInstanceUsedCnt_);
      };
      GeneralInstanceSpecStatistic() = default ;
      GeneralInstanceSpecStatistic(const GeneralInstanceSpecStatistic &) = default ;
      GeneralInstanceSpecStatistic(GeneralInstanceSpecStatistic &&) = default ;
      GeneralInstanceSpecStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GeneralInstanceSpecStatistic() = default ;
      GeneralInstanceSpecStatistic& operator=(const GeneralInstanceSpecStatistic &) = default ;
      GeneralInstanceSpecStatistic& operator=(GeneralInstanceSpecStatistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CfwTotalGeneralInstanceRegionStatistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CfwTotalGeneralInstanceRegionStatistic& obj) { 
          DARABONBA_PTR_TO_JSON(MemberList, memberList_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        };
        friend void from_json(const Darabonba::Json& j, CfwTotalGeneralInstanceRegionStatistic& obj) { 
          DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        };
        CfwTotalGeneralInstanceRegionStatistic() = default ;
        CfwTotalGeneralInstanceRegionStatistic(const CfwTotalGeneralInstanceRegionStatistic &) = default ;
        CfwTotalGeneralInstanceRegionStatistic(CfwTotalGeneralInstanceRegionStatistic &&) = default ;
        CfwTotalGeneralInstanceRegionStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CfwTotalGeneralInstanceRegionStatistic() = default ;
        CfwTotalGeneralInstanceRegionStatistic& operator=(const CfwTotalGeneralInstanceRegionStatistic &) = default ;
        CfwTotalGeneralInstanceRegionStatistic& operator=(CfwTotalGeneralInstanceRegionStatistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memberList_ == nullptr
        && this->regionNo_ == nullptr; };
        // memberList Field Functions 
        bool hasMemberList() const { return this->memberList_ != nullptr;};
        void deleteMemberList() { this->memberList_ = nullptr;};
        inline const vector<string> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<string>) };
        inline vector<string> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<string>) };
        inline CfwTotalGeneralInstanceRegionStatistic& setMemberList(const vector<string> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
        inline CfwTotalGeneralInstanceRegionStatistic& setMemberList(vector<string> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline CfwTotalGeneralInstanceRegionStatistic& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      protected:
        shared_ptr<vector<string>> memberList_ {};
        shared_ptr<string> regionNo_ {};
      };

      class CfwGeneralInstanceRegionStatistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CfwGeneralInstanceRegionStatistic& obj) { 
          DARABONBA_PTR_TO_JSON(MemberList, memberList_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        };
        friend void from_json(const Darabonba::Json& j, CfwGeneralInstanceRegionStatistic& obj) { 
          DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        };
        CfwGeneralInstanceRegionStatistic() = default ;
        CfwGeneralInstanceRegionStatistic(const CfwGeneralInstanceRegionStatistic &) = default ;
        CfwGeneralInstanceRegionStatistic(CfwGeneralInstanceRegionStatistic &&) = default ;
        CfwGeneralInstanceRegionStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CfwGeneralInstanceRegionStatistic() = default ;
        CfwGeneralInstanceRegionStatistic& operator=(const CfwGeneralInstanceRegionStatistic &) = default ;
        CfwGeneralInstanceRegionStatistic& operator=(CfwGeneralInstanceRegionStatistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memberList_ == nullptr
        && this->regionNo_ == nullptr; };
        // memberList Field Functions 
        bool hasMemberList() const { return this->memberList_ != nullptr;};
        void deleteMemberList() { this->memberList_ = nullptr;};
        inline const vector<string> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<string>) };
        inline vector<string> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<string>) };
        inline CfwGeneralInstanceRegionStatistic& setMemberList(const vector<string> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
        inline CfwGeneralInstanceRegionStatistic& setMemberList(vector<string> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline CfwGeneralInstanceRegionStatistic& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      protected:
        shared_ptr<vector<string>> memberList_ {};
        shared_ptr<string> regionNo_ {};
      };

      virtual bool empty() const override { return this->cfwGeneralInstanceRegionStatistic_ == nullptr
        && this->cfwTotalGeneralInstanceRegionStatistic_ == nullptr && this->totalCfwGeneralInstanceCnt_ == nullptr && this->totalCfwGeneralInstanceUsedCnt_ == nullptr && this->totalGeneralInstanceUsedCnt_ == nullptr && this->totalNatGeneralInstanceCnt_ == nullptr
        && this->totalNatGeneralInstanceUsedCnt_ == nullptr && this->totalVfwGeneralInstanceUsedCnt_ == nullptr; };
      // cfwGeneralInstanceRegionStatistic Field Functions 
      bool hasCfwGeneralInstanceRegionStatistic() const { return this->cfwGeneralInstanceRegionStatistic_ != nullptr;};
      void deleteCfwGeneralInstanceRegionStatistic() { this->cfwGeneralInstanceRegionStatistic_ = nullptr;};
      inline const vector<GeneralInstanceSpecStatistic::CfwGeneralInstanceRegionStatistic> & getCfwGeneralInstanceRegionStatistic() const { DARABONBA_PTR_GET_CONST(cfwGeneralInstanceRegionStatistic_, vector<GeneralInstanceSpecStatistic::CfwGeneralInstanceRegionStatistic>) };
      inline vector<GeneralInstanceSpecStatistic::CfwGeneralInstanceRegionStatistic> getCfwGeneralInstanceRegionStatistic() { DARABONBA_PTR_GET(cfwGeneralInstanceRegionStatistic_, vector<GeneralInstanceSpecStatistic::CfwGeneralInstanceRegionStatistic>) };
      inline GeneralInstanceSpecStatistic& setCfwGeneralInstanceRegionStatistic(const vector<GeneralInstanceSpecStatistic::CfwGeneralInstanceRegionStatistic> & cfwGeneralInstanceRegionStatistic) { DARABONBA_PTR_SET_VALUE(cfwGeneralInstanceRegionStatistic_, cfwGeneralInstanceRegionStatistic) };
      inline GeneralInstanceSpecStatistic& setCfwGeneralInstanceRegionStatistic(vector<GeneralInstanceSpecStatistic::CfwGeneralInstanceRegionStatistic> && cfwGeneralInstanceRegionStatistic) { DARABONBA_PTR_SET_RVALUE(cfwGeneralInstanceRegionStatistic_, cfwGeneralInstanceRegionStatistic) };


      // cfwTotalGeneralInstanceRegionStatistic Field Functions 
      bool hasCfwTotalGeneralInstanceRegionStatistic() const { return this->cfwTotalGeneralInstanceRegionStatistic_ != nullptr;};
      void deleteCfwTotalGeneralInstanceRegionStatistic() { this->cfwTotalGeneralInstanceRegionStatistic_ = nullptr;};
      inline const vector<GeneralInstanceSpecStatistic::CfwTotalGeneralInstanceRegionStatistic> & getCfwTotalGeneralInstanceRegionStatistic() const { DARABONBA_PTR_GET_CONST(cfwTotalGeneralInstanceRegionStatistic_, vector<GeneralInstanceSpecStatistic::CfwTotalGeneralInstanceRegionStatistic>) };
      inline vector<GeneralInstanceSpecStatistic::CfwTotalGeneralInstanceRegionStatistic> getCfwTotalGeneralInstanceRegionStatistic() { DARABONBA_PTR_GET(cfwTotalGeneralInstanceRegionStatistic_, vector<GeneralInstanceSpecStatistic::CfwTotalGeneralInstanceRegionStatistic>) };
      inline GeneralInstanceSpecStatistic& setCfwTotalGeneralInstanceRegionStatistic(const vector<GeneralInstanceSpecStatistic::CfwTotalGeneralInstanceRegionStatistic> & cfwTotalGeneralInstanceRegionStatistic) { DARABONBA_PTR_SET_VALUE(cfwTotalGeneralInstanceRegionStatistic_, cfwTotalGeneralInstanceRegionStatistic) };
      inline GeneralInstanceSpecStatistic& setCfwTotalGeneralInstanceRegionStatistic(vector<GeneralInstanceSpecStatistic::CfwTotalGeneralInstanceRegionStatistic> && cfwTotalGeneralInstanceRegionStatistic) { DARABONBA_PTR_SET_RVALUE(cfwTotalGeneralInstanceRegionStatistic_, cfwTotalGeneralInstanceRegionStatistic) };


      // totalCfwGeneralInstanceCnt Field Functions 
      bool hasTotalCfwGeneralInstanceCnt() const { return this->totalCfwGeneralInstanceCnt_ != nullptr;};
      void deleteTotalCfwGeneralInstanceCnt() { this->totalCfwGeneralInstanceCnt_ = nullptr;};
      inline int32_t getTotalCfwGeneralInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCfwGeneralInstanceCnt_, 0) };
      inline GeneralInstanceSpecStatistic& setTotalCfwGeneralInstanceCnt(int32_t totalCfwGeneralInstanceCnt) { DARABONBA_PTR_SET_VALUE(totalCfwGeneralInstanceCnt_, totalCfwGeneralInstanceCnt) };


      // totalCfwGeneralInstanceUsedCnt Field Functions 
      bool hasTotalCfwGeneralInstanceUsedCnt() const { return this->totalCfwGeneralInstanceUsedCnt_ != nullptr;};
      void deleteTotalCfwGeneralInstanceUsedCnt() { this->totalCfwGeneralInstanceUsedCnt_ = nullptr;};
      inline int32_t getTotalCfwGeneralInstanceUsedCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCfwGeneralInstanceUsedCnt_, 0) };
      inline GeneralInstanceSpecStatistic& setTotalCfwGeneralInstanceUsedCnt(int32_t totalCfwGeneralInstanceUsedCnt) { DARABONBA_PTR_SET_VALUE(totalCfwGeneralInstanceUsedCnt_, totalCfwGeneralInstanceUsedCnt) };


      // totalGeneralInstanceUsedCnt Field Functions 
      bool hasTotalGeneralInstanceUsedCnt() const { return this->totalGeneralInstanceUsedCnt_ != nullptr;};
      void deleteTotalGeneralInstanceUsedCnt() { this->totalGeneralInstanceUsedCnt_ = nullptr;};
      inline int32_t getTotalGeneralInstanceUsedCnt() const { DARABONBA_PTR_GET_DEFAULT(totalGeneralInstanceUsedCnt_, 0) };
      inline GeneralInstanceSpecStatistic& setTotalGeneralInstanceUsedCnt(int32_t totalGeneralInstanceUsedCnt) { DARABONBA_PTR_SET_VALUE(totalGeneralInstanceUsedCnt_, totalGeneralInstanceUsedCnt) };


      // totalNatGeneralInstanceCnt Field Functions 
      bool hasTotalNatGeneralInstanceCnt() const { return this->totalNatGeneralInstanceCnt_ != nullptr;};
      void deleteTotalNatGeneralInstanceCnt() { this->totalNatGeneralInstanceCnt_ = nullptr;};
      inline int32_t getTotalNatGeneralInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(totalNatGeneralInstanceCnt_, 0) };
      inline GeneralInstanceSpecStatistic& setTotalNatGeneralInstanceCnt(int32_t totalNatGeneralInstanceCnt) { DARABONBA_PTR_SET_VALUE(totalNatGeneralInstanceCnt_, totalNatGeneralInstanceCnt) };


      // totalNatGeneralInstanceUsedCnt Field Functions 
      bool hasTotalNatGeneralInstanceUsedCnt() const { return this->totalNatGeneralInstanceUsedCnt_ != nullptr;};
      void deleteTotalNatGeneralInstanceUsedCnt() { this->totalNatGeneralInstanceUsedCnt_ = nullptr;};
      inline int32_t getTotalNatGeneralInstanceUsedCnt() const { DARABONBA_PTR_GET_DEFAULT(totalNatGeneralInstanceUsedCnt_, 0) };
      inline GeneralInstanceSpecStatistic& setTotalNatGeneralInstanceUsedCnt(int32_t totalNatGeneralInstanceUsedCnt) { DARABONBA_PTR_SET_VALUE(totalNatGeneralInstanceUsedCnt_, totalNatGeneralInstanceUsedCnt) };


      // totalVfwGeneralInstanceUsedCnt Field Functions 
      bool hasTotalVfwGeneralInstanceUsedCnt() const { return this->totalVfwGeneralInstanceUsedCnt_ != nullptr;};
      void deleteTotalVfwGeneralInstanceUsedCnt() { this->totalVfwGeneralInstanceUsedCnt_ = nullptr;};
      inline int32_t getTotalVfwGeneralInstanceUsedCnt() const { DARABONBA_PTR_GET_DEFAULT(totalVfwGeneralInstanceUsedCnt_, 0) };
      inline GeneralInstanceSpecStatistic& setTotalVfwGeneralInstanceUsedCnt(int32_t totalVfwGeneralInstanceUsedCnt) { DARABONBA_PTR_SET_VALUE(totalVfwGeneralInstanceUsedCnt_, totalVfwGeneralInstanceUsedCnt) };


    protected:
      shared_ptr<vector<GeneralInstanceSpecStatistic::CfwGeneralInstanceRegionStatistic>> cfwGeneralInstanceRegionStatistic_ {};
      shared_ptr<vector<GeneralInstanceSpecStatistic::CfwTotalGeneralInstanceRegionStatistic>> cfwTotalGeneralInstanceRegionStatistic_ {};
      shared_ptr<int32_t> totalCfwGeneralInstanceCnt_ {};
      shared_ptr<int32_t> totalCfwGeneralInstanceUsedCnt_ {};
      shared_ptr<int32_t> totalGeneralInstanceUsedCnt_ {};
      shared_ptr<int32_t> totalNatGeneralInstanceCnt_ {};
      shared_ptr<int32_t> totalNatGeneralInstanceUsedCnt_ {};
      shared_ptr<int32_t> totalVfwGeneralInstanceUsedCnt_ {};
    };

    virtual bool empty() const override { return this->generalInstanceSpecStatistic_ == nullptr
        && this->requestId_ == nullptr && this->resourceSpecStatistic_ == nullptr; };
    // generalInstanceSpecStatistic Field Functions 
    bool hasGeneralInstanceSpecStatistic() const { return this->generalInstanceSpecStatistic_ != nullptr;};
    void deleteGeneralInstanceSpecStatistic() { this->generalInstanceSpecStatistic_ = nullptr;};
    inline const DescribeAssetStatisticResponseBody::GeneralInstanceSpecStatistic & getGeneralInstanceSpecStatistic() const { DARABONBA_PTR_GET_CONST(generalInstanceSpecStatistic_, DescribeAssetStatisticResponseBody::GeneralInstanceSpecStatistic) };
    inline DescribeAssetStatisticResponseBody::GeneralInstanceSpecStatistic getGeneralInstanceSpecStatistic() { DARABONBA_PTR_GET(generalInstanceSpecStatistic_, DescribeAssetStatisticResponseBody::GeneralInstanceSpecStatistic) };
    inline DescribeAssetStatisticResponseBody& setGeneralInstanceSpecStatistic(const DescribeAssetStatisticResponseBody::GeneralInstanceSpecStatistic & generalInstanceSpecStatistic) { DARABONBA_PTR_SET_VALUE(generalInstanceSpecStatistic_, generalInstanceSpecStatistic) };
    inline DescribeAssetStatisticResponseBody& setGeneralInstanceSpecStatistic(DescribeAssetStatisticResponseBody::GeneralInstanceSpecStatistic && generalInstanceSpecStatistic) { DARABONBA_PTR_SET_RVALUE(generalInstanceSpecStatistic_, generalInstanceSpecStatistic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceSpecStatistic Field Functions 
    bool hasResourceSpecStatistic() const { return this->resourceSpecStatistic_ != nullptr;};
    void deleteResourceSpecStatistic() { this->resourceSpecStatistic_ = nullptr;};
    inline const DescribeAssetStatisticResponseBody::ResourceSpecStatistic & getResourceSpecStatistic() const { DARABONBA_PTR_GET_CONST(resourceSpecStatistic_, DescribeAssetStatisticResponseBody::ResourceSpecStatistic) };
    inline DescribeAssetStatisticResponseBody::ResourceSpecStatistic getResourceSpecStatistic() { DARABONBA_PTR_GET(resourceSpecStatistic_, DescribeAssetStatisticResponseBody::ResourceSpecStatistic) };
    inline DescribeAssetStatisticResponseBody& setResourceSpecStatistic(const DescribeAssetStatisticResponseBody::ResourceSpecStatistic & resourceSpecStatistic) { DARABONBA_PTR_SET_VALUE(resourceSpecStatistic_, resourceSpecStatistic) };
    inline DescribeAssetStatisticResponseBody& setResourceSpecStatistic(DescribeAssetStatisticResponseBody::ResourceSpecStatistic && resourceSpecStatistic) { DARABONBA_PTR_SET_RVALUE(resourceSpecStatistic_, resourceSpecStatistic) };


  protected:
    shared_ptr<DescribeAssetStatisticResponseBody::GeneralInstanceSpecStatistic> generalInstanceSpecStatistic_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics on specifications.
    shared_ptr<DescribeAssetStatisticResponseBody::ResourceSpecStatistic> resourceSpecStatistic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
