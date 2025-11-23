// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESTABLEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESTABLEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo& obj) { 
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo &&) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo& operator=(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo& operator=(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tableName_ == nullptr; };
    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
