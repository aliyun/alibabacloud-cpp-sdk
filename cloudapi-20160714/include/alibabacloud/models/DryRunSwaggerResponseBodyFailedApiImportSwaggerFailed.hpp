// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYFAILEDAPIIMPORTSWAGGERFAILED_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYFAILEDAPIIMPORTSWAGGERFAILED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed() = default ;
    DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed(const DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed &) = default ;
    DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed(DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed &&) = default ;
    DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed() = default ;
    DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed& operator=(const DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed &) = default ;
    DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed& operator=(DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && return this->httpMethod_ == nullptr && return this->path_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DryRunSwaggerResponseBodyFailedApiImportSwaggerFailed& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The error message returned when the API is created.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The HTTP method configured when the API is created.
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The request path configured when the API is created.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
