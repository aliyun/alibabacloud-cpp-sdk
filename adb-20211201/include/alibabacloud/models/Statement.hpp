// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATEMENT_HPP_
#define ALIBABACLOUD_MODELS_STATEMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class Statement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Statement& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CodeState, codeState_);
      DARABONBA_PTR_TO_JSON(CodeType, codeType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(HaveRows, haveRows_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, Statement& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CodeState, codeState_);
      DARABONBA_PTR_FROM_JSON(CodeType, codeType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(HaveRows, haveRows_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    Statement() = default ;
    Statement(const Statement &) = default ;
    Statement(Statement &&) = default ;
    Statement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Statement() = default ;
    Statement& operator=(const Statement &) = default ;
    Statement& operator=(Statement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUid_ != nullptr
        && this->code_ != nullptr && this->codeState_ != nullptr && this->codeType_ != nullptr && this->endTime_ != nullptr && this->error_ != nullptr
        && this->haveRows_ != nullptr && this->output_ != nullptr && this->resourceGroup_ != nullptr && this->sessionId_ != nullptr && this->startTime_ != nullptr
        && this->statementId_ != nullptr && this->totalCount_ != nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline int64_t aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, 0L) };
    inline Statement& setAliyunUid(int64_t aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Statement& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeState Field Functions 
    bool hasCodeState() const { return this->codeState_ != nullptr;};
    void deleteCodeState() { this->codeState_ = nullptr;};
    inline string codeState() const { DARABONBA_PTR_GET_DEFAULT(codeState_, "") };
    inline Statement& setCodeState(string codeState) { DARABONBA_PTR_SET_VALUE(codeState_, codeState) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string codeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline Statement& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline Statement& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline Statement& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // haveRows Field Functions 
    bool hasHaveRows() const { return this->haveRows_ != nullptr;};
    void deleteHaveRows() { this->haveRows_ = nullptr;};
    inline bool haveRows() const { DARABONBA_PTR_GET_DEFAULT(haveRows_, false) };
    inline Statement& setHaveRows(bool haveRows) { DARABONBA_PTR_SET_VALUE(haveRows_, haveRows) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline Statement& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline Statement& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline Statement& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline Statement& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline int64_t statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, 0L) };
    inline Statement& setStatementId(int64_t statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline Statement& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> aliyunUid_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> codeState_ = nullptr;
    std::shared_ptr<string> codeType_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<bool> haveRows_ = nullptr;
    std::shared_ptr<string> output_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<int64_t> sessionId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> statementId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
