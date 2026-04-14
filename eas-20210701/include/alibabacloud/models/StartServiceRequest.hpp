// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class StartServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StartServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    StartServiceRequest() = default ;
    StartServiceRequest(const StartServiceRequest &) = default ;
    StartServiceRequest(StartServiceRequest &&) = default ;
    StartServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartServiceRequest() = default ;
    StartServiceRequest& operator=(const StartServiceRequest &) = default ;
    StartServiceRequest& operator=(StartServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
