// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetExperimentRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentRunRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentRunRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetExperimentRunRequest() = default ;
    GetExperimentRunRequest(const GetExperimentRunRequest &) = default ;
    GetExperimentRunRequest(GetExperimentRunRequest &&) = default ;
    GetExperimentRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentRunRequest() = default ;
    GetExperimentRunRequest& operator=(const GetExperimentRunRequest &) = default ;
    GetExperimentRunRequest& operator=(GetExperimentRunRequest &&) = default ;
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
