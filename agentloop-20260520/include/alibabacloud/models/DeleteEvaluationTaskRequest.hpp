// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVALUATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVALUATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteEvaluationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEvaluationTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteEvaluationTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteEvaluationTaskRequest() = default ;
    DeleteEvaluationTaskRequest(const DeleteEvaluationTaskRequest &) = default ;
    DeleteEvaluationTaskRequest(DeleteEvaluationTaskRequest &&) = default ;
    DeleteEvaluationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEvaluationTaskRequest() = default ;
    DeleteEvaluationTaskRequest& operator=(const DeleteEvaluationTaskRequest &) = default ;
    DeleteEvaluationTaskRequest& operator=(DeleteEvaluationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
