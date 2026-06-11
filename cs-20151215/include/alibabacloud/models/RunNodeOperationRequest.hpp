// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNODEOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNNODEOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class RunNodeOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNodeOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operationAction, operationAction_);
      DARABONBA_PTR_TO_JSON(operationArgs, operationArgs_);
    };
    friend void from_json(const Darabonba::Json& j, RunNodeOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operationAction, operationAction_);
      DARABONBA_PTR_FROM_JSON(operationArgs, operationArgs_);
    };
    RunNodeOperationRequest() = default ;
    RunNodeOperationRequest(const RunNodeOperationRequest &) = default ;
    RunNodeOperationRequest(RunNodeOperationRequest &&) = default ;
    RunNodeOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNodeOperationRequest() = default ;
    RunNodeOperationRequest& operator=(const RunNodeOperationRequest &) = default ;
    RunNodeOperationRequest& operator=(RunNodeOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationAction_ == nullptr
        && this->operationArgs_ == nullptr; };
    // operationAction Field Functions 
    bool hasOperationAction() const { return this->operationAction_ != nullptr;};
    void deleteOperationAction() { this->operationAction_ = nullptr;};
    inline string getOperationAction() const { DARABONBA_PTR_GET_DEFAULT(operationAction_, "") };
    inline RunNodeOperationRequest& setOperationAction(string operationAction) { DARABONBA_PTR_SET_VALUE(operationAction_, operationAction) };


    // operationArgs Field Functions 
    bool hasOperationArgs() const { return this->operationArgs_ != nullptr;};
    void deleteOperationArgs() { this->operationArgs_ = nullptr;};
    inline const vector<string> & getOperationArgs() const { DARABONBA_PTR_GET_CONST(operationArgs_, vector<string>) };
    inline vector<string> getOperationArgs() { DARABONBA_PTR_GET(operationArgs_, vector<string>) };
    inline RunNodeOperationRequest& setOperationArgs(const vector<string> & operationArgs) { DARABONBA_PTR_SET_VALUE(operationArgs_, operationArgs) };
    inline RunNodeOperationRequest& setOperationArgs(vector<string> && operationArgs) { DARABONBA_PTR_SET_RVALUE(operationArgs_, operationArgs) };


  protected:
    // This parameter is required.
    shared_ptr<string> operationAction_ {};
    shared_ptr<vector<string>> operationArgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
