// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUBECARDAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUBECARDAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListCubecardAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCubecardAppsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListCubecardAppsRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListCubecardAppsRequest() = default ;
    ListCubecardAppsRequest(const ListCubecardAppsRequest &) = default ;
    ListCubecardAppsRequest(ListCubecardAppsRequest &&) = default ;
    ListCubecardAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCubecardAppsRequest() = default ;
    ListCubecardAppsRequest& operator=(const ListCubecardAppsRequest &) = default ;
    ListCubecardAppsRequest& operator=(ListCubecardAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
