// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CheckServiceLinkedRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CheckServiceLinkedRoleRequest() = default ;
    CheckServiceLinkedRoleRequest(const CheckServiceLinkedRoleRequest &) = default ;
    CheckServiceLinkedRoleRequest(CheckServiceLinkedRoleRequest &&) = default ;
    CheckServiceLinkedRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleRequest() = default ;
    CheckServiceLinkedRoleRequest& operator=(const CheckServiceLinkedRoleRequest &) = default ;
    CheckServiceLinkedRoleRequest& operator=(CheckServiceLinkedRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckServiceLinkedRoleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
