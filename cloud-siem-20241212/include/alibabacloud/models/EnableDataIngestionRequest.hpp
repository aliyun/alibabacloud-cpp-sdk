// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDATAINGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDATAINGESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class EnableDataIngestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDataIngestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDataIngestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    EnableDataIngestionRequest() = default ;
    EnableDataIngestionRequest(const EnableDataIngestionRequest &) = default ;
    EnableDataIngestionRequest(EnableDataIngestionRequest &&) = default ;
    EnableDataIngestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDataIngestionRequest() = default ;
    EnableDataIngestionRequest& operator=(const EnableDataIngestionRequest &) = default ;
    EnableDataIngestionRequest& operator=(EnableDataIngestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionId_ == nullptr
        && return this->lang_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataIngestionId Field Functions 
    bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
    void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
    inline string dataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
    inline EnableDataIngestionRequest& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline EnableDataIngestionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline EnableDataIngestionRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableDataIngestionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline EnableDataIngestionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataIngestionId_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
