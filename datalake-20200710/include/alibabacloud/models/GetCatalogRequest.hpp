// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
    };
    GetCatalogRequest() = default ;
    GetCatalogRequest(const GetCatalogRequest &) = default ;
    GetCatalogRequest(GetCatalogRequest &&) = default ;
    GetCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogRequest() = default ;
    GetCatalogRequest& operator=(const GetCatalogRequest &) = default ;
    GetCatalogRequest& operator=(GetCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline GetCatalogRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
