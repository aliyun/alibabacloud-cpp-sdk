// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateParamsResponseBodyParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTemplateParamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetTemplateParamsResponseBody() = default ;
    GetTemplateParamsResponseBody(const GetTemplateParamsResponseBody &) = default ;
    GetTemplateParamsResponseBody(GetTemplateParamsResponseBody &&) = default ;
    GetTemplateParamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParamsResponseBody() = default ;
    GetTemplateParamsResponseBody& operator=(const GetTemplateParamsResponseBody &) = default ;
    GetTemplateParamsResponseBody& operator=(GetTemplateParamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramList_ != nullptr
        && this->requestId_ != nullptr && this->templateId_ != nullptr; };
    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<GetTemplateParamsResponseBodyParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<GetTemplateParamsResponseBodyParamList>) };
    inline vector<GetTemplateParamsResponseBodyParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<GetTemplateParamsResponseBodyParamList>) };
    inline GetTemplateParamsResponseBody& setParamList(const vector<GetTemplateParamsResponseBodyParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline GetTemplateParamsResponseBody& setParamList(vector<GetTemplateParamsResponseBodyParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateParamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateParamsResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The queried parameters.
    std::shared_ptr<vector<GetTemplateParamsResponseBodyParamList>> paramList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
