// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODYENDPOINTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODYENDPOINTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterAttributeResponseBodyEndpointList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterAttributeResponseBodyEndpointList& obj) { 
      DARABONBA_PTR_TO_JSON(NetInfoItems, netInfoItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterAttributeResponseBodyEndpointList& obj) { 
      DARABONBA_PTR_FROM_JSON(NetInfoItems, netInfoItems_);
    };
    DescribeAIDBClusterAttributeResponseBodyEndpointList() = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointList(const DescribeAIDBClusterAttributeResponseBodyEndpointList &) = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointList(DescribeAIDBClusterAttributeResponseBodyEndpointList &&) = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterAttributeResponseBodyEndpointList() = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointList& operator=(const DescribeAIDBClusterAttributeResponseBodyEndpointList &) = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointList& operator=(DescribeAIDBClusterAttributeResponseBodyEndpointList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->netInfoItems_ == nullptr; };
    // netInfoItems Field Functions 
    bool hasNetInfoItems() const { return this->netInfoItems_ != nullptr;};
    void deleteNetInfoItems() { this->netInfoItems_ = nullptr;};
    inline const vector<Models::DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems> & netInfoItems() const { DARABONBA_PTR_GET_CONST(netInfoItems_, vector<Models::DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems>) };
    inline vector<Models::DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems> netInfoItems() { DARABONBA_PTR_GET(netInfoItems_, vector<Models::DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems>) };
    inline DescribeAIDBClusterAttributeResponseBodyEndpointList& setNetInfoItems(const vector<Models::DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems> & netInfoItems) { DARABONBA_PTR_SET_VALUE(netInfoItems_, netInfoItems) };
    inline DescribeAIDBClusterAttributeResponseBodyEndpointList& setNetInfoItems(vector<Models::DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems> && netInfoItems) { DARABONBA_PTR_SET_RVALUE(netInfoItems_, netInfoItems) };


  protected:
    std::shared_ptr<vector<Models::DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems>> netInfoItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
