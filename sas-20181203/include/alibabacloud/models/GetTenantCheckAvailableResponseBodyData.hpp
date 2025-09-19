// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTENANTCHECKAVAILABLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTENANTCHECKAVAILABLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetTenantCheckAvailableResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTenantCheckAvailableResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NextScanTime, nextScanTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTenantCheckAvailableResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NextScanTime, nextScanTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetTenantCheckAvailableResponseBodyData() = default ;
    GetTenantCheckAvailableResponseBodyData(const GetTenantCheckAvailableResponseBodyData &) = default ;
    GetTenantCheckAvailableResponseBodyData(GetTenantCheckAvailableResponseBodyData &&) = default ;
    GetTenantCheckAvailableResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTenantCheckAvailableResponseBodyData() = default ;
    GetTenantCheckAvailableResponseBodyData& operator=(const GetTenantCheckAvailableResponseBodyData &) = default ;
    GetTenantCheckAvailableResponseBodyData& operator=(GetTenantCheckAvailableResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextScanTime_ != nullptr
        && this->status_ != nullptr; };
    // nextScanTime Field Functions 
    bool hasNextScanTime() const { return this->nextScanTime_ != nullptr;};
    void deleteNextScanTime() { this->nextScanTime_ = nullptr;};
    inline int64_t nextScanTime() const { DARABONBA_PTR_GET_DEFAULT(nextScanTime_, 0L) };
    inline GetTenantCheckAvailableResponseBodyData& setNextScanTime(int64_t nextScanTime) { DARABONBA_PTR_SET_VALUE(nextScanTime_, nextScanTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetTenantCheckAvailableResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The timestamp when you can submit a quick scan task.
    std::shared_ptr<int64_t> nextScanTime_ = nullptr;
    // The status of the quick scan task. Enumerated values:
    // 
    // *   0: You can submit a quick scan task.
    // *   1: The current task is not complete. You cannot submit a quick scan task.
    // *   2: The free quota for this week is exhausted. You must wait for the next free scan period.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
