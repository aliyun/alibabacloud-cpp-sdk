// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSPOSIXUSER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSPOSIXUSER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessPointsResponseBodyAccessPointsPosixUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBodyAccessPointsPosixUser& obj) { 
      DARABONBA_PTR_TO_JSON(PosixGroupId, posixGroupId_);
      DARABONBA_PTR_TO_JSON(PosixSecondaryGroupIds, posixSecondaryGroupIds_);
      DARABONBA_PTR_TO_JSON(PosixUserId, posixUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBodyAccessPointsPosixUser& obj) { 
      DARABONBA_PTR_FROM_JSON(PosixGroupId, posixGroupId_);
      DARABONBA_PTR_FROM_JSON(PosixSecondaryGroupIds, posixSecondaryGroupIds_);
      DARABONBA_PTR_FROM_JSON(PosixUserId, posixUserId_);
    };
    DescribeAccessPointsResponseBodyAccessPointsPosixUser() = default ;
    DescribeAccessPointsResponseBodyAccessPointsPosixUser(const DescribeAccessPointsResponseBodyAccessPointsPosixUser &) = default ;
    DescribeAccessPointsResponseBodyAccessPointsPosixUser(DescribeAccessPointsResponseBodyAccessPointsPosixUser &&) = default ;
    DescribeAccessPointsResponseBodyAccessPointsPosixUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBodyAccessPointsPosixUser() = default ;
    DescribeAccessPointsResponseBodyAccessPointsPosixUser& operator=(const DescribeAccessPointsResponseBodyAccessPointsPosixUser &) = default ;
    DescribeAccessPointsResponseBodyAccessPointsPosixUser& operator=(DescribeAccessPointsResponseBodyAccessPointsPosixUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->posixGroupId_ == nullptr
        && return this->posixSecondaryGroupIds_ == nullptr && return this->posixUserId_ == nullptr; };
    // posixGroupId Field Functions 
    bool hasPosixGroupId() const { return this->posixGroupId_ != nullptr;};
    void deletePosixGroupId() { this->posixGroupId_ = nullptr;};
    inline int32_t posixGroupId() const { DARABONBA_PTR_GET_DEFAULT(posixGroupId_, 0) };
    inline DescribeAccessPointsResponseBodyAccessPointsPosixUser& setPosixGroupId(int32_t posixGroupId) { DARABONBA_PTR_SET_VALUE(posixGroupId_, posixGroupId) };


    // posixSecondaryGroupIds Field Functions 
    bool hasPosixSecondaryGroupIds() const { return this->posixSecondaryGroupIds_ != nullptr;};
    void deletePosixSecondaryGroupIds() { this->posixSecondaryGroupIds_ = nullptr;};
    inline const vector<int32_t> & posixSecondaryGroupIds() const { DARABONBA_PTR_GET_CONST(posixSecondaryGroupIds_, vector<int32_t>) };
    inline vector<int32_t> posixSecondaryGroupIds() { DARABONBA_PTR_GET(posixSecondaryGroupIds_, vector<int32_t>) };
    inline DescribeAccessPointsResponseBodyAccessPointsPosixUser& setPosixSecondaryGroupIds(const vector<int32_t> & posixSecondaryGroupIds) { DARABONBA_PTR_SET_VALUE(posixSecondaryGroupIds_, posixSecondaryGroupIds) };
    inline DescribeAccessPointsResponseBodyAccessPointsPosixUser& setPosixSecondaryGroupIds(vector<int32_t> && posixSecondaryGroupIds) { DARABONBA_PTR_SET_RVALUE(posixSecondaryGroupIds_, posixSecondaryGroupIds) };


    // posixUserId Field Functions 
    bool hasPosixUserId() const { return this->posixUserId_ != nullptr;};
    void deletePosixUserId() { this->posixUserId_ = nullptr;};
    inline int32_t posixUserId() const { DARABONBA_PTR_GET_DEFAULT(posixUserId_, 0) };
    inline DescribeAccessPointsResponseBodyAccessPointsPosixUser& setPosixUserId(int32_t posixUserId) { DARABONBA_PTR_SET_VALUE(posixUserId_, posixUserId) };


  protected:
    // The ID of the POSIX user group.
    std::shared_ptr<int32_t> posixGroupId_ = nullptr;
    // The IDs of the secondary user groups.
    std::shared_ptr<vector<int32_t>> posixSecondaryGroupIds_ = nullptr;
    // The ID of the POSIX user.
    std::shared_ptr<int32_t> posixUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
