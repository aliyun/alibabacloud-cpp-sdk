// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTICCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTICCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAgenticCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgenticCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgenticCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
    };
    GetAgenticCatalogRequest() = default ;
    GetAgenticCatalogRequest(const GetAgenticCatalogRequest &) = default ;
    GetAgenticCatalogRequest(GetAgenticCatalogRequest &&) = default ;
    GetAgenticCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgenticCatalogRequest() = default ;
    GetAgenticCatalogRequest& operator=(const GetAgenticCatalogRequest &) = default ;
    GetAgenticCatalogRequest& operator=(GetAgenticCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline GetAgenticCatalogRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


  protected:
    // The catalog UUID. You can obtain it by calling ListAgenticCatalog or SearchAgenticCatalog.
    // 
    // This parameter is required.
    shared_ptr<string> catalogUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
