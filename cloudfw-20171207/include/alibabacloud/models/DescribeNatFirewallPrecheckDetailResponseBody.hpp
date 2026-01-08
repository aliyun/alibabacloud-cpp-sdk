// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILRESPONSEBODY_HPP_
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
  class DescribeNatFirewallPrecheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallPrecheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsFound, isFound_);
      DARABONBA_PTR_TO_JSON(PrecheckDetail, precheckDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallPrecheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsFound, isFound_);
      DARABONBA_PTR_FROM_JSON(PrecheckDetail, precheckDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatFirewallPrecheckDetailResponseBody() = default ;
    DescribeNatFirewallPrecheckDetailResponseBody(const DescribeNatFirewallPrecheckDetailResponseBody &) = default ;
    DescribeNatFirewallPrecheckDetailResponseBody(DescribeNatFirewallPrecheckDetailResponseBody &&) = default ;
    DescribeNatFirewallPrecheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallPrecheckDetailResponseBody() = default ;
    DescribeNatFirewallPrecheckDetailResponseBody& operator=(const DescribeNatFirewallPrecheckDetailResponseBody &) = default ;
    DescribeNatFirewallPrecheckDetailResponseBody& operator=(DescribeNatFirewallPrecheckDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrecheckDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrecheckDetail& obj) { 
        DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
        DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
        DARABONBA_PTR_TO_JSON(PrecheckEntityGroups, precheckEntityGroups_);
        DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_TO_JSON(PrecheckTimestamp, precheckTimestamp_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      };
      friend void from_json(const Darabonba::Json& j, PrecheckDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
        DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
        DARABONBA_PTR_FROM_JSON(PrecheckEntityGroups, precheckEntityGroups_);
        DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_FROM_JSON(PrecheckTimestamp, precheckTimestamp_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      };
      PrecheckDetail() = default ;
      PrecheckDetail(const PrecheckDetail &) = default ;
      PrecheckDetail(PrecheckDetail &&) = default ;
      PrecheckDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrecheckDetail() = default ;
      PrecheckDetail& operator=(const PrecheckDetail &) = default ;
      PrecheckDetail& operator=(PrecheckDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrecheckEntityGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrecheckEntityGroups& obj) { 
          DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PrecheckEntities, precheckEntities_);
          DARABONBA_PTR_TO_JSON(PrecheckEntityGroupStatus, precheckEntityGroupStatus_);
        };
        friend void from_json(const Darabonba::Json& j, PrecheckEntityGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PrecheckEntities, precheckEntities_);
          DARABONBA_PTR_FROM_JSON(PrecheckEntityGroupStatus, precheckEntityGroupStatus_);
        };
        PrecheckEntityGroups() = default ;
        PrecheckEntityGroups(const PrecheckEntityGroups &) = default ;
        PrecheckEntityGroups(PrecheckEntityGroups &&) = default ;
        PrecheckEntityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrecheckEntityGroups() = default ;
        PrecheckEntityGroups& operator=(const PrecheckEntityGroups &) = default ;
        PrecheckEntityGroups& operator=(PrecheckEntityGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PrecheckEntities : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrecheckEntities& obj) { 
            DARABONBA_PTR_TO_JSON(Info, info_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          };
          friend void from_json(const Darabonba::Json& j, PrecheckEntities& obj) { 
            DARABONBA_PTR_FROM_JSON(Info, info_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
          };
          PrecheckEntities() = default ;
          PrecheckEntities(const PrecheckEntities &) = default ;
          PrecheckEntities(PrecheckEntities &&) = default ;
          PrecheckEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrecheckEntities() = default ;
          PrecheckEntities& operator=(const PrecheckEntities &) = default ;
          PrecheckEntities& operator=(PrecheckEntities &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->info_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr && this->suggestion_ == nullptr; };
          // info Field Functions 
          bool hasInfo() const { return this->info_ != nullptr;};
          void deleteInfo() { this->info_ = nullptr;};
          inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
          inline PrecheckEntities& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline PrecheckEntities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline PrecheckEntities& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline PrecheckEntities& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        protected:
          shared_ptr<string> info_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> suggestion_ {};
        };

        virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->name_ == nullptr && this->precheckEntities_ == nullptr && this->precheckEntityGroupStatus_ == nullptr; };
        // failedCount Field Functions 
        bool hasFailedCount() const { return this->failedCount_ != nullptr;};
        void deleteFailedCount() { this->failedCount_ = nullptr;};
        inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
        inline PrecheckEntityGroups& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PrecheckEntityGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // precheckEntities Field Functions 
        bool hasPrecheckEntities() const { return this->precheckEntities_ != nullptr;};
        void deletePrecheckEntities() { this->precheckEntities_ = nullptr;};
        inline const vector<PrecheckEntityGroups::PrecheckEntities> & getPrecheckEntities() const { DARABONBA_PTR_GET_CONST(precheckEntities_, vector<PrecheckEntityGroups::PrecheckEntities>) };
        inline vector<PrecheckEntityGroups::PrecheckEntities> getPrecheckEntities() { DARABONBA_PTR_GET(precheckEntities_, vector<PrecheckEntityGroups::PrecheckEntities>) };
        inline PrecheckEntityGroups& setPrecheckEntities(const vector<PrecheckEntityGroups::PrecheckEntities> & precheckEntities) { DARABONBA_PTR_SET_VALUE(precheckEntities_, precheckEntities) };
        inline PrecheckEntityGroups& setPrecheckEntities(vector<PrecheckEntityGroups::PrecheckEntities> && precheckEntities) { DARABONBA_PTR_SET_RVALUE(precheckEntities_, precheckEntities) };


        // precheckEntityGroupStatus Field Functions 
        bool hasPrecheckEntityGroupStatus() const { return this->precheckEntityGroupStatus_ != nullptr;};
        void deletePrecheckEntityGroupStatus() { this->precheckEntityGroupStatus_ = nullptr;};
        inline string getPrecheckEntityGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(precheckEntityGroupStatus_, "") };
        inline PrecheckEntityGroups& setPrecheckEntityGroupStatus(string precheckEntityGroupStatus) { DARABONBA_PTR_SET_VALUE(precheckEntityGroupStatus_, precheckEntityGroupStatus) };


      protected:
        shared_ptr<int32_t> failedCount_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<PrecheckEntityGroups::PrecheckEntities>> precheckEntities_ {};
        shared_ptr<string> precheckEntityGroupStatus_ {};
      };

      virtual bool empty() const override { return this->firewallId_ == nullptr
        && this->networkInstanceId_ == nullptr && this->precheckEntityGroups_ == nullptr && this->precheckStatus_ == nullptr && this->precheckTimestamp_ == nullptr && this->regionNo_ == nullptr; };
      // firewallId Field Functions 
      bool hasFirewallId() const { return this->firewallId_ != nullptr;};
      void deleteFirewallId() { this->firewallId_ = nullptr;};
      inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
      inline PrecheckDetail& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


      // networkInstanceId Field Functions 
      bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
      void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
      inline string getNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
      inline PrecheckDetail& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


      // precheckEntityGroups Field Functions 
      bool hasPrecheckEntityGroups() const { return this->precheckEntityGroups_ != nullptr;};
      void deletePrecheckEntityGroups() { this->precheckEntityGroups_ = nullptr;};
      inline const vector<PrecheckDetail::PrecheckEntityGroups> & getPrecheckEntityGroups() const { DARABONBA_PTR_GET_CONST(precheckEntityGroups_, vector<PrecheckDetail::PrecheckEntityGroups>) };
      inline vector<PrecheckDetail::PrecheckEntityGroups> getPrecheckEntityGroups() { DARABONBA_PTR_GET(precheckEntityGroups_, vector<PrecheckDetail::PrecheckEntityGroups>) };
      inline PrecheckDetail& setPrecheckEntityGroups(const vector<PrecheckDetail::PrecheckEntityGroups> & precheckEntityGroups) { DARABONBA_PTR_SET_VALUE(precheckEntityGroups_, precheckEntityGroups) };
      inline PrecheckDetail& setPrecheckEntityGroups(vector<PrecheckDetail::PrecheckEntityGroups> && precheckEntityGroups) { DARABONBA_PTR_SET_RVALUE(precheckEntityGroups_, precheckEntityGroups) };


      // precheckStatus Field Functions 
      bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
      void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
      inline string getPrecheckStatus() const { DARABONBA_PTR_GET_DEFAULT(precheckStatus_, "") };
      inline PrecheckDetail& setPrecheckStatus(string precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };


      // precheckTimestamp Field Functions 
      bool hasPrecheckTimestamp() const { return this->precheckTimestamp_ != nullptr;};
      void deletePrecheckTimestamp() { this->precheckTimestamp_ = nullptr;};
      inline string getPrecheckTimestamp() const { DARABONBA_PTR_GET_DEFAULT(precheckTimestamp_, "") };
      inline PrecheckDetail& setPrecheckTimestamp(string precheckTimestamp) { DARABONBA_PTR_SET_VALUE(precheckTimestamp_, precheckTimestamp) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline PrecheckDetail& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    protected:
      shared_ptr<string> firewallId_ {};
      shared_ptr<string> networkInstanceId_ {};
      shared_ptr<vector<PrecheckDetail::PrecheckEntityGroups>> precheckEntityGroups_ {};
      shared_ptr<string> precheckStatus_ {};
      shared_ptr<string> precheckTimestamp_ {};
      shared_ptr<string> regionNo_ {};
    };

    virtual bool empty() const override { return this->isFound_ == nullptr
        && this->precheckDetail_ == nullptr && this->requestId_ == nullptr; };
    // isFound Field Functions 
    bool hasIsFound() const { return this->isFound_ != nullptr;};
    void deleteIsFound() { this->isFound_ = nullptr;};
    inline bool getIsFound() const { DARABONBA_PTR_GET_DEFAULT(isFound_, false) };
    inline DescribeNatFirewallPrecheckDetailResponseBody& setIsFound(bool isFound) { DARABONBA_PTR_SET_VALUE(isFound_, isFound) };


    // precheckDetail Field Functions 
    bool hasPrecheckDetail() const { return this->precheckDetail_ != nullptr;};
    void deletePrecheckDetail() { this->precheckDetail_ = nullptr;};
    inline const DescribeNatFirewallPrecheckDetailResponseBody::PrecheckDetail & getPrecheckDetail() const { DARABONBA_PTR_GET_CONST(precheckDetail_, DescribeNatFirewallPrecheckDetailResponseBody::PrecheckDetail) };
    inline DescribeNatFirewallPrecheckDetailResponseBody::PrecheckDetail getPrecheckDetail() { DARABONBA_PTR_GET(precheckDetail_, DescribeNatFirewallPrecheckDetailResponseBody::PrecheckDetail) };
    inline DescribeNatFirewallPrecheckDetailResponseBody& setPrecheckDetail(const DescribeNatFirewallPrecheckDetailResponseBody::PrecheckDetail & precheckDetail) { DARABONBA_PTR_SET_VALUE(precheckDetail_, precheckDetail) };
    inline DescribeNatFirewallPrecheckDetailResponseBody& setPrecheckDetail(DescribeNatFirewallPrecheckDetailResponseBody::PrecheckDetail && precheckDetail) { DARABONBA_PTR_SET_RVALUE(precheckDetail_, precheckDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> isFound_ {};
    shared_ptr<DescribeNatFirewallPrecheckDetailResponseBody::PrecheckDetail> precheckDetail_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
