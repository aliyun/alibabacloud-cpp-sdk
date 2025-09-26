// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESROWVALUEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESROWVALUEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo& obj) { 
      DARABONBA_PTR_TO_JSON(RowValue, rowValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(RowValue, rowValue_);
    };
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo &&) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo& operator=(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo& operator=(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rowValue_ != nullptr; };
    // rowValue Field Functions 
    bool hasRowValue() const { return this->rowValue_ != nullptr;};
    void deleteRowValue() { this->rowValue_ = nullptr;};
    inline string rowValue() const { DARABONBA_PTR_GET_DEFAULT(rowValue_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowValueInfo& setRowValue(string rowValue) { DARABONBA_PTR_SET_VALUE(rowValue_, rowValue) };


  protected:
    std::shared_ptr<string> rowValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
