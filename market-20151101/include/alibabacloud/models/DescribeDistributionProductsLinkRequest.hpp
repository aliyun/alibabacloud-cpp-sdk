// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeDistributionProductsLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributionProductsLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Codes, codes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistributionProductsLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Codes, codes_);
    };
    DescribeDistributionProductsLinkRequest() = default ;
    DescribeDistributionProductsLinkRequest(const DescribeDistributionProductsLinkRequest &) = default ;
    DescribeDistributionProductsLinkRequest(DescribeDistributionProductsLinkRequest &&) = default ;
    DescribeDistributionProductsLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributionProductsLinkRequest() = default ;
    DescribeDistributionProductsLinkRequest& operator=(const DescribeDistributionProductsLinkRequest &) = default ;
    DescribeDistributionProductsLinkRequest& operator=(DescribeDistributionProductsLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codes_ != nullptr; };
    // codes Field Functions 
    bool hasCodes() const { return this->codes_ != nullptr;};
    void deleteCodes() { this->codes_ = nullptr;};
    inline const vector<string> & codes() const { DARABONBA_PTR_GET_CONST(codes_, vector<string>) };
    inline vector<string> codes() { DARABONBA_PTR_GET(codes_, vector<string>) };
    inline DescribeDistributionProductsLinkRequest& setCodes(const vector<string> & codes) { DARABONBA_PTR_SET_VALUE(codes_, codes) };
    inline DescribeDistributionProductsLinkRequest& setCodes(vector<string> && codes) { DARABONBA_PTR_SET_RVALUE(codes_, codes) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> codes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
