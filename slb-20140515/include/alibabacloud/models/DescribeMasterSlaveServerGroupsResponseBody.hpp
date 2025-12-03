// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroups, masterSlaveServerGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroups, masterSlaveServerGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMasterSlaveServerGroupsResponseBody() = default ;
    DescribeMasterSlaveServerGroupsResponseBody(const DescribeMasterSlaveServerGroupsResponseBody &) = default ;
    DescribeMasterSlaveServerGroupsResponseBody(DescribeMasterSlaveServerGroupsResponseBody &&) = default ;
    DescribeMasterSlaveServerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupsResponseBody() = default ;
    DescribeMasterSlaveServerGroupsResponseBody& operator=(const DescribeMasterSlaveServerGroupsResponseBody &) = default ;
    DescribeMasterSlaveServerGroupsResponseBody& operator=(DescribeMasterSlaveServerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterSlaveServerGroups_ == nullptr
        && return this->requestId_ == nullptr; };
    // masterSlaveServerGroups Field Functions 
    bool hasMasterSlaveServerGroups() const { return this->masterSlaveServerGroups_ != nullptr;};
    void deleteMasterSlaveServerGroups() { this->masterSlaveServerGroups_ = nullptr;};
    inline const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups & masterSlaveServerGroups() const { DARABONBA_PTR_GET_CONST(masterSlaveServerGroups_, DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups masterSlaveServerGroups() { DARABONBA_PTR_GET(masterSlaveServerGroups_, DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups) };
    inline DescribeMasterSlaveServerGroupsResponseBody& setMasterSlaveServerGroups(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups & masterSlaveServerGroups) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroups_, masterSlaveServerGroups) };
    inline DescribeMasterSlaveServerGroupsResponseBody& setMasterSlaveServerGroups(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups && masterSlaveServerGroups) { DARABONBA_PTR_SET_RVALUE(masterSlaveServerGroups_, masterSlaveServerGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMasterSlaveServerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The primary/secondary server groups.
    std::shared_ptr<DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroups> masterSlaveServerGroups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
