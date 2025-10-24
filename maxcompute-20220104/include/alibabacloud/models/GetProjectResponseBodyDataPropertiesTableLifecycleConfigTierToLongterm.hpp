// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESTABLELIFECYCLECONFIGTIERTOLONGTERM_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESTABLELIFECYCLECONFIGTIERTOLONGTERM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm& obj) { 
      DARABONBA_PTR_TO_JSON(DaysAfterLastAccessGreaterThan, daysAfterLastAccessGreaterThan_);
      DARABONBA_PTR_TO_JSON(DaysAfterLastModificationGreaterThan, daysAfterLastModificationGreaterThan_);
      DARABONBA_PTR_TO_JSON(DaysAfterLastTierModificationGreaterThan, daysAfterLastTierModificationGreaterThan_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm& obj) { 
      DARABONBA_PTR_FROM_JSON(DaysAfterLastAccessGreaterThan, daysAfterLastAccessGreaterThan_);
      DARABONBA_PTR_FROM_JSON(DaysAfterLastModificationGreaterThan, daysAfterLastModificationGreaterThan_);
      DARABONBA_PTR_FROM_JSON(DaysAfterLastTierModificationGreaterThan, daysAfterLastTierModificationGreaterThan_);
    };
    GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm() = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm(const GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm &) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm(GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm &&) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm() = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm& operator=(const GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm &) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm& operator=(GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->daysAfterLastAccessGreaterThan_ == nullptr
        && return this->daysAfterLastModificationGreaterThan_ == nullptr && return this->daysAfterLastTierModificationGreaterThan_ == nullptr; };
    // daysAfterLastAccessGreaterThan Field Functions 
    bool hasDaysAfterLastAccessGreaterThan() const { return this->daysAfterLastAccessGreaterThan_ != nullptr;};
    void deleteDaysAfterLastAccessGreaterThan() { this->daysAfterLastAccessGreaterThan_ = nullptr;};
    inline int64_t daysAfterLastAccessGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastAccessGreaterThan_, 0L) };
    inline GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm& setDaysAfterLastAccessGreaterThan(int64_t daysAfterLastAccessGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastAccessGreaterThan_, daysAfterLastAccessGreaterThan) };


    // daysAfterLastModificationGreaterThan Field Functions 
    bool hasDaysAfterLastModificationGreaterThan() const { return this->daysAfterLastModificationGreaterThan_ != nullptr;};
    void deleteDaysAfterLastModificationGreaterThan() { this->daysAfterLastModificationGreaterThan_ = nullptr;};
    inline int64_t daysAfterLastModificationGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastModificationGreaterThan_, 0L) };
    inline GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm& setDaysAfterLastModificationGreaterThan(int64_t daysAfterLastModificationGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastModificationGreaterThan_, daysAfterLastModificationGreaterThan) };


    // daysAfterLastTierModificationGreaterThan Field Functions 
    bool hasDaysAfterLastTierModificationGreaterThan() const { return this->daysAfterLastTierModificationGreaterThan_ != nullptr;};
    void deleteDaysAfterLastTierModificationGreaterThan() { this->daysAfterLastTierModificationGreaterThan_ = nullptr;};
    inline int64_t daysAfterLastTierModificationGreaterThan() const { DARABONBA_PTR_GET_DEFAULT(daysAfterLastTierModificationGreaterThan_, 0L) };
    inline GetProjectResponseBodyDataPropertiesTableLifecycleConfigTierToLongterm& setDaysAfterLastTierModificationGreaterThan(int64_t daysAfterLastTierModificationGreaterThan) { DARABONBA_PTR_SET_VALUE(daysAfterLastTierModificationGreaterThan_, daysAfterLastTierModificationGreaterThan) };


  protected:
    // The system triggers an automatic storage tier change N days after the last access time of data. N is specified by this parameter and corresponds to `LastAccessTime` that is configured for the table or partition.
    // 
    // >  If LastAccessTime of a table or partition is left empty, the following rules are applied:
    // 
    // *   For tables or partitions that you created before October 1, 2023, 2023.10.01 00:00:00 in UTC+0 is considered as the last access time.
    // 
    // *   For tables or partitions that you created on or after October 1, 2023, if no data is accessed, the table or partition creation time is considered as the last access time.
    std::shared_ptr<int64_t> daysAfterLastAccessGreaterThan_ = nullptr;
    // The system triggers an automatic storage tier change N days after the last modification time of data. N is specified by this parameter and corresponds to `LastModifiedTime` that is configured for the table or partition.
    std::shared_ptr<int64_t> daysAfterLastModificationGreaterThan_ = nullptr;
    // The period after the previous storage tier change time.
    std::shared_ptr<int64_t> daysAfterLastTierModificationGreaterThan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
