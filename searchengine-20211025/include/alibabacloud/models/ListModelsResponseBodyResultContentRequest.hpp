// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODYRESULTCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODYRESULTCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListModelsResponseBodyResultContentRequestHeader.hpp>
#include <alibabacloud/models/ListModelsResponseBodyResultContentRequestParameters.hpp>
#include <alibabacloud/models/ListModelsResponseBodyResultContentRequestUrlParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListModelsResponseBodyResultContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsResponseBodyResultContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(requestBody, requestBody_);
      DARABONBA_PTR_TO_JSON(urlParams, urlParams_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsResponseBodyResultContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(requestBody, requestBody_);
      DARABONBA_PTR_FROM_JSON(urlParams, urlParams_);
    };
    ListModelsResponseBodyResultContentRequest() = default ;
    ListModelsResponseBodyResultContentRequest(const ListModelsResponseBodyResultContentRequest &) = default ;
    ListModelsResponseBodyResultContentRequest(ListModelsResponseBodyResultContentRequest &&) = default ;
    ListModelsResponseBodyResultContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsResponseBodyResultContentRequest() = default ;
    ListModelsResponseBodyResultContentRequest& operator=(const ListModelsResponseBodyResultContentRequest &) = default ;
    ListModelsResponseBodyResultContentRequest& operator=(ListModelsResponseBodyResultContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->header_ != nullptr
        && this->parameters_ != nullptr && this->requestBody_ != nullptr && this->urlParams_ != nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const Models::ListModelsResponseBodyResultContentRequestHeader & header() const { DARABONBA_PTR_GET_CONST(header_, Models::ListModelsResponseBodyResultContentRequestHeader) };
    inline Models::ListModelsResponseBodyResultContentRequestHeader header() { DARABONBA_PTR_GET(header_, Models::ListModelsResponseBodyResultContentRequestHeader) };
    inline ListModelsResponseBodyResultContentRequest& setHeader(const Models::ListModelsResponseBodyResultContentRequestHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline ListModelsResponseBodyResultContentRequest& setHeader(Models::ListModelsResponseBodyResultContentRequestHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::ListModelsResponseBodyResultContentRequestParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::ListModelsResponseBodyResultContentRequestParameters) };
    inline Models::ListModelsResponseBodyResultContentRequestParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::ListModelsResponseBodyResultContentRequestParameters) };
    inline ListModelsResponseBodyResultContentRequest& setParameters(const Models::ListModelsResponseBodyResultContentRequestParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ListModelsResponseBodyResultContentRequest& setParameters(Models::ListModelsResponseBodyResultContentRequestParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestBody Field Functions 
    bool hasRequestBody() const { return this->requestBody_ != nullptr;};
    void deleteRequestBody() { this->requestBody_ = nullptr;};
    inline string requestBody() const { DARABONBA_PTR_GET_DEFAULT(requestBody_, "") };
    inline ListModelsResponseBodyResultContentRequest& setRequestBody(string requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };


    // urlParams Field Functions 
    bool hasUrlParams() const { return this->urlParams_ != nullptr;};
    void deleteUrlParams() { this->urlParams_ = nullptr;};
    inline const Models::ListModelsResponseBodyResultContentRequestUrlParams & urlParams() const { DARABONBA_PTR_GET_CONST(urlParams_, Models::ListModelsResponseBodyResultContentRequestUrlParams) };
    inline Models::ListModelsResponseBodyResultContentRequestUrlParams urlParams() { DARABONBA_PTR_GET(urlParams_, Models::ListModelsResponseBodyResultContentRequestUrlParams) };
    inline ListModelsResponseBodyResultContentRequest& setUrlParams(const Models::ListModelsResponseBodyResultContentRequestUrlParams & urlParams) { DARABONBA_PTR_SET_VALUE(urlParams_, urlParams) };
    inline ListModelsResponseBodyResultContentRequest& setUrlParams(Models::ListModelsResponseBodyResultContentRequestUrlParams && urlParams) { DARABONBA_PTR_SET_RVALUE(urlParams_, urlParams) };


  protected:
    std::shared_ptr<Models::ListModelsResponseBodyResultContentRequestHeader> header_ = nullptr;
    std::shared_ptr<Models::ListModelsResponseBodyResultContentRequestParameters> parameters_ = nullptr;
    std::shared_ptr<string> requestBody_ = nullptr;
    std::shared_ptr<Models::ListModelsResponseBodyResultContentRequestUrlParams> urlParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
