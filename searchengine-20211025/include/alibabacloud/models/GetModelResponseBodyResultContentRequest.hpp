// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetModelResponseBodyResultContentRequestHeader.hpp>
#include <alibabacloud/models/GetModelResponseBodyResultContentRequestParameters.hpp>
#include <alibabacloud/models/GetModelResponseBodyResultContentRequestUrlParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetModelResponseBodyResultContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelResponseBodyResultContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(requestBody, requestBody_);
      DARABONBA_PTR_TO_JSON(urlParams, urlParams_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelResponseBodyResultContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(requestBody, requestBody_);
      DARABONBA_PTR_FROM_JSON(urlParams, urlParams_);
    };
    GetModelResponseBodyResultContentRequest() = default ;
    GetModelResponseBodyResultContentRequest(const GetModelResponseBodyResultContentRequest &) = default ;
    GetModelResponseBodyResultContentRequest(GetModelResponseBodyResultContentRequest &&) = default ;
    GetModelResponseBodyResultContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelResponseBodyResultContentRequest() = default ;
    GetModelResponseBodyResultContentRequest& operator=(const GetModelResponseBodyResultContentRequest &) = default ;
    GetModelResponseBodyResultContentRequest& operator=(GetModelResponseBodyResultContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->parameters_ != nullptr && this->requestBody_ != nullptr && this->urlParams_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const Models::GetModelResponseBodyResultContentRequestHeader & header() const { DARABONBA_PTR_GET_CONST(header_, Models::GetModelResponseBodyResultContentRequestHeader) };
    inline Models::GetModelResponseBodyResultContentRequestHeader header() { DARABONBA_PTR_GET(header_, Models::GetModelResponseBodyResultContentRequestHeader) };
    inline GetModelResponseBodyResultContentRequest& setHeader(const Models::GetModelResponseBodyResultContentRequestHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline GetModelResponseBodyResultContentRequest& setHeader(Models::GetModelResponseBodyResultContentRequestHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::GetModelResponseBodyResultContentRequestParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::GetModelResponseBodyResultContentRequestParameters) };
    inline Models::GetModelResponseBodyResultContentRequestParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::GetModelResponseBodyResultContentRequestParameters) };
    inline GetModelResponseBodyResultContentRequest& setParameters(const Models::GetModelResponseBodyResultContentRequestParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetModelResponseBodyResultContentRequest& setParameters(Models::GetModelResponseBodyResultContentRequestParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestBody Field Functions 
    bool hasRequestBody() const { return this->requestBody_ != nullptr;};
    void deleteRequestBody() { this->requestBody_ = nullptr;};
    inline string requestBody() const { DARABONBA_PTR_GET_DEFAULT(requestBody_, "") };
    inline GetModelResponseBodyResultContentRequest& setRequestBody(string requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };


    // urlParams Field Functions 
    bool hasUrlParams() const { return this->urlParams_ != nullptr;};
    void deleteUrlParams() { this->urlParams_ = nullptr;};
    inline const Models::GetModelResponseBodyResultContentRequestUrlParams & urlParams() const { DARABONBA_PTR_GET_CONST(urlParams_, Models::GetModelResponseBodyResultContentRequestUrlParams) };
    inline Models::GetModelResponseBodyResultContentRequestUrlParams urlParams() { DARABONBA_PTR_GET(urlParams_, Models::GetModelResponseBodyResultContentRequestUrlParams) };
    inline GetModelResponseBodyResultContentRequest& setUrlParams(const Models::GetModelResponseBodyResultContentRequestUrlParams & urlParams) { DARABONBA_PTR_SET_VALUE(urlParams_, urlParams) };
    inline GetModelResponseBodyResultContentRequest& setUrlParams(Models::GetModelResponseBodyResultContentRequestUrlParams && urlParams) { DARABONBA_PTR_SET_RVALUE(urlParams_, urlParams) };


  protected:
    std::shared_ptr<Models::GetModelResponseBodyResultContentRequestHeader> header_ = nullptr;
    std::shared_ptr<Models::GetModelResponseBodyResultContentRequestParameters> parameters_ = nullptr;
    std::shared_ptr<string> requestBody_ = nullptr;
    std::shared_ptr<Models::GetModelResponseBodyResultContentRequestUrlParams> urlParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
