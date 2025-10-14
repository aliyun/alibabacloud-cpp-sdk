// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMAVAILABLEALERTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMAVAILABLEALERTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAvailableAlertGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAvailableAlertGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAlertGroup, availableAlertGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAvailableAlertGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAlertGroup, availableAlertGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDnsGtmAvailableAlertGroupResponseBody() = default ;
    DescribeDnsGtmAvailableAlertGroupResponseBody(const DescribeDnsGtmAvailableAlertGroupResponseBody &) = default ;
    DescribeDnsGtmAvailableAlertGroupResponseBody(DescribeDnsGtmAvailableAlertGroupResponseBody &&) = default ;
    DescribeDnsGtmAvailableAlertGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAvailableAlertGroupResponseBody() = default ;
    DescribeDnsGtmAvailableAlertGroupResponseBody& operator=(const DescribeDnsGtmAvailableAlertGroupResponseBody &) = default ;
    DescribeDnsGtmAvailableAlertGroupResponseBody& operator=(DescribeDnsGtmAvailableAlertGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableAlertGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // availableAlertGroup Field Functions 
    bool hasAvailableAlertGroup() const { return this->availableAlertGroup_ != nullptr;};
    void deleteAvailableAlertGroup() { this->availableAlertGroup_ = nullptr;};
    inline string availableAlertGroup() const { DARABONBA_PTR_GET_DEFAULT(availableAlertGroup_, "") };
    inline DescribeDnsGtmAvailableAlertGroupResponseBody& setAvailableAlertGroup(string availableAlertGroup) { DARABONBA_PTR_SET_VALUE(availableAlertGroup_, availableAlertGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAvailableAlertGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned available alert groups.
    std::shared_ptr<string> availableAlertGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
