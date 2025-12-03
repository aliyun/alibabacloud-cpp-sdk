// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYSUCCESSAPISSUCCESSAPI_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYSUCCESSAPISSUCCESSAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASResponseBodySuccessApisSuccessApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBodySuccessApisSuccessApi& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiOperation, apiOperation_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBodySuccessApisSuccessApi& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiOperation, apiOperation_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    ImportOASResponseBodySuccessApisSuccessApi() = default ;
    ImportOASResponseBodySuccessApisSuccessApi(const ImportOASResponseBodySuccessApisSuccessApi &) = default ;
    ImportOASResponseBodySuccessApisSuccessApi(ImportOASResponseBodySuccessApisSuccessApi &&) = default ;
    ImportOASResponseBodySuccessApisSuccessApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBodySuccessApisSuccessApi() = default ;
    ImportOASResponseBodySuccessApisSuccessApi& operator=(const ImportOASResponseBodySuccessApisSuccessApi &) = default ;
    ImportOASResponseBodySuccessApisSuccessApi& operator=(ImportOASResponseBodySuccessApisSuccessApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiOperation_ == nullptr && return this->httpMethod_ == nullptr && return this->path_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ImportOASResponseBodySuccessApisSuccessApi& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiOperation Field Functions 
    bool hasApiOperation() const { return this->apiOperation_ != nullptr;};
    void deleteApiOperation() { this->apiOperation_ = nullptr;};
    inline string apiOperation() const { DARABONBA_PTR_GET_DEFAULT(apiOperation_, "") };
    inline ImportOASResponseBodySuccessApisSuccessApi& setApiOperation(string apiOperation) { DARABONBA_PTR_SET_VALUE(apiOperation_, apiOperation) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline ImportOASResponseBodySuccessApisSuccessApi& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ImportOASResponseBodySuccessApisSuccessApi& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // Indicates that the operation is CREATE or MODIFY.
    std::shared_ptr<string> apiOperation_ = nullptr;
    // The HTTP method configured when you created the API.
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The request path configured when you created the API.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
