// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDODRDSORDERDOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDODRDSORDERDOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsOrderDOList, drdsOrderDOList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsOrderDOList, drdsOrderDOList_);
    };
    DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList(const DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList(DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList &&) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList& operator=(const DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList& operator=(DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsOrderDOList_ != nullptr; };
    // drdsOrderDOList Field Functions 
    bool hasDrdsOrderDOList() const { return this->drdsOrderDOList_ != nullptr;};
    void deleteDrdsOrderDOList() { this->drdsOrderDOList_ = nullptr;};
    inline const vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList> & drdsOrderDOList() const { DARABONBA_PTR_GET_CONST(drdsOrderDOList_, vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList>) };
    inline vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList> drdsOrderDOList() { DARABONBA_PTR_GET(drdsOrderDOList_, vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList>) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList& setDrdsOrderDOList(const vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList> & drdsOrderDOList) { DARABONBA_PTR_SET_VALUE(drdsOrderDOList_, drdsOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOList& setDrdsOrderDOList(vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList> && drdsOrderDOList) { DARABONBA_PTR_SET_RVALUE(drdsOrderDOList_, drdsOrderDOList) };


  protected:
    std::shared_ptr<vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDODrdsOrderDOListDrdsOrderDOList>> drdsOrderDOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
