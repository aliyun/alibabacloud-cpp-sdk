// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Catalog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Catalog, catalog_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCatalogResponseBody() = default ;
    GetCatalogResponseBody(const GetCatalogResponseBody &) = default ;
    GetCatalogResponseBody(GetCatalogResponseBody &&) = default ;
    GetCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogResponseBody() = default ;
    GetCatalogResponseBody& operator=(const GetCatalogResponseBody &) = default ;
    GetCatalogResponseBody& operator=(GetCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalog_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline const Catalog & catalog() const { DARABONBA_PTR_GET_CONST(catalog_, Catalog) };
    inline Catalog catalog() { DARABONBA_PTR_GET(catalog_, Catalog) };
    inline GetCatalogResponseBody& setCatalog(const Catalog & catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };
    inline GetCatalogResponseBody& setCatalog(Catalog && catalog) { DARABONBA_PTR_SET_RVALUE(catalog_, catalog) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCatalogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCatalogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Catalog> catalog_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
