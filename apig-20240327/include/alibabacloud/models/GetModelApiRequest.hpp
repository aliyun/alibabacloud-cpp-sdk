// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetModelApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelApiRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetModelApiRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetModelApiRequest() = default ;
    GetModelApiRequest(const GetModelApiRequest &) = default ;
    GetModelApiRequest(GetModelApiRequest &&) = default ;
    GetModelApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelApiRequest() = default ;
    GetModelApiRequest& operator=(const GetModelApiRequest &) = default ;
    GetModelApiRequest& operator=(GetModelApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
