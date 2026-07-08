// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMFYPRODUCTIONDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMFYPRODUCTIONDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeComfyProductionDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComfyProductionDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComfyProductionDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
    };
    DescribeComfyProductionDownloadUrlRequest() = default ;
    DescribeComfyProductionDownloadUrlRequest(const DescribeComfyProductionDownloadUrlRequest &) = default ;
    DescribeComfyProductionDownloadUrlRequest(DescribeComfyProductionDownloadUrlRequest &&) = default ;
    DescribeComfyProductionDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComfyProductionDownloadUrlRequest() = default ;
    DescribeComfyProductionDownloadUrlRequest& operator=(const DescribeComfyProductionDownloadUrlRequest &) = default ;
    DescribeComfyProductionDownloadUrlRequest& operator=(DescribeComfyProductionDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productionId_ == nullptr; };
    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline DescribeComfyProductionDownloadUrlRequest& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


  protected:
    // The ID of the production.
    // 
    // This parameter is required.
    shared_ptr<string> productionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
