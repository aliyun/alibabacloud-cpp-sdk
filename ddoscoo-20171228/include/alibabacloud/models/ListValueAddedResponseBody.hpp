// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVALUEADDEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVALUEADDEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListValueAddedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListValueAddedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ValueAddedList, valueAddedList_);
    };
    friend void from_json(const Darabonba::Json& j, ListValueAddedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ValueAddedList, valueAddedList_);
    };
    ListValueAddedResponseBody() = default ;
    ListValueAddedResponseBody(const ListValueAddedResponseBody &) = default ;
    ListValueAddedResponseBody(ListValueAddedResponseBody &&) = default ;
    ListValueAddedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListValueAddedResponseBody() = default ;
    ListValueAddedResponseBody& operator=(const ListValueAddedResponseBody &) = default ;
    ListValueAddedResponseBody& operator=(ListValueAddedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ValueAddedList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ValueAddedList& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LogSize, logSize_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StoreRegion, storeRegion_);
      };
      friend void from_json(const Darabonba::Json& j, ValueAddedList& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StoreRegion, storeRegion_);
      };
      ValueAddedList() = default ;
      ValueAddedList(const ValueAddedList &) = default ;
      ValueAddedList(ValueAddedList &&) = default ;
      ValueAddedList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ValueAddedList() = default ;
      ValueAddedList& operator=(const ValueAddedList &) = default ;
      ValueAddedList& operator=(ValueAddedList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->gmtCreate_ == nullptr && this->instanceId_ == nullptr && this->logSize_ == nullptr && this->status_ == nullptr && this->storeRegion_ == nullptr; };
      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline ValueAddedList& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ValueAddedList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ValueAddedList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // logSize Field Functions 
      bool hasLogSize() const { return this->logSize_ != nullptr;};
      void deleteLogSize() { this->logSize_ = nullptr;};
      inline int64_t getLogSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0L) };
      inline ValueAddedList& setLogSize(int64_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ValueAddedList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storeRegion Field Functions 
      bool hasStoreRegion() const { return this->storeRegion_ != nullptr;};
      void deleteStoreRegion() { this->storeRegion_ = nullptr;};
      inline string getStoreRegion() const { DARABONBA_PTR_GET_DEFAULT(storeRegion_, "") };
      inline ValueAddedList& setStoreRegion(string storeRegion) { DARABONBA_PTR_SET_VALUE(storeRegion_, storeRegion) };


    protected:
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> logSize_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> storeRegion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->valueAddedList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListValueAddedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // valueAddedList Field Functions 
    bool hasValueAddedList() const { return this->valueAddedList_ != nullptr;};
    void deleteValueAddedList() { this->valueAddedList_ = nullptr;};
    inline const vector<ListValueAddedResponseBody::ValueAddedList> & getValueAddedList() const { DARABONBA_PTR_GET_CONST(valueAddedList_, vector<ListValueAddedResponseBody::ValueAddedList>) };
    inline vector<ListValueAddedResponseBody::ValueAddedList> getValueAddedList() { DARABONBA_PTR_GET(valueAddedList_, vector<ListValueAddedResponseBody::ValueAddedList>) };
    inline ListValueAddedResponseBody& setValueAddedList(const vector<ListValueAddedResponseBody::ValueAddedList> & valueAddedList) { DARABONBA_PTR_SET_VALUE(valueAddedList_, valueAddedList) };
    inline ListValueAddedResponseBody& setValueAddedList(vector<ListValueAddedResponseBody::ValueAddedList> && valueAddedList) { DARABONBA_PTR_SET_RVALUE(valueAddedList_, valueAddedList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListValueAddedResponseBody::ValueAddedList>> valueAddedList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
