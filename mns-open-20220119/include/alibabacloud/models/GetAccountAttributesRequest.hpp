// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetAccountAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountAttributesRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAccountAttributesRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAccountAttributesRequest() = default ;
    GetAccountAttributesRequest(const GetAccountAttributesRequest &) = default ;
    GetAccountAttributesRequest(GetAccountAttributesRequest &&) = default ;
    GetAccountAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountAttributesRequest() = default ;
    GetAccountAttributesRequest& operator=(const GetAccountAttributesRequest &) = default ;
    GetAccountAttributesRequest& operator=(GetAccountAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
