// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONSLOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONSLOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeReplicationSlotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationSlotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(SubGroupName, subGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationSlotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(SubGroupName, subGroupName_);
    };
    DescribeReplicationSlotsRequest() = default ;
    DescribeReplicationSlotsRequest(const DescribeReplicationSlotsRequest &) = default ;
    DescribeReplicationSlotsRequest(DescribeReplicationSlotsRequest &&) = default ;
    DescribeReplicationSlotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationSlotsRequest() = default ;
    DescribeReplicationSlotsRequest& operator=(const DescribeReplicationSlotsRequest &) = default ;
    DescribeReplicationSlotsRequest& operator=(DescribeReplicationSlotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->subGroupName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeReplicationSlotsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // subGroupName Field Functions 
    bool hasSubGroupName() const { return this->subGroupName_ != nullptr;};
    void deleteSubGroupName() { this->subGroupName_ = nullptr;};
    inline string getSubGroupName() const { DARABONBA_PTR_GET_DEFAULT(subGroupName_, "") };
    inline DescribeReplicationSlotsRequest& setSubGroupName(string subGroupName) { DARABONBA_PTR_SET_VALUE(subGroupName_, subGroupName) };


  protected:
    // The ID of the PolarDB cluster to query.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The child node name of the distributed instance, which is used to filter replication slots.
    shared_ptr<string> subGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
