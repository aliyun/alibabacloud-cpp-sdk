// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
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
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetCatalogRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the data catalog entity. Currently, DLF and StarRocks types are supported. You can obtain the ID from the response of the ListCatalogs operation. For more information, see [Metadata entity concepts](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // 
    // - For the DLF type, the format is `dlf-catalog::catalog_id`.
    // 
    // - For the StarRocks type, the format is `starrocks-catalog:(instance_id|encoded_jdbc_url):catalog_name`.
    // 
    // > Where  
    // `catalog_id`: the ID of the DLF catalog.  
    // `instance_id`: the instance ID, which is required when the data source is registered in instance mode.  
    // `encoded_jdbc_url`: the URL-encoded JDBC connection string, which is required when the data source is registered in connection string mode.  
    // `catalog_name`: the name of the StarRocks catalog.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
