// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    DescribeFaultDiagnosisUserListResponseBody() = default ;
    DescribeFaultDiagnosisUserListResponseBody(const DescribeFaultDiagnosisUserListResponseBody &) = default ;
    DescribeFaultDiagnosisUserListResponseBody(DescribeFaultDiagnosisUserListResponseBody &&) = default ;
    DescribeFaultDiagnosisUserListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserListResponseBody() = default ;
    DescribeFaultDiagnosisUserListResponseBody& operator=(const DescribeFaultDiagnosisUserListResponseBody &) = default ;
    DescribeFaultDiagnosisUserListResponseBody& operator=(DescribeFaultDiagnosisUserListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelCreatedTs, channelCreatedTs_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_TO_JSON(FaultList, faultList_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelCreatedTs, channelCreatedTs_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_FROM_JSON(FaultList, faultList_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserList() = default ;
      UserList(const UserList &) = default ;
      UserList(UserList &&) = default ;
      UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserList() = default ;
      UserList& operator=(const UserList &) = default ;
      UserList& operator=(UserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FaultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FaultList& obj) { 
          DARABONBA_PTR_TO_JSON(FaultType, faultType_);
        };
        friend void from_json(const Darabonba::Json& j, FaultList& obj) { 
          DARABONBA_PTR_FROM_JSON(FaultType, faultType_);
        };
        FaultList() = default ;
        FaultList(const FaultList &) = default ;
        FaultList(FaultList &&) = default ;
        FaultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FaultList() = default ;
        FaultList& operator=(const FaultList &) = default ;
        FaultList& operator=(FaultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->faultType_ == nullptr; };
        // faultType Field Functions 
        bool hasFaultType() const { return this->faultType_ != nullptr;};
        void deleteFaultType() { this->faultType_ = nullptr;};
        inline string getFaultType() const { DARABONBA_PTR_GET_DEFAULT(faultType_, "") };
        inline FaultList& setFaultType(string faultType) { DARABONBA_PTR_SET_VALUE(faultType_, faultType) };


      protected:
        shared_ptr<string> faultType_ {};
      };

      virtual bool empty() const override { return this->channelCreatedTs_ == nullptr
        && this->channelId_ == nullptr && this->createdTs_ == nullptr && this->destroyedTs_ == nullptr && this->faultList_ == nullptr && this->userId_ == nullptr; };
      // channelCreatedTs Field Functions 
      bool hasChannelCreatedTs() const { return this->channelCreatedTs_ != nullptr;};
      void deleteChannelCreatedTs() { this->channelCreatedTs_ = nullptr;};
      inline int64_t getChannelCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(channelCreatedTs_, 0L) };
      inline UserList& setChannelCreatedTs(int64_t channelCreatedTs) { DARABONBA_PTR_SET_VALUE(channelCreatedTs_, channelCreatedTs) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline UserList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline UserList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline UserList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // faultList Field Functions 
      bool hasFaultList() const { return this->faultList_ != nullptr;};
      void deleteFaultList() { this->faultList_ = nullptr;};
      inline const vector<UserList::FaultList> & getFaultList() const { DARABONBA_PTR_GET_CONST(faultList_, vector<UserList::FaultList>) };
      inline vector<UserList::FaultList> getFaultList() { DARABONBA_PTR_GET(faultList_, vector<UserList::FaultList>) };
      inline UserList& setFaultList(const vector<UserList::FaultList> & faultList) { DARABONBA_PTR_SET_VALUE(faultList_, faultList) };
      inline UserList& setFaultList(vector<UserList::FaultList> && faultList) { DARABONBA_PTR_SET_RVALUE(faultList_, faultList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> channelCreatedTs_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<vector<UserList::FaultList>> faultList_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCnt_ == nullptr && this->userList_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeFaultDiagnosisUserListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFaultDiagnosisUserListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaultDiagnosisUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int32_t getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
    inline DescribeFaultDiagnosisUserListResponseBody& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<DescribeFaultDiagnosisUserListResponseBody::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<DescribeFaultDiagnosisUserListResponseBody::UserList>) };
    inline vector<DescribeFaultDiagnosisUserListResponseBody::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<DescribeFaultDiagnosisUserListResponseBody::UserList>) };
    inline DescribeFaultDiagnosisUserListResponseBody& setUserList(const vector<DescribeFaultDiagnosisUserListResponseBody::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline DescribeFaultDiagnosisUserListResponseBody& setUserList(vector<DescribeFaultDiagnosisUserListResponseBody::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCnt_ {};
    shared_ptr<vector<DescribeFaultDiagnosisUserListResponseBody::UserList>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
