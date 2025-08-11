// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEUSERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEUSERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddWorkspaceUsersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Failure, failure_);
      DARABONBA_ANY_TO_JSON(FailureDetail, failureDetail_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Failure, failure_);
      DARABONBA_ANY_FROM_JSON(FailureDetail, failureDetail_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    AddWorkspaceUsersResponseBodyResult() = default ;
    AddWorkspaceUsersResponseBodyResult(const AddWorkspaceUsersResponseBodyResult &) = default ;
    AddWorkspaceUsersResponseBodyResult(AddWorkspaceUsersResponseBodyResult &&) = default ;
    AddWorkspaceUsersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceUsersResponseBodyResult() = default ;
    AddWorkspaceUsersResponseBodyResult& operator=(const AddWorkspaceUsersResponseBodyResult &) = default ;
    AddWorkspaceUsersResponseBodyResult& operator=(AddWorkspaceUsersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failure_ != nullptr
        && this->failureDetail_ != nullptr && this->success_ != nullptr && this->total_ != nullptr; };
    // failure Field Functions 
    bool hasFailure() const { return this->failure_ != nullptr;};
    void deleteFailure() { this->failure_ = nullptr;};
    inline int32_t failure() const { DARABONBA_PTR_GET_DEFAULT(failure_, 0) };
    inline AddWorkspaceUsersResponseBodyResult& setFailure(int32_t failure) { DARABONBA_PTR_SET_VALUE(failure_, failure) };


    // failureDetail Field Functions 
    bool hasFailureDetail() const { return this->failureDetail_ != nullptr;};
    void deleteFailureDetail() { this->failureDetail_ = nullptr;};
    inline     const Darabonba::Json & failureDetail() const { DARABONBA_GET(failureDetail_) };
    Darabonba::Json & failureDetail() { DARABONBA_GET(failureDetail_) };
    inline AddWorkspaceUsersResponseBodyResult& setFailureDetail(const Darabonba::Json & failureDetail) { DARABONBA_SET_VALUE(failureDetail_, failureDetail) };
    inline AddWorkspaceUsersResponseBodyResult& setFailureDetail(Darabonba::Json & failureDetail) { DARABONBA_SET_RVALUE(failureDetail_, failureDetail) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline int32_t success() const { DARABONBA_PTR_GET_DEFAULT(success_, 0) };
    inline AddWorkspaceUsersResponseBodyResult& setSuccess(int32_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline AddWorkspaceUsersResponseBodyResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Number of users that failed to be added.
    std::shared_ptr<int32_t> failure_ = nullptr;
    // Reasons for the failures.
    Darabonba::Json failureDetail_ = nullptr;
    // Number of users that were added successfully.
    std::shared_ptr<int32_t> success_ = nullptr;
    // Total number of users being added.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
