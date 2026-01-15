// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class DeleteImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsDeleteByFilter, isDeleteByFilter_);
      DARABONBA_PTR_TO_JSON(PicName, picName_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsDeleteByFilter, isDeleteByFilter_);
      DARABONBA_PTR_FROM_JSON(PicName, picName_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    DeleteImageRequest() = default ;
    DeleteImageRequest(const DeleteImageRequest &) = default ;
    DeleteImageRequest(DeleteImageRequest &&) = default ;
    DeleteImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImageRequest() = default ;
    DeleteImageRequest& operator=(const DeleteImageRequest &) = default ;
    DeleteImageRequest& operator=(DeleteImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->instanceName_ == nullptr && this->isDeleteByFilter_ == nullptr && this->picName_ == nullptr && this->productId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DeleteImageRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DeleteImageRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isDeleteByFilter Field Functions 
    bool hasIsDeleteByFilter() const { return this->isDeleteByFilter_ != nullptr;};
    void deleteIsDeleteByFilter() { this->isDeleteByFilter_ = nullptr;};
    inline bool getIsDeleteByFilter() const { DARABONBA_PTR_GET_DEFAULT(isDeleteByFilter_, false) };
    inline DeleteImageRequest& setIsDeleteByFilter(bool isDeleteByFilter) { DARABONBA_PTR_SET_VALUE(isDeleteByFilter_, isDeleteByFilter) };


    // picName Field Functions 
    bool hasPicName() const { return this->picName_ != nullptr;};
    void deletePicName() { this->picName_ = nullptr;};
    inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
    inline DeleteImageRequest& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DeleteImageRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    shared_ptr<string> filter_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<bool> isDeleteByFilter_ {};
    // The name of the image.
    // 
    // *   If this parameter is not set, the system deletes all the images that correspond to the specified ProductId parameter.
    // *   If this parameter is set, the system deletes only the image that is specified by the ProductId and PicName parameters.
    shared_ptr<string> picName_ {};
    // The ID of the commodity.
    // 
    // >  A commodity may have multiple images.
    shared_ptr<string> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
