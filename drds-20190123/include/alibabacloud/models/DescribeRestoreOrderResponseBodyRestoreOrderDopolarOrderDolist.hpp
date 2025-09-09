// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDOPOLARORDERDOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDOPOLARORDERDOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList& obj) { 
      DARABONBA_PTR_TO_JSON(PolarOrderDOList, polarOrderDOList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList& obj) { 
      DARABONBA_PTR_FROM_JSON(PolarOrderDOList, polarOrderDOList_);
    };
    DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList(const DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList(DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList &&) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList& operator=(const DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList& operator=(DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->polarOrderDOList_ != nullptr; };
    // polarOrderDOList Field Functions 
    bool hasPolarOrderDOList() const { return this->polarOrderDOList_ != nullptr;};
    void deletePolarOrderDOList() { this->polarOrderDOList_ = nullptr;};
    inline const vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList> & polarOrderDOList() const { DARABONBA_PTR_GET_CONST(polarOrderDOList_, vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList>) };
    inline vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList> polarOrderDOList() { DARABONBA_PTR_GET(polarOrderDOList_, vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList>) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList& setPolarOrderDOList(const vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList> & polarOrderDOList) { DARABONBA_PTR_SET_VALUE(polarOrderDOList_, polarOrderDOList) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOList& setPolarOrderDOList(vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList> && polarOrderDOList) { DARABONBA_PTR_SET_RVALUE(polarOrderDOList_, polarOrderDOList) };


  protected:
    std::shared_ptr<vector<Models::DescribeRestoreOrderResponseBodyRestoreOrderDOPolarOrderDOListPolarOrderDOList>> polarOrderDOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
