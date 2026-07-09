// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVALUATIONRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVALUATIONRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateEvaluationRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEvaluationRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEvaluationRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateEvaluationRunRequest() = default ;
    UpdateEvaluationRunRequest(const UpdateEvaluationRunRequest &) = default ;
    UpdateEvaluationRunRequest(UpdateEvaluationRunRequest &&) = default ;
    UpdateEvaluationRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEvaluationRunRequest() = default ;
    UpdateEvaluationRunRequest& operator=(const UpdateEvaluationRunRequest &) = default ;
    UpdateEvaluationRunRequest& operator=(UpdateEvaluationRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateEvaluationRunRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The target status. Currently, only stop-related statuses are supported.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
