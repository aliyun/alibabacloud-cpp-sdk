// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATEQWENEDUAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATEQWENEDUAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class ActivateQwenEduApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateQwenEduApiRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ActivateQwenEduApiRequest& obj) { 
      (void)j; (void)obj; 
    };
    ActivateQwenEduApiRequest() = default ;
    ActivateQwenEduApiRequest(const ActivateQwenEduApiRequest &) = default ;
    ActivateQwenEduApiRequest(ActivateQwenEduApiRequest &&) = default ;
    ActivateQwenEduApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateQwenEduApiRequest() = default ;
    ActivateQwenEduApiRequest& operator=(const ActivateQwenEduApiRequest &) = default ;
    ActivateQwenEduApiRequest& operator=(ActivateQwenEduApiRequest &&) = default ;
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
