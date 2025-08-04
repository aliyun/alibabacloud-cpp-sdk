// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_TO_JSON(FaultType, faultType_);
      DARABONBA_PTR_TO_JSON(QueryCallUserInfo, queryCallUserInfo_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_FROM_JSON(FaultType, faultType_);
      DARABONBA_PTR_FROM_JSON(QueryCallUserInfo, queryCallUserInfo_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeFaultDiagnosisUserDetailRequest() = default ;
    DescribeFaultDiagnosisUserDetailRequest(const DescribeFaultDiagnosisUserDetailRequest &) = default ;
    DescribeFaultDiagnosisUserDetailRequest(DescribeFaultDiagnosisUserDetailRequest &&) = default ;
    DescribeFaultDiagnosisUserDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailRequest() = default ;
    DescribeFaultDiagnosisUserDetailRequest& operator=(const DescribeFaultDiagnosisUserDetailRequest &) = default ;
    DescribeFaultDiagnosisUserDetailRequest& operator=(DescribeFaultDiagnosisUserDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->createdTs_ != nullptr && this->faultType_ != nullptr && this->queryCallUserInfo_ != nullptr && this->userId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeFaultDiagnosisUserDetailRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeFaultDiagnosisUserDetailRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribeFaultDiagnosisUserDetailRequest& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // faultType Field Functions 
    bool hasFaultType() const { return this->faultType_ != nullptr;};
    void deleteFaultType() { this->faultType_ = nullptr;};
    inline string faultType() const { DARABONBA_PTR_GET_DEFAULT(faultType_, "") };
    inline DescribeFaultDiagnosisUserDetailRequest& setFaultType(string faultType) { DARABONBA_PTR_SET_VALUE(faultType_, faultType) };


    // queryCallUserInfo Field Functions 
    bool hasQueryCallUserInfo() const { return this->queryCallUserInfo_ != nullptr;};
    void deleteQueryCallUserInfo() { this->queryCallUserInfo_ = nullptr;};
    inline bool queryCallUserInfo() const { DARABONBA_PTR_GET_DEFAULT(queryCallUserInfo_, false) };
    inline DescribeFaultDiagnosisUserDetailRequest& setQueryCallUserInfo(bool queryCallUserInfo) { DARABONBA_PTR_SET_VALUE(queryCallUserInfo_, queryCallUserInfo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeFaultDiagnosisUserDetailRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // APP ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> faultType_ = nullptr;
    std::shared_ptr<bool> queryCallUserInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
