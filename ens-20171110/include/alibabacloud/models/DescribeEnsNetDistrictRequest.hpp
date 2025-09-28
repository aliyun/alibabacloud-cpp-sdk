// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetDistrictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetDistrictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_TO_JSON(NetDistrictCodeNode, netDistrictCodeNode_);
      DARABONBA_PTR_TO_JSON(NetLevelCode, netLevelCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetDistrictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_FROM_JSON(NetDistrictCodeNode, netDistrictCodeNode_);
      DARABONBA_PTR_FROM_JSON(NetLevelCode, netLevelCode_);
    };
    DescribeEnsNetDistrictRequest() = default ;
    DescribeEnsNetDistrictRequest(const DescribeEnsNetDistrictRequest &) = default ;
    DescribeEnsNetDistrictRequest(DescribeEnsNetDistrictRequest &&) = default ;
    DescribeEnsNetDistrictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetDistrictRequest() = default ;
    DescribeEnsNetDistrictRequest& operator=(const DescribeEnsNetDistrictRequest &) = default ;
    DescribeEnsNetDistrictRequest& operator=(DescribeEnsNetDistrictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->netDistrictCode_ != nullptr
        && this->netDistrictCodeNode_ != nullptr && this->netLevelCode_ != nullptr; };
    // netDistrictCode Field Functions 
    bool hasNetDistrictCode() const { return this->netDistrictCode_ != nullptr;};
    void deleteNetDistrictCode() { this->netDistrictCode_ = nullptr;};
    inline string netDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictCode_, "") };
    inline DescribeEnsNetDistrictRequest& setNetDistrictCode(string netDistrictCode) { DARABONBA_PTR_SET_VALUE(netDistrictCode_, netDistrictCode) };


    // netDistrictCodeNode Field Functions 
    bool hasNetDistrictCodeNode() const { return this->netDistrictCodeNode_ != nullptr;};
    void deleteNetDistrictCodeNode() { this->netDistrictCodeNode_ = nullptr;};
    inline bool netDistrictCodeNode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictCodeNode_, false) };
    inline DescribeEnsNetDistrictRequest& setNetDistrictCodeNode(bool netDistrictCodeNode) { DARABONBA_PTR_SET_VALUE(netDistrictCodeNode_, netDistrictCodeNode) };


    // netLevelCode Field Functions 
    bool hasNetLevelCode() const { return this->netLevelCode_ != nullptr;};
    void deleteNetLevelCode() { this->netLevelCode_ = nullptr;};
    inline string netLevelCode() const { DARABONBA_PTR_GET_DEFAULT(netLevelCode_, "") };
    inline DescribeEnsNetDistrictRequest& setNetLevelCode(string netLevelCode) { DARABONBA_PTR_SET_VALUE(netLevelCode_, netLevelCode) };


  protected:
    // The code of the region.
    // 
    // If you do not specify this parameter, only nodes in the regions of the level that is specified by the NetLevelCode parameter are queried.
    // 
    // If you specify this parameter, only nodes in the regions of the level that is specified by this parameter are queried.
    std::shared_ptr<string> netDistrictCode_ = nullptr;
    std::shared_ptr<bool> netDistrictCodeNode_ = nullptr;
    // The level of the region.
    // 
    // *   **Big**: area
    // *   **Middle**: province
    // *   **Small**: city
    // 
    // This parameter is required.
    std::shared_ptr<string> netLevelCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
