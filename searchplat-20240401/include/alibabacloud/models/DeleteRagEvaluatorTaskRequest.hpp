// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERAGEVALUATORTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERAGEVALUATORTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class DeleteRagEvaluatorTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRagEvaluatorTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteRagEvaluatorTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteRagEvaluatorTaskRequest() = default ;
    DeleteRagEvaluatorTaskRequest(const DeleteRagEvaluatorTaskRequest &) = default ;
    DeleteRagEvaluatorTaskRequest(DeleteRagEvaluatorTaskRequest &&) = default ;
    DeleteRagEvaluatorTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRagEvaluatorTaskRequest() = default ;
    DeleteRagEvaluatorTaskRequest& operator=(const DeleteRagEvaluatorTaskRequest &) = default ;
    DeleteRagEvaluatorTaskRequest& operator=(DeleteRagEvaluatorTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
