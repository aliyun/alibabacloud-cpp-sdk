// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSECURITYEVENTIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSECURITYEVENTIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CheckSecurityEventIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSecurityEventIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSecurityEventIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    CheckSecurityEventIdRequest() = default ;
    CheckSecurityEventIdRequest(const CheckSecurityEventIdRequest &) = default ;
    CheckSecurityEventIdRequest(CheckSecurityEventIdRequest &&) = default ;
    CheckSecurityEventIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSecurityEventIdRequest() = default ;
    CheckSecurityEventIdRequest& operator=(const CheckSecurityEventIdRequest &) = default ;
    CheckSecurityEventIdRequest& operator=(CheckSecurityEventIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityEventIds_ == nullptr
        && this->uuid_ == nullptr; };
    // securityEventIds Field Functions 
    bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
    void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
    inline const vector<string> & getSecurityEventIds() const { DARABONBA_PTR_GET_CONST(securityEventIds_, vector<string>) };
    inline vector<string> getSecurityEventIds() { DARABONBA_PTR_GET(securityEventIds_, vector<string>) };
    inline CheckSecurityEventIdRequest& setSecurityEventIds(const vector<string> & securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };
    inline CheckSecurityEventIdRequest& setSecurityEventIds(vector<string> && securityEventIds) { DARABONBA_PTR_SET_RVALUE(securityEventIds_, securityEventIds) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CheckSecurityEventIdRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The IDs of alert events. You can specify up to 100 IDs. If you do not specify this parameter, the value of the response parameter **Data** is **false**. The value false indicates that no alert events are generated on the server.
    // 
    // > You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to query the IDs of alert events.
    shared_ptr<vector<string>> securityEventIds_ {};
    // The UUID of the server.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
