// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListRegionIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListRegionIdRequest() = default ;
    ListRegionIdRequest(const ListRegionIdRequest &) = default ;
    ListRegionIdRequest(ListRegionIdRequest &&) = default ;
    ListRegionIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionIdRequest() = default ;
    ListRegionIdRequest& operator=(const ListRegionIdRequest &) = default ;
    ListRegionIdRequest& operator=(ListRegionIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListRegionIdRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The product type for querying available image regions. If this parameter is omitted, the query is performed based on CloudApp. Valid values:
    // 
    // - **CloudGame**: cloud gaming
    // - **CloudApp**: WUYING Cloud App
    // - **CloudBrowser**: secure browser
    // - **CloudDesktop**: WUYING Cloud Desktop
    // - **ImageBuilder**: image creation resources
    // - **ImageValidate**: image validation resources
    // - **AndroidCloud**: Android cloud
    // - **GpuRender**: GPU rendering
    // - **AndroidGpuRender**: Android cloud GPU rendering
    // - **WuyingServer**: Enterprise Edition workstation
    // - **GpuProxy**: GPU remote rendering proxy
    // - **GpuCache**: GPU remote rendering cache
    // - **AIAgent**: AI agent service
    // - **HostedDesktop**: hosted desktop
    // - **WuyingWorkstation**: Personal Edition container workstation
    // - **WuyingWorkstationBusiness**: Business Edition container workstation
    // - **WuyingWorkstationTeam**: Linggou container workstation Team Edition
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
