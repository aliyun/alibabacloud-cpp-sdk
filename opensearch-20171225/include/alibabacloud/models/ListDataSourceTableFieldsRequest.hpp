// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETABLEFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETABLEFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListDataSourceTableFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTableFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(rawType, rawType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTableFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(rawType, rawType_);
    };
    ListDataSourceTableFieldsRequest() = default ;
    ListDataSourceTableFieldsRequest(const ListDataSourceTableFieldsRequest &) = default ;
    ListDataSourceTableFieldsRequest(ListDataSourceTableFieldsRequest &&) = default ;
    ListDataSourceTableFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTableFieldsRequest() = default ;
    ListDataSourceTableFieldsRequest& operator=(const ListDataSourceTableFieldsRequest &) = default ;
    ListDataSourceTableFieldsRequest& operator=(ListDataSourceTableFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->params_ == nullptr
        && return this->rawType_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ListDataSourceTableFieldsRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // rawType Field Functions 
    bool hasRawType() const { return this->rawType_ != nullptr;};
    void deleteRawType() { this->rawType_ = nullptr;};
    inline bool rawType() const { DARABONBA_PTR_GET_DEFAULT(rawType_, false) };
    inline ListDataSourceTableFieldsRequest& setRawType(bool rawType) { DARABONBA_PTR_SET_VALUE(rawType_, rawType) };


  protected:
    // The parameters of the data source. The value of the params parameter is a JSON string. The value must be URL-encoded.
    // 
    // Different types of data sources use different parameters. For more information, see the following sections of the "DataSource" topic:
    // 
    // *   [rds](https://help.aliyun.com/document_detail/170005.html)
    // *   [polardb](https://help.aliyun.com/document_detail/170005.html)
    // *   [odps](https://help.aliyun.com/document_detail/170005.html)
    // *   [mysql](https://help.aliyun.com/document_detail/173627.html)
    // *   [drds](https://help.aliyun.com/document_detail/173627.html)
    // 
    // This parameter is required.
    std::shared_ptr<string> params_ = nullptr;
    // Specifies whether to return the original field types of the data source.
    std::shared_ptr<bool> rawType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
