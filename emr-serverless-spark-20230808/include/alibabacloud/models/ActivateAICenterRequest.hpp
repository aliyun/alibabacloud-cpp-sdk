// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATEAICENTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATEAICENTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ActivateAICenterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateAICenterRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ActivateAICenterRequest& obj) { 
      (void)j; (void)obj; 
    };
    ActivateAICenterRequest() = default ;
    ActivateAICenterRequest(const ActivateAICenterRequest &) = default ;
    ActivateAICenterRequest(ActivateAICenterRequest &&) = default ;
    ActivateAICenterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateAICenterRequest() = default ;
    ActivateAICenterRequest& operator=(const ActivateAICenterRequest &) = default ;
    ActivateAICenterRequest& operator=(ActivateAICenterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
