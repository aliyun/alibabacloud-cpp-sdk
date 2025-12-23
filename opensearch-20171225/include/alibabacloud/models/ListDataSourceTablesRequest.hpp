// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListDataSourceTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(params, params_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(params, params_);
    };
    ListDataSourceTablesRequest() = default ;
    ListDataSourceTablesRequest(const ListDataSourceTablesRequest &) = default ;
    ListDataSourceTablesRequest(ListDataSourceTablesRequest &&) = default ;
    ListDataSourceTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTablesRequest() = default ;
    ListDataSourceTablesRequest& operator=(const ListDataSourceTablesRequest &) = default ;
    ListDataSourceTablesRequest& operator=(ListDataSourceTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->params_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ListDataSourceTablesRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // The parameters of the data source. The value is a JSON string which must be encoded in the urlencode format.
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
