// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERACCESSWHITELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERACCESSWHITELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterAccessWhiteListResponseBodyItemsIPArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterAccessWhiteListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAccessWhiteListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(IPArray, IPArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAccessWhiteListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(IPArray, IPArray_);
    };
    DescribeClusterAccessWhiteListResponseBodyItems() = default ;
    DescribeClusterAccessWhiteListResponseBodyItems(const DescribeClusterAccessWhiteListResponseBodyItems &) = default ;
    DescribeClusterAccessWhiteListResponseBodyItems(DescribeClusterAccessWhiteListResponseBodyItems &&) = default ;
    DescribeClusterAccessWhiteListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAccessWhiteListResponseBodyItems() = default ;
    DescribeClusterAccessWhiteListResponseBodyItems& operator=(const DescribeClusterAccessWhiteListResponseBodyItems &) = default ;
    DescribeClusterAccessWhiteListResponseBodyItems& operator=(DescribeClusterAccessWhiteListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IPArray_ != nullptr; };
    // IPArray Field Functions 
    bool hasIPArray() const { return this->IPArray_ != nullptr;};
    void deleteIPArray() { this->IPArray_ = nullptr;};
    inline const vector<Models::DescribeClusterAccessWhiteListResponseBodyItemsIPArray> & IPArray() const { DARABONBA_PTR_GET_CONST(IPArray_, vector<Models::DescribeClusterAccessWhiteListResponseBodyItemsIPArray>) };
    inline vector<Models::DescribeClusterAccessWhiteListResponseBodyItemsIPArray> IPArray() { DARABONBA_PTR_GET(IPArray_, vector<Models::DescribeClusterAccessWhiteListResponseBodyItemsIPArray>) };
    inline DescribeClusterAccessWhiteListResponseBodyItems& setIPArray(const vector<Models::DescribeClusterAccessWhiteListResponseBodyItemsIPArray> & IPArray) { DARABONBA_PTR_SET_VALUE(IPArray_, IPArray) };
    inline DescribeClusterAccessWhiteListResponseBodyItems& setIPArray(vector<Models::DescribeClusterAccessWhiteListResponseBodyItemsIPArray> && IPArray) { DARABONBA_PTR_SET_RVALUE(IPArray_, IPArray) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterAccessWhiteListResponseBodyItemsIPArray>> IPArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
