// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRERUNWORKFLOWINSTANCESRESULTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETRERUNWORKFLOWINSTANCESRESULTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetRerunWorkflowInstancesResultResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRerunWorkflowInstancesResultResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailureMessage, failureMessage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRerunWorkflowInstancesResultResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureMessage, failureMessage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRerunWorkflowInstancesResultResponseBodyResult() = default ;
    GetRerunWorkflowInstancesResultResponseBodyResult(const GetRerunWorkflowInstancesResultResponseBodyResult &) = default ;
    GetRerunWorkflowInstancesResultResponseBodyResult(GetRerunWorkflowInstancesResultResponseBodyResult &&) = default ;
    GetRerunWorkflowInstancesResultResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRerunWorkflowInstancesResultResponseBodyResult() = default ;
    GetRerunWorkflowInstancesResultResponseBodyResult& operator=(const GetRerunWorkflowInstancesResultResponseBodyResult &) = default ;
    GetRerunWorkflowInstancesResultResponseBodyResult& operator=(GetRerunWorkflowInstancesResultResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failureMessage_ != nullptr
        && this->status_ != nullptr; };
    // failureMessage Field Functions 
    bool hasFailureMessage() const { return this->failureMessage_ != nullptr;};
    void deleteFailureMessage() { this->failureMessage_ = nullptr;};
    inline string failureMessage() const { DARABONBA_PTR_GET_DEFAULT(failureMessage_, "") };
    inline GetRerunWorkflowInstancesResultResponseBodyResult& setFailureMessage(string failureMessage) { DARABONBA_PTR_SET_VALUE(failureMessage_, failureMessage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRerunWorkflowInstancesResultResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The failure message. Returned if the rerun fails.
    std::shared_ptr<string> failureMessage_ = nullptr;
    // The status. NotRun Success Failure
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
