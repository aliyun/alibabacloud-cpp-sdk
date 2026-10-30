// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOPILOTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOPILOTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetCopilotSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCopilotSessionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetCopilotSessionRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetCopilotSessionRequest() = default ;
    GetCopilotSessionRequest(const GetCopilotSessionRequest &) = default ;
    GetCopilotSessionRequest(GetCopilotSessionRequest &&) = default ;
    GetCopilotSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCopilotSessionRequest() = default ;
    GetCopilotSessionRequest& operator=(const GetCopilotSessionRequest &) = default ;
    GetCopilotSessionRequest& operator=(GetCopilotSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
