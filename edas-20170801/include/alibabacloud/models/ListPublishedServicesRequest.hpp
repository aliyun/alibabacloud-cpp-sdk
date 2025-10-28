// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListPublishedServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    ListPublishedServicesRequest() = default ;
    ListPublishedServicesRequest(const ListPublishedServicesRequest &) = default ;
    ListPublishedServicesRequest(ListPublishedServicesRequest &&) = default ;
    ListPublishedServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedServicesRequest() = default ;
    ListPublishedServicesRequest& operator=(const ListPublishedServicesRequest &) = default ;
    ListPublishedServicesRequest& operator=(ListPublishedServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListPublishedServicesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
