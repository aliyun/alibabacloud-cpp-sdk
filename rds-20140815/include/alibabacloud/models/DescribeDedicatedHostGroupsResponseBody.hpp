// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostGroups, dedicatedHostGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroups, dedicatedHostGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedHostGroupsResponseBody() = default ;
    DescribeDedicatedHostGroupsResponseBody(const DescribeDedicatedHostGroupsResponseBody &) = default ;
    DescribeDedicatedHostGroupsResponseBody(DescribeDedicatedHostGroupsResponseBody &&) = default ;
    DescribeDedicatedHostGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostGroupsResponseBody() = default ;
    DescribeDedicatedHostGroupsResponseBody& operator=(const DescribeDedicatedHostGroupsResponseBody &) = default ;
    DescribeDedicatedHostGroupsResponseBody& operator=(DescribeDedicatedHostGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostGroups_ == nullptr
        && return this->requestId_ == nullptr; };
    // dedicatedHostGroups Field Functions 
    bool hasDedicatedHostGroups() const { return this->dedicatedHostGroups_ != nullptr;};
    void deleteDedicatedHostGroups() { this->dedicatedHostGroups_ = nullptr;};
    inline const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups & dedicatedHostGroups() const { DARABONBA_PTR_GET_CONST(dedicatedHostGroups_, DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups dedicatedHostGroups() { DARABONBA_PTR_GET(dedicatedHostGroups_, DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups) };
    inline DescribeDedicatedHostGroupsResponseBody& setDedicatedHostGroups(const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups & dedicatedHostGroups) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroups_, dedicatedHostGroups) };
    inline DescribeDedicatedHostGroupsResponseBody& setDedicatedHostGroups(DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups && dedicatedHostGroups) { DARABONBA_PTR_SET_RVALUE(dedicatedHostGroups_, dedicatedHostGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about dedicated clusters returned.
    std::shared_ptr<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups> dedicatedHostGroups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
