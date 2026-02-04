// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataIngestionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionIds, dataIngestionIdsShrink_);
      DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_TO_JSON(DataIngestionTemplateIds, dataIngestionTemplateIdsShrink_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataIngestionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionIds, dataIngestionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_FROM_JSON(DataIngestionTemplateIds, dataIngestionTemplateIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListDataIngestionsShrinkRequest() = default ;
    ListDataIngestionsShrinkRequest(const ListDataIngestionsShrinkRequest &) = default ;
    ListDataIngestionsShrinkRequest(ListDataIngestionsShrinkRequest &&) = default ;
    ListDataIngestionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionsShrinkRequest() = default ;
    ListDataIngestionsShrinkRequest& operator=(const ListDataIngestionsShrinkRequest &) = default ;
    ListDataIngestionsShrinkRequest& operator=(ListDataIngestionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionIdsShrink_ == nullptr
        && this->dataIngestionStatus_ == nullptr && this->dataIngestionTemplateIdsShrink_ == nullptr && this->lang_ == nullptr && this->productId_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr; };
    // dataIngestionIdsShrink Field Functions 
    bool hasDataIngestionIdsShrink() const { return this->dataIngestionIdsShrink_ != nullptr;};
    void deleteDataIngestionIdsShrink() { this->dataIngestionIdsShrink_ = nullptr;};
    inline string getDataIngestionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionIdsShrink_, "") };
    inline ListDataIngestionsShrinkRequest& setDataIngestionIdsShrink(string dataIngestionIdsShrink) { DARABONBA_PTR_SET_VALUE(dataIngestionIdsShrink_, dataIngestionIdsShrink) };


    // dataIngestionStatus Field Functions 
    bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
    void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
    inline string getDataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
    inline ListDataIngestionsShrinkRequest& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


    // dataIngestionTemplateIdsShrink Field Functions 
    bool hasDataIngestionTemplateIdsShrink() const { return this->dataIngestionTemplateIdsShrink_ != nullptr;};
    void deleteDataIngestionTemplateIdsShrink() { this->dataIngestionTemplateIdsShrink_ = nullptr;};
    inline string getDataIngestionTemplateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateIdsShrink_, "") };
    inline ListDataIngestionsShrinkRequest& setDataIngestionTemplateIdsShrink(string dataIngestionTemplateIdsShrink) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateIdsShrink_, dataIngestionTemplateIdsShrink) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataIngestionsShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListDataIngestionsShrinkRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataIngestionsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDataIngestionsShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> dataIngestionIdsShrink_ {};
    shared_ptr<string> dataIngestionStatus_ {};
    shared_ptr<string> dataIngestionTemplateIdsShrink_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
