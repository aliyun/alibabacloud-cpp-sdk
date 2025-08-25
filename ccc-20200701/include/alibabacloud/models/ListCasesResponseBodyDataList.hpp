// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCASESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCASESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCasesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCasesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonPhase, abandonPhase_);
      DARABONBA_PTR_TO_JSON(AbandonType, abandonType_);
      DARABONBA_PTR_TO_JSON(AttemptCount, attemptCount_);
      DARABONBA_PTR_TO_JSON(CaseId, caseId_);
      DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
      DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListCasesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonPhase, abandonPhase_);
      DARABONBA_PTR_FROM_JSON(AbandonType, abandonType_);
      DARABONBA_PTR_FROM_JSON(AttemptCount, attemptCount_);
      DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
      DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
      DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListCasesResponseBodyDataList() = default ;
    ListCasesResponseBodyDataList(const ListCasesResponseBodyDataList &) = default ;
    ListCasesResponseBodyDataList(ListCasesResponseBodyDataList &&) = default ;
    ListCasesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCasesResponseBodyDataList() = default ;
    ListCasesResponseBodyDataList& operator=(const ListCasesResponseBodyDataList &) = default ;
    ListCasesResponseBodyDataList& operator=(ListCasesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abandonPhase_ != nullptr
        && this->abandonType_ != nullptr && this->attemptCount_ != nullptr && this->caseId_ != nullptr && this->customVariables_ != nullptr && this->failureReason_ != nullptr
        && this->phoneNumber_ != nullptr && this->state_ != nullptr; };
    // abandonPhase Field Functions 
    bool hasAbandonPhase() const { return this->abandonPhase_ != nullptr;};
    void deleteAbandonPhase() { this->abandonPhase_ = nullptr;};
    inline string abandonPhase() const { DARABONBA_PTR_GET_DEFAULT(abandonPhase_, "") };
    inline ListCasesResponseBodyDataList& setAbandonPhase(string abandonPhase) { DARABONBA_PTR_SET_VALUE(abandonPhase_, abandonPhase) };


    // abandonType Field Functions 
    bool hasAbandonType() const { return this->abandonType_ != nullptr;};
    void deleteAbandonType() { this->abandonType_ = nullptr;};
    inline string abandonType() const { DARABONBA_PTR_GET_DEFAULT(abandonType_, "") };
    inline ListCasesResponseBodyDataList& setAbandonType(string abandonType) { DARABONBA_PTR_SET_VALUE(abandonType_, abandonType) };


    // attemptCount Field Functions 
    bool hasAttemptCount() const { return this->attemptCount_ != nullptr;};
    void deleteAttemptCount() { this->attemptCount_ = nullptr;};
    inline int64_t attemptCount() const { DARABONBA_PTR_GET_DEFAULT(attemptCount_, 0L) };
    inline ListCasesResponseBodyDataList& setAttemptCount(int64_t attemptCount) { DARABONBA_PTR_SET_VALUE(attemptCount_, attemptCount) };


    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline string caseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
    inline ListCasesResponseBodyDataList& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // customVariables Field Functions 
    bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
    void deleteCustomVariables() { this->customVariables_ = nullptr;};
    inline string customVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
    inline ListCasesResponseBodyDataList& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


    // failureReason Field Functions 
    bool hasFailureReason() const { return this->failureReason_ != nullptr;};
    void deleteFailureReason() { this->failureReason_ = nullptr;};
    inline string failureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
    inline ListCasesResponseBodyDataList& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline ListCasesResponseBodyDataList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListCasesResponseBodyDataList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> abandonPhase_ = nullptr;
    std::shared_ptr<string> abandonType_ = nullptr;
    std::shared_ptr<int64_t> attemptCount_ = nullptr;
    std::shared_ptr<string> caseId_ = nullptr;
    std::shared_ptr<string> customVariables_ = nullptr;
    std::shared_ptr<string> failureReason_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
