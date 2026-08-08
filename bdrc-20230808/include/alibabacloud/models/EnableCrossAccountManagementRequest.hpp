// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECROSSACCOUNTMANAGEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECROSSACCOUNTMANAGEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class EnableCrossAccountManagementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCrossAccountManagementRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, EnableCrossAccountManagementRequest& obj) { 
      (void)j; (void)obj; 
    };
    EnableCrossAccountManagementRequest() = default ;
    EnableCrossAccountManagementRequest(const EnableCrossAccountManagementRequest &) = default ;
    EnableCrossAccountManagementRequest(EnableCrossAccountManagementRequest &&) = default ;
    EnableCrossAccountManagementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCrossAccountManagementRequest() = default ;
    EnableCrossAccountManagementRequest& operator=(const EnableCrossAccountManagementRequest &) = default ;
    EnableCrossAccountManagementRequest& operator=(EnableCrossAccountManagementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
