// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFICESITEOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFICESITEOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListOfficeSiteOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfficeSiteOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteOverviewResults, officeSiteOverviewResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfficeSiteOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteOverviewResults, officeSiteOverviewResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOfficeSiteOverviewResponseBody() = default ;
    ListOfficeSiteOverviewResponseBody(const ListOfficeSiteOverviewResponseBody &) = default ;
    ListOfficeSiteOverviewResponseBody(ListOfficeSiteOverviewResponseBody &&) = default ;
    ListOfficeSiteOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfficeSiteOverviewResponseBody() = default ;
    ListOfficeSiteOverviewResponseBody& operator=(const ListOfficeSiteOverviewResponseBody &) = default ;
    ListOfficeSiteOverviewResponseBody& operator=(ListOfficeSiteOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OfficeSiteOverviewResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OfficeSiteOverviewResults& obj) { 
        DARABONBA_PTR_TO_JSON(HasExpiredEdsCount, hasExpiredEdsCount_);
        DARABONBA_PTR_TO_JSON(HasExpiredEdsCountForGroup, hasExpiredEdsCountForGroup_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteStatus, officeSiteStatus_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RunningEdsCount, runningEdsCount_);
        DARABONBA_PTR_TO_JSON(RunningEdsCountForGroup, runningEdsCountForGroup_);
        DARABONBA_PTR_TO_JSON(TotalEdsCount, totalEdsCount_);
        DARABONBA_PTR_TO_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
        DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
        DARABONBA_PTR_TO_JSON(WillExpiredEdsCount, willExpiredEdsCount_);
        DARABONBA_PTR_TO_JSON(WillExpiredEdsCountForGroup, willExpiredEdsCountForGroup_);
      };
      friend void from_json(const Darabonba::Json& j, OfficeSiteOverviewResults& obj) { 
        DARABONBA_PTR_FROM_JSON(HasExpiredEdsCount, hasExpiredEdsCount_);
        DARABONBA_PTR_FROM_JSON(HasExpiredEdsCountForGroup, hasExpiredEdsCountForGroup_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteStatus, officeSiteStatus_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RunningEdsCount, runningEdsCount_);
        DARABONBA_PTR_FROM_JSON(RunningEdsCountForGroup, runningEdsCountForGroup_);
        DARABONBA_PTR_FROM_JSON(TotalEdsCount, totalEdsCount_);
        DARABONBA_PTR_FROM_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
        DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
        DARABONBA_PTR_FROM_JSON(WillExpiredEdsCount, willExpiredEdsCount_);
        DARABONBA_PTR_FROM_JSON(WillExpiredEdsCountForGroup, willExpiredEdsCountForGroup_);
      };
      OfficeSiteOverviewResults() = default ;
      OfficeSiteOverviewResults(const OfficeSiteOverviewResults &) = default ;
      OfficeSiteOverviewResults(OfficeSiteOverviewResults &&) = default ;
      OfficeSiteOverviewResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OfficeSiteOverviewResults() = default ;
      OfficeSiteOverviewResults& operator=(const OfficeSiteOverviewResults &) = default ;
      OfficeSiteOverviewResults& operator=(OfficeSiteOverviewResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasExpiredEdsCount_ == nullptr
        && this->hasExpiredEdsCountForGroup_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->officeSiteStatus_ == nullptr && this->regionId_ == nullptr
        && this->runningEdsCount_ == nullptr && this->runningEdsCountForGroup_ == nullptr && this->totalEdsCount_ == nullptr && this->totalEdsCountForGroup_ == nullptr && this->vpcType_ == nullptr
        && this->willExpiredEdsCount_ == nullptr && this->willExpiredEdsCountForGroup_ == nullptr; };
      // hasExpiredEdsCount Field Functions 
      bool hasHasExpiredEdsCount() const { return this->hasExpiredEdsCount_ != nullptr;};
      void deleteHasExpiredEdsCount() { this->hasExpiredEdsCount_ = nullptr;};
      inline int32_t getHasExpiredEdsCount() const { DARABONBA_PTR_GET_DEFAULT(hasExpiredEdsCount_, 0) };
      inline OfficeSiteOverviewResults& setHasExpiredEdsCount(int32_t hasExpiredEdsCount) { DARABONBA_PTR_SET_VALUE(hasExpiredEdsCount_, hasExpiredEdsCount) };


      // hasExpiredEdsCountForGroup Field Functions 
      bool hasHasExpiredEdsCountForGroup() const { return this->hasExpiredEdsCountForGroup_ != nullptr;};
      void deleteHasExpiredEdsCountForGroup() { this->hasExpiredEdsCountForGroup_ = nullptr;};
      inline int32_t getHasExpiredEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(hasExpiredEdsCountForGroup_, 0) };
      inline OfficeSiteOverviewResults& setHasExpiredEdsCountForGroup(int32_t hasExpiredEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(hasExpiredEdsCountForGroup_, hasExpiredEdsCountForGroup) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline OfficeSiteOverviewResults& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline OfficeSiteOverviewResults& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteStatus Field Functions 
      bool hasOfficeSiteStatus() const { return this->officeSiteStatus_ != nullptr;};
      void deleteOfficeSiteStatus() { this->officeSiteStatus_ = nullptr;};
      inline string getOfficeSiteStatus() const { DARABONBA_PTR_GET_DEFAULT(officeSiteStatus_, "") };
      inline OfficeSiteOverviewResults& setOfficeSiteStatus(string officeSiteStatus) { DARABONBA_PTR_SET_VALUE(officeSiteStatus_, officeSiteStatus) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline OfficeSiteOverviewResults& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // runningEdsCount Field Functions 
      bool hasRunningEdsCount() const { return this->runningEdsCount_ != nullptr;};
      void deleteRunningEdsCount() { this->runningEdsCount_ = nullptr;};
      inline int32_t getRunningEdsCount() const { DARABONBA_PTR_GET_DEFAULT(runningEdsCount_, 0) };
      inline OfficeSiteOverviewResults& setRunningEdsCount(int32_t runningEdsCount) { DARABONBA_PTR_SET_VALUE(runningEdsCount_, runningEdsCount) };


      // runningEdsCountForGroup Field Functions 
      bool hasRunningEdsCountForGroup() const { return this->runningEdsCountForGroup_ != nullptr;};
      void deleteRunningEdsCountForGroup() { this->runningEdsCountForGroup_ = nullptr;};
      inline int32_t getRunningEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(runningEdsCountForGroup_, 0) };
      inline OfficeSiteOverviewResults& setRunningEdsCountForGroup(int32_t runningEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(runningEdsCountForGroup_, runningEdsCountForGroup) };


      // totalEdsCount Field Functions 
      bool hasTotalEdsCount() const { return this->totalEdsCount_ != nullptr;};
      void deleteTotalEdsCount() { this->totalEdsCount_ = nullptr;};
      inline int32_t getTotalEdsCount() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCount_, 0) };
      inline OfficeSiteOverviewResults& setTotalEdsCount(int32_t totalEdsCount) { DARABONBA_PTR_SET_VALUE(totalEdsCount_, totalEdsCount) };


      // totalEdsCountForGroup Field Functions 
      bool hasTotalEdsCountForGroup() const { return this->totalEdsCountForGroup_ != nullptr;};
      void deleteTotalEdsCountForGroup() { this->totalEdsCountForGroup_ = nullptr;};
      inline int32_t getTotalEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCountForGroup_, 0) };
      inline OfficeSiteOverviewResults& setTotalEdsCountForGroup(int32_t totalEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(totalEdsCountForGroup_, totalEdsCountForGroup) };


      // vpcType Field Functions 
      bool hasVpcType() const { return this->vpcType_ != nullptr;};
      void deleteVpcType() { this->vpcType_ = nullptr;};
      inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
      inline OfficeSiteOverviewResults& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


      // willExpiredEdsCount Field Functions 
      bool hasWillExpiredEdsCount() const { return this->willExpiredEdsCount_ != nullptr;};
      void deleteWillExpiredEdsCount() { this->willExpiredEdsCount_ = nullptr;};
      inline int32_t getWillExpiredEdsCount() const { DARABONBA_PTR_GET_DEFAULT(willExpiredEdsCount_, 0) };
      inline OfficeSiteOverviewResults& setWillExpiredEdsCount(int32_t willExpiredEdsCount) { DARABONBA_PTR_SET_VALUE(willExpiredEdsCount_, willExpiredEdsCount) };


      // willExpiredEdsCountForGroup Field Functions 
      bool hasWillExpiredEdsCountForGroup() const { return this->willExpiredEdsCountForGroup_ != nullptr;};
      void deleteWillExpiredEdsCountForGroup() { this->willExpiredEdsCountForGroup_ = nullptr;};
      inline int32_t getWillExpiredEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(willExpiredEdsCountForGroup_, 0) };
      inline OfficeSiteOverviewResults& setWillExpiredEdsCountForGroup(int32_t willExpiredEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(willExpiredEdsCountForGroup_, willExpiredEdsCountForGroup) };


    protected:
      // The number of expired cloud computers in the office network.
      shared_ptr<int32_t> hasExpiredEdsCount_ {};
      // The number of expired cloud computers in the cloud computer pool.
      shared_ptr<int32_t> hasExpiredEdsCountForGroup_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The office network name.
      shared_ptr<string> officeSiteName_ {};
      // The office network status.
      // 
      // Default values:
      // 
      // *   CONFIGUSERFAILED
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   REGISTERING
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   REGISTERED
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NEEDCONFIGTRUST
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   CONFIGUSERING
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   CONFIGTRUSTFAILED
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   ERROR
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   CONFIGTRUSTING
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NEEDCONFIGUSER
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> officeSiteStatus_ {};
      // The ID of the region where the office network resides.
      shared_ptr<string> regionId_ {};
      // The number of cloud computers that are running in the office network.
      shared_ptr<int32_t> runningEdsCount_ {};
      // The number of running cloud computers in the cloud computer pool.
      shared_ptr<int32_t> runningEdsCountForGroup_ {};
      // The total number of cloud computers in the office network.
      shared_ptr<int32_t> totalEdsCount_ {};
      // The total number of cloud computers in the cloud computer pool.
      shared_ptr<int32_t> totalEdsCountForGroup_ {};
      // The office network type and its suitable VPC type.
      // 
      // Valid values:
      // 
      // *   standard (default): standard, exclusive VPC
      // *   customized: custom, user VPC
      // *   basic: basic, shared VPC
      shared_ptr<string> vpcType_ {};
      // The number of cloud computers that are about to expire in the office network.
      shared_ptr<int32_t> willExpiredEdsCount_ {};
      // The number of cloud computers that are about to expire in the cloud computer pool.
      shared_ptr<int32_t> willExpiredEdsCountForGroup_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->officeSiteOverviewResults_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOfficeSiteOverviewResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteOverviewResults Field Functions 
    bool hasOfficeSiteOverviewResults() const { return this->officeSiteOverviewResults_ != nullptr;};
    void deleteOfficeSiteOverviewResults() { this->officeSiteOverviewResults_ = nullptr;};
    inline const vector<ListOfficeSiteOverviewResponseBody::OfficeSiteOverviewResults> & getOfficeSiteOverviewResults() const { DARABONBA_PTR_GET_CONST(officeSiteOverviewResults_, vector<ListOfficeSiteOverviewResponseBody::OfficeSiteOverviewResults>) };
    inline vector<ListOfficeSiteOverviewResponseBody::OfficeSiteOverviewResults> getOfficeSiteOverviewResults() { DARABONBA_PTR_GET(officeSiteOverviewResults_, vector<ListOfficeSiteOverviewResponseBody::OfficeSiteOverviewResults>) };
    inline ListOfficeSiteOverviewResponseBody& setOfficeSiteOverviewResults(const vector<ListOfficeSiteOverviewResponseBody::OfficeSiteOverviewResults> & officeSiteOverviewResults) { DARABONBA_PTR_SET_VALUE(officeSiteOverviewResults_, officeSiteOverviewResults) };
    inline ListOfficeSiteOverviewResponseBody& setOfficeSiteOverviewResults(vector<ListOfficeSiteOverviewResponseBody::OfficeSiteOverviewResults> && officeSiteOverviewResults) { DARABONBA_PTR_SET_RVALUE(officeSiteOverviewResults_, officeSiteOverviewResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOfficeSiteOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The token that is used to start the next query. If this parameter is empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The office network information.
    shared_ptr<vector<ListOfficeSiteOverviewResponseBody::OfficeSiteOverviewResults>> officeSiteOverviewResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
