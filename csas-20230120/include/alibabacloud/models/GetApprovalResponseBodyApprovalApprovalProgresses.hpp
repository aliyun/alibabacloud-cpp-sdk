// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALRESPONSEBODYAPPROVALAPPROVALPROGRESSES_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALRESPONSEBODYAPPROVALAPPROVALPROGRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApprovalResponseBodyApprovalApprovalProgressesOperators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalResponseBodyApprovalApprovalProgresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalResponseBodyApprovalApprovalProgresses& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(Operators, operators_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalResponseBodyApprovalApprovalProgresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(Operators, operators_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetApprovalResponseBodyApprovalApprovalProgresses() = default ;
    GetApprovalResponseBodyApprovalApprovalProgresses(const GetApprovalResponseBodyApprovalApprovalProgresses &) = default ;
    GetApprovalResponseBodyApprovalApprovalProgresses(GetApprovalResponseBodyApprovalApprovalProgresses &&) = default ;
    GetApprovalResponseBodyApprovalApprovalProgresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalResponseBodyApprovalApprovalProgresses() = default ;
    GetApprovalResponseBodyApprovalApprovalProgresses& operator=(const GetApprovalResponseBodyApprovalApprovalProgresses &) = default ;
    GetApprovalResponseBodyApprovalApprovalProgresses& operator=(GetApprovalResponseBodyApprovalApprovalProgresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->comment_ != nullptr && this->executor_ != nullptr && this->operators_ != nullptr && this->status_ != nullptr && this->timestamp_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetApprovalResponseBodyApprovalApprovalProgresses& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetApprovalResponseBodyApprovalApprovalProgresses& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline string executor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
    inline GetApprovalResponseBodyApprovalApprovalProgresses& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline const vector<Models::GetApprovalResponseBodyApprovalApprovalProgressesOperators> & operators() const { DARABONBA_PTR_GET_CONST(operators_, vector<Models::GetApprovalResponseBodyApprovalApprovalProgressesOperators>) };
    inline vector<Models::GetApprovalResponseBodyApprovalApprovalProgressesOperators> operators() { DARABONBA_PTR_GET(operators_, vector<Models::GetApprovalResponseBodyApprovalApprovalProgressesOperators>) };
    inline GetApprovalResponseBodyApprovalApprovalProgresses& setOperators(const vector<Models::GetApprovalResponseBodyApprovalApprovalProgressesOperators> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
    inline GetApprovalResponseBodyApprovalApprovalProgresses& setOperators(vector<Models::GetApprovalResponseBodyApprovalApprovalProgressesOperators> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetApprovalResponseBodyApprovalApprovalProgresses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetApprovalResponseBodyApprovalApprovalProgresses& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> executor_ = nullptr;
    std::shared_ptr<vector<Models::GetApprovalResponseBodyApprovalApprovalProgressesOperators>> operators_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
