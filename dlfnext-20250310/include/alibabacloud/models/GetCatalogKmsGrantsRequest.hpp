// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGKMSGRANTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGKMSGRANTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetCatalogKmsGrantsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogKmsGrantsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogKmsGrantsRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetCatalogKmsGrantsRequest() = default ;
    GetCatalogKmsGrantsRequest(const GetCatalogKmsGrantsRequest &) = default ;
    GetCatalogKmsGrantsRequest(GetCatalogKmsGrantsRequest &&) = default ;
    GetCatalogKmsGrantsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogKmsGrantsRequest() = default ;
    GetCatalogKmsGrantsRequest& operator=(const GetCatalogKmsGrantsRequest &) = default ;
    GetCatalogKmsGrantsRequest& operator=(GetCatalogKmsGrantsRequest &&) = default ;
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
