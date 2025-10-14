// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityIpsResponseBodyDataGroupItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSecurityIpsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIpsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIpsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupItems, groupItems_);
    };
    DescribeSecurityIpsResponseBodyData() = default ;
    DescribeSecurityIpsResponseBodyData(const DescribeSecurityIpsResponseBodyData &) = default ;
    DescribeSecurityIpsResponseBodyData(DescribeSecurityIpsResponseBodyData &&) = default ;
    DescribeSecurityIpsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIpsResponseBodyData() = default ;
    DescribeSecurityIpsResponseBodyData& operator=(const DescribeSecurityIpsResponseBodyData &) = default ;
    DescribeSecurityIpsResponseBodyData& operator=(DescribeSecurityIpsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->groupItems_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeSecurityIpsResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupItems Field Functions 
    bool hasGroupItems() const { return this->groupItems_ != nullptr;};
    void deleteGroupItems() { this->groupItems_ = nullptr;};
    inline const vector<Models::DescribeSecurityIpsResponseBodyDataGroupItems> & groupItems() const { DARABONBA_PTR_GET_CONST(groupItems_, vector<Models::DescribeSecurityIpsResponseBodyDataGroupItems>) };
    inline vector<Models::DescribeSecurityIpsResponseBodyDataGroupItems> groupItems() { DARABONBA_PTR_GET(groupItems_, vector<Models::DescribeSecurityIpsResponseBodyDataGroupItems>) };
    inline DescribeSecurityIpsResponseBodyData& setGroupItems(const vector<Models::DescribeSecurityIpsResponseBodyDataGroupItems> & groupItems) { DARABONBA_PTR_SET_VALUE(groupItems_, groupItems) };
    inline DescribeSecurityIpsResponseBodyData& setGroupItems(vector<Models::DescribeSecurityIpsResponseBodyDataGroupItems> && groupItems) { DARABONBA_PTR_SET_RVALUE(groupItems_, groupItems) };


  protected:
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSecurityIpsResponseBodyDataGroupItems>> groupItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
