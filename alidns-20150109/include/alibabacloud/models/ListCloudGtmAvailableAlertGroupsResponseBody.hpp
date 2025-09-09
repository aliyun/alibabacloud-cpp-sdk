// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAvailableAlertGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAvailableAlertGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertGroups, alertGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAvailableAlertGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertGroups, alertGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCloudGtmAvailableAlertGroupsResponseBody() = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody(const ListCloudGtmAvailableAlertGroupsResponseBody &) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody(ListCloudGtmAvailableAlertGroupsResponseBody &&) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAvailableAlertGroupsResponseBody() = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody& operator=(const ListCloudGtmAvailableAlertGroupsResponseBody &) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody& operator=(ListCloudGtmAvailableAlertGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertGroups_ != nullptr
        && this->requestId_ != nullptr; };
    // alertGroups Field Functions 
    bool hasAlertGroups() const { return this->alertGroups_ != nullptr;};
    void deleteAlertGroups() { this->alertGroups_ = nullptr;};
    inline const ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups & alertGroups() const { DARABONBA_PTR_GET_CONST(alertGroups_, ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups) };
    inline ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups alertGroups() { DARABONBA_PTR_GET(alertGroups_, ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups) };
    inline ListCloudGtmAvailableAlertGroupsResponseBody& setAlertGroups(const ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups & alertGroups) { DARABONBA_PTR_SET_VALUE(alertGroups_, alertGroups) };
    inline ListCloudGtmAvailableAlertGroupsResponseBody& setAlertGroups(ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups && alertGroups) { DARABONBA_PTR_SET_RVALUE(alertGroups_, alertGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudGtmAvailableAlertGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert contact groups.
    std::shared_ptr<ListCloudGtmAvailableAlertGroupsResponseBodyAlertGroups> alertGroups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
