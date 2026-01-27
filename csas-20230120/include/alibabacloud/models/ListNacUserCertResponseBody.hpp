// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACUSERCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNACUSERCERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListNacUserCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacUserCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacUserCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListNacUserCertResponseBody() = default ;
    ListNacUserCertResponseBody(const ListNacUserCertResponseBody &) = default ;
    ListNacUserCertResponseBody(ListNacUserCertResponseBody &&) = default ;
    ListNacUserCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacUserCertResponseBody() = default ;
    ListNacUserCertResponseBody& operator=(const ListNacUserCertResponseBody &) = default ;
    ListNacUserCertResponseBody& operator=(ListNacUserCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(DevTag, devTag_);
        DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
        DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliuid_ == nullptr
        && this->department_ == nullptr && this->devTag_ == nullptr && this->deviceType_ == nullptr && this->expiredTime_ == nullptr && this->hostname_ == nullptr
        && this->mac_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr && this->username_ == nullptr; };
      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline string getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
      inline DataList& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline DataList& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // devTag Field Functions 
      bool hasDevTag() const { return this->devTag_ != nullptr;};
      void deleteDevTag() { this->devTag_ = nullptr;};
      inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
      inline DataList& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline DataList& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline DataList& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline DataList& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline DataList& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline DataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline DataList& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> aliuid_ {};
      shared_ptr<string> department_ {};
      shared_ptr<string> devTag_ {};
      shared_ptr<string> deviceType_ {};
      shared_ptr<string> expiredTime_ {};
      shared_ptr<string> hostname_ {};
      shared_ptr<string> mac_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dataList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListNacUserCertResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<ListNacUserCertResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<ListNacUserCertResponseBody::DataList>) };
    inline vector<ListNacUserCertResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<ListNacUserCertResponseBody::DataList>) };
    inline ListNacUserCertResponseBody& setDataList(const vector<ListNacUserCertResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline ListNacUserCertResponseBody& setDataList(vector<ListNacUserCertResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNacUserCertResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNacUserCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListNacUserCertResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<vector<ListNacUserCertResponseBody::DataList>> dataList_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
