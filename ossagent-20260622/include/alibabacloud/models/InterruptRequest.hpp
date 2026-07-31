// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTERRUPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTERRUPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260622
{
namespace Models
{
  class InterruptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InterruptRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, InterruptRequest& obj) { 
      (void)j; (void)obj; 
    };
    InterruptRequest() = default ;
    InterruptRequest(const InterruptRequest &) = default ;
    InterruptRequest(InterruptRequest &&) = default ;
    InterruptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InterruptRequest() = default ;
    InterruptRequest& operator=(const InterruptRequest &) = default ;
    InterruptRequest& operator=(InterruptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssAgent20260622
#endif
