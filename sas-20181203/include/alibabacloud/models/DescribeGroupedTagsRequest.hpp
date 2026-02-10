// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
    };
    DescribeGroupedTagsRequest() = default ;
    DescribeGroupedTagsRequest(const DescribeGroupedTagsRequest &) = default ;
    DescribeGroupedTagsRequest(DescribeGroupedTagsRequest &&) = default ;
    DescribeGroupedTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedTagsRequest() = default ;
    DescribeGroupedTagsRequest& operator=(const DescribeGroupedTagsRequest &) = default ;
    DescribeGroupedTagsRequest& operator=(DescribeGroupedTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineTypes_ == nullptr; };
    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline string getMachineTypes() const { DARABONBA_PTR_GET_DEFAULT(machineTypes_, "") };
    inline DescribeGroupedTagsRequest& setMachineTypes(string machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };


  protected:
    // The type of the asset to query. If you do not specify this parameter, the tags of all asset types are queried. Valid values:
    // 
    // *   **ecs**: server
    // *   **cloud_product**: Alibaba Cloud service
    shared_ptr<string> machineTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
