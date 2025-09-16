// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONLINECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONLINECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListOnlineConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOnlineConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, ListOnlineConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
    };
    ListOnlineConfigsRequest() = default ;
    ListOnlineConfigsRequest(const ListOnlineConfigsRequest &) = default ;
    ListOnlineConfigsRequest(ListOnlineConfigsRequest &&) = default ;
    ListOnlineConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOnlineConfigsRequest() = default ;
    ListOnlineConfigsRequest& operator=(const ListOnlineConfigsRequest &) = default ;
    ListOnlineConfigsRequest& operator=(ListOnlineConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListOnlineConfigsRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // The name of the domain
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
