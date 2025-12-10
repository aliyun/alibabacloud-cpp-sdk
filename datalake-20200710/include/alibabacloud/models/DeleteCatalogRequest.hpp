// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DeleteCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(IsAsync, isAsync_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(IsAsync, isAsync_);
    };
    DeleteCatalogRequest() = default ;
    DeleteCatalogRequest(const DeleteCatalogRequest &) = default ;
    DeleteCatalogRequest(DeleteCatalogRequest &&) = default ;
    DeleteCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCatalogRequest() = default ;
    DeleteCatalogRequest& operator=(const DeleteCatalogRequest &) = default ;
    DeleteCatalogRequest& operator=(DeleteCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->isAsync_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline DeleteCatalogRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // isAsync Field Functions 
    bool hasIsAsync() const { return this->isAsync_ != nullptr;};
    void deleteIsAsync() { this->isAsync_ = nullptr;};
    inline bool isAsync() const { DARABONBA_PTR_GET_DEFAULT(isAsync_, false) };
    inline DeleteCatalogRequest& setIsAsync(bool isAsync) { DARABONBA_PTR_SET_VALUE(isAsync_, isAsync) };


  protected:
    // The ID of the data directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> catalogId_ = nullptr;
    // Whether asynchronous, synchronous by default.
    std::shared_ptr<bool> isAsync_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
