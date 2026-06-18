// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHASSIGNSEATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHASSIGNSEATSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class BatchAssignSeatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAssignSeatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(AccountIdsStr, accountIdsStr_);
      DARABONBA_PTR_TO_JSON(CallerUacAccountId, callerUacAccountId_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SeatType, seatType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAssignSeatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(AccountIdsStr, accountIdsStr_);
      DARABONBA_PTR_FROM_JSON(CallerUacAccountId, callerUacAccountId_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SeatType, seatType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    BatchAssignSeatsRequest() = default ;
    BatchAssignSeatsRequest(const BatchAssignSeatsRequest &) = default ;
    BatchAssignSeatsRequest(BatchAssignSeatsRequest &&) = default ;
    BatchAssignSeatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAssignSeatsRequest() = default ;
    BatchAssignSeatsRequest& operator=(const BatchAssignSeatsRequest &) = default ;
    BatchAssignSeatsRequest& operator=(BatchAssignSeatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->accountIdsStr_ == nullptr && this->callerUacAccountId_ == nullptr && this->locale_ == nullptr && this->namespaceId_ == nullptr && this->seatType_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline BatchAssignSeatsRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline BatchAssignSeatsRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // accountIdsStr Field Functions 
    bool hasAccountIdsStr() const { return this->accountIdsStr_ != nullptr;};
    void deleteAccountIdsStr() { this->accountIdsStr_ = nullptr;};
    inline string getAccountIdsStr() const { DARABONBA_PTR_GET_DEFAULT(accountIdsStr_, "") };
    inline BatchAssignSeatsRequest& setAccountIdsStr(string accountIdsStr) { DARABONBA_PTR_SET_VALUE(accountIdsStr_, accountIdsStr) };


    // callerUacAccountId Field Functions 
    bool hasCallerUacAccountId() const { return this->callerUacAccountId_ != nullptr;};
    void deleteCallerUacAccountId() { this->callerUacAccountId_ = nullptr;};
    inline string getCallerUacAccountId() const { DARABONBA_PTR_GET_DEFAULT(callerUacAccountId_, "") };
    inline BatchAssignSeatsRequest& setCallerUacAccountId(string callerUacAccountId) { DARABONBA_PTR_SET_VALUE(callerUacAccountId_, callerUacAccountId) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline BatchAssignSeatsRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline BatchAssignSeatsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline BatchAssignSeatsRequest& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline BatchAssignSeatsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The list of target member IDs.
    shared_ptr<vector<string>> accountIds_ {};
    // The AccountIds in string format.
    shared_ptr<string> accountIdsStr_ {};
    // The account ID of the caller that identifies the initiator of this call.
    shared_ptr<string> callerUacAccountId_ {};
    // The language setting. Valid values: zh-CN and en-US.
    shared_ptr<string> locale_ {};
    // The product namespace ID. For the TokenPlan product, this field is fixed to namespace-1.
    shared_ptr<string> namespaceId_ {};
    // The seat type. Valid values: standard, pro, and max.
    // 
    // This parameter is required.
    shared_ptr<string> seatType_ {};
    // The ID of the target workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
