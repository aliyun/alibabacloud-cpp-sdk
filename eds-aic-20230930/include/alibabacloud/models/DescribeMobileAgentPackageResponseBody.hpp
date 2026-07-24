// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOBILEAGENTPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOBILEAGENTPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMobileAgentPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMobileAgentPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PackageList, packageList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMobileAgentPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PackageList, packageList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMobileAgentPackageResponseBody() = default ;
    DescribeMobileAgentPackageResponseBody(const DescribeMobileAgentPackageResponseBody &) = default ;
    DescribeMobileAgentPackageResponseBody(DescribeMobileAgentPackageResponseBody &&) = default ;
    DescribeMobileAgentPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMobileAgentPackageResponseBody() = default ;
    DescribeMobileAgentPackageResponseBody& operator=(const DescribeMobileAgentPackageResponseBody &) = default ;
    DescribeMobileAgentPackageResponseBody& operator=(DescribeMobileAgentPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PackageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PackageList& obj) { 
        DARABONBA_PTR_TO_JSON(ExpiredAt, expiredAt_);
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(PackageCredit, packageCredit_);
        DARABONBA_PTR_TO_JSON(PackageId, packageId_);
        DARABONBA_PTR_TO_JSON(PackageSpec, packageSpec_);
        DARABONBA_PTR_TO_JSON(PackageSpecName, packageSpecName_);
        DARABONBA_PTR_TO_JSON(PackageStatus, packageStatus_);
        DARABONBA_PTR_TO_JSON(PeriodEndTime, periodEndTime_);
        DARABONBA_PTR_TO_JSON(PeriodStartTime, periodStartTime_);
        DARABONBA_PTR_TO_JSON(UsedCredit, usedCredit_);
      };
      friend void from_json(const Darabonba::Json& j, PackageList& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpiredAt, expiredAt_);
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(PackageCredit, packageCredit_);
        DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
        DARABONBA_PTR_FROM_JSON(PackageSpec, packageSpec_);
        DARABONBA_PTR_FROM_JSON(PackageSpecName, packageSpecName_);
        DARABONBA_PTR_FROM_JSON(PackageStatus, packageStatus_);
        DARABONBA_PTR_FROM_JSON(PeriodEndTime, periodEndTime_);
        DARABONBA_PTR_FROM_JSON(PeriodStartTime, periodStartTime_);
        DARABONBA_PTR_FROM_JSON(UsedCredit, usedCredit_);
      };
      PackageList() = default ;
      PackageList(const PackageList &) = default ;
      PackageList(PackageList &&) = default ;
      PackageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PackageList() = default ;
      PackageList& operator=(const PackageList &) = default ;
      PackageList& operator=(PackageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expiredAt_ == nullptr
        && this->instanceIds_ == nullptr && this->packageCredit_ == nullptr && this->packageId_ == nullptr && this->packageSpec_ == nullptr && this->packageSpecName_ == nullptr
        && this->packageStatus_ == nullptr && this->periodEndTime_ == nullptr && this->periodStartTime_ == nullptr && this->usedCredit_ == nullptr; };
      // expiredAt Field Functions 
      bool hasExpiredAt() const { return this->expiredAt_ != nullptr;};
      void deleteExpiredAt() { this->expiredAt_ = nullptr;};
      inline string getExpiredAt() const { DARABONBA_PTR_GET_DEFAULT(expiredAt_, "") };
      inline PackageList& setExpiredAt(string expiredAt) { DARABONBA_PTR_SET_VALUE(expiredAt_, expiredAt) };


      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline PackageList& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline PackageList& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // packageCredit Field Functions 
      bool hasPackageCredit() const { return this->packageCredit_ != nullptr;};
      void deletePackageCredit() { this->packageCredit_ = nullptr;};
      inline string getPackageCredit() const { DARABONBA_PTR_GET_DEFAULT(packageCredit_, "") };
      inline PackageList& setPackageCredit(string packageCredit) { DARABONBA_PTR_SET_VALUE(packageCredit_, packageCredit) };


      // packageId Field Functions 
      bool hasPackageId() const { return this->packageId_ != nullptr;};
      void deletePackageId() { this->packageId_ = nullptr;};
      inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
      inline PackageList& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


      // packageSpec Field Functions 
      bool hasPackageSpec() const { return this->packageSpec_ != nullptr;};
      void deletePackageSpec() { this->packageSpec_ = nullptr;};
      inline string getPackageSpec() const { DARABONBA_PTR_GET_DEFAULT(packageSpec_, "") };
      inline PackageList& setPackageSpec(string packageSpec) { DARABONBA_PTR_SET_VALUE(packageSpec_, packageSpec) };


      // packageSpecName Field Functions 
      bool hasPackageSpecName() const { return this->packageSpecName_ != nullptr;};
      void deletePackageSpecName() { this->packageSpecName_ = nullptr;};
      inline string getPackageSpecName() const { DARABONBA_PTR_GET_DEFAULT(packageSpecName_, "") };
      inline PackageList& setPackageSpecName(string packageSpecName) { DARABONBA_PTR_SET_VALUE(packageSpecName_, packageSpecName) };


      // packageStatus Field Functions 
      bool hasPackageStatus() const { return this->packageStatus_ != nullptr;};
      void deletePackageStatus() { this->packageStatus_ = nullptr;};
      inline string getPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(packageStatus_, "") };
      inline PackageList& setPackageStatus(string packageStatus) { DARABONBA_PTR_SET_VALUE(packageStatus_, packageStatus) };


      // periodEndTime Field Functions 
      bool hasPeriodEndTime() const { return this->periodEndTime_ != nullptr;};
      void deletePeriodEndTime() { this->periodEndTime_ = nullptr;};
      inline string getPeriodEndTime() const { DARABONBA_PTR_GET_DEFAULT(periodEndTime_, "") };
      inline PackageList& setPeriodEndTime(string periodEndTime) { DARABONBA_PTR_SET_VALUE(periodEndTime_, periodEndTime) };


      // periodStartTime Field Functions 
      bool hasPeriodStartTime() const { return this->periodStartTime_ != nullptr;};
      void deletePeriodStartTime() { this->periodStartTime_ = nullptr;};
      inline string getPeriodStartTime() const { DARABONBA_PTR_GET_DEFAULT(periodStartTime_, "") };
      inline PackageList& setPeriodStartTime(string periodStartTime) { DARABONBA_PTR_SET_VALUE(periodStartTime_, periodStartTime) };


      // usedCredit Field Functions 
      bool hasUsedCredit() const { return this->usedCredit_ != nullptr;};
      void deleteUsedCredit() { this->usedCredit_ = nullptr;};
      inline string getUsedCredit() const { DARABONBA_PTR_GET_DEFAULT(usedCredit_, "") };
      inline PackageList& setUsedCredit(string usedCredit) { DARABONBA_PTR_SET_VALUE(usedCredit_, usedCredit) };


    protected:
      // The expiration time.
      shared_ptr<string> expiredAt_ {};
      // The list of node instance IDs.
      shared_ptr<vector<string>> instanceIds_ {};
      // The credit quota of the package.
      shared_ptr<string> packageCredit_ {};
      // The package ID.
      shared_ptr<string> packageId_ {};
      // The package specification.
      shared_ptr<string> packageSpec_ {};
      shared_ptr<string> packageSpecName_ {};
      // The package status.
      shared_ptr<string> packageStatus_ {};
      shared_ptr<string> periodEndTime_ {};
      shared_ptr<string> periodStartTime_ {};
      // The number of credits that have been used.
      shared_ptr<string> usedCredit_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->packageList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMobileAgentPackageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMobileAgentPackageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // packageList Field Functions 
    bool hasPackageList() const { return this->packageList_ != nullptr;};
    void deletePackageList() { this->packageList_ = nullptr;};
    inline const vector<DescribeMobileAgentPackageResponseBody::PackageList> & getPackageList() const { DARABONBA_PTR_GET_CONST(packageList_, vector<DescribeMobileAgentPackageResponseBody::PackageList>) };
    inline vector<DescribeMobileAgentPackageResponseBody::PackageList> getPackageList() { DARABONBA_PTR_GET(packageList_, vector<DescribeMobileAgentPackageResponseBody::PackageList>) };
    inline DescribeMobileAgentPackageResponseBody& setPackageList(const vector<DescribeMobileAgentPackageResponseBody::PackageList> & packageList) { DARABONBA_PTR_SET_VALUE(packageList_, packageList) };
    inline DescribeMobileAgentPackageResponseBody& setPackageList(vector<DescribeMobileAgentPackageResponseBody::PackageList> && packageList) { DARABONBA_PTR_SET_RVALUE(packageList_, packageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMobileAgentPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeMobileAgentPackageResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The list of package information.
    shared_ptr<vector<DescribeMobileAgentPackageResponseBody::PackageList>> packageList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
