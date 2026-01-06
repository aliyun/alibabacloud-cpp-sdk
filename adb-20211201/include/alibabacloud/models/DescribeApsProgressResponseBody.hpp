// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsHiveProgress, apsHiveProgress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessPercentage, successPercentage_);
      DARABONBA_PTR_TO_JSON(SuccessTableCount, successTableCount_);
      DARABONBA_PTR_TO_JSON(TotalTableCount, totalTableCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsHiveProgress, apsHiveProgress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessPercentage, successPercentage_);
      DARABONBA_PTR_FROM_JSON(SuccessTableCount, successTableCount_);
      DARABONBA_PTR_FROM_JSON(TotalTableCount, totalTableCount_);
    };
    DescribeApsProgressResponseBody() = default ;
    DescribeApsProgressResponseBody(const DescribeApsProgressResponseBody &) = default ;
    DescribeApsProgressResponseBody(DescribeApsProgressResponseBody &&) = default ;
    DescribeApsProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsProgressResponseBody() = default ;
    DescribeApsProgressResponseBody& operator=(const DescribeApsProgressResponseBody &) = default ;
    DescribeApsProgressResponseBody& operator=(DescribeApsProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApsHiveProgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApsHiveProgress& obj) { 
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(TbName, tbName_);
      };
      friend void from_json(const Darabonba::Json& j, ApsHiveProgress& obj) { 
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(TbName, tbName_);
      };
      ApsHiveProgress() = default ;
      ApsHiveProgress(const ApsHiveProgress &) = default ;
      ApsHiveProgress(ApsHiveProgress &&) = default ;
      ApsHiveProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApsHiveProgress() = default ;
      ApsHiveProgress& operator=(const ApsHiveProgress &) = default ;
      ApsHiveProgress& operator=(ApsHiveProgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbName_ == nullptr
        && this->progress_ == nullptr && this->speed_ == nullptr && this->tbName_ == nullptr; };
      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline ApsHiveProgress& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline ApsHiveProgress& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
      inline ApsHiveProgress& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // tbName Field Functions 
      bool hasTbName() const { return this->tbName_ != nullptr;};
      void deleteTbName() { this->tbName_ = nullptr;};
      inline string getTbName() const { DARABONBA_PTR_GET_DEFAULT(tbName_, "") };
      inline ApsHiveProgress& setTbName(string tbName) { DARABONBA_PTR_SET_VALUE(tbName_, tbName) };


    protected:
      // The name of the database.
      shared_ptr<string> dbName_ {};
      // The migration progress.
      shared_ptr<string> progress_ {};
      // The migration speed.
      shared_ptr<string> speed_ {};
      // The name of the table.
      shared_ptr<string> tbName_ {};
    };

    virtual bool empty() const override { return this->apsHiveProgress_ == nullptr
        && this->requestId_ == nullptr && this->successPercentage_ == nullptr && this->successTableCount_ == nullptr && this->totalTableCount_ == nullptr; };
    // apsHiveProgress Field Functions 
    bool hasApsHiveProgress() const { return this->apsHiveProgress_ != nullptr;};
    void deleteApsHiveProgress() { this->apsHiveProgress_ = nullptr;};
    inline const vector<DescribeApsProgressResponseBody::ApsHiveProgress> & getApsHiveProgress() const { DARABONBA_PTR_GET_CONST(apsHiveProgress_, vector<DescribeApsProgressResponseBody::ApsHiveProgress>) };
    inline vector<DescribeApsProgressResponseBody::ApsHiveProgress> getApsHiveProgress() { DARABONBA_PTR_GET(apsHiveProgress_, vector<DescribeApsProgressResponseBody::ApsHiveProgress>) };
    inline DescribeApsProgressResponseBody& setApsHiveProgress(const vector<DescribeApsProgressResponseBody::ApsHiveProgress> & apsHiveProgress) { DARABONBA_PTR_SET_VALUE(apsHiveProgress_, apsHiveProgress) };
    inline DescribeApsProgressResponseBody& setApsHiveProgress(vector<DescribeApsProgressResponseBody::ApsHiveProgress> && apsHiveProgress) { DARABONBA_PTR_SET_RVALUE(apsHiveProgress_, apsHiveProgress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successPercentage Field Functions 
    bool hasSuccessPercentage() const { return this->successPercentage_ != nullptr;};
    void deleteSuccessPercentage() { this->successPercentage_ = nullptr;};
    inline int32_t getSuccessPercentage() const { DARABONBA_PTR_GET_DEFAULT(successPercentage_, 0) };
    inline DescribeApsProgressResponseBody& setSuccessPercentage(int32_t successPercentage) { DARABONBA_PTR_SET_VALUE(successPercentage_, successPercentage) };


    // successTableCount Field Functions 
    bool hasSuccessTableCount() const { return this->successTableCount_ != nullptr;};
    void deleteSuccessTableCount() { this->successTableCount_ = nullptr;};
    inline int32_t getSuccessTableCount() const { DARABONBA_PTR_GET_DEFAULT(successTableCount_, 0) };
    inline DescribeApsProgressResponseBody& setSuccessTableCount(int32_t successTableCount) { DARABONBA_PTR_SET_VALUE(successTableCount_, successTableCount) };


    // totalTableCount Field Functions 
    bool hasTotalTableCount() const { return this->totalTableCount_ != nullptr;};
    void deleteTotalTableCount() { this->totalTableCount_ = nullptr;};
    inline int32_t getTotalTableCount() const { DARABONBA_PTR_GET_DEFAULT(totalTableCount_, 0) };
    inline DescribeApsProgressResponseBody& setTotalTableCount(int32_t totalTableCount) { DARABONBA_PTR_SET_VALUE(totalTableCount_, totalTableCount) };


  protected:
    // The migration progress.
    shared_ptr<vector<DescribeApsProgressResponseBody::ApsHiveProgress>> apsHiveProgress_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The success rate.
    shared_ptr<int32_t> successPercentage_ {};
    // The total number of migrated tables returned.
    shared_ptr<int32_t> successTableCount_ {};
    // The total number of tables to be migrated.
    shared_ptr<int32_t> totalTableCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
