// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTSBYAPPRESPONSEBODYAPIPRODUCTINFOLISTAPIPRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTSBYAPPRESPONSEBODYAPIPRODUCTINFOLISTAPIPRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductId, apiProductId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductId, apiProductId_);
    };
    DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo() = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo(const DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo &) = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo(DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo &&) = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo() = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo& operator=(const DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo &) = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo& operator=(DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductId_ == nullptr; };
    // apiProductId Field Functions 
    bool hasApiProductId() const { return this->apiProductId_ != nullptr;};
    void deleteApiProductId() { this->apiProductId_ = nullptr;};
    inline string apiProductId() const { DARABONBA_PTR_GET_DEFAULT(apiProductId_, "") };
    inline DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


  protected:
    // The ID of the API product.
    std::shared_ptr<string> apiProductId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
