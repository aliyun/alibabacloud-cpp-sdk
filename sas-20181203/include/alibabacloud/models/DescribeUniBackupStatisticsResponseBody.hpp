// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUniBackupStatisticsResponseBodyRegionCountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProtectedDatabaseCount, protectedDatabaseCount_);
      DARABONBA_PTR_TO_JSON(RegionCountList, regionCountList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoringTaskCount, restoringTaskCount_);
      DARABONBA_PTR_TO_JSON(TotalRecoverableCount, totalRecoverableCount_);
      DARABONBA_PTR_TO_JSON(TotalRestoreTaskCount, totalRestoreTaskCount_);
      DARABONBA_PTR_TO_JSON(UnprotectedDatabaseCount, unprotectedDatabaseCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtectedDatabaseCount, protectedDatabaseCount_);
      DARABONBA_PTR_FROM_JSON(RegionCountList, regionCountList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoringTaskCount, restoringTaskCount_);
      DARABONBA_PTR_FROM_JSON(TotalRecoverableCount, totalRecoverableCount_);
      DARABONBA_PTR_FROM_JSON(TotalRestoreTaskCount, totalRestoreTaskCount_);
      DARABONBA_PTR_FROM_JSON(UnprotectedDatabaseCount, unprotectedDatabaseCount_);
    };
    DescribeUniBackupStatisticsResponseBody() = default ;
    DescribeUniBackupStatisticsResponseBody(const DescribeUniBackupStatisticsResponseBody &) = default ;
    DescribeUniBackupStatisticsResponseBody(DescribeUniBackupStatisticsResponseBody &&) = default ;
    DescribeUniBackupStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupStatisticsResponseBody() = default ;
    DescribeUniBackupStatisticsResponseBody& operator=(const DescribeUniBackupStatisticsResponseBody &) = default ;
    DescribeUniBackupStatisticsResponseBody& operator=(DescribeUniBackupStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->protectedDatabaseCount_ == nullptr
        && return this->regionCountList_ == nullptr && return this->requestId_ == nullptr && return this->restoringTaskCount_ == nullptr && return this->totalRecoverableCount_ == nullptr && return this->totalRestoreTaskCount_ == nullptr
        && return this->unprotectedDatabaseCount_ == nullptr; };
    // protectedDatabaseCount Field Functions 
    bool hasProtectedDatabaseCount() const { return this->protectedDatabaseCount_ != nullptr;};
    void deleteProtectedDatabaseCount() { this->protectedDatabaseCount_ = nullptr;};
    inline int32_t protectedDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(protectedDatabaseCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setProtectedDatabaseCount(int32_t protectedDatabaseCount) { DARABONBA_PTR_SET_VALUE(protectedDatabaseCount_, protectedDatabaseCount) };


    // regionCountList Field Functions 
    bool hasRegionCountList() const { return this->regionCountList_ != nullptr;};
    void deleteRegionCountList() { this->regionCountList_ = nullptr;};
    inline const vector<DescribeUniBackupStatisticsResponseBodyRegionCountList> & regionCountList() const { DARABONBA_PTR_GET_CONST(regionCountList_, vector<DescribeUniBackupStatisticsResponseBodyRegionCountList>) };
    inline vector<DescribeUniBackupStatisticsResponseBodyRegionCountList> regionCountList() { DARABONBA_PTR_GET(regionCountList_, vector<DescribeUniBackupStatisticsResponseBodyRegionCountList>) };
    inline DescribeUniBackupStatisticsResponseBody& setRegionCountList(const vector<DescribeUniBackupStatisticsResponseBodyRegionCountList> & regionCountList) { DARABONBA_PTR_SET_VALUE(regionCountList_, regionCountList) };
    inline DescribeUniBackupStatisticsResponseBody& setRegionCountList(vector<DescribeUniBackupStatisticsResponseBodyRegionCountList> && regionCountList) { DARABONBA_PTR_SET_RVALUE(regionCountList_, regionCountList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniBackupStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoringTaskCount Field Functions 
    bool hasRestoringTaskCount() const { return this->restoringTaskCount_ != nullptr;};
    void deleteRestoringTaskCount() { this->restoringTaskCount_ = nullptr;};
    inline int32_t restoringTaskCount() const { DARABONBA_PTR_GET_DEFAULT(restoringTaskCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setRestoringTaskCount(int32_t restoringTaskCount) { DARABONBA_PTR_SET_VALUE(restoringTaskCount_, restoringTaskCount) };


    // totalRecoverableCount Field Functions 
    bool hasTotalRecoverableCount() const { return this->totalRecoverableCount_ != nullptr;};
    void deleteTotalRecoverableCount() { this->totalRecoverableCount_ = nullptr;};
    inline int32_t totalRecoverableCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecoverableCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setTotalRecoverableCount(int32_t totalRecoverableCount) { DARABONBA_PTR_SET_VALUE(totalRecoverableCount_, totalRecoverableCount) };


    // totalRestoreTaskCount Field Functions 
    bool hasTotalRestoreTaskCount() const { return this->totalRestoreTaskCount_ != nullptr;};
    void deleteTotalRestoreTaskCount() { this->totalRestoreTaskCount_ = nullptr;};
    inline int32_t totalRestoreTaskCount() const { DARABONBA_PTR_GET_DEFAULT(totalRestoreTaskCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setTotalRestoreTaskCount(int32_t totalRestoreTaskCount) { DARABONBA_PTR_SET_VALUE(totalRestoreTaskCount_, totalRestoreTaskCount) };


    // unprotectedDatabaseCount Field Functions 
    bool hasUnprotectedDatabaseCount() const { return this->unprotectedDatabaseCount_ != nullptr;};
    void deleteUnprotectedDatabaseCount() { this->unprotectedDatabaseCount_ = nullptr;};
    inline int32_t unprotectedDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedDatabaseCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setUnprotectedDatabaseCount(int32_t unprotectedDatabaseCount) { DARABONBA_PTR_SET_VALUE(unprotectedDatabaseCount_, unprotectedDatabaseCount) };


  protected:
    // The number of protected database instances.
    std::shared_ptr<int32_t> protectedDatabaseCount_ = nullptr;
    // The regions of the database instances.
    std::shared_ptr<vector<DescribeUniBackupStatisticsResponseBodyRegionCountList>> regionCountList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of the restoration tasks that are running.
    std::shared_ptr<int32_t> restoringTaskCount_ = nullptr;
    // The total number of database instances that can be restored.
    std::shared_ptr<int32_t> totalRecoverableCount_ = nullptr;
    // The total number of the restoration tasks.
    std::shared_ptr<int32_t> totalRestoreTaskCount_ = nullptr;
    // The number of unprotected database instances.
    std::shared_ptr<int32_t> unprotectedDatabaseCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
