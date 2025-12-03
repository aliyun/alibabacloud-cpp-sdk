// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYSUCCESSAPIIMPORTSWAGGERSUCCESS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYSUCCESSAPIIMPORTSWAGGERSUCCESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess& obj) { 
      DARABONBA_PTR_TO_JSON(ApiOperation, apiOperation_);
      DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiOperation, apiOperation_);
      DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess() = default ;
    ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess(const ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess &) = default ;
    ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess(ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess &&) = default ;
    ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess() = default ;
    ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess& operator=(const ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess &) = default ;
    ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess& operator=(ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiOperation_ == nullptr
        && return this->apiUid_ == nullptr && return this->httpMethod_ == nullptr && return this->path_ == nullptr; };
    // apiOperation Field Functions 
    bool hasApiOperation() const { return this->apiOperation_ != nullptr;};
    void deleteApiOperation() { this->apiOperation_ = nullptr;};
    inline string apiOperation() const { DARABONBA_PTR_GET_DEFAULT(apiOperation_, "") };
    inline ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess& setApiOperation(string apiOperation) { DARABONBA_PTR_SET_VALUE(apiOperation_, apiOperation) };


    // apiUid Field Functions 
    bool hasApiUid() const { return this->apiUid_ != nullptr;};
    void deleteApiUid() { this->apiUid_ = nullptr;};
    inline string apiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
    inline ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // Specifies whether the operation is CREATE or MODIFY.
    std::shared_ptr<string> apiOperation_ = nullptr;
    // The UID of the successfully imported API.
    std::shared_ptr<string> apiUid_ = nullptr;
    // The HTTP method configured when the API is created.
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The request path configured when the API is created.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
