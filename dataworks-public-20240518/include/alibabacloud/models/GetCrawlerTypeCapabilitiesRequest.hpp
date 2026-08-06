// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCRAWLERTYPECAPABILITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCRAWLERTYPECAPABILITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCrawlerTypeCapabilitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrawlerTypeCapabilitiesRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetCrawlerTypeCapabilitiesRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetCrawlerTypeCapabilitiesRequest() = default ;
    GetCrawlerTypeCapabilitiesRequest(const GetCrawlerTypeCapabilitiesRequest &) = default ;
    GetCrawlerTypeCapabilitiesRequest(GetCrawlerTypeCapabilitiesRequest &&) = default ;
    GetCrawlerTypeCapabilitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrawlerTypeCapabilitiesRequest() = default ;
    GetCrawlerTypeCapabilitiesRequest& operator=(const GetCrawlerTypeCapabilitiesRequest &) = default ;
    GetCrawlerTypeCapabilitiesRequest& operator=(GetCrawlerTypeCapabilitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
