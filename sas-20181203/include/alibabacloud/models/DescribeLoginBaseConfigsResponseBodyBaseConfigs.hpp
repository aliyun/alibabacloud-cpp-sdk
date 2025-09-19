// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSRESPONSEBODYBASECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSRESPONSEBODYBASECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLoginBaseConfigsResponseBodyBaseConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginBaseConfigsResponseBodyBaseConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UuidCount, uuidCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginBaseConfigsResponseBodyBaseConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UuidCount, uuidCount_);
    };
    DescribeLoginBaseConfigsResponseBodyBaseConfigs() = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigs(const DescribeLoginBaseConfigsResponseBodyBaseConfigs &) = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigs(DescribeLoginBaseConfigsResponseBodyBaseConfigs &&) = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginBaseConfigsResponseBodyBaseConfigs() = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigs& operator=(const DescribeLoginBaseConfigsResponseBodyBaseConfigs &) = default ;
    DescribeLoginBaseConfigsResponseBodyBaseConfigs& operator=(DescribeLoginBaseConfigsResponseBodyBaseConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->endTime_ != nullptr && this->ip_ != nullptr && this->location_ != nullptr && this->remark_ != nullptr && this->startTime_ != nullptr
        && this->targetList_ != nullptr && this->totalCount_ != nullptr && this->uuidCount_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<Models::DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<Models::DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList>) };
    inline vector<Models::DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList> targetList() { DARABONBA_PTR_GET(targetList_, vector<Models::DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList>) };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setTargetList(const vector<Models::DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setTargetList(vector<Models::DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // uuidCount Field Functions 
    bool hasUuidCount() const { return this->uuidCount_ != nullptr;};
    void deleteUuidCount() { this->uuidCount_ = nullptr;};
    inline int32_t uuidCount() const { DARABONBA_PTR_GET_DEFAULT(uuidCount_, 0) };
    inline DescribeLoginBaseConfigsResponseBodyBaseConfigs& setUuidCount(int32_t uuidCount) { DARABONBA_PTR_SET_VALUE(uuidCount_, uuidCount) };


  protected:
    // The common logon account.
    std::shared_ptr<string> account_ = nullptr;
    // The end time of the common logon time range.
    std::shared_ptr<string> endTime_ = nullptr;
    // The common logon IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The common logon location.
    std::shared_ptr<string> location_ = nullptr;
    // Corresponding configuration remark information.
    std::shared_ptr<string> remark_ = nullptr;
    // The start time of the common logon time range.
    std::shared_ptr<string> startTime_ = nullptr;
    // The details of the servers to which the configuration is applied.
    std::shared_ptr<vector<Models::DescribeLoginBaseConfigsResponseBodyBaseConfigsTargetList>> targetList_ = nullptr;
    // The total number of servers.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The number of servers to which the configuration is applied.
    std::shared_ptr<int32_t> uuidCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
