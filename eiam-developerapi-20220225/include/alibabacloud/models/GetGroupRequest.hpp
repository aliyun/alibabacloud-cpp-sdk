// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetGroupRequest() = default ;
    GetGroupRequest(const GetGroupRequest &) = default ;
    GetGroupRequest(GetGroupRequest &&) = default ;
    GetGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupRequest() = default ;
    GetGroupRequest& operator=(const GetGroupRequest &) = default ;
    GetGroupRequest& operator=(GetGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
