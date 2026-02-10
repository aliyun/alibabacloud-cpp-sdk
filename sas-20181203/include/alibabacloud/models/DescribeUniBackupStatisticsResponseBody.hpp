// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RegionCountList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionCountList& obj) { 
        DARABONBA_PTR_TO_JSON(AutomaticCount, automaticCount_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, RegionCountList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutomaticCount, automaticCount_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      RegionCountList() = default ;
      RegionCountList(const RegionCountList &) = default ;
      RegionCountList(RegionCountList &&) = default ;
      RegionCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionCountList() = default ;
      RegionCountList& operator=(const RegionCountList &) = default ;
      RegionCountList& operator=(RegionCountList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->automaticCount_ == nullptr
        && this->regionId_ == nullptr; };
      // automaticCount Field Functions 
      bool hasAutomaticCount() const { return this->automaticCount_ != nullptr;};
      void deleteAutomaticCount() { this->automaticCount_ = nullptr;};
      inline string getAutomaticCount() const { DARABONBA_PTR_GET_DEFAULT(automaticCount_, "") };
      inline RegionCountList& setAutomaticCount(string automaticCount) { DARABONBA_PTR_SET_VALUE(automaticCount_, automaticCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionCountList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The number of database instances that are automatically scanned.
      shared_ptr<string> automaticCount_ {};
      // The ID of the region in which the database instance resides.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->protectedDatabaseCount_ == nullptr
        && this->regionCountList_ == nullptr && this->requestId_ == nullptr && this->restoringTaskCount_ == nullptr && this->totalRecoverableCount_ == nullptr && this->totalRestoreTaskCount_ == nullptr
        && this->unprotectedDatabaseCount_ == nullptr; };
    // protectedDatabaseCount Field Functions 
    bool hasProtectedDatabaseCount() const { return this->protectedDatabaseCount_ != nullptr;};
    void deleteProtectedDatabaseCount() { this->protectedDatabaseCount_ = nullptr;};
    inline int32_t getProtectedDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(protectedDatabaseCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setProtectedDatabaseCount(int32_t protectedDatabaseCount) { DARABONBA_PTR_SET_VALUE(protectedDatabaseCount_, protectedDatabaseCount) };


    // regionCountList Field Functions 
    bool hasRegionCountList() const { return this->regionCountList_ != nullptr;};
    void deleteRegionCountList() { this->regionCountList_ = nullptr;};
    inline const vector<DescribeUniBackupStatisticsResponseBody::RegionCountList> & getRegionCountList() const { DARABONBA_PTR_GET_CONST(regionCountList_, vector<DescribeUniBackupStatisticsResponseBody::RegionCountList>) };
    inline vector<DescribeUniBackupStatisticsResponseBody::RegionCountList> getRegionCountList() { DARABONBA_PTR_GET(regionCountList_, vector<DescribeUniBackupStatisticsResponseBody::RegionCountList>) };
    inline DescribeUniBackupStatisticsResponseBody& setRegionCountList(const vector<DescribeUniBackupStatisticsResponseBody::RegionCountList> & regionCountList) { DARABONBA_PTR_SET_VALUE(regionCountList_, regionCountList) };
    inline DescribeUniBackupStatisticsResponseBody& setRegionCountList(vector<DescribeUniBackupStatisticsResponseBody::RegionCountList> && regionCountList) { DARABONBA_PTR_SET_RVALUE(regionCountList_, regionCountList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniBackupStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoringTaskCount Field Functions 
    bool hasRestoringTaskCount() const { return this->restoringTaskCount_ != nullptr;};
    void deleteRestoringTaskCount() { this->restoringTaskCount_ = nullptr;};
    inline int32_t getRestoringTaskCount() const { DARABONBA_PTR_GET_DEFAULT(restoringTaskCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setRestoringTaskCount(int32_t restoringTaskCount) { DARABONBA_PTR_SET_VALUE(restoringTaskCount_, restoringTaskCount) };


    // totalRecoverableCount Field Functions 
    bool hasTotalRecoverableCount() const { return this->totalRecoverableCount_ != nullptr;};
    void deleteTotalRecoverableCount() { this->totalRecoverableCount_ = nullptr;};
    inline int32_t getTotalRecoverableCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecoverableCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setTotalRecoverableCount(int32_t totalRecoverableCount) { DARABONBA_PTR_SET_VALUE(totalRecoverableCount_, totalRecoverableCount) };


    // totalRestoreTaskCount Field Functions 
    bool hasTotalRestoreTaskCount() const { return this->totalRestoreTaskCount_ != nullptr;};
    void deleteTotalRestoreTaskCount() { this->totalRestoreTaskCount_ = nullptr;};
    inline int32_t getTotalRestoreTaskCount() const { DARABONBA_PTR_GET_DEFAULT(totalRestoreTaskCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setTotalRestoreTaskCount(int32_t totalRestoreTaskCount) { DARABONBA_PTR_SET_VALUE(totalRestoreTaskCount_, totalRestoreTaskCount) };


    // unprotectedDatabaseCount Field Functions 
    bool hasUnprotectedDatabaseCount() const { return this->unprotectedDatabaseCount_ != nullptr;};
    void deleteUnprotectedDatabaseCount() { this->unprotectedDatabaseCount_ = nullptr;};
    inline int32_t getUnprotectedDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedDatabaseCount_, 0) };
    inline DescribeUniBackupStatisticsResponseBody& setUnprotectedDatabaseCount(int32_t unprotectedDatabaseCount) { DARABONBA_PTR_SET_VALUE(unprotectedDatabaseCount_, unprotectedDatabaseCount) };


  protected:
    // The number of protected database instances.
    shared_ptr<int32_t> protectedDatabaseCount_ {};
    // The regions of the database instances.
    shared_ptr<vector<DescribeUniBackupStatisticsResponseBody::RegionCountList>> regionCountList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of the restoration tasks that are running.
    shared_ptr<int32_t> restoringTaskCount_ {};
    // The total number of database instances that can be restored.
    shared_ptr<int32_t> totalRecoverableCount_ {};
    // The total number of the restoration tasks.
    shared_ptr<int32_t> totalRestoreTaskCount_ {};
    // The number of unprotected database instances.
    shared_ptr<int32_t> unprotectedDatabaseCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
