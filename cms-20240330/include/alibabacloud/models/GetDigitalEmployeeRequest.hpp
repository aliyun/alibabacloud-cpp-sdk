// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetDigitalEmployeeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalEmployeeRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalEmployeeRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetDigitalEmployeeRequest() = default ;
    GetDigitalEmployeeRequest(const GetDigitalEmployeeRequest &) = default ;
    GetDigitalEmployeeRequest(GetDigitalEmployeeRequest &&) = default ;
    GetDigitalEmployeeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalEmployeeRequest() = default ;
    GetDigitalEmployeeRequest& operator=(const GetDigitalEmployeeRequest &) = default ;
    GetDigitalEmployeeRequest& operator=(GetDigitalEmployeeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
