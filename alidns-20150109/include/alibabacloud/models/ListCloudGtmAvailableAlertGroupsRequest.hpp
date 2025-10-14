// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAvailableAlertGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAvailableAlertGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAvailableAlertGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
    };
    ListCloudGtmAvailableAlertGroupsRequest() = default ;
    ListCloudGtmAvailableAlertGroupsRequest(const ListCloudGtmAvailableAlertGroupsRequest &) = default ;
    ListCloudGtmAvailableAlertGroupsRequest(ListCloudGtmAvailableAlertGroupsRequest &&) = default ;
    ListCloudGtmAvailableAlertGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAvailableAlertGroupsRequest() = default ;
    ListCloudGtmAvailableAlertGroupsRequest& operator=(const ListCloudGtmAvailableAlertGroupsRequest &) = default ;
    ListCloudGtmAvailableAlertGroupsRequest& operator=(ListCloudGtmAvailableAlertGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListCloudGtmAvailableAlertGroupsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   **zh-CN**: Chinese
    // *   **en-US**: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
