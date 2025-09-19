// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALAKECATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALAKECATALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DLCatalog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataLakeCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLakeCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CataLogList, cataLogList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLakeCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CataLogList, cataLogList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataLakeCatalogResponseBody() = default ;
    ListDataLakeCatalogResponseBody(const ListDataLakeCatalogResponseBody &) = default ;
    ListDataLakeCatalogResponseBody(ListDataLakeCatalogResponseBody &&) = default ;
    ListDataLakeCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLakeCatalogResponseBody() = default ;
    ListDataLakeCatalogResponseBody& operator=(const ListDataLakeCatalogResponseBody &) = default ;
    ListDataLakeCatalogResponseBody& operator=(ListDataLakeCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cataLogList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // cataLogList Field Functions 
    bool hasCataLogList() const { return this->cataLogList_ != nullptr;};
    void deleteCataLogList() { this->cataLogList_ = nullptr;};
    inline const vector<DLCatalog> & cataLogList() const { DARABONBA_PTR_GET_CONST(cataLogList_, vector<DLCatalog>) };
    inline vector<DLCatalog> cataLogList() { DARABONBA_PTR_GET(cataLogList_, vector<DLCatalog>) };
    inline ListDataLakeCatalogResponseBody& setCataLogList(const vector<DLCatalog> & cataLogList) { DARABONBA_PTR_SET_VALUE(cataLogList_, cataLogList) };
    inline ListDataLakeCatalogResponseBody& setCataLogList(vector<DLCatalog> && cataLogList) { DARABONBA_PTR_SET_RVALUE(cataLogList_, cataLogList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataLakeCatalogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataLakeCatalogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataLakeCatalogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataLakeCatalogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<DLCatalog>> cataLogList_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
