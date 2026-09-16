// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEUMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEUMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class GetDigitalEmployeeUmodelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalEmployeeUmodelRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalEmployeeUmodelRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetDigitalEmployeeUmodelRequest() = default ;
    GetDigitalEmployeeUmodelRequest(const GetDigitalEmployeeUmodelRequest &) = default ;
    GetDigitalEmployeeUmodelRequest(GetDigitalEmployeeUmodelRequest &&) = default ;
    GetDigitalEmployeeUmodelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalEmployeeUmodelRequest() = default ;
    GetDigitalEmployeeUmodelRequest& operator=(const GetDigitalEmployeeUmodelRequest &) = default ;
    GetDigitalEmployeeUmodelRequest& operator=(GetDigitalEmployeeUmodelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
