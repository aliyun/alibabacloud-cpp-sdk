// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CEASEFUNCTIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CEASEFUNCTIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class CeaseFunctionInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CeaseFunctionInstanceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, CeaseFunctionInstanceRequest& obj) { 
      (void)j; (void)obj; 
    };
    CeaseFunctionInstanceRequest() = default ;
    CeaseFunctionInstanceRequest(const CeaseFunctionInstanceRequest &) = default ;
    CeaseFunctionInstanceRequest(CeaseFunctionInstanceRequest &&) = default ;
    CeaseFunctionInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CeaseFunctionInstanceRequest() = default ;
    CeaseFunctionInstanceRequest& operator=(const CeaseFunctionInstanceRequest &) = default ;
    CeaseFunctionInstanceRequest& operator=(CeaseFunctionInstanceRequest &&) = default ;
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
