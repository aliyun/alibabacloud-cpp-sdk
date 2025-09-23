// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVALUEADDEDRESPONSEBODYVALUEADDEDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTVALUEADDEDRESPONSEBODYVALUEADDEDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListValueAddedResponseBodyValueAddedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListValueAddedResponseBodyValueAddedList& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogSize, logSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoreRegion, storeRegion_);
    };
    friend void from_json(const Darabonba::Json& j, ListValueAddedResponseBodyValueAddedList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoreRegion, storeRegion_);
    };
    ListValueAddedResponseBodyValueAddedList() = default ;
    ListValueAddedResponseBodyValueAddedList(const ListValueAddedResponseBodyValueAddedList &) = default ;
    ListValueAddedResponseBodyValueAddedList(ListValueAddedResponseBodyValueAddedList &&) = default ;
    ListValueAddedResponseBodyValueAddedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListValueAddedResponseBodyValueAddedList() = default ;
    ListValueAddedResponseBodyValueAddedList& operator=(const ListValueAddedResponseBodyValueAddedList &) = default ;
    ListValueAddedResponseBodyValueAddedList& operator=(ListValueAddedResponseBodyValueAddedList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expireTime_ != nullptr
        && this->gmtCreate_ != nullptr && this->instanceId_ != nullptr && this->logSize_ != nullptr && this->status_ != nullptr && this->storeRegion_ != nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ListValueAddedResponseBodyValueAddedList& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListValueAddedResponseBodyValueAddedList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListValueAddedResponseBodyValueAddedList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logSize Field Functions 
    bool hasLogSize() const { return this->logSize_ != nullptr;};
    void deleteLogSize() { this->logSize_ = nullptr;};
    inline int64_t logSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0L) };
    inline ListValueAddedResponseBodyValueAddedList& setLogSize(int64_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListValueAddedResponseBodyValueAddedList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storeRegion Field Functions 
    bool hasStoreRegion() const { return this->storeRegion_ != nullptr;};
    void deleteStoreRegion() { this->storeRegion_ = nullptr;};
    inline string storeRegion() const { DARABONBA_PTR_GET_DEFAULT(storeRegion_, "") };
    inline ListValueAddedResponseBodyValueAddedList& setStoreRegion(string storeRegion) { DARABONBA_PTR_SET_VALUE(storeRegion_, storeRegion) };


  protected:
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> logSize_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> storeRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
