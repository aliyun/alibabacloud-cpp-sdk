// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMODELREQUESTCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMODELREQUESTCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyModelRequestContentRequestHeader.hpp>
#include <alibabacloud/models/ModifyModelRequestContentRequestParameters.hpp>
#include <alibabacloud/models/ModifyModelRequestContentRequestUrlParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyModelRequestContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyModelRequestContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(requestBody, requestBody_);
      DARABONBA_PTR_TO_JSON(urlParams, urlParams_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyModelRequestContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(requestBody, requestBody_);
      DARABONBA_PTR_FROM_JSON(urlParams, urlParams_);
    };
    ModifyModelRequestContentRequest() = default ;
    ModifyModelRequestContentRequest(const ModifyModelRequestContentRequest &) = default ;
    ModifyModelRequestContentRequest(ModifyModelRequestContentRequest &&) = default ;
    ModifyModelRequestContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyModelRequestContentRequest() = default ;
    ModifyModelRequestContentRequest& operator=(const ModifyModelRequestContentRequest &) = default ;
    ModifyModelRequestContentRequest& operator=(ModifyModelRequestContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->parameters_ != nullptr && this->requestBody_ != nullptr && this->urlParams_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const Models::ModifyModelRequestContentRequestHeader & header() const { DARABONBA_PTR_GET_CONST(header_, Models::ModifyModelRequestContentRequestHeader) };
    inline Models::ModifyModelRequestContentRequestHeader header() { DARABONBA_PTR_GET(header_, Models::ModifyModelRequestContentRequestHeader) };
    inline ModifyModelRequestContentRequest& setHeader(const Models::ModifyModelRequestContentRequestHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline ModifyModelRequestContentRequest& setHeader(Models::ModifyModelRequestContentRequestHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::ModifyModelRequestContentRequestParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::ModifyModelRequestContentRequestParameters) };
    inline Models::ModifyModelRequestContentRequestParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::ModifyModelRequestContentRequestParameters) };
    inline ModifyModelRequestContentRequest& setParameters(const Models::ModifyModelRequestContentRequestParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ModifyModelRequestContentRequest& setParameters(Models::ModifyModelRequestContentRequestParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestBody Field Functions 
    bool hasRequestBody() const { return this->requestBody_ != nullptr;};
    void deleteRequestBody() { this->requestBody_ = nullptr;};
    inline string requestBody() const { DARABONBA_PTR_GET_DEFAULT(requestBody_, "") };
    inline ModifyModelRequestContentRequest& setRequestBody(string requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };


    // urlParams Field Functions 
    bool hasUrlParams() const { return this->urlParams_ != nullptr;};
    void deleteUrlParams() { this->urlParams_ = nullptr;};
    inline const Models::ModifyModelRequestContentRequestUrlParams & urlParams() const { DARABONBA_PTR_GET_CONST(urlParams_, Models::ModifyModelRequestContentRequestUrlParams) };
    inline Models::ModifyModelRequestContentRequestUrlParams urlParams() { DARABONBA_PTR_GET(urlParams_, Models::ModifyModelRequestContentRequestUrlParams) };
    inline ModifyModelRequestContentRequest& setUrlParams(const Models::ModifyModelRequestContentRequestUrlParams & urlParams) { DARABONBA_PTR_SET_VALUE(urlParams_, urlParams) };
    inline ModifyModelRequestContentRequest& setUrlParams(Models::ModifyModelRequestContentRequestUrlParams && urlParams) { DARABONBA_PTR_SET_RVALUE(urlParams_, urlParams) };


  protected:
    std::shared_ptr<Models::ModifyModelRequestContentRequestHeader> header_ = nullptr;
    std::shared_ptr<Models::ModifyModelRequestContentRequestParameters> parameters_ = nullptr;
    std::shared_ptr<string> requestBody_ = nullptr;
    std::shared_ptr<Models::ModifyModelRequestContentRequestUrlParams> urlParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
