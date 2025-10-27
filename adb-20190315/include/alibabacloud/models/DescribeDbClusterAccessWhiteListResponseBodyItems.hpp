// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterAccessWhiteListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhiteListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(IPArray, IPArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhiteListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(IPArray, IPArray_);
    };
    DescribeDBClusterAccessWhiteListResponseBodyItems() = default ;
    DescribeDBClusterAccessWhiteListResponseBodyItems(const DescribeDBClusterAccessWhiteListResponseBodyItems &) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyItems(DescribeDBClusterAccessWhiteListResponseBodyItems &&) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhiteListResponseBodyItems() = default ;
    DescribeDBClusterAccessWhiteListResponseBodyItems& operator=(const DescribeDBClusterAccessWhiteListResponseBodyItems &) = default ;
    DescribeDBClusterAccessWhiteListResponseBodyItems& operator=(DescribeDBClusterAccessWhiteListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IPArray_ == nullptr; };
    // IPArray Field Functions 
    bool hasIPArray() const { return this->IPArray_ != nullptr;};
    void deleteIPArray() { this->IPArray_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray> & IPArray() const { DARABONBA_PTR_GET_CONST(IPArray_, vector<Models::DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray>) };
    inline vector<Models::DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray> IPArray() { DARABONBA_PTR_GET(IPArray_, vector<Models::DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray>) };
    inline DescribeDBClusterAccessWhiteListResponseBodyItems& setIPArray(const vector<Models::DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray> & IPArray) { DARABONBA_PTR_SET_VALUE(IPArray_, IPArray) };
    inline DescribeDBClusterAccessWhiteListResponseBodyItems& setIPArray(vector<Models::DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray> && IPArray) { DARABONBA_PTR_SET_RVALUE(IPArray_, IPArray) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray>> IPArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
