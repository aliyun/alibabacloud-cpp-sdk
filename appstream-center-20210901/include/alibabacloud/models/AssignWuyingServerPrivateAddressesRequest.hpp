// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNWUYINGSERVERPRIVATEADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNWUYINGSERVERPRIVATEADDRESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class AssignWuyingServerPrivateAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignWuyingServerPrivateAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignWuyingServerPrivateAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    AssignWuyingServerPrivateAddressesRequest() = default ;
    AssignWuyingServerPrivateAddressesRequest(const AssignWuyingServerPrivateAddressesRequest &) = default ;
    AssignWuyingServerPrivateAddressesRequest(AssignWuyingServerPrivateAddressesRequest &&) = default ;
    AssignWuyingServerPrivateAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignWuyingServerPrivateAddressesRequest() = default ;
    AssignWuyingServerPrivateAddressesRequest& operator=(const AssignWuyingServerPrivateAddressesRequest &) = default ;
    AssignWuyingServerPrivateAddressesRequest& operator=(AssignWuyingServerPrivateAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secondaryPrivateIpAddressCount_ == nullptr
        && this->wuyingServerId_ == nullptr; };
    // secondaryPrivateIpAddressCount Field Functions 
    bool hasSecondaryPrivateIpAddressCount() const { return this->secondaryPrivateIpAddressCount_ != nullptr;};
    void deleteSecondaryPrivateIpAddressCount() { this->secondaryPrivateIpAddressCount_ = nullptr;};
    inline int32_t getSecondaryPrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(secondaryPrivateIpAddressCount_, 0) };
    inline AssignWuyingServerPrivateAddressesRequest& setSecondaryPrivateIpAddressCount(int32_t secondaryPrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(secondaryPrivateIpAddressCount_, secondaryPrivateIpAddressCount) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline AssignWuyingServerPrivateAddressesRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
    // This parameter is required.
    shared_ptr<string> wuyingServerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
