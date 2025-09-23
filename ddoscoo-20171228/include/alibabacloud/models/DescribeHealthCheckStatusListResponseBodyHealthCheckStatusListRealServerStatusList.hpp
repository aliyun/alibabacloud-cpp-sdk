// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSLISTRESPONSEBODYHEALTHCHECKSTATUSLISTREALSERVERSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSLISTRESPONSEBODYHEALTHCHECKSTATUSLISTREALSERVERSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList() = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList(const DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList &) = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList(DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList &&) = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList() = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList& operator=(const DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList &) = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList& operator=(DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->status_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
