// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList.hpp>
#include <alibabacloud/models/DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList.hpp>
#include <alibabacloud/models/DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRestoreOrderResponseBodyRestoreOrderDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreOrderResponseBodyRestoreOrderDO& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsOrderDOList, drdsOrderDOList_);
      DARABONBA_PTR_TO_JSON(PolarOrderDOList, polarOrderDOList_);
      DARABONBA_PTR_TO_JSON(RdsOrderDOList, rdsOrderDOList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreOrderResponseBodyRestoreOrderDO& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsOrderDOList, drdsOrderDOList_);
      DARABONBA_PTR_FROM_JSON(PolarOrderDOList, polarOrderDOList_);
      DARABONBA_PTR_FROM_JSON(RdsOrderDOList, rdsOrderDOList_);
    };
    DescribeRestoreOrderResponseBodyRestoreOrderDO() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDO(const DescribeRestoreOrderResponseBodyRestoreOrderDO &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDO(DescribeRestoreOrderResponseBodyRestoreOrderDO &&) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDO() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDO& operator=(const DescribeRestoreOrderResponseBodyRestoreOrderDO &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDO& operator=(DescribeRestoreOrderResponseBodyRestoreOrderDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsOrderDOList_ != nullptr
        && this->polarOrderDOList_ != nullptr && this->rdsOrderDOList_ != nullptr; };
    // drdsOrderDOList Field Functions 
    bool hasDrdsOrderDOList() const { return this->drdsOrderDOList_ != nullptr;};
    void deleteDrdsOrderDOList() { this->drdsOrderDOList_ = nullptr;};
    inline const Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList & drdsOrderDOList() const { DARABONBA_PTR_GET_CONST(drdsOrderDOList_, Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList) };
    inline Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList drdsOrderDOList() { DARABONBA_PTR_GET(drdsOrderDOList_, Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDO& setDrdsOrderDOList(const Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList & drdsOrderDOList) { DARABONBA_PTR_SET_VALUE(drdsOrderDOList_, drdsOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDO& setDrdsOrderDOList(Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList && drdsOrderDOList) { DARABONBA_PTR_SET_RVALUE(drdsOrderDOList_, drdsOrderDOList) };


    // polarOrderDOList Field Functions 
    bool hasPolarOrderDOList() const { return this->polarOrderDOList_ != nullptr;};
    void deletePolarOrderDOList() { this->polarOrderDOList_ = nullptr;};
    inline const Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList & polarOrderDOList() const { DARABONBA_PTR_GET_CONST(polarOrderDOList_, Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList) };
    inline Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList polarOrderDOList() { DARABONBA_PTR_GET(polarOrderDOList_, Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDO& setPolarOrderDOList(const Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList & polarOrderDOList) { DARABONBA_PTR_SET_VALUE(polarOrderDOList_, polarOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDO& setPolarOrderDOList(Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList && polarOrderDOList) { DARABONBA_PTR_SET_RVALUE(polarOrderDOList_, polarOrderDOList) };


    // rdsOrderDOList Field Functions 
    bool hasRdsOrderDOList() const { return this->rdsOrderDOList_ != nullptr;};
    void deleteRdsOrderDOList() { this->rdsOrderDOList_ = nullptr;};
    inline const Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList & rdsOrderDOList() const { DARABONBA_PTR_GET_CONST(rdsOrderDOList_, Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList) };
    inline Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList rdsOrderDOList() { DARABONBA_PTR_GET(rdsOrderDOList_, Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDO& setRdsOrderDOList(const Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList & rdsOrderDOList) { DARABONBA_PTR_SET_VALUE(rdsOrderDOList_, rdsOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDO& setRdsOrderDOList(Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList && rdsOrderDOList) { DARABONBA_PTR_SET_RVALUE(rdsOrderDOList_, rdsOrderDOList) };


  protected:
    // The information of the restored order.
    std::shared_ptr<Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList> drdsOrderDOList_ = nullptr;
    // The ID of the restored apsaradb for PolarDB cluster.
    std::shared_ptr<Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList> polarOrderDOList_ = nullptr;
    // The information of the restored RDS order.
    std::shared_ptr<Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList> rdsOrderDOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
