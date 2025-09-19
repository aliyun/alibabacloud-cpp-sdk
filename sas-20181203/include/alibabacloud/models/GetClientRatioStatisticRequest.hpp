// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientRatioStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRatioStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(StatisticTypes, statisticTypes_);
      DARABONBA_PTR_TO_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_TO_JSON(TimeStart, timeStart_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRatioStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(StatisticTypes, statisticTypes_);
      DARABONBA_PTR_FROM_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeStart, timeStart_);
    };
    GetClientRatioStatisticRequest() = default ;
    GetClientRatioStatisticRequest(const GetClientRatioStatisticRequest &) = default ;
    GetClientRatioStatisticRequest(GetClientRatioStatisticRequest &&) = default ;
    GetClientRatioStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRatioStatisticRequest() = default ;
    GetClientRatioStatisticRequest& operator=(const GetClientRatioStatisticRequest &) = default ;
    GetClientRatioStatisticRequest& operator=(GetClientRatioStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceDirectoryAccountId_ != nullptr
        && this->statisticTypes_ != nullptr && this->timeEnd_ != nullptr && this->timeStart_ != nullptr; };
    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline GetClientRatioStatisticRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // statisticTypes Field Functions 
    bool hasStatisticTypes() const { return this->statisticTypes_ != nullptr;};
    void deleteStatisticTypes() { this->statisticTypes_ = nullptr;};
    inline const vector<string> & statisticTypes() const { DARABONBA_PTR_GET_CONST(statisticTypes_, vector<string>) };
    inline vector<string> statisticTypes() { DARABONBA_PTR_GET(statisticTypes_, vector<string>) };
    inline GetClientRatioStatisticRequest& setStatisticTypes(const vector<string> & statisticTypes) { DARABONBA_PTR_SET_VALUE(statisticTypes_, statisticTypes) };
    inline GetClientRatioStatisticRequest& setStatisticTypes(vector<string> && statisticTypes) { DARABONBA_PTR_SET_RVALUE(statisticTypes_, statisticTypes) };


    // timeEnd Field Functions 
    bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
    void deleteTimeEnd() { this->timeEnd_ = nullptr;};
    inline int64_t timeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, 0L) };
    inline GetClientRatioStatisticRequest& setTimeEnd(int64_t timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


    // timeStart Field Functions 
    bool hasTimeStart() const { return this->timeStart_ != nullptr;};
    void deleteTimeStart() { this->timeStart_ = nullptr;};
    inline int64_t timeStart() const { DARABONBA_PTR_GET_DEFAULT(timeStart_, 0L) };
    inline GetClientRatioStatisticRequest& setTimeStart(int64_t timeStart) { DARABONBA_PTR_SET_VALUE(timeStart_, timeStart) };


  protected:
    // The ID of the primary account of the Resource Directory member account.
    // > call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) interface to obtain this parameter.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // An array that consists of the details of a statistical type.
    std::shared_ptr<vector<string>> statisticTypes_ = nullptr;
    // The timestamp that specifies the end of the time range to collect statistics. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> timeEnd_ = nullptr;
    // The timestamp that specifies the beginning of the time range to collect statistics. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> timeStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
