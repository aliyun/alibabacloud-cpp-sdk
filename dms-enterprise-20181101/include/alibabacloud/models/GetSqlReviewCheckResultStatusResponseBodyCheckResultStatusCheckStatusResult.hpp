// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODYCHECKRESULTSTATUSCHECKSTATUSRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODYCHECKRESULTSTATUSCHECKSTATUSRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& obj) { 
      DARABONBA_PTR_TO_JSON(CheckNotPass, checkNotPass_);
      DARABONBA_PTR_TO_JSON(CheckPass, checkPass_);
      DARABONBA_PTR_TO_JSON(ForceNotPass, forceNotPass_);
      DARABONBA_PTR_TO_JSON(ForcePass, forcePass_);
      DARABONBA_PTR_TO_JSON(New, new_);
      DARABONBA_PTR_TO_JSON(Unknown, unknown_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckNotPass, checkNotPass_);
      DARABONBA_PTR_FROM_JSON(CheckPass, checkPass_);
      DARABONBA_PTR_FROM_JSON(ForceNotPass, forceNotPass_);
      DARABONBA_PTR_FROM_JSON(ForcePass, forcePass_);
      DARABONBA_PTR_FROM_JSON(New, new_);
      DARABONBA_PTR_FROM_JSON(Unknown, unknown_);
    };
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult() = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult(const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult &) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult(GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult &&) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult() = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& operator=(const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult &) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& operator=(GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkNotPass_ == nullptr
        && return this->checkPass_ == nullptr && return this->forceNotPass_ == nullptr && return this->forcePass_ == nullptr && return this->new_ == nullptr && return this->unknown_ == nullptr; };
    // checkNotPass Field Functions 
    bool hasCheckNotPass() const { return this->checkNotPass_ != nullptr;};
    void deleteCheckNotPass() { this->checkNotPass_ = nullptr;};
    inline int64_t checkNotPass() const { DARABONBA_PTR_GET_DEFAULT(checkNotPass_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& setCheckNotPass(int64_t checkNotPass) { DARABONBA_PTR_SET_VALUE(checkNotPass_, checkNotPass) };


    // checkPass Field Functions 
    bool hasCheckPass() const { return this->checkPass_ != nullptr;};
    void deleteCheckPass() { this->checkPass_ = nullptr;};
    inline int64_t checkPass() const { DARABONBA_PTR_GET_DEFAULT(checkPass_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& setCheckPass(int64_t checkPass) { DARABONBA_PTR_SET_VALUE(checkPass_, checkPass) };


    // forceNotPass Field Functions 
    bool hasForceNotPass() const { return this->forceNotPass_ != nullptr;};
    void deleteForceNotPass() { this->forceNotPass_ = nullptr;};
    inline int64_t forceNotPass() const { DARABONBA_PTR_GET_DEFAULT(forceNotPass_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& setForceNotPass(int64_t forceNotPass) { DARABONBA_PTR_SET_VALUE(forceNotPass_, forceNotPass) };


    // forcePass Field Functions 
    bool hasForcePass() const { return this->forcePass_ != nullptr;};
    void deleteForcePass() { this->forcePass_ = nullptr;};
    inline int64_t forcePass() const { DARABONBA_PTR_GET_DEFAULT(forcePass_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& setForcePass(int64_t forcePass) { DARABONBA_PTR_SET_VALUE(forcePass_, forcePass) };


    // new Field Functions 
    bool hasNew() const { return this->new_ != nullptr;};
    void deleteNew() { this->new_ = nullptr;};
    inline int64_t _new() const { DARABONBA_PTR_GET_DEFAULT(new_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& setNew(int64_t _new) { DARABONBA_PTR_SET_VALUE(new_, _new) };


    // unknown Field Functions 
    bool hasUnknown() const { return this->unknown_ != nullptr;};
    void deleteUnknown() { this->unknown_ = nullptr;};
    inline int64_t unknown() const { DARABONBA_PTR_GET_DEFAULT(unknown_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusCheckStatusResult& setUnknown(int64_t unknown) { DARABONBA_PTR_SET_VALUE(unknown_, unknown) };


  protected:
    // The number of SQL statements that failed to pass the review.
    std::shared_ptr<int64_t> checkNotPass_ = nullptr;
    // The number of SQL statements that passed the review.
    std::shared_ptr<int64_t> checkPass_ = nullptr;
    // The number of SQL statements that failed to pass the manual review.
    std::shared_ptr<int64_t> forceNotPass_ = nullptr;
    // The number of SQL statements that passed the manual review.
    std::shared_ptr<int64_t> forcePass_ = nullptr;
    // The number of SQL statements to be reviewed.
    std::shared_ptr<int64_t> new_ = nullptr;
    // The number of abnormal SQL statements.
    std::shared_ptr<int64_t> unknown_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
