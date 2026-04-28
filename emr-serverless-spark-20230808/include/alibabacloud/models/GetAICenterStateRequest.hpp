// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICENTERSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAICENTERSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetAICenterStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICenterStateRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAICenterStateRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAICenterStateRequest() = default ;
    GetAICenterStateRequest(const GetAICenterStateRequest &) = default ;
    GetAICenterStateRequest(GetAICenterStateRequest &&) = default ;
    GetAICenterStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICenterStateRequest() = default ;
    GetAICenterStateRequest& operator=(const GetAICenterStateRequest &) = default ;
    GetAICenterStateRequest& operator=(GetAICenterStateRequest &&) = default ;
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
