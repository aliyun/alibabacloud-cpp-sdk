// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERMMSTIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERMMSTIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class TriggerMmsTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerMmsTimerRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, TriggerMmsTimerRequest& obj) { 
      (void)j; (void)obj; 
    };
    TriggerMmsTimerRequest() = default ;
    TriggerMmsTimerRequest(const TriggerMmsTimerRequest &) = default ;
    TriggerMmsTimerRequest(TriggerMmsTimerRequest &&) = default ;
    TriggerMmsTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerMmsTimerRequest() = default ;
    TriggerMmsTimerRequest& operator=(const TriggerMmsTimerRequest &) = default ;
    TriggerMmsTimerRequest& operator=(TriggerMmsTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
