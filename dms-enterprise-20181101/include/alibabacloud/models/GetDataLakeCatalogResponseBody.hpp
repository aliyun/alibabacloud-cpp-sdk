// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATALAKECATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATALAKECATALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataLakeCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataLakeCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Catalog, catalog_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataLakeCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataLakeCatalogResponseBody() = default ;
    GetDataLakeCatalogResponseBody(const GetDataLakeCatalogResponseBody &) = default ;
    GetDataLakeCatalogResponseBody(GetDataLakeCatalogResponseBody &&) = default ;
    GetDataLakeCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataLakeCatalogResponseBody() = default ;
    GetDataLakeCatalogResponseBody& operator=(const GetDataLakeCatalogResponseBody &) = default ;
    GetDataLakeCatalogResponseBody& operator=(GetDataLakeCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalog_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline const DLCatalog & catalog() const { DARABONBA_PTR_GET_CONST(catalog_, DLCatalog) };
    inline DLCatalog catalog() { DARABONBA_PTR_GET(catalog_, DLCatalog) };
    inline GetDataLakeCatalogResponseBody& setCatalog(const DLCatalog & catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };
    inline GetDataLakeCatalogResponseBody& setCatalog(DLCatalog && catalog) { DARABONBA_PTR_SET_RVALUE(catalog_, catalog) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataLakeCatalogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataLakeCatalogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataLakeCatalogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataLakeCatalogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<DLCatalog> catalog_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
