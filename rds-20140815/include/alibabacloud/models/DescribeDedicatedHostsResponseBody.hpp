// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DedicatedHosts, dedicatedHosts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHosts, dedicatedHosts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedHostsResponseBody() = default ;
    DescribeDedicatedHostsResponseBody(const DescribeDedicatedHostsResponseBody &) = default ;
    DescribeDedicatedHostsResponseBody(DescribeDedicatedHostsResponseBody &&) = default ;
    DescribeDedicatedHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBody() = default ;
    DescribeDedicatedHostsResponseBody& operator=(const DescribeDedicatedHostsResponseBody &) = default ;
    DescribeDedicatedHostsResponseBody& operator=(DescribeDedicatedHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostGroupId_ == nullptr
        && return this->dedicatedHosts_ == nullptr && return this->requestId_ == nullptr; };
    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline DescribeDedicatedHostsResponseBody& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // dedicatedHosts Field Functions 
    bool hasDedicatedHosts() const { return this->dedicatedHosts_ != nullptr;};
    void deleteDedicatedHosts() { this->dedicatedHosts_ = nullptr;};
    inline const DescribeDedicatedHostsResponseBodyDedicatedHosts & dedicatedHosts() const { DARABONBA_PTR_GET_CONST(dedicatedHosts_, DescribeDedicatedHostsResponseBodyDedicatedHosts) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHosts dedicatedHosts() { DARABONBA_PTR_GET(dedicatedHosts_, DescribeDedicatedHostsResponseBodyDedicatedHosts) };
    inline DescribeDedicatedHostsResponseBody& setDedicatedHosts(const DescribeDedicatedHostsResponseBodyDedicatedHosts & dedicatedHosts) { DARABONBA_PTR_SET_VALUE(dedicatedHosts_, dedicatedHosts) };
    inline DescribeDedicatedHostsResponseBody& setDedicatedHosts(DescribeDedicatedHostsResponseBodyDedicatedHosts && dedicatedHosts) { DARABONBA_PTR_SET_RVALUE(dedicatedHosts_, dedicatedHosts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The host group ID.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // The host information.
    std::shared_ptr<DescribeDedicatedHostsResponseBodyDedicatedHosts> dedicatedHosts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
