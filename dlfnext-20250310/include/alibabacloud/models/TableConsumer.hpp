// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLECONSUMER_HPP_
#define ALIBABACLOUD_MODELS_TABLECONSUMER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class TableConsumer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableConsumer& obj) { 
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(nextSnapshot, nextSnapshot_);
    };
    friend void from_json(const Darabonba::Json& j, TableConsumer& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(nextSnapshot, nextSnapshot_);
    };
    TableConsumer() = default ;
    TableConsumer(const TableConsumer &) = default ;
    TableConsumer(TableConsumer &&) = default ;
    TableConsumer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableConsumer() = default ;
    TableConsumer& operator=(const TableConsumer &) = default ;
    TableConsumer& operator=(TableConsumer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->lastModifiedTime_ == nullptr && this->nextSnapshot_ == nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline TableConsumer& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline TableConsumer& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // nextSnapshot Field Functions 
    bool hasNextSnapshot() const { return this->nextSnapshot_ != nullptr;};
    void deleteNextSnapshot() { this->nextSnapshot_ = nullptr;};
    inline int64_t getNextSnapshot() const { DARABONBA_PTR_GET_DEFAULT(nextSnapshot_, 0L) };
    inline TableConsumer& setNextSnapshot(int64_t nextSnapshot) { DARABONBA_PTR_SET_VALUE(nextSnapshot_, nextSnapshot) };


  protected:
    // Consumer ID
    shared_ptr<string> consumerId_ {};
    // The last modified time of the consumer file in Unix milliseconds.
    shared_ptr<int64_t> lastModifiedTime_ {};
    // The ID of the next snapshot to be consumed.
    shared_ptr<int64_t> nextSnapshot_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
