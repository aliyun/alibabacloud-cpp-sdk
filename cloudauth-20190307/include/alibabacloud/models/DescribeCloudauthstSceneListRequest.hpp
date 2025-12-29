// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDAUTHSTSCENELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDAUTHSTSCENELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeCloudauthstSceneListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudauthstSceneListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudauthstSceneListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    DescribeCloudauthstSceneListRequest() = default ;
    DescribeCloudauthstSceneListRequest(const DescribeCloudauthstSceneListRequest &) = default ;
    DescribeCloudauthstSceneListRequest(DescribeCloudauthstSceneListRequest &&) = default ;
    DescribeCloudauthstSceneListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudauthstSceneListRequest() = default ;
    DescribeCloudauthstSceneListRequest& operator=(const DescribeCloudauthstSceneListRequest &) = default ;
    DescribeCloudauthstSceneListRequest& operator=(DescribeCloudauthstSceneListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productCode_ == nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeCloudauthstSceneListRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Product Code
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
