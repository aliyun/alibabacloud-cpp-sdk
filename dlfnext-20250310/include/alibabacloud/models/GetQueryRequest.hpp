// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetQueryRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetQueryRequest() = default ;
    GetQueryRequest(const GetQueryRequest &) = default ;
    GetQueryRequest(GetQueryRequest &&) = default ;
    GetQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryRequest() = default ;
    GetQueryRequest& operator=(const GetQueryRequest &) = default ;
    GetQueryRequest& operator=(GetQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
