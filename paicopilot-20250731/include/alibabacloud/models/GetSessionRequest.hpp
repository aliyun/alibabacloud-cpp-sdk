// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class GetSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetSessionRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetSessionRequest() = default ;
    GetSessionRequest(const GetSessionRequest &) = default ;
    GetSessionRequest(GetSessionRequest &&) = default ;
    GetSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionRequest() = default ;
    GetSessionRequest& operator=(const GetSessionRequest &) = default ;
    GetSessionRequest& operator=(GetSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
