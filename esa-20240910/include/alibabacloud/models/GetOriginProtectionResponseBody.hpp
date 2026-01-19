// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoConfirmIPList, autoConfirmIPList_);
      DARABONBA_PTR_TO_JSON(CurrentIPWhitelist, currentIPWhitelist_);
      DARABONBA_PTR_TO_JSON(DiffIPWhitelist, diffIPWhitelist_);
      DARABONBA_PTR_TO_JSON(LatestIPWhitelist, latestIPWhitelist_);
      DARABONBA_PTR_TO_JSON(NeedUpdate, needUpdate_);
      DARABONBA_PTR_TO_JSON(OriginConverge, originConverge_);
      DARABONBA_PTR_TO_JSON(OriginProtection, originProtection_);
      DARABONBA_PTR_TO_JSON(RegionalCurrentIPWhitelist, regionalCurrentIPWhitelist_);
      DARABONBA_PTR_TO_JSON(RegionalDiffIPWhitelist, regionalDiffIPWhitelist_);
      DARABONBA_PTR_TO_JSON(RegionalLatestIPWhitelist, regionalLatestIPWhitelist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoConfirmIPList, autoConfirmIPList_);
      DARABONBA_PTR_FROM_JSON(CurrentIPWhitelist, currentIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(DiffIPWhitelist, diffIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(LatestIPWhitelist, latestIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(NeedUpdate, needUpdate_);
      DARABONBA_PTR_FROM_JSON(OriginConverge, originConverge_);
      DARABONBA_PTR_FROM_JSON(OriginProtection, originProtection_);
      DARABONBA_PTR_FROM_JSON(RegionalCurrentIPWhitelist, regionalCurrentIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(RegionalDiffIPWhitelist, regionalDiffIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(RegionalLatestIPWhitelist, regionalLatestIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetOriginProtectionResponseBody() = default ;
    GetOriginProtectionResponseBody(const GetOriginProtectionResponseBody &) = default ;
    GetOriginProtectionResponseBody(GetOriginProtectionResponseBody &&) = default ;
    GetOriginProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBody() = default ;
    GetOriginProtectionResponseBody& operator=(const GetOriginProtectionResponseBody &) = default ;
    GetOriginProtectionResponseBody& operator=(GetOriginProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionalLatestIPWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionalLatestIPWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
        DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
      };
      friend void from_json(const Darabonba::Json& j, RegionalLatestIPWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
        DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
      };
      RegionalLatestIPWhitelist() = default ;
      RegionalLatestIPWhitelist(const RegionalLatestIPWhitelist &) = default ;
      RegionalLatestIPWhitelist(RegionalLatestIPWhitelist &&) = default ;
      RegionalLatestIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionalLatestIPWhitelist() = default ;
      RegionalLatestIPWhitelist& operator=(const RegionalLatestIPWhitelist &) = default ;
      RegionalLatestIPWhitelist& operator=(RegionalLatestIPWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionalIPv6 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionalIPv6& obj) { 
          DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, RegionalIPv6& obj) { 
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        RegionalIPv6() = default ;
        RegionalIPv6(const RegionalIPv6 &) = default ;
        RegionalIPv6(RegionalIPv6 &&) = default ;
        RegionalIPv6(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionalIPv6() = default ;
        RegionalIPv6& operator=(const RegionalIPv6 &) = default ;
        RegionalIPv6& operator=(RegionalIPv6 &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
        // cidr Field Functions 
        bool hasCidr() const { return this->cidr_ != nullptr;};
        void deleteCidr() { this->cidr_ = nullptr;};
        inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
        inline RegionalIPv6& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RegionalIPv6& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        shared_ptr<string> cidr_ {};
        shared_ptr<string> region_ {};
      };

      class RegionalIPv4 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionalIPv4& obj) { 
          DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, RegionalIPv4& obj) { 
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        RegionalIPv4() = default ;
        RegionalIPv4(const RegionalIPv4 &) = default ;
        RegionalIPv4(RegionalIPv4 &&) = default ;
        RegionalIPv4(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionalIPv4() = default ;
        RegionalIPv4& operator=(const RegionalIPv4 &) = default ;
        RegionalIPv4& operator=(RegionalIPv4 &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
        // cidr Field Functions 
        bool hasCidr() const { return this->cidr_ != nullptr;};
        void deleteCidr() { this->cidr_ = nullptr;};
        inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
        inline RegionalIPv4& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RegionalIPv4& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        shared_ptr<string> cidr_ {};
        shared_ptr<string> region_ {};
      };

      virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && this->regionalIPv6_ == nullptr; };
      // regionalIPv4 Field Functions 
      bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
      void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
      inline const vector<RegionalLatestIPWhitelist::RegionalIPv4> & getRegionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<RegionalLatestIPWhitelist::RegionalIPv4>) };
      inline vector<RegionalLatestIPWhitelist::RegionalIPv4> getRegionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<RegionalLatestIPWhitelist::RegionalIPv4>) };
      inline RegionalLatestIPWhitelist& setRegionalIPv4(const vector<RegionalLatestIPWhitelist::RegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
      inline RegionalLatestIPWhitelist& setRegionalIPv4(vector<RegionalLatestIPWhitelist::RegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


      // regionalIPv6 Field Functions 
      bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
      void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
      inline const vector<RegionalLatestIPWhitelist::RegionalIPv6> & getRegionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<RegionalLatestIPWhitelist::RegionalIPv6>) };
      inline vector<RegionalLatestIPWhitelist::RegionalIPv6> getRegionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<RegionalLatestIPWhitelist::RegionalIPv6>) };
      inline RegionalLatestIPWhitelist& setRegionalIPv6(const vector<RegionalLatestIPWhitelist::RegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
      inline RegionalLatestIPWhitelist& setRegionalIPv6(vector<RegionalLatestIPWhitelist::RegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


    protected:
      shared_ptr<vector<RegionalLatestIPWhitelist::RegionalIPv4>> regionalIPv4_ {};
      shared_ptr<vector<RegionalLatestIPWhitelist::RegionalIPv6>> regionalIPv6_ {};
    };

    class RegionalDiffIPWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionalDiffIPWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(AddedIPRegionWhitelist, addedIPRegionWhitelist_);
        DARABONBA_PTR_TO_JSON(NoChangeIpWhitelist, noChangeIpWhitelist_);
        DARABONBA_PTR_TO_JSON(RemovedIPRegionWhitelist, removedIPRegionWhitelist_);
      };
      friend void from_json(const Darabonba::Json& j, RegionalDiffIPWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(AddedIPRegionWhitelist, addedIPRegionWhitelist_);
        DARABONBA_PTR_FROM_JSON(NoChangeIpWhitelist, noChangeIpWhitelist_);
        DARABONBA_PTR_FROM_JSON(RemovedIPRegionWhitelist, removedIPRegionWhitelist_);
      };
      RegionalDiffIPWhitelist() = default ;
      RegionalDiffIPWhitelist(const RegionalDiffIPWhitelist &) = default ;
      RegionalDiffIPWhitelist(RegionalDiffIPWhitelist &&) = default ;
      RegionalDiffIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionalDiffIPWhitelist() = default ;
      RegionalDiffIPWhitelist& operator=(const RegionalDiffIPWhitelist &) = default ;
      RegionalDiffIPWhitelist& operator=(RegionalDiffIPWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemovedIPRegionWhitelist : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemovedIPRegionWhitelist& obj) { 
          DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
          DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
        };
        friend void from_json(const Darabonba::Json& j, RemovedIPRegionWhitelist& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
          DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
        };
        RemovedIPRegionWhitelist() = default ;
        RemovedIPRegionWhitelist(const RemovedIPRegionWhitelist &) = default ;
        RemovedIPRegionWhitelist(RemovedIPRegionWhitelist &&) = default ;
        RemovedIPRegionWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemovedIPRegionWhitelist() = default ;
        RemovedIPRegionWhitelist& operator=(const RemovedIPRegionWhitelist &) = default ;
        RemovedIPRegionWhitelist& operator=(RemovedIPRegionWhitelist &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RegionalIPv6 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionalIPv6& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(Region, region_);
          };
          friend void from_json(const Darabonba::Json& j, RegionalIPv6& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
          };
          RegionalIPv6() = default ;
          RegionalIPv6(const RegionalIPv6 &) = default ;
          RegionalIPv6(RegionalIPv6 &&) = default ;
          RegionalIPv6(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionalIPv6() = default ;
          RegionalIPv6& operator=(const RegionalIPv6 &) = default ;
          RegionalIPv6& operator=(RegionalIPv6 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline RegionalIPv6& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline RegionalIPv6& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        protected:
          shared_ptr<string> cidr_ {};
          shared_ptr<string> region_ {};
        };

        class RegionalIPv4 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionalIPv4& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(Region, region_);
          };
          friend void from_json(const Darabonba::Json& j, RegionalIPv4& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
          };
          RegionalIPv4() = default ;
          RegionalIPv4(const RegionalIPv4 &) = default ;
          RegionalIPv4(RegionalIPv4 &&) = default ;
          RegionalIPv4(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionalIPv4() = default ;
          RegionalIPv4& operator=(const RegionalIPv4 &) = default ;
          RegionalIPv4& operator=(RegionalIPv4 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline RegionalIPv4& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline RegionalIPv4& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        protected:
          shared_ptr<string> cidr_ {};
          shared_ptr<string> region_ {};
        };

        virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && this->regionalIPv6_ == nullptr; };
        // regionalIPv4 Field Functions 
        bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
        void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
        inline const vector<RemovedIPRegionWhitelist::RegionalIPv4> & getRegionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<RemovedIPRegionWhitelist::RegionalIPv4>) };
        inline vector<RemovedIPRegionWhitelist::RegionalIPv4> getRegionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<RemovedIPRegionWhitelist::RegionalIPv4>) };
        inline RemovedIPRegionWhitelist& setRegionalIPv4(const vector<RemovedIPRegionWhitelist::RegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
        inline RemovedIPRegionWhitelist& setRegionalIPv4(vector<RemovedIPRegionWhitelist::RegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


        // regionalIPv6 Field Functions 
        bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
        void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
        inline const vector<RemovedIPRegionWhitelist::RegionalIPv6> & getRegionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<RemovedIPRegionWhitelist::RegionalIPv6>) };
        inline vector<RemovedIPRegionWhitelist::RegionalIPv6> getRegionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<RemovedIPRegionWhitelist::RegionalIPv6>) };
        inline RemovedIPRegionWhitelist& setRegionalIPv6(const vector<RemovedIPRegionWhitelist::RegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
        inline RemovedIPRegionWhitelist& setRegionalIPv6(vector<RemovedIPRegionWhitelist::RegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


      protected:
        shared_ptr<vector<RemovedIPRegionWhitelist::RegionalIPv4>> regionalIPv4_ {};
        shared_ptr<vector<RemovedIPRegionWhitelist::RegionalIPv6>> regionalIPv6_ {};
      };

      class NoChangeIpWhitelist : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NoChangeIpWhitelist& obj) { 
          DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
          DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
        };
        friend void from_json(const Darabonba::Json& j, NoChangeIpWhitelist& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
          DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
        };
        NoChangeIpWhitelist() = default ;
        NoChangeIpWhitelist(const NoChangeIpWhitelist &) = default ;
        NoChangeIpWhitelist(NoChangeIpWhitelist &&) = default ;
        NoChangeIpWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NoChangeIpWhitelist() = default ;
        NoChangeIpWhitelist& operator=(const NoChangeIpWhitelist &) = default ;
        NoChangeIpWhitelist& operator=(NoChangeIpWhitelist &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RegionalIPv6 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionalIPv6& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(Region, region_);
          };
          friend void from_json(const Darabonba::Json& j, RegionalIPv6& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
          };
          RegionalIPv6() = default ;
          RegionalIPv6(const RegionalIPv6 &) = default ;
          RegionalIPv6(RegionalIPv6 &&) = default ;
          RegionalIPv6(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionalIPv6() = default ;
          RegionalIPv6& operator=(const RegionalIPv6 &) = default ;
          RegionalIPv6& operator=(RegionalIPv6 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline RegionalIPv6& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline RegionalIPv6& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        protected:
          shared_ptr<string> cidr_ {};
          shared_ptr<string> region_ {};
        };

        class RegionalIPv4 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionalIPv4& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(Region, region_);
          };
          friend void from_json(const Darabonba::Json& j, RegionalIPv4& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
          };
          RegionalIPv4() = default ;
          RegionalIPv4(const RegionalIPv4 &) = default ;
          RegionalIPv4(RegionalIPv4 &&) = default ;
          RegionalIPv4(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionalIPv4() = default ;
          RegionalIPv4& operator=(const RegionalIPv4 &) = default ;
          RegionalIPv4& operator=(RegionalIPv4 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline RegionalIPv4& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline RegionalIPv4& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        protected:
          shared_ptr<string> cidr_ {};
          shared_ptr<string> region_ {};
        };

        virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && this->regionalIPv6_ == nullptr; };
        // regionalIPv4 Field Functions 
        bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
        void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
        inline const vector<NoChangeIpWhitelist::RegionalIPv4> & getRegionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<NoChangeIpWhitelist::RegionalIPv4>) };
        inline vector<NoChangeIpWhitelist::RegionalIPv4> getRegionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<NoChangeIpWhitelist::RegionalIPv4>) };
        inline NoChangeIpWhitelist& setRegionalIPv4(const vector<NoChangeIpWhitelist::RegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
        inline NoChangeIpWhitelist& setRegionalIPv4(vector<NoChangeIpWhitelist::RegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


        // regionalIPv6 Field Functions 
        bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
        void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
        inline const vector<NoChangeIpWhitelist::RegionalIPv6> & getRegionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<NoChangeIpWhitelist::RegionalIPv6>) };
        inline vector<NoChangeIpWhitelist::RegionalIPv6> getRegionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<NoChangeIpWhitelist::RegionalIPv6>) };
        inline NoChangeIpWhitelist& setRegionalIPv6(const vector<NoChangeIpWhitelist::RegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
        inline NoChangeIpWhitelist& setRegionalIPv6(vector<NoChangeIpWhitelist::RegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


      protected:
        shared_ptr<vector<NoChangeIpWhitelist::RegionalIPv4>> regionalIPv4_ {};
        shared_ptr<vector<NoChangeIpWhitelist::RegionalIPv6>> regionalIPv6_ {};
      };

      class AddedIPRegionWhitelist : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddedIPRegionWhitelist& obj) { 
          DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
          DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
        };
        friend void from_json(const Darabonba::Json& j, AddedIPRegionWhitelist& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
          DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
        };
        AddedIPRegionWhitelist() = default ;
        AddedIPRegionWhitelist(const AddedIPRegionWhitelist &) = default ;
        AddedIPRegionWhitelist(AddedIPRegionWhitelist &&) = default ;
        AddedIPRegionWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddedIPRegionWhitelist() = default ;
        AddedIPRegionWhitelist& operator=(const AddedIPRegionWhitelist &) = default ;
        AddedIPRegionWhitelist& operator=(AddedIPRegionWhitelist &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RegionalIPv6 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionalIPv6& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(Region, region_);
          };
          friend void from_json(const Darabonba::Json& j, RegionalIPv6& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
          };
          RegionalIPv6() = default ;
          RegionalIPv6(const RegionalIPv6 &) = default ;
          RegionalIPv6(RegionalIPv6 &&) = default ;
          RegionalIPv6(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionalIPv6() = default ;
          RegionalIPv6& operator=(const RegionalIPv6 &) = default ;
          RegionalIPv6& operator=(RegionalIPv6 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline RegionalIPv6& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline RegionalIPv6& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        protected:
          shared_ptr<string> cidr_ {};
          shared_ptr<string> region_ {};
        };

        class RegionalIPv4 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionalIPv4& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(Region, region_);
          };
          friend void from_json(const Darabonba::Json& j, RegionalIPv4& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
          };
          RegionalIPv4() = default ;
          RegionalIPv4(const RegionalIPv4 &) = default ;
          RegionalIPv4(RegionalIPv4 &&) = default ;
          RegionalIPv4(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionalIPv4() = default ;
          RegionalIPv4& operator=(const RegionalIPv4 &) = default ;
          RegionalIPv4& operator=(RegionalIPv4 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline RegionalIPv4& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline RegionalIPv4& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        protected:
          shared_ptr<string> cidr_ {};
          shared_ptr<string> region_ {};
        };

        virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && this->regionalIPv6_ == nullptr; };
        // regionalIPv4 Field Functions 
        bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
        void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
        inline const vector<AddedIPRegionWhitelist::RegionalIPv4> & getRegionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<AddedIPRegionWhitelist::RegionalIPv4>) };
        inline vector<AddedIPRegionWhitelist::RegionalIPv4> getRegionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<AddedIPRegionWhitelist::RegionalIPv4>) };
        inline AddedIPRegionWhitelist& setRegionalIPv4(const vector<AddedIPRegionWhitelist::RegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
        inline AddedIPRegionWhitelist& setRegionalIPv4(vector<AddedIPRegionWhitelist::RegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


        // regionalIPv6 Field Functions 
        bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
        void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
        inline const vector<AddedIPRegionWhitelist::RegionalIPv6> & getRegionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<AddedIPRegionWhitelist::RegionalIPv6>) };
        inline vector<AddedIPRegionWhitelist::RegionalIPv6> getRegionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<AddedIPRegionWhitelist::RegionalIPv6>) };
        inline AddedIPRegionWhitelist& setRegionalIPv6(const vector<AddedIPRegionWhitelist::RegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
        inline AddedIPRegionWhitelist& setRegionalIPv6(vector<AddedIPRegionWhitelist::RegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


      protected:
        shared_ptr<vector<AddedIPRegionWhitelist::RegionalIPv4>> regionalIPv4_ {};
        shared_ptr<vector<AddedIPRegionWhitelist::RegionalIPv6>> regionalIPv6_ {};
      };

      virtual bool empty() const override { return this->addedIPRegionWhitelist_ == nullptr
        && this->noChangeIpWhitelist_ == nullptr && this->removedIPRegionWhitelist_ == nullptr; };
      // addedIPRegionWhitelist Field Functions 
      bool hasAddedIPRegionWhitelist() const { return this->addedIPRegionWhitelist_ != nullptr;};
      void deleteAddedIPRegionWhitelist() { this->addedIPRegionWhitelist_ = nullptr;};
      inline const RegionalDiffIPWhitelist::AddedIPRegionWhitelist & getAddedIPRegionWhitelist() const { DARABONBA_PTR_GET_CONST(addedIPRegionWhitelist_, RegionalDiffIPWhitelist::AddedIPRegionWhitelist) };
      inline RegionalDiffIPWhitelist::AddedIPRegionWhitelist getAddedIPRegionWhitelist() { DARABONBA_PTR_GET(addedIPRegionWhitelist_, RegionalDiffIPWhitelist::AddedIPRegionWhitelist) };
      inline RegionalDiffIPWhitelist& setAddedIPRegionWhitelist(const RegionalDiffIPWhitelist::AddedIPRegionWhitelist & addedIPRegionWhitelist) { DARABONBA_PTR_SET_VALUE(addedIPRegionWhitelist_, addedIPRegionWhitelist) };
      inline RegionalDiffIPWhitelist& setAddedIPRegionWhitelist(RegionalDiffIPWhitelist::AddedIPRegionWhitelist && addedIPRegionWhitelist) { DARABONBA_PTR_SET_RVALUE(addedIPRegionWhitelist_, addedIPRegionWhitelist) };


      // noChangeIpWhitelist Field Functions 
      bool hasNoChangeIpWhitelist() const { return this->noChangeIpWhitelist_ != nullptr;};
      void deleteNoChangeIpWhitelist() { this->noChangeIpWhitelist_ = nullptr;};
      inline const RegionalDiffIPWhitelist::NoChangeIpWhitelist & getNoChangeIpWhitelist() const { DARABONBA_PTR_GET_CONST(noChangeIpWhitelist_, RegionalDiffIPWhitelist::NoChangeIpWhitelist) };
      inline RegionalDiffIPWhitelist::NoChangeIpWhitelist getNoChangeIpWhitelist() { DARABONBA_PTR_GET(noChangeIpWhitelist_, RegionalDiffIPWhitelist::NoChangeIpWhitelist) };
      inline RegionalDiffIPWhitelist& setNoChangeIpWhitelist(const RegionalDiffIPWhitelist::NoChangeIpWhitelist & noChangeIpWhitelist) { DARABONBA_PTR_SET_VALUE(noChangeIpWhitelist_, noChangeIpWhitelist) };
      inline RegionalDiffIPWhitelist& setNoChangeIpWhitelist(RegionalDiffIPWhitelist::NoChangeIpWhitelist && noChangeIpWhitelist) { DARABONBA_PTR_SET_RVALUE(noChangeIpWhitelist_, noChangeIpWhitelist) };


      // removedIPRegionWhitelist Field Functions 
      bool hasRemovedIPRegionWhitelist() const { return this->removedIPRegionWhitelist_ != nullptr;};
      void deleteRemovedIPRegionWhitelist() { this->removedIPRegionWhitelist_ = nullptr;};
      inline const RegionalDiffIPWhitelist::RemovedIPRegionWhitelist & getRemovedIPRegionWhitelist() const { DARABONBA_PTR_GET_CONST(removedIPRegionWhitelist_, RegionalDiffIPWhitelist::RemovedIPRegionWhitelist) };
      inline RegionalDiffIPWhitelist::RemovedIPRegionWhitelist getRemovedIPRegionWhitelist() { DARABONBA_PTR_GET(removedIPRegionWhitelist_, RegionalDiffIPWhitelist::RemovedIPRegionWhitelist) };
      inline RegionalDiffIPWhitelist& setRemovedIPRegionWhitelist(const RegionalDiffIPWhitelist::RemovedIPRegionWhitelist & removedIPRegionWhitelist) { DARABONBA_PTR_SET_VALUE(removedIPRegionWhitelist_, removedIPRegionWhitelist) };
      inline RegionalDiffIPWhitelist& setRemovedIPRegionWhitelist(RegionalDiffIPWhitelist::RemovedIPRegionWhitelist && removedIPRegionWhitelist) { DARABONBA_PTR_SET_RVALUE(removedIPRegionWhitelist_, removedIPRegionWhitelist) };


    protected:
      shared_ptr<RegionalDiffIPWhitelist::AddedIPRegionWhitelist> addedIPRegionWhitelist_ {};
      shared_ptr<RegionalDiffIPWhitelist::NoChangeIpWhitelist> noChangeIpWhitelist_ {};
      shared_ptr<RegionalDiffIPWhitelist::RemovedIPRegionWhitelist> removedIPRegionWhitelist_ {};
    };

    class RegionalCurrentIPWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionalCurrentIPWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(RegionalIPv4, regionalIPv4_);
        DARABONBA_PTR_TO_JSON(RegionalIPv6, regionalIPv6_);
      };
      friend void from_json(const Darabonba::Json& j, RegionalCurrentIPWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionalIPv4, regionalIPv4_);
        DARABONBA_PTR_FROM_JSON(RegionalIPv6, regionalIPv6_);
      };
      RegionalCurrentIPWhitelist() = default ;
      RegionalCurrentIPWhitelist(const RegionalCurrentIPWhitelist &) = default ;
      RegionalCurrentIPWhitelist(RegionalCurrentIPWhitelist &&) = default ;
      RegionalCurrentIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionalCurrentIPWhitelist() = default ;
      RegionalCurrentIPWhitelist& operator=(const RegionalCurrentIPWhitelist &) = default ;
      RegionalCurrentIPWhitelist& operator=(RegionalCurrentIPWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionalIPv6 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionalIPv6& obj) { 
          DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, RegionalIPv6& obj) { 
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        RegionalIPv6() = default ;
        RegionalIPv6(const RegionalIPv6 &) = default ;
        RegionalIPv6(RegionalIPv6 &&) = default ;
        RegionalIPv6(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionalIPv6() = default ;
        RegionalIPv6& operator=(const RegionalIPv6 &) = default ;
        RegionalIPv6& operator=(RegionalIPv6 &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
        // cidr Field Functions 
        bool hasCidr() const { return this->cidr_ != nullptr;};
        void deleteCidr() { this->cidr_ = nullptr;};
        inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
        inline RegionalIPv6& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RegionalIPv6& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        shared_ptr<string> cidr_ {};
        shared_ptr<string> region_ {};
      };

      class RegionalIPv4 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionalIPv4& obj) { 
          DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, RegionalIPv4& obj) { 
          DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        RegionalIPv4() = default ;
        RegionalIPv4(const RegionalIPv4 &) = default ;
        RegionalIPv4(RegionalIPv4 &&) = default ;
        RegionalIPv4(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionalIPv4() = default ;
        RegionalIPv4& operator=(const RegionalIPv4 &) = default ;
        RegionalIPv4& operator=(RegionalIPv4 &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cidr_ == nullptr
        && this->region_ == nullptr; };
        // cidr Field Functions 
        bool hasCidr() const { return this->cidr_ != nullptr;};
        void deleteCidr() { this->cidr_ = nullptr;};
        inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
        inline RegionalIPv4& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RegionalIPv4& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        shared_ptr<string> cidr_ {};
        shared_ptr<string> region_ {};
      };

      virtual bool empty() const override { return this->regionalIPv4_ == nullptr
        && this->regionalIPv6_ == nullptr; };
      // regionalIPv4 Field Functions 
      bool hasRegionalIPv4() const { return this->regionalIPv4_ != nullptr;};
      void deleteRegionalIPv4() { this->regionalIPv4_ = nullptr;};
      inline const vector<RegionalCurrentIPWhitelist::RegionalIPv4> & getRegionalIPv4() const { DARABONBA_PTR_GET_CONST(regionalIPv4_, vector<RegionalCurrentIPWhitelist::RegionalIPv4>) };
      inline vector<RegionalCurrentIPWhitelist::RegionalIPv4> getRegionalIPv4() { DARABONBA_PTR_GET(regionalIPv4_, vector<RegionalCurrentIPWhitelist::RegionalIPv4>) };
      inline RegionalCurrentIPWhitelist& setRegionalIPv4(const vector<RegionalCurrentIPWhitelist::RegionalIPv4> & regionalIPv4) { DARABONBA_PTR_SET_VALUE(regionalIPv4_, regionalIPv4) };
      inline RegionalCurrentIPWhitelist& setRegionalIPv4(vector<RegionalCurrentIPWhitelist::RegionalIPv4> && regionalIPv4) { DARABONBA_PTR_SET_RVALUE(regionalIPv4_, regionalIPv4) };


      // regionalIPv6 Field Functions 
      bool hasRegionalIPv6() const { return this->regionalIPv6_ != nullptr;};
      void deleteRegionalIPv6() { this->regionalIPv6_ = nullptr;};
      inline const vector<RegionalCurrentIPWhitelist::RegionalIPv6> & getRegionalIPv6() const { DARABONBA_PTR_GET_CONST(regionalIPv6_, vector<RegionalCurrentIPWhitelist::RegionalIPv6>) };
      inline vector<RegionalCurrentIPWhitelist::RegionalIPv6> getRegionalIPv6() { DARABONBA_PTR_GET(regionalIPv6_, vector<RegionalCurrentIPWhitelist::RegionalIPv6>) };
      inline RegionalCurrentIPWhitelist& setRegionalIPv6(const vector<RegionalCurrentIPWhitelist::RegionalIPv6> & regionalIPv6) { DARABONBA_PTR_SET_VALUE(regionalIPv6_, regionalIPv6) };
      inline RegionalCurrentIPWhitelist& setRegionalIPv6(vector<RegionalCurrentIPWhitelist::RegionalIPv6> && regionalIPv6) { DARABONBA_PTR_SET_RVALUE(regionalIPv6_, regionalIPv6) };


    protected:
      shared_ptr<vector<RegionalCurrentIPWhitelist::RegionalIPv4>> regionalIPv4_ {};
      shared_ptr<vector<RegionalCurrentIPWhitelist::RegionalIPv6>> regionalIPv6_ {};
    };

    class LatestIPWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LatestIPWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(IPv4, IPv4_);
        DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
      };
      friend void from_json(const Darabonba::Json& j, LatestIPWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(IPv4, IPv4_);
        DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
      };
      LatestIPWhitelist() = default ;
      LatestIPWhitelist(const LatestIPWhitelist &) = default ;
      LatestIPWhitelist(LatestIPWhitelist &&) = default ;
      LatestIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LatestIPWhitelist() = default ;
      LatestIPWhitelist& operator=(const LatestIPWhitelist &) = default ;
      LatestIPWhitelist& operator=(LatestIPWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IPv4_ == nullptr
        && this->IPv6_ == nullptr; };
      // IPv4 Field Functions 
      bool hasIPv4() const { return this->IPv4_ != nullptr;};
      void deleteIPv4() { this->IPv4_ = nullptr;};
      inline const vector<string> & getIPv4() const { DARABONBA_PTR_GET_CONST(IPv4_, vector<string>) };
      inline vector<string> getIPv4() { DARABONBA_PTR_GET(IPv4_, vector<string>) };
      inline LatestIPWhitelist& setIPv4(const vector<string> & IPv4) { DARABONBA_PTR_SET_VALUE(IPv4_, IPv4) };
      inline LatestIPWhitelist& setIPv4(vector<string> && IPv4) { DARABONBA_PTR_SET_RVALUE(IPv4_, IPv4) };


      // IPv6 Field Functions 
      bool hasIPv6() const { return this->IPv6_ != nullptr;};
      void deleteIPv6() { this->IPv6_ = nullptr;};
      inline const vector<string> & getIPv6() const { DARABONBA_PTR_GET_CONST(IPv6_, vector<string>) };
      inline vector<string> getIPv6() { DARABONBA_PTR_GET(IPv6_, vector<string>) };
      inline LatestIPWhitelist& setIPv6(const vector<string> & IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };
      inline LatestIPWhitelist& setIPv6(vector<string> && IPv6) { DARABONBA_PTR_SET_RVALUE(IPv6_, IPv6) };


    protected:
      // The latest IP whitelist for origin protection, specified as IPv4 addresses or CIDR blocks.
      shared_ptr<vector<string>> IPv4_ {};
      // The latest IP whitelist for origin protection, specified as IPv6 addresses or CIDR blocks.
      shared_ptr<vector<string>> IPv6_ {};
    };

    class DiffIPWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiffIPWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(AddedIPWhitelist, addedIPWhitelist_);
        DARABONBA_PTR_TO_JSON(NoChangeIpWhitelist, noChangeIpWhitelist_);
        DARABONBA_PTR_TO_JSON(RemovedIPWhitelist, removedIPWhitelist_);
      };
      friend void from_json(const Darabonba::Json& j, DiffIPWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(AddedIPWhitelist, addedIPWhitelist_);
        DARABONBA_PTR_FROM_JSON(NoChangeIpWhitelist, noChangeIpWhitelist_);
        DARABONBA_PTR_FROM_JSON(RemovedIPWhitelist, removedIPWhitelist_);
      };
      DiffIPWhitelist() = default ;
      DiffIPWhitelist(const DiffIPWhitelist &) = default ;
      DiffIPWhitelist(DiffIPWhitelist &&) = default ;
      DiffIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiffIPWhitelist() = default ;
      DiffIPWhitelist& operator=(const DiffIPWhitelist &) = default ;
      DiffIPWhitelist& operator=(DiffIPWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemovedIPWhitelist : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemovedIPWhitelist& obj) { 
          DARABONBA_PTR_TO_JSON(IPv4, IPv4_);
          DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
        };
        friend void from_json(const Darabonba::Json& j, RemovedIPWhitelist& obj) { 
          DARABONBA_PTR_FROM_JSON(IPv4, IPv4_);
          DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
        };
        RemovedIPWhitelist() = default ;
        RemovedIPWhitelist(const RemovedIPWhitelist &) = default ;
        RemovedIPWhitelist(RemovedIPWhitelist &&) = default ;
        RemovedIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemovedIPWhitelist() = default ;
        RemovedIPWhitelist& operator=(const RemovedIPWhitelist &) = default ;
        RemovedIPWhitelist& operator=(RemovedIPWhitelist &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->IPv4_ == nullptr
        && this->IPv6_ == nullptr; };
        // IPv4 Field Functions 
        bool hasIPv4() const { return this->IPv4_ != nullptr;};
        void deleteIPv4() { this->IPv4_ = nullptr;};
        inline const vector<string> & getIPv4() const { DARABONBA_PTR_GET_CONST(IPv4_, vector<string>) };
        inline vector<string> getIPv4() { DARABONBA_PTR_GET(IPv4_, vector<string>) };
        inline RemovedIPWhitelist& setIPv4(const vector<string> & IPv4) { DARABONBA_PTR_SET_VALUE(IPv4_, IPv4) };
        inline RemovedIPWhitelist& setIPv4(vector<string> && IPv4) { DARABONBA_PTR_SET_RVALUE(IPv4_, IPv4) };


        // IPv6 Field Functions 
        bool hasIPv6() const { return this->IPv6_ != nullptr;};
        void deleteIPv6() { this->IPv6_ = nullptr;};
        inline const vector<string> & getIPv6() const { DARABONBA_PTR_GET_CONST(IPv6_, vector<string>) };
        inline vector<string> getIPv6() { DARABONBA_PTR_GET(IPv6_, vector<string>) };
        inline RemovedIPWhitelist& setIPv6(const vector<string> & IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };
        inline RemovedIPWhitelist& setIPv6(vector<string> && IPv6) { DARABONBA_PTR_SET_RVALUE(IPv6_, IPv6) };


      protected:
        // The IP whitelist for origin protection, specified as IPv4 addresses or CIDR blocks.
        shared_ptr<vector<string>> IPv4_ {};
        // The IP whitelist for origin protection, specified as IPv6 addresses or CIDR blocks.
        shared_ptr<vector<string>> IPv6_ {};
      };

      class NoChangeIpWhitelist : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NoChangeIpWhitelist& obj) { 
          DARABONBA_PTR_TO_JSON(IPv4, IPv4_);
          DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
        };
        friend void from_json(const Darabonba::Json& j, NoChangeIpWhitelist& obj) { 
          DARABONBA_PTR_FROM_JSON(IPv4, IPv4_);
          DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
        };
        NoChangeIpWhitelist() = default ;
        NoChangeIpWhitelist(const NoChangeIpWhitelist &) = default ;
        NoChangeIpWhitelist(NoChangeIpWhitelist &&) = default ;
        NoChangeIpWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NoChangeIpWhitelist() = default ;
        NoChangeIpWhitelist& operator=(const NoChangeIpWhitelist &) = default ;
        NoChangeIpWhitelist& operator=(NoChangeIpWhitelist &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->IPv4_ == nullptr
        && this->IPv6_ == nullptr; };
        // IPv4 Field Functions 
        bool hasIPv4() const { return this->IPv4_ != nullptr;};
        void deleteIPv4() { this->IPv4_ = nullptr;};
        inline const vector<string> & getIPv4() const { DARABONBA_PTR_GET_CONST(IPv4_, vector<string>) };
        inline vector<string> getIPv4() { DARABONBA_PTR_GET(IPv4_, vector<string>) };
        inline NoChangeIpWhitelist& setIPv4(const vector<string> & IPv4) { DARABONBA_PTR_SET_VALUE(IPv4_, IPv4) };
        inline NoChangeIpWhitelist& setIPv4(vector<string> && IPv4) { DARABONBA_PTR_SET_RVALUE(IPv4_, IPv4) };


        // IPv6 Field Functions 
        bool hasIPv6() const { return this->IPv6_ != nullptr;};
        void deleteIPv6() { this->IPv6_ = nullptr;};
        inline const vector<string> & getIPv6() const { DARABONBA_PTR_GET_CONST(IPv6_, vector<string>) };
        inline vector<string> getIPv6() { DARABONBA_PTR_GET(IPv6_, vector<string>) };
        inline NoChangeIpWhitelist& setIPv6(const vector<string> & IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };
        inline NoChangeIpWhitelist& setIPv6(vector<string> && IPv6) { DARABONBA_PTR_SET_RVALUE(IPv6_, IPv6) };


      protected:
        // The IP whitelist for origin protection, specified as IPv4 addresses or CIDR blocks.
        shared_ptr<vector<string>> IPv4_ {};
        // The IP whitelist for origin protection, specified as IPv6 addresses or CIDR blocks.
        shared_ptr<vector<string>> IPv6_ {};
      };

      class AddedIPWhitelist : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddedIPWhitelist& obj) { 
          DARABONBA_PTR_TO_JSON(IPv4, IPv4_);
          DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
        };
        friend void from_json(const Darabonba::Json& j, AddedIPWhitelist& obj) { 
          DARABONBA_PTR_FROM_JSON(IPv4, IPv4_);
          DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
        };
        AddedIPWhitelist() = default ;
        AddedIPWhitelist(const AddedIPWhitelist &) = default ;
        AddedIPWhitelist(AddedIPWhitelist &&) = default ;
        AddedIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddedIPWhitelist() = default ;
        AddedIPWhitelist& operator=(const AddedIPWhitelist &) = default ;
        AddedIPWhitelist& operator=(AddedIPWhitelist &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->IPv4_ == nullptr
        && this->IPv6_ == nullptr; };
        // IPv4 Field Functions 
        bool hasIPv4() const { return this->IPv4_ != nullptr;};
        void deleteIPv4() { this->IPv4_ = nullptr;};
        inline const vector<string> & getIPv4() const { DARABONBA_PTR_GET_CONST(IPv4_, vector<string>) };
        inline vector<string> getIPv4() { DARABONBA_PTR_GET(IPv4_, vector<string>) };
        inline AddedIPWhitelist& setIPv4(const vector<string> & IPv4) { DARABONBA_PTR_SET_VALUE(IPv4_, IPv4) };
        inline AddedIPWhitelist& setIPv4(vector<string> && IPv4) { DARABONBA_PTR_SET_RVALUE(IPv4_, IPv4) };


        // IPv6 Field Functions 
        bool hasIPv6() const { return this->IPv6_ != nullptr;};
        void deleteIPv6() { this->IPv6_ = nullptr;};
        inline const vector<string> & getIPv6() const { DARABONBA_PTR_GET_CONST(IPv6_, vector<string>) };
        inline vector<string> getIPv6() { DARABONBA_PTR_GET(IPv6_, vector<string>) };
        inline AddedIPWhitelist& setIPv6(const vector<string> & IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };
        inline AddedIPWhitelist& setIPv6(vector<string> && IPv6) { DARABONBA_PTR_SET_RVALUE(IPv6_, IPv6) };


      protected:
        // The IP whitelist for origin protection, specified as IPv4 addresses or CIDR blocks.
        shared_ptr<vector<string>> IPv4_ {};
        // The IP whitelist for origin protection, specified as IPv6 addresses or CIDR blocks.
        shared_ptr<vector<string>> IPv6_ {};
      };

      virtual bool empty() const override { return this->addedIPWhitelist_ == nullptr
        && this->noChangeIpWhitelist_ == nullptr && this->removedIPWhitelist_ == nullptr; };
      // addedIPWhitelist Field Functions 
      bool hasAddedIPWhitelist() const { return this->addedIPWhitelist_ != nullptr;};
      void deleteAddedIPWhitelist() { this->addedIPWhitelist_ = nullptr;};
      inline const DiffIPWhitelist::AddedIPWhitelist & getAddedIPWhitelist() const { DARABONBA_PTR_GET_CONST(addedIPWhitelist_, DiffIPWhitelist::AddedIPWhitelist) };
      inline DiffIPWhitelist::AddedIPWhitelist getAddedIPWhitelist() { DARABONBA_PTR_GET(addedIPWhitelist_, DiffIPWhitelist::AddedIPWhitelist) };
      inline DiffIPWhitelist& setAddedIPWhitelist(const DiffIPWhitelist::AddedIPWhitelist & addedIPWhitelist) { DARABONBA_PTR_SET_VALUE(addedIPWhitelist_, addedIPWhitelist) };
      inline DiffIPWhitelist& setAddedIPWhitelist(DiffIPWhitelist::AddedIPWhitelist && addedIPWhitelist) { DARABONBA_PTR_SET_RVALUE(addedIPWhitelist_, addedIPWhitelist) };


      // noChangeIpWhitelist Field Functions 
      bool hasNoChangeIpWhitelist() const { return this->noChangeIpWhitelist_ != nullptr;};
      void deleteNoChangeIpWhitelist() { this->noChangeIpWhitelist_ = nullptr;};
      inline const DiffIPWhitelist::NoChangeIpWhitelist & getNoChangeIpWhitelist() const { DARABONBA_PTR_GET_CONST(noChangeIpWhitelist_, DiffIPWhitelist::NoChangeIpWhitelist) };
      inline DiffIPWhitelist::NoChangeIpWhitelist getNoChangeIpWhitelist() { DARABONBA_PTR_GET(noChangeIpWhitelist_, DiffIPWhitelist::NoChangeIpWhitelist) };
      inline DiffIPWhitelist& setNoChangeIpWhitelist(const DiffIPWhitelist::NoChangeIpWhitelist & noChangeIpWhitelist) { DARABONBA_PTR_SET_VALUE(noChangeIpWhitelist_, noChangeIpWhitelist) };
      inline DiffIPWhitelist& setNoChangeIpWhitelist(DiffIPWhitelist::NoChangeIpWhitelist && noChangeIpWhitelist) { DARABONBA_PTR_SET_RVALUE(noChangeIpWhitelist_, noChangeIpWhitelist) };


      // removedIPWhitelist Field Functions 
      bool hasRemovedIPWhitelist() const { return this->removedIPWhitelist_ != nullptr;};
      void deleteRemovedIPWhitelist() { this->removedIPWhitelist_ = nullptr;};
      inline const DiffIPWhitelist::RemovedIPWhitelist & getRemovedIPWhitelist() const { DARABONBA_PTR_GET_CONST(removedIPWhitelist_, DiffIPWhitelist::RemovedIPWhitelist) };
      inline DiffIPWhitelist::RemovedIPWhitelist getRemovedIPWhitelist() { DARABONBA_PTR_GET(removedIPWhitelist_, DiffIPWhitelist::RemovedIPWhitelist) };
      inline DiffIPWhitelist& setRemovedIPWhitelist(const DiffIPWhitelist::RemovedIPWhitelist & removedIPWhitelist) { DARABONBA_PTR_SET_VALUE(removedIPWhitelist_, removedIPWhitelist) };
      inline DiffIPWhitelist& setRemovedIPWhitelist(DiffIPWhitelist::RemovedIPWhitelist && removedIPWhitelist) { DARABONBA_PTR_SET_RVALUE(removedIPWhitelist_, removedIPWhitelist) };


    protected:
      // The new IP whitelist for origin protection.
      shared_ptr<DiffIPWhitelist::AddedIPWhitelist> addedIPWhitelist_ {};
      // The IP whitelist for origin protection that remains unchanged.
      shared_ptr<DiffIPWhitelist::NoChangeIpWhitelist> noChangeIpWhitelist_ {};
      // The IP whitelist for origin protection that has been deleted.
      shared_ptr<DiffIPWhitelist::RemovedIPWhitelist> removedIPWhitelist_ {};
    };

    class CurrentIPWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CurrentIPWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(IPv4, IPv4_);
        DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
      };
      friend void from_json(const Darabonba::Json& j, CurrentIPWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(IPv4, IPv4_);
        DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
      };
      CurrentIPWhitelist() = default ;
      CurrentIPWhitelist(const CurrentIPWhitelist &) = default ;
      CurrentIPWhitelist(CurrentIPWhitelist &&) = default ;
      CurrentIPWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CurrentIPWhitelist() = default ;
      CurrentIPWhitelist& operator=(const CurrentIPWhitelist &) = default ;
      CurrentIPWhitelist& operator=(CurrentIPWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IPv4_ == nullptr
        && this->IPv6_ == nullptr; };
      // IPv4 Field Functions 
      bool hasIPv4() const { return this->IPv4_ != nullptr;};
      void deleteIPv4() { this->IPv4_ = nullptr;};
      inline const vector<string> & getIPv4() const { DARABONBA_PTR_GET_CONST(IPv4_, vector<string>) };
      inline vector<string> getIPv4() { DARABONBA_PTR_GET(IPv4_, vector<string>) };
      inline CurrentIPWhitelist& setIPv4(const vector<string> & IPv4) { DARABONBA_PTR_SET_VALUE(IPv4_, IPv4) };
      inline CurrentIPWhitelist& setIPv4(vector<string> && IPv4) { DARABONBA_PTR_SET_RVALUE(IPv4_, IPv4) };


      // IPv6 Field Functions 
      bool hasIPv6() const { return this->IPv6_ != nullptr;};
      void deleteIPv6() { this->IPv6_ = nullptr;};
      inline const vector<string> & getIPv6() const { DARABONBA_PTR_GET_CONST(IPv6_, vector<string>) };
      inline vector<string> getIPv6() { DARABONBA_PTR_GET(IPv6_, vector<string>) };
      inline CurrentIPWhitelist& setIPv6(const vector<string> & IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };
      inline CurrentIPWhitelist& setIPv6(vector<string> && IPv6) { DARABONBA_PTR_SET_RVALUE(IPv6_, IPv6) };


    protected:
      // The IP whitelist for origin protection used by the website, specified as IPv4 addresses or CIDR blocks.
      shared_ptr<vector<string>> IPv4_ {};
      // The IP whitelist for origin protection used by the website, specified as IPv6 addresses or CIDR blocks.
      shared_ptr<vector<string>> IPv6_ {};
    };

    virtual bool empty() const override { return this->autoConfirmIPList_ == nullptr
        && this->currentIPWhitelist_ == nullptr && this->diffIPWhitelist_ == nullptr && this->latestIPWhitelist_ == nullptr && this->needUpdate_ == nullptr && this->originConverge_ == nullptr
        && this->originProtection_ == nullptr && this->regionalCurrentIPWhitelist_ == nullptr && this->regionalDiffIPWhitelist_ == nullptr && this->regionalLatestIPWhitelist_ == nullptr && this->requestId_ == nullptr
        && this->siteId_ == nullptr; };
    // autoConfirmIPList Field Functions 
    bool hasAutoConfirmIPList() const { return this->autoConfirmIPList_ != nullptr;};
    void deleteAutoConfirmIPList() { this->autoConfirmIPList_ = nullptr;};
    inline string getAutoConfirmIPList() const { DARABONBA_PTR_GET_DEFAULT(autoConfirmIPList_, "") };
    inline GetOriginProtectionResponseBody& setAutoConfirmIPList(string autoConfirmIPList) { DARABONBA_PTR_SET_VALUE(autoConfirmIPList_, autoConfirmIPList) };


    // currentIPWhitelist Field Functions 
    bool hasCurrentIPWhitelist() const { return this->currentIPWhitelist_ != nullptr;};
    void deleteCurrentIPWhitelist() { this->currentIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBody::CurrentIPWhitelist & getCurrentIPWhitelist() const { DARABONBA_PTR_GET_CONST(currentIPWhitelist_, GetOriginProtectionResponseBody::CurrentIPWhitelist) };
    inline GetOriginProtectionResponseBody::CurrentIPWhitelist getCurrentIPWhitelist() { DARABONBA_PTR_GET(currentIPWhitelist_, GetOriginProtectionResponseBody::CurrentIPWhitelist) };
    inline GetOriginProtectionResponseBody& setCurrentIPWhitelist(const GetOriginProtectionResponseBody::CurrentIPWhitelist & currentIPWhitelist) { DARABONBA_PTR_SET_VALUE(currentIPWhitelist_, currentIPWhitelist) };
    inline GetOriginProtectionResponseBody& setCurrentIPWhitelist(GetOriginProtectionResponseBody::CurrentIPWhitelist && currentIPWhitelist) { DARABONBA_PTR_SET_RVALUE(currentIPWhitelist_, currentIPWhitelist) };


    // diffIPWhitelist Field Functions 
    bool hasDiffIPWhitelist() const { return this->diffIPWhitelist_ != nullptr;};
    void deleteDiffIPWhitelist() { this->diffIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBody::DiffIPWhitelist & getDiffIPWhitelist() const { DARABONBA_PTR_GET_CONST(diffIPWhitelist_, GetOriginProtectionResponseBody::DiffIPWhitelist) };
    inline GetOriginProtectionResponseBody::DiffIPWhitelist getDiffIPWhitelist() { DARABONBA_PTR_GET(diffIPWhitelist_, GetOriginProtectionResponseBody::DiffIPWhitelist) };
    inline GetOriginProtectionResponseBody& setDiffIPWhitelist(const GetOriginProtectionResponseBody::DiffIPWhitelist & diffIPWhitelist) { DARABONBA_PTR_SET_VALUE(diffIPWhitelist_, diffIPWhitelist) };
    inline GetOriginProtectionResponseBody& setDiffIPWhitelist(GetOriginProtectionResponseBody::DiffIPWhitelist && diffIPWhitelist) { DARABONBA_PTR_SET_RVALUE(diffIPWhitelist_, diffIPWhitelist) };


    // latestIPWhitelist Field Functions 
    bool hasLatestIPWhitelist() const { return this->latestIPWhitelist_ != nullptr;};
    void deleteLatestIPWhitelist() { this->latestIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBody::LatestIPWhitelist & getLatestIPWhitelist() const { DARABONBA_PTR_GET_CONST(latestIPWhitelist_, GetOriginProtectionResponseBody::LatestIPWhitelist) };
    inline GetOriginProtectionResponseBody::LatestIPWhitelist getLatestIPWhitelist() { DARABONBA_PTR_GET(latestIPWhitelist_, GetOriginProtectionResponseBody::LatestIPWhitelist) };
    inline GetOriginProtectionResponseBody& setLatestIPWhitelist(const GetOriginProtectionResponseBody::LatestIPWhitelist & latestIPWhitelist) { DARABONBA_PTR_SET_VALUE(latestIPWhitelist_, latestIPWhitelist) };
    inline GetOriginProtectionResponseBody& setLatestIPWhitelist(GetOriginProtectionResponseBody::LatestIPWhitelist && latestIPWhitelist) { DARABONBA_PTR_SET_RVALUE(latestIPWhitelist_, latestIPWhitelist) };


    // needUpdate Field Functions 
    bool hasNeedUpdate() const { return this->needUpdate_ != nullptr;};
    void deleteNeedUpdate() { this->needUpdate_ = nullptr;};
    inline bool getNeedUpdate() const { DARABONBA_PTR_GET_DEFAULT(needUpdate_, false) };
    inline GetOriginProtectionResponseBody& setNeedUpdate(bool needUpdate) { DARABONBA_PTR_SET_VALUE(needUpdate_, needUpdate) };


    // originConverge Field Functions 
    bool hasOriginConverge() const { return this->originConverge_ != nullptr;};
    void deleteOriginConverge() { this->originConverge_ = nullptr;};
    inline string getOriginConverge() const { DARABONBA_PTR_GET_DEFAULT(originConverge_, "") };
    inline GetOriginProtectionResponseBody& setOriginConverge(string originConverge) { DARABONBA_PTR_SET_VALUE(originConverge_, originConverge) };


    // originProtection Field Functions 
    bool hasOriginProtection() const { return this->originProtection_ != nullptr;};
    void deleteOriginProtection() { this->originProtection_ = nullptr;};
    inline string getOriginProtection() const { DARABONBA_PTR_GET_DEFAULT(originProtection_, "") };
    inline GetOriginProtectionResponseBody& setOriginProtection(string originProtection) { DARABONBA_PTR_SET_VALUE(originProtection_, originProtection) };


    // regionalCurrentIPWhitelist Field Functions 
    bool hasRegionalCurrentIPWhitelist() const { return this->regionalCurrentIPWhitelist_ != nullptr;};
    void deleteRegionalCurrentIPWhitelist() { this->regionalCurrentIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBody::RegionalCurrentIPWhitelist & getRegionalCurrentIPWhitelist() const { DARABONBA_PTR_GET_CONST(regionalCurrentIPWhitelist_, GetOriginProtectionResponseBody::RegionalCurrentIPWhitelist) };
    inline GetOriginProtectionResponseBody::RegionalCurrentIPWhitelist getRegionalCurrentIPWhitelist() { DARABONBA_PTR_GET(regionalCurrentIPWhitelist_, GetOriginProtectionResponseBody::RegionalCurrentIPWhitelist) };
    inline GetOriginProtectionResponseBody& setRegionalCurrentIPWhitelist(const GetOriginProtectionResponseBody::RegionalCurrentIPWhitelist & regionalCurrentIPWhitelist) { DARABONBA_PTR_SET_VALUE(regionalCurrentIPWhitelist_, regionalCurrentIPWhitelist) };
    inline GetOriginProtectionResponseBody& setRegionalCurrentIPWhitelist(GetOriginProtectionResponseBody::RegionalCurrentIPWhitelist && regionalCurrentIPWhitelist) { DARABONBA_PTR_SET_RVALUE(regionalCurrentIPWhitelist_, regionalCurrentIPWhitelist) };


    // regionalDiffIPWhitelist Field Functions 
    bool hasRegionalDiffIPWhitelist() const { return this->regionalDiffIPWhitelist_ != nullptr;};
    void deleteRegionalDiffIPWhitelist() { this->regionalDiffIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBody::RegionalDiffIPWhitelist & getRegionalDiffIPWhitelist() const { DARABONBA_PTR_GET_CONST(regionalDiffIPWhitelist_, GetOriginProtectionResponseBody::RegionalDiffIPWhitelist) };
    inline GetOriginProtectionResponseBody::RegionalDiffIPWhitelist getRegionalDiffIPWhitelist() { DARABONBA_PTR_GET(regionalDiffIPWhitelist_, GetOriginProtectionResponseBody::RegionalDiffIPWhitelist) };
    inline GetOriginProtectionResponseBody& setRegionalDiffIPWhitelist(const GetOriginProtectionResponseBody::RegionalDiffIPWhitelist & regionalDiffIPWhitelist) { DARABONBA_PTR_SET_VALUE(regionalDiffIPWhitelist_, regionalDiffIPWhitelist) };
    inline GetOriginProtectionResponseBody& setRegionalDiffIPWhitelist(GetOriginProtectionResponseBody::RegionalDiffIPWhitelist && regionalDiffIPWhitelist) { DARABONBA_PTR_SET_RVALUE(regionalDiffIPWhitelist_, regionalDiffIPWhitelist) };


    // regionalLatestIPWhitelist Field Functions 
    bool hasRegionalLatestIPWhitelist() const { return this->regionalLatestIPWhitelist_ != nullptr;};
    void deleteRegionalLatestIPWhitelist() { this->regionalLatestIPWhitelist_ = nullptr;};
    inline const GetOriginProtectionResponseBody::RegionalLatestIPWhitelist & getRegionalLatestIPWhitelist() const { DARABONBA_PTR_GET_CONST(regionalLatestIPWhitelist_, GetOriginProtectionResponseBody::RegionalLatestIPWhitelist) };
    inline GetOriginProtectionResponseBody::RegionalLatestIPWhitelist getRegionalLatestIPWhitelist() { DARABONBA_PTR_GET(regionalLatestIPWhitelist_, GetOriginProtectionResponseBody::RegionalLatestIPWhitelist) };
    inline GetOriginProtectionResponseBody& setRegionalLatestIPWhitelist(const GetOriginProtectionResponseBody::RegionalLatestIPWhitelist & regionalLatestIPWhitelist) { DARABONBA_PTR_SET_VALUE(regionalLatestIPWhitelist_, regionalLatestIPWhitelist) };
    inline GetOriginProtectionResponseBody& setRegionalLatestIPWhitelist(GetOriginProtectionResponseBody::RegionalLatestIPWhitelist && regionalLatestIPWhitelist) { DARABONBA_PTR_SET_RVALUE(regionalLatestIPWhitelist_, regionalLatestIPWhitelist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOriginProtectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetOriginProtectionResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    shared_ptr<string> autoConfirmIPList_ {};
    // The IP whitelist for origin protection used by the website.
    shared_ptr<GetOriginProtectionResponseBody::CurrentIPWhitelist> currentIPWhitelist_ {};
    // The IP whitelist for origin protection that has been updated.
    shared_ptr<GetOriginProtectionResponseBody::DiffIPWhitelist> diffIPWhitelist_ {};
    // The latest IP whitelist for origin protection.
    shared_ptr<GetOriginProtectionResponseBody::LatestIPWhitelist> latestIPWhitelist_ {};
    // Indicates whether the IP whitelist for origin protection needs to be updated. If the currently used IP whitelist is different from the latest IP whitelist, it needs to be updated, and the value is true.
    // 
    // *   true: The update is required.
    // *   false: No update is required.
    shared_ptr<bool> needUpdate_ {};
    // Indicates whether IP convergence is enabled.
    // 
    // *   on
    // *   off
    shared_ptr<string> originConverge_ {};
    // Indicates whether origin protection is enabled.
    // 
    // *   on
    // *   off
    shared_ptr<string> originProtection_ {};
    shared_ptr<GetOriginProtectionResponseBody::RegionalCurrentIPWhitelist> regionalCurrentIPWhitelist_ {};
    shared_ptr<GetOriginProtectionResponseBody::RegionalDiffIPWhitelist> regionalDiffIPWhitelist_ {};
    shared_ptr<GetOriginProtectionResponseBody::RegionalLatestIPWhitelist> regionalLatestIPWhitelist_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The website ID.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
