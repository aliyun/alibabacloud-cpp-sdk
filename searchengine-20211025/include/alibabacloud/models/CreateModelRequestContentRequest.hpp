// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELREQUESTCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELREQUESTCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateModelRequestContentRequestHeader.hpp>
#include <alibabacloud/models/CreateModelRequestContentRequestParameters.hpp>
#include <alibabacloud/models/CreateModelRequestContentRequestUrlParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateModelRequestContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelRequestContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(requestBody, requestBody_);
      DARABONBA_PTR_TO_JSON(urlParams, urlParams_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelRequestContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(requestBody, requestBody_);
      DARABONBA_PTR_FROM_JSON(urlParams, urlParams_);
    };
    CreateModelRequestContentRequest() = default ;
    CreateModelRequestContentRequest(const CreateModelRequestContentRequest &) = default ;
    CreateModelRequestContentRequest(CreateModelRequestContentRequest &&) = default ;
    CreateModelRequestContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelRequestContentRequest() = default ;
    CreateModelRequestContentRequest& operator=(const CreateModelRequestContentRequest &) = default ;
    CreateModelRequestContentRequest& operator=(CreateModelRequestContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->parameters_ != nullptr && this->requestBody_ != nullptr && this->urlParams_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const Models::CreateModelRequestContentRequestHeader & header() const { DARABONBA_PTR_GET_CONST(header_, Models::CreateModelRequestContentRequestHeader) };
    inline Models::CreateModelRequestContentRequestHeader header() { DARABONBA_PTR_GET(header_, Models::CreateModelRequestContentRequestHeader) };
    inline CreateModelRequestContentRequest& setHeader(const Models::CreateModelRequestContentRequestHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline CreateModelRequestContentRequest& setHeader(Models::CreateModelRequestContentRequestHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::CreateModelRequestContentRequestParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::CreateModelRequestContentRequestParameters) };
    inline Models::CreateModelRequestContentRequestParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::CreateModelRequestContentRequestParameters) };
    inline CreateModelRequestContentRequest& setParameters(const Models::CreateModelRequestContentRequestParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateModelRequestContentRequest& setParameters(Models::CreateModelRequestContentRequestParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestBody Field Functions 
    bool hasRequestBody() const { return this->requestBody_ != nullptr;};
    void deleteRequestBody() { this->requestBody_ = nullptr;};
    inline string requestBody() const { DARABONBA_PTR_GET_DEFAULT(requestBody_, "") };
    inline CreateModelRequestContentRequest& setRequestBody(string requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };


    // urlParams Field Functions 
    bool hasUrlParams() const { return this->urlParams_ != nullptr;};
    void deleteUrlParams() { this->urlParams_ = nullptr;};
    inline const Models::CreateModelRequestContentRequestUrlParams & urlParams() const { DARABONBA_PTR_GET_CONST(urlParams_, Models::CreateModelRequestContentRequestUrlParams) };
    inline Models::CreateModelRequestContentRequestUrlParams urlParams() { DARABONBA_PTR_GET(urlParams_, Models::CreateModelRequestContentRequestUrlParams) };
    inline CreateModelRequestContentRequest& setUrlParams(const Models::CreateModelRequestContentRequestUrlParams & urlParams) { DARABONBA_PTR_SET_VALUE(urlParams_, urlParams) };
    inline CreateModelRequestContentRequest& setUrlParams(Models::CreateModelRequestContentRequestUrlParams && urlParams) { DARABONBA_PTR_SET_RVALUE(urlParams_, urlParams) };


  protected:
    std::shared_ptr<Models::CreateModelRequestContentRequestHeader> header_ = nullptr;
    std::shared_ptr<Models::CreateModelRequestContentRequestParameters> parameters_ = nullptr;
    std::shared_ptr<string> requestBody_ = nullptr;
    std::shared_ptr<Models::CreateModelRequestContentRequestUrlParams> urlParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
