// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CatalogInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UpdateCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogInput, catalogInput_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogInput, catalogInput_);
    };
    UpdateCatalogRequest() = default ;
    UpdateCatalogRequest(const UpdateCatalogRequest &) = default ;
    UpdateCatalogRequest(UpdateCatalogRequest &&) = default ;
    UpdateCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCatalogRequest() = default ;
    UpdateCatalogRequest& operator=(const UpdateCatalogRequest &) = default ;
    UpdateCatalogRequest& operator=(UpdateCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogInput_ == nullptr; };
    // catalogInput Field Functions 
    bool hasCatalogInput() const { return this->catalogInput_ != nullptr;};
    void deleteCatalogInput() { this->catalogInput_ = nullptr;};
    inline const CatalogInput & catalogInput() const { DARABONBA_PTR_GET_CONST(catalogInput_, CatalogInput) };
    inline CatalogInput catalogInput() { DARABONBA_PTR_GET(catalogInput_, CatalogInput) };
    inline UpdateCatalogRequest& setCatalogInput(const CatalogInput & catalogInput) { DARABONBA_PTR_SET_VALUE(catalogInput_, catalogInput) };
    inline UpdateCatalogRequest& setCatalogInput(CatalogInput && catalogInput) { DARABONBA_PTR_SET_RVALUE(catalogInput_, catalogInput) };


  protected:
    // The structure that is used to create or update the catalog.
    // 
    // This parameter is required.
    std::shared_ptr<CatalogInput> catalogInput_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
