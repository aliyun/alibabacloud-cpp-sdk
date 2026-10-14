// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPTIMIZETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPTIMIZETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetOptimizeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOptimizeTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetOptimizeTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetOptimizeTaskRequest() = default ;
    GetOptimizeTaskRequest(const GetOptimizeTaskRequest &) = default ;
    GetOptimizeTaskRequest(GetOptimizeTaskRequest &&) = default ;
    GetOptimizeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOptimizeTaskRequest() = default ;
    GetOptimizeTaskRequest& operator=(const GetOptimizeTaskRequest &) = default ;
    GetOptimizeTaskRequest& operator=(GetOptimizeTaskRequest &&) = default ;
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
