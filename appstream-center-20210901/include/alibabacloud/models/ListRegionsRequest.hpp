// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizSource, bizSource_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizSource, bizSource_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListRegionsRequest() = default ;
    ListRegionsRequest(const ListRegionsRequest &) = default ;
    ListRegionsRequest(ListRegionsRequest &&) = default ;
    ListRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionsRequest() = default ;
    ListRegionsRequest& operator=(const ListRegionsRequest &) = default ;
    ListRegionsRequest& operator=(ListRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizSource_ == nullptr
        && return this->productType_ == nullptr; };
    // bizSource Field Functions 
    bool hasBizSource() const { return this->bizSource_ != nullptr;};
    void deleteBizSource() { this->bizSource_ = nullptr;};
    inline string bizSource() const { DARABONBA_PTR_GET_DEFAULT(bizSource_, "") };
    inline ListRegionsRequest& setBizSource(string bizSource) { DARABONBA_PTR_SET_VALUE(bizSource_, bizSource) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListRegionsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<string> bizSource_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
