// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQWENEDUAPIACTIVATIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQWENEDUAPIACTIVATIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class GetQwenEduApiActivationStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQwenEduApiActivationStatusRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetQwenEduApiActivationStatusRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetQwenEduApiActivationStatusRequest() = default ;
    GetQwenEduApiActivationStatusRequest(const GetQwenEduApiActivationStatusRequest &) = default ;
    GetQwenEduApiActivationStatusRequest(GetQwenEduApiActivationStatusRequest &&) = default ;
    GetQwenEduApiActivationStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQwenEduApiActivationStatusRequest() = default ;
    GetQwenEduApiActivationStatusRequest& operator=(const GetQwenEduApiActivationStatusRequest &) = default ;
    GetQwenEduApiActivationStatusRequest& operator=(GetQwenEduApiActivationStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
