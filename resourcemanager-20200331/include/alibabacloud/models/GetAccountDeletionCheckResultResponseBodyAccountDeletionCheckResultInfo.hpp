// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSEBODYACCOUNTDELETIONCHECKRESULTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSEBODYACCOUNTDELETIONCHECKRESULTINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks.hpp>
#include <alibabacloud/models/GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonableChecks, abandonableChecks_);
      DARABONBA_PTR_TO_JSON(AllowDelete, allowDelete_);
      DARABONBA_PTR_TO_JSON(NotAllowReason, notAllowReason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonableChecks, abandonableChecks_);
      DARABONBA_PTR_FROM_JSON(AllowDelete, allowDelete_);
      DARABONBA_PTR_FROM_JSON(NotAllowReason, notAllowReason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo() = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo(const GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo &) = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo(GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo &&) = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo() = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& operator=(const GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo &) = default ;
    GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& operator=(GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abandonableChecks_ == nullptr
        && return this->allowDelete_ == nullptr && return this->notAllowReason_ == nullptr && return this->status_ == nullptr; };
    // abandonableChecks Field Functions 
    bool hasAbandonableChecks() const { return this->abandonableChecks_ != nullptr;};
    void deleteAbandonableChecks() { this->abandonableChecks_ = nullptr;};
    inline const vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks> & abandonableChecks() const { DARABONBA_PTR_GET_CONST(abandonableChecks_, vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks>) };
    inline vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks> abandonableChecks() { DARABONBA_PTR_GET(abandonableChecks_, vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks>) };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& setAbandonableChecks(const vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks> & abandonableChecks) { DARABONBA_PTR_SET_VALUE(abandonableChecks_, abandonableChecks) };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& setAbandonableChecks(vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks> && abandonableChecks) { DARABONBA_PTR_SET_RVALUE(abandonableChecks_, abandonableChecks) };


    // allowDelete Field Functions 
    bool hasAllowDelete() const { return this->allowDelete_ != nullptr;};
    void deleteAllowDelete() { this->allowDelete_ = nullptr;};
    inline string allowDelete() const { DARABONBA_PTR_GET_DEFAULT(allowDelete_, "") };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& setAllowDelete(string allowDelete) { DARABONBA_PTR_SET_VALUE(allowDelete_, allowDelete) };


    // notAllowReason Field Functions 
    bool hasNotAllowReason() const { return this->notAllowReason_ != nullptr;};
    void deleteNotAllowReason() { this->notAllowReason_ = nullptr;};
    inline const vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason> & notAllowReason() const { DARABONBA_PTR_GET_CONST(notAllowReason_, vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason>) };
    inline vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason> notAllowReason() { DARABONBA_PTR_GET(notAllowReason_, vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason>) };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& setNotAllowReason(const vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason> & notAllowReason) { DARABONBA_PTR_SET_VALUE(notAllowReason_, notAllowReason) };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& setNotAllowReason(vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason> && notAllowReason) { DARABONBA_PTR_SET_RVALUE(notAllowReason_, notAllowReason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The check items that you can choose to ignore for the member deletion.
    // 
    // >  This parameter may be returned if the value of AllowDelete is true.
    std::shared_ptr<vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks>> abandonableChecks_ = nullptr;
    // Indicates whether the member can be deleted. Valid values:
    // 
    // *   true: The member can be deleted.
    // *   false: The member cannot be deleted.
    std::shared_ptr<string> allowDelete_ = nullptr;
    // The reasons why the member cannot be deleted.
    // 
    // >  This parameter is returned only if the value of AllowDelete is false.
    std::shared_ptr<vector<Models::GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason>> notAllowReason_ = nullptr;
    // The status of the check. Valid values:
    // 
    // *   PreCheckComplete: The check is complete.
    // *   PreChecking: The check is in progress.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
