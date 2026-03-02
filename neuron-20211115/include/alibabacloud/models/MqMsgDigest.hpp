// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MQMSGDIGEST_HPP_
#define ALIBABACLOUD_MODELS_MQMSGDIGEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MqMsgDigest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MqMsgDigest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_TO_JSON(StoreSize, storeSize_);
      DARABONBA_PTR_TO_JSON(StoreTime, storeTime_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, MqMsgDigest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_FROM_JSON(StoreSize, storeSize_);
      DARABONBA_PTR_FROM_JSON(StoreTime, storeTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    MqMsgDigest() = default ;
    MqMsgDigest(const MqMsgDigest &) = default ;
    MqMsgDigest(MqMsgDigest &&) = default ;
    MqMsgDigest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MqMsgDigest() = default ;
    MqMsgDigest& operator=(const MqMsgDigest &) = default ;
    MqMsgDigest& operator=(MqMsgDigest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->retryCount_ == nullptr && this->storeSize_ == nullptr && this->storeTime_ == nullptr && this->tags_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MqMsgDigest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int64_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0L) };
    inline MqMsgDigest& setRetryCount(int64_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // storeSize Field Functions 
    bool hasStoreSize() const { return this->storeSize_ != nullptr;};
    void deleteStoreSize() { this->storeSize_ = nullptr;};
    inline int32_t getStoreSize() const { DARABONBA_PTR_GET_DEFAULT(storeSize_, 0) };
    inline MqMsgDigest& setStoreSize(int32_t storeSize) { DARABONBA_PTR_SET_VALUE(storeSize_, storeSize) };


    // storeTime Field Functions 
    bool hasStoreTime() const { return this->storeTime_ != nullptr;};
    void deleteStoreTime() { this->storeTime_ = nullptr;};
    inline string getStoreTime() const { DARABONBA_PTR_GET_DEFAULT(storeTime_, "") };
    inline MqMsgDigest& setStoreTime(string storeTime) { DARABONBA_PTR_SET_VALUE(storeTime_, storeTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline MqMsgDigest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> retryCount_ {};
    shared_ptr<int32_t> storeSize_ {};
    shared_ptr<string> storeTime_ {};
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
