// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETSALEDISTRICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETSALEDISTRICTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetSaleDistrictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetSaleDistrictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_TO_JSON(NetLevelCode, netLevelCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetSaleDistrictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_FROM_JSON(NetLevelCode, netLevelCode_);
    };
    DescribeEnsNetSaleDistrictRequest() = default ;
    DescribeEnsNetSaleDistrictRequest(const DescribeEnsNetSaleDistrictRequest &) = default ;
    DescribeEnsNetSaleDistrictRequest(DescribeEnsNetSaleDistrictRequest &&) = default ;
    DescribeEnsNetSaleDistrictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetSaleDistrictRequest() = default ;
    DescribeEnsNetSaleDistrictRequest& operator=(const DescribeEnsNetSaleDistrictRequest &) = default ;
    DescribeEnsNetSaleDistrictRequest& operator=(DescribeEnsNetSaleDistrictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->netDistrictCode_ == nullptr
        && this->netLevelCode_ == nullptr; };
    // netDistrictCode Field Functions 
    bool hasNetDistrictCode() const { return this->netDistrictCode_ != nullptr;};
    void deleteNetDistrictCode() { this->netDistrictCode_ = nullptr;};
    inline string getNetDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictCode_, "") };
    inline DescribeEnsNetSaleDistrictRequest& setNetDistrictCode(string netDistrictCode) { DARABONBA_PTR_SET_VALUE(netDistrictCode_, netDistrictCode) };


    // netLevelCode Field Functions 
    bool hasNetLevelCode() const { return this->netLevelCode_ != nullptr;};
    void deleteNetLevelCode() { this->netLevelCode_ = nullptr;};
    inline string getNetLevelCode() const { DARABONBA_PTR_GET_DEFAULT(netLevelCode_, "") };
    inline DescribeEnsNetSaleDistrictRequest& setNetLevelCode(string netLevelCode) { DARABONBA_PTR_SET_VALUE(netLevelCode_, netLevelCode) };


  protected:
    // The region code.
    // 
    // *   If you do not specify this parameter, only nodes under the area level that is specified by NetLevelCode are queried.
    // *   If you specify this parameter, only child nodes in the area that is specified by NetDistrictCode are queried.
    shared_ptr<string> netDistrictCode_ {};
    // The network level. Valid values:
    // 
    // *   **Big**: area
    // *   **Middle**: province
    // *   **Small**: city
    // 
    // This parameter is required.
    shared_ptr<string> netLevelCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
