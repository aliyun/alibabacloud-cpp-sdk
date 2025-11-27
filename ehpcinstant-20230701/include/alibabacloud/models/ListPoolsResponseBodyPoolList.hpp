// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOOLSRESPONSEBODYPOOLLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOOLSRESPONSEBODYPOOLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListPoolsResponseBodyPoolList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoolsResponseBodyPoolList& obj) { 
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(MaxExectorNum, maxExectorNum_);
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoolsResponseBodyPoolList& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(MaxExectorNum, maxExectorNum_);
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListPoolsResponseBodyPoolList() = default ;
    ListPoolsResponseBodyPoolList(const ListPoolsResponseBodyPoolList &) = default ;
    ListPoolsResponseBodyPoolList(ListPoolsResponseBodyPoolList &&) = default ;
    ListPoolsResponseBodyPoolList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoolsResponseBodyPoolList() = default ;
    ListPoolsResponseBodyPoolList& operator=(const ListPoolsResponseBodyPoolList &) = default ;
    ListPoolsResponseBodyPoolList& operator=(ListPoolsResponseBodyPoolList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDefault_ == nullptr
        && return this->maxExectorNum_ == nullptr && return this->poolName_ == nullptr && return this->priority_ == nullptr && return this->status_ == nullptr; };
    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListPoolsResponseBodyPoolList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // maxExectorNum Field Functions 
    bool hasMaxExectorNum() const { return this->maxExectorNum_ != nullptr;};
    void deleteMaxExectorNum() { this->maxExectorNum_ = nullptr;};
    inline int32_t maxExectorNum() const { DARABONBA_PTR_GET_DEFAULT(maxExectorNum_, 0) };
    inline ListPoolsResponseBodyPoolList& setMaxExectorNum(int32_t maxExectorNum) { DARABONBA_PTR_SET_VALUE(maxExectorNum_, maxExectorNum) };


    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string poolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline ListPoolsResponseBodyPoolList& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListPoolsResponseBodyPoolList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPoolsResponseBodyPoolList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indices whether the resource pool is the default resource pool. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The maximum number of execution nodes that can run concurrently in a resource pool.
    std::shared_ptr<int32_t> maxExectorNum_ = nullptr;
    // The name of the resource pool.
    // 
    // *   The value can be up to 15 characters in length.
    // *   It can contain digits, uppercase letters, lowercase letters, underscores (_), and dots (.).
    std::shared_ptr<string> poolName_ = nullptr;
    // The priority of the resource pool.
    // 
    // *   You can set a priority in the range of 1 to 99. The default value is 1, which is the lowest priority.
    // *   Jobs submitted to a resource pool with a higher priority level value will be scheduled before pending jobs in a resource pool with a lower priority level value, and the priority level of the resource pool takes precedence over the priority of the job.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The status of the resource pool. Valid values:
    // 
    // *   Creating: The resource pool is being created.
    // *   Updating: The resource pool is being updated.
    // *   Deleting: The resource pool is being deleted.
    // *   Working: The resource pool is working.
    // *   Deleted: The resource pool is deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
