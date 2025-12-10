// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CATALOGRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CatalogResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogResource& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogResource& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
    };
    CatalogResource() = default ;
    CatalogResource(const CatalogResource &) = default ;
    CatalogResource(CatalogResource &&) = default ;
    CatalogResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogResource() = default ;
    CatalogResource& operator=(const CatalogResource &) = default ;
    CatalogResource& operator=(CatalogResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline CatalogResource& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


  protected:
    std::shared_ptr<string> catalogId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
