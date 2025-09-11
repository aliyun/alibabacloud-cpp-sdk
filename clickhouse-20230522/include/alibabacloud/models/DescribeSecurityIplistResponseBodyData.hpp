// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityIPListResponseBodyDataGroupItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSecurityIPListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(GroupItems, groupItems_);
    };
    DescribeSecurityIPListResponseBodyData() = default ;
    DescribeSecurityIPListResponseBodyData(const DescribeSecurityIPListResponseBodyData &) = default ;
    DescribeSecurityIPListResponseBodyData(DescribeSecurityIPListResponseBodyData &&) = default ;
    DescribeSecurityIPListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPListResponseBodyData() = default ;
    DescribeSecurityIPListResponseBodyData& operator=(const DescribeSecurityIPListResponseBodyData &) = default ;
    DescribeSecurityIPListResponseBodyData& operator=(DescribeSecurityIPListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceID_ != nullptr
        && this->DBInstanceName_ != nullptr && this->groupItems_ != nullptr; };
    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline int32_t DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
    inline DescribeSecurityIPListResponseBodyData& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeSecurityIPListResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // groupItems Field Functions 
    bool hasGroupItems() const { return this->groupItems_ != nullptr;};
    void deleteGroupItems() { this->groupItems_ = nullptr;};
    inline const vector<Models::DescribeSecurityIPListResponseBodyDataGroupItems> & groupItems() const { DARABONBA_PTR_GET_CONST(groupItems_, vector<Models::DescribeSecurityIPListResponseBodyDataGroupItems>) };
    inline vector<Models::DescribeSecurityIPListResponseBodyDataGroupItems> groupItems() { DARABONBA_PTR_GET(groupItems_, vector<Models::DescribeSecurityIPListResponseBodyDataGroupItems>) };
    inline DescribeSecurityIPListResponseBodyData& setGroupItems(const vector<Models::DescribeSecurityIPListResponseBodyDataGroupItems> & groupItems) { DARABONBA_PTR_SET_VALUE(groupItems_, groupItems) };
    inline DescribeSecurityIPListResponseBodyData& setGroupItems(vector<Models::DescribeSecurityIPListResponseBodyDataGroupItems> && groupItems) { DARABONBA_PTR_SET_RVALUE(groupItems_, groupItems) };


  protected:
    // The cluster ID.
    std::shared_ptr<int32_t> DBInstanceID_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The details about the whitelists.
    std::shared_ptr<vector<Models::DescribeSecurityIPListResponseBodyDataGroupItems>> groupItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
