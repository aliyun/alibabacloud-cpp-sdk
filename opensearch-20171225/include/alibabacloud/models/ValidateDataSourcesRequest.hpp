// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDATASOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDATASOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ValidateDataSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDataSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDataSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ValidateDataSourcesRequest() = default ;
    ValidateDataSourcesRequest(const ValidateDataSourcesRequest &) = default ;
    ValidateDataSourcesRequest(ValidateDataSourcesRequest &&) = default ;
    ValidateDataSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDataSourcesRequest() = default ;
    ValidateDataSourcesRequest& operator=(const ValidateDataSourcesRequest &) = default ;
    ValidateDataSourcesRequest& operator=(ValidateDataSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DataSource & body() const { DARABONBA_PTR_GET_CONST(body_, DataSource) };
    inline DataSource body() { DARABONBA_PTR_GET(body_, DataSource) };
    inline ValidateDataSourcesRequest& setBody(const DataSource & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateDataSourcesRequest& setBody(DataSource && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request parameter. For more information, see [DataSource](https://help.aliyun.com/document_detail/170005.html).
    std::shared_ptr<DataSource> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
