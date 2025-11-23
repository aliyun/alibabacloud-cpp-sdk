// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ActualAffectRows, actualAffectRows_);
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(EstimateAffectRows, estimateAffectRows_);
      DARABONBA_PTR_TO_JSON(ExeSQL, exeSQL_);
      DARABONBA_PTR_TO_JSON(IgnoreAffectRows, ignoreAffectRows_);
      DARABONBA_PTR_TO_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
      DARABONBA_PTR_TO_JSON(RbAttachmentName, rbAttachmentName_);
      DARABONBA_PTR_TO_JSON(RbSQL, rbSQL_);
      DARABONBA_PTR_TO_JSON(RbSQLType, rbSQLType_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualAffectRows, actualAffectRows_);
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(EstimateAffectRows, estimateAffectRows_);
      DARABONBA_PTR_FROM_JSON(ExeSQL, exeSQL_);
      DARABONBA_PTR_FROM_JSON(IgnoreAffectRows, ignoreAffectRows_);
      DARABONBA_PTR_FROM_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
      DARABONBA_PTR_FROM_JSON(RbAttachmentName, rbAttachmentName_);
      DARABONBA_PTR_FROM_JSON(RbSQL, rbSQL_);
      DARABONBA_PTR_FROM_JSON(RbSQLType, rbSQLType_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
    };
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail &&) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& operator=(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& operator=(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualAffectRows_ == nullptr
        && return this->attachmentName_ == nullptr && return this->classify_ == nullptr && return this->estimateAffectRows_ == nullptr && return this->exeSQL_ == nullptr && return this->ignoreAffectRows_ == nullptr
        && return this->ignoreAffectRowsReason_ == nullptr && return this->rbAttachmentName_ == nullptr && return this->rbSQL_ == nullptr && return this->rbSQLType_ == nullptr && return this->sqlType_ == nullptr; };
    // actualAffectRows Field Functions 
    bool hasActualAffectRows() const { return this->actualAffectRows_ != nullptr;};
    void deleteActualAffectRows() { this->actualAffectRows_ = nullptr;};
    inline int64_t actualAffectRows() const { DARABONBA_PTR_GET_DEFAULT(actualAffectRows_, 0L) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setActualAffectRows(int64_t actualAffectRows) { DARABONBA_PTR_SET_VALUE(actualAffectRows_, actualAffectRows) };


    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // estimateAffectRows Field Functions 
    bool hasEstimateAffectRows() const { return this->estimateAffectRows_ != nullptr;};
    void deleteEstimateAffectRows() { this->estimateAffectRows_ = nullptr;};
    inline int64_t estimateAffectRows() const { DARABONBA_PTR_GET_DEFAULT(estimateAffectRows_, 0L) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setEstimateAffectRows(int64_t estimateAffectRows) { DARABONBA_PTR_SET_VALUE(estimateAffectRows_, estimateAffectRows) };


    // exeSQL Field Functions 
    bool hasExeSQL() const { return this->exeSQL_ != nullptr;};
    void deleteExeSQL() { this->exeSQL_ = nullptr;};
    inline string exeSQL() const { DARABONBA_PTR_GET_DEFAULT(exeSQL_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setExeSQL(string exeSQL) { DARABONBA_PTR_SET_VALUE(exeSQL_, exeSQL) };


    // ignoreAffectRows Field Functions 
    bool hasIgnoreAffectRows() const { return this->ignoreAffectRows_ != nullptr;};
    void deleteIgnoreAffectRows() { this->ignoreAffectRows_ = nullptr;};
    inline bool ignoreAffectRows() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRows_, false) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setIgnoreAffectRows(bool ignoreAffectRows) { DARABONBA_PTR_SET_VALUE(ignoreAffectRows_, ignoreAffectRows) };


    // ignoreAffectRowsReason Field Functions 
    bool hasIgnoreAffectRowsReason() const { return this->ignoreAffectRowsReason_ != nullptr;};
    void deleteIgnoreAffectRowsReason() { this->ignoreAffectRowsReason_ = nullptr;};
    inline string ignoreAffectRowsReason() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRowsReason_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setIgnoreAffectRowsReason(string ignoreAffectRowsReason) { DARABONBA_PTR_SET_VALUE(ignoreAffectRowsReason_, ignoreAffectRowsReason) };


    // rbAttachmentName Field Functions 
    bool hasRbAttachmentName() const { return this->rbAttachmentName_ != nullptr;};
    void deleteRbAttachmentName() { this->rbAttachmentName_ = nullptr;};
    inline string rbAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(rbAttachmentName_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setRbAttachmentName(string rbAttachmentName) { DARABONBA_PTR_SET_VALUE(rbAttachmentName_, rbAttachmentName) };


    // rbSQL Field Functions 
    bool hasRbSQL() const { return this->rbSQL_ != nullptr;};
    void deleteRbSQL() { this->rbSQL_ = nullptr;};
    inline string rbSQL() const { DARABONBA_PTR_GET_DEFAULT(rbSQL_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setRbSQL(string rbSQL) { DARABONBA_PTR_SET_VALUE(rbSQL_, rbSQL) };


    // rbSQLType Field Functions 
    bool hasRbSQLType() const { return this->rbSQLType_ != nullptr;};
    void deleteRbSQLType() { this->rbSQLType_ = nullptr;};
    inline string rbSQLType() const { DARABONBA_PTR_GET_DEFAULT(rbSQLType_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setRbSQLType(string rbSQLType) { DARABONBA_PTR_SET_VALUE(rbSQLType_, rbSQLType) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


  protected:
    // The number of affected rows that is obtained by the precheck.
    std::shared_ptr<int64_t> actualAffectRows_ = nullptr;
    // The name of the attachment that contains the SQL statements used to change data.
    std::shared_ptr<string> attachmentName_ = nullptr;
    // The category of the reason for the data change.
    std::shared_ptr<string> classify_ = nullptr;
    // The estimated number of affected rows.
    std::shared_ptr<int64_t> estimateAffectRows_ = nullptr;
    // The executed SQL statements.
    std::shared_ptr<string> exeSQL_ = nullptr;
    // Indicates whether the precheck result is ignored. Valid values:
    // 
    // - **true**: The precheck result is ignored.
    // - **false**: The precheck result is not ignored.
    std::shared_ptr<bool> ignoreAffectRows_ = nullptr;
    // The reason why the precheck result is ignored.
    std::shared_ptr<string> ignoreAffectRowsReason_ = nullptr;
    // The name of the attachment that contains the SQL statements used to roll back the data change.
    std::shared_ptr<string> rbAttachmentName_ = nullptr;
    // The SQL statements used to roll back the data change.
    std::shared_ptr<string> rbSQL_ = nullptr;
    // The format of the SQL statements used to roll back the data change. Valid values:
    // 
    // - **TEXT**: text
    // - **ATTACHMENT**: attachment
    std::shared_ptr<string> rbSQLType_ = nullptr;
    // The format of the SQL statements used to change data. Valid values:
    // 
    // - **TEXT**: text
    // - **ATTACHMENT**: attachment
    std::shared_ptr<string> sqlType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
