// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODYOPTIMIZEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODYOPTIMIZEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QualityResult, qualityResult_);
      DARABONBA_PTR_TO_JSON(QueryKey, queryKey_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QualityResult, qualityResult_);
      DARABONBA_PTR_FROM_JSON(QueryKey, queryKey_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
    };
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail() = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail &) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail &&) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail() = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& operator=(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail &) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& operator=(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->instanceId_ == nullptr && return this->qualityResult_ == nullptr && return this->queryKey_ == nullptr && return this->sqlType_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int32_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // qualityResult Field Functions 
    bool hasQualityResult() const { return this->qualityResult_ != nullptr;};
    void deleteQualityResult() { this->qualityResult_ = nullptr;};
    inline const Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult & qualityResult() const { DARABONBA_PTR_GET_CONST(qualityResult_, Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult) };
    inline Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult qualityResult() { DARABONBA_PTR_GET(qualityResult_, Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& setQualityResult(const Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult & qualityResult) { DARABONBA_PTR_SET_VALUE(qualityResult_, qualityResult) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& setQualityResult(Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult && qualityResult) { DARABONBA_PTR_SET_RVALUE(qualityResult_, qualityResult) };


    // queryKey Field Functions 
    bool hasQueryKey() const { return this->queryKey_ != nullptr;};
    void deleteQueryKey() { this->queryKey_ = nullptr;};
    inline string queryKey() const { DARABONBA_PTR_GET_DEFAULT(queryKey_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& setQueryKey(string queryKey) { DARABONBA_PTR_SET_VALUE(queryKey_, queryKey) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


  protected:
    // The ID of the database.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // The ID of the instance to which the database belongs.
    std::shared_ptr<int32_t> instanceId_ = nullptr;
    // The quality of the SQL statement.
    std::shared_ptr<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult> qualityResult_ = nullptr;
    // The key that is used to query the details of optimization suggestions.
    std::shared_ptr<string> queryKey_ = nullptr;
    // The type of the SQL statement. Valid values: DELETE, UPDATE, and ALTER_TABLE.
    std::shared_ptr<string> sqlType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
