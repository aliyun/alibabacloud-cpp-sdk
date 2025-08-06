// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPENETWORKCARDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPENETWORKCARDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCardsNetworkCardInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkCardInfo, networkCardInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkCardInfo, networkCardInfo_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkCardInfo_ != nullptr; };
    // networkCardInfo Field Functions 
    bool hasNetworkCardInfo() const { return this->networkCardInfo_ != nullptr;};
    void deleteNetworkCardInfo() { this->networkCardInfo_ = nullptr;};
    inline const vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCardsNetworkCardInfo> & networkCardInfo() const { DARABONBA_PTR_GET_CONST(networkCardInfo_, vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCardsNetworkCardInfo>) };
    inline vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCardsNetworkCardInfo> networkCardInfo() { DARABONBA_PTR_GET(networkCardInfo_, vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCardsNetworkCardInfo>) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards& setNetworkCardInfo(const vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCardsNetworkCardInfo> & networkCardInfo) { DARABONBA_PTR_SET_VALUE(networkCardInfo_, networkCardInfo) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards& setNetworkCardInfo(vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCardsNetworkCardInfo> && networkCardInfo) { DARABONBA_PTR_SET_RVALUE(networkCardInfo_, networkCardInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCardsNetworkCardInfo>> networkCardInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
