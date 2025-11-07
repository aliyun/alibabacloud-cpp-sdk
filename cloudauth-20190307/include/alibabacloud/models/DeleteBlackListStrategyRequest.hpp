// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBLACKLISTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBLACKLISTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteBlackListStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBlackListStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBlackListStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteBlackListStrategyRequest() = default ;
    DeleteBlackListStrategyRequest(const DeleteBlackListStrategyRequest &) = default ;
    DeleteBlackListStrategyRequest(DeleteBlackListStrategyRequest &&) = default ;
    DeleteBlackListStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBlackListStrategyRequest() = default ;
    DeleteBlackListStrategyRequest& operator=(const DeleteBlackListStrategyRequest &) = default ;
    DeleteBlackListStrategyRequest& operator=(DeleteBlackListStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->productName_ == nullptr && return this->regionId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteBlackListStrategyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DeleteBlackListStrategyRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteBlackListStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Product Name:
    // - **id2meta**: ID card two-factor verification
    // - **mobile3Meta**: Mobile phone number factor verification
    // - **bankcardMeta**: Bank card factor verification
    std::shared_ptr<string> productName_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
