// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERLISTRESPONSEBODYUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERLISTRESPONSEBODYUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisUserListResponseBodyUserListFaultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserListResponseBodyUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserListResponseBodyUserList& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelCreatedTs, channelCreatedTs_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_TO_JSON(FaultList, faultList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserListResponseBodyUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelCreatedTs, channelCreatedTs_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_FROM_JSON(FaultList, faultList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeFaultDiagnosisUserListResponseBodyUserList() = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserList(const DescribeFaultDiagnosisUserListResponseBodyUserList &) = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserList(DescribeFaultDiagnosisUserListResponseBodyUserList &&) = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserListResponseBodyUserList() = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserList& operator=(const DescribeFaultDiagnosisUserListResponseBodyUserList &) = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserList& operator=(DescribeFaultDiagnosisUserListResponseBodyUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelCreatedTs_ == nullptr
        && return this->channelId_ == nullptr && return this->createdTs_ == nullptr && return this->destroyedTs_ == nullptr && return this->faultList_ == nullptr && return this->userId_ == nullptr; };
    // channelCreatedTs Field Functions 
    bool hasChannelCreatedTs() const { return this->channelCreatedTs_ != nullptr;};
    void deleteChannelCreatedTs() { this->channelCreatedTs_ = nullptr;};
    inline int64_t channelCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(channelCreatedTs_, 0L) };
    inline DescribeFaultDiagnosisUserListResponseBodyUserList& setChannelCreatedTs(int64_t channelCreatedTs) { DARABONBA_PTR_SET_VALUE(channelCreatedTs_, channelCreatedTs) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeFaultDiagnosisUserListResponseBodyUserList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribeFaultDiagnosisUserListResponseBodyUserList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // destroyedTs Field Functions 
    bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
    void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
    inline int64_t destroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
    inline DescribeFaultDiagnosisUserListResponseBodyUserList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


    // faultList Field Functions 
    bool hasFaultList() const { return this->faultList_ != nullptr;};
    void deleteFaultList() { this->faultList_ = nullptr;};
    inline const vector<Models::DescribeFaultDiagnosisUserListResponseBodyUserListFaultList> & faultList() const { DARABONBA_PTR_GET_CONST(faultList_, vector<Models::DescribeFaultDiagnosisUserListResponseBodyUserListFaultList>) };
    inline vector<Models::DescribeFaultDiagnosisUserListResponseBodyUserListFaultList> faultList() { DARABONBA_PTR_GET(faultList_, vector<Models::DescribeFaultDiagnosisUserListResponseBodyUserListFaultList>) };
    inline DescribeFaultDiagnosisUserListResponseBodyUserList& setFaultList(const vector<Models::DescribeFaultDiagnosisUserListResponseBodyUserListFaultList> & faultList) { DARABONBA_PTR_SET_VALUE(faultList_, faultList) };
    inline DescribeFaultDiagnosisUserListResponseBodyUserList& setFaultList(vector<Models::DescribeFaultDiagnosisUserListResponseBodyUserListFaultList> && faultList) { DARABONBA_PTR_SET_RVALUE(faultList_, faultList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeFaultDiagnosisUserListResponseBodyUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> channelCreatedTs_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    std::shared_ptr<int64_t> destroyedTs_ = nullptr;
    std::shared_ptr<vector<Models::DescribeFaultDiagnosisUserListResponseBodyUserListFaultList>> faultList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
