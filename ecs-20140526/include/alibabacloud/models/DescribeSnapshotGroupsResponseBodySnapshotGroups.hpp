// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODYSNAPSHOTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODYSNAPSHOTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotGroupsResponseBodySnapshotGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotGroupsResponseBodySnapshotGroups& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotGroup, snapshotGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotGroupsResponseBodySnapshotGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotGroup, snapshotGroup_);
    };
    DescribeSnapshotGroupsResponseBodySnapshotGroups() = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroups(const DescribeSnapshotGroupsResponseBodySnapshotGroups &) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroups(DescribeSnapshotGroupsResponseBodySnapshotGroups &&) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotGroupsResponseBodySnapshotGroups() = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroups& operator=(const DescribeSnapshotGroupsResponseBodySnapshotGroups &) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroups& operator=(DescribeSnapshotGroupsResponseBodySnapshotGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshotGroup_ != nullptr; };
    // snapshotGroup Field Functions 
    bool hasSnapshotGroup() const { return this->snapshotGroup_ != nullptr;};
    void deleteSnapshotGroup() { this->snapshotGroup_ = nullptr;};
    inline const vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup> & snapshotGroup() const { DARABONBA_PTR_GET_CONST(snapshotGroup_, vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup>) };
    inline vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup> snapshotGroup() { DARABONBA_PTR_GET(snapshotGroup_, vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup>) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroups& setSnapshotGroup(const vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup> & snapshotGroup) { DARABONBA_PTR_SET_VALUE(snapshotGroup_, snapshotGroup) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroups& setSnapshotGroup(vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup> && snapshotGroup) { DARABONBA_PTR_SET_RVALUE(snapshotGroup_, snapshotGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroup>> snapshotGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
