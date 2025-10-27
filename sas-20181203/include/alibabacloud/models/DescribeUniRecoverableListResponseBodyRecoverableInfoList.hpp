// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIRECOVERABLELISTRESPONSEBODYRECOVERABLEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIRECOVERABLELISTRESPONSEBODYRECOVERABLEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniRecoverableListResponseBodyRecoverableInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniRecoverableListResponseBodyRecoverableInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(ResetScn, resetScn_);
      DARABONBA_PTR_TO_JSON(ResetTime, resetTime_);
      DARABONBA_PTR_TO_JSON(RestoreInfo, restoreInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniRecoverableListResponseBodyRecoverableInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(ResetScn, resetScn_);
      DARABONBA_PTR_FROM_JSON(ResetTime, resetTime_);
      DARABONBA_PTR_FROM_JSON(RestoreInfo, restoreInfo_);
    };
    DescribeUniRecoverableListResponseBodyRecoverableInfoList() = default ;
    DescribeUniRecoverableListResponseBodyRecoverableInfoList(const DescribeUniRecoverableListResponseBodyRecoverableInfoList &) = default ;
    DescribeUniRecoverableListResponseBodyRecoverableInfoList(DescribeUniRecoverableListResponseBodyRecoverableInfoList &&) = default ;
    DescribeUniRecoverableListResponseBodyRecoverableInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniRecoverableListResponseBodyRecoverableInfoList() = default ;
    DescribeUniRecoverableListResponseBodyRecoverableInfoList& operator=(const DescribeUniRecoverableListResponseBodyRecoverableInfoList &) = default ;
    DescribeUniRecoverableListResponseBodyRecoverableInfoList& operator=(DescribeUniRecoverableListResponseBodyRecoverableInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstTime_ == nullptr
        && return this->lastTime_ == nullptr && return this->resetScn_ == nullptr && return this->resetTime_ == nullptr && return this->restoreInfo_ == nullptr; };
    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline DescribeUniRecoverableListResponseBodyRecoverableInfoList& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline DescribeUniRecoverableListResponseBodyRecoverableInfoList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // resetScn Field Functions 
    bool hasResetScn() const { return this->resetScn_ != nullptr;};
    void deleteResetScn() { this->resetScn_ = nullptr;};
    inline string resetScn() const { DARABONBA_PTR_GET_DEFAULT(resetScn_, "") };
    inline DescribeUniRecoverableListResponseBodyRecoverableInfoList& setResetScn(string resetScn) { DARABONBA_PTR_SET_VALUE(resetScn_, resetScn) };


    // resetTime Field Functions 
    bool hasResetTime() const { return this->resetTime_ != nullptr;};
    void deleteResetTime() { this->resetTime_ = nullptr;};
    inline int64_t resetTime() const { DARABONBA_PTR_GET_DEFAULT(resetTime_, 0L) };
    inline DescribeUniRecoverableListResponseBodyRecoverableInfoList& setResetTime(int64_t resetTime) { DARABONBA_PTR_SET_VALUE(resetTime_, resetTime) };


    // restoreInfo Field Functions 
    bool hasRestoreInfo() const { return this->restoreInfo_ != nullptr;};
    void deleteRestoreInfo() { this->restoreInfo_ = nullptr;};
    inline string restoreInfo() const { DARABONBA_PTR_GET_DEFAULT(restoreInfo_, "") };
    inline DescribeUniRecoverableListResponseBodyRecoverableInfoList& setRestoreInfo(string restoreInfo) { DARABONBA_PTR_SET_VALUE(restoreInfo_, restoreInfo) };


  protected:
    // The timestamp of the first backup. Unit: milliseconds.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // The timestamp of the last backup. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The identifier of the point in time for restoration in the backup version that is used. The database is an Oracle database.
    std::shared_ptr<string> resetScn_ = nullptr;
    // The point in time for restoration in the backup version that is used. The database is an Oracle database.
    std::shared_ptr<int64_t> resetTime_ = nullptr;
    // The information about the database. This parameter is available when the database is a Microsoft SQL Server (MSSQL) database. The value is a JSON string. Valid values:
    // 
    // *   **name**: the name of the database
    // *   **files**: the path to the database files
    std::shared_ptr<string> restoreInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
