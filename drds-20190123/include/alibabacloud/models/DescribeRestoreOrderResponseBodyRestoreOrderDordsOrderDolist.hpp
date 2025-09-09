// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDORDSORDERDOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDORDSORDERDOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList& obj) { 
      DARABONBA_PTR_TO_JSON(RdsOrderDOList, rdsOrderDOList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList& obj) { 
      DARABONBA_PTR_FROM_JSON(RdsOrderDOList, rdsOrderDOList_);
    };
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList(const DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList(DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList &&) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList& operator=(const DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList& operator=(DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rdsOrderDOList_ != nullptr; };
    // rdsOrderDOList Field Functions 
    bool hasRdsOrderDOList() const { return this->rdsOrderDOList_ != nullptr;};
    void deleteRdsOrderDOList() { this->rdsOrderDOList_ = nullptr;};
    inline const vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList> & rdsOrderDOList() const { DARABONBA_PTR_GET_CONST(rdsOrderDOList_, vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList>) };
    inline vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList> rdsOrderDOList() { DARABONBA_PTR_GET(rdsOrderDOList_, vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList>) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList& setRdsOrderDOList(const vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList> & rdsOrderDOList) { DARABONBA_PTR_SET_VALUE(rdsOrderDOList_, rdsOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOList& setRdsOrderDOList(vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList> && rdsOrderDOList) { DARABONBA_PTR_SET_RVALUE(rdsOrderDOList_, rdsOrderDOList) };


  protected:
    std::shared_ptr<vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList>> rdsOrderDOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
