// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEBYSCRATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEBYSCRATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateTemplateByScratchResponseBodyResourcesToImport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GenerateTemplateByScratchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplateByScratchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcesToImport, resourcesToImport_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplateByScratchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcesToImport, resourcesToImport_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
    };
    GenerateTemplateByScratchResponseBody() = default ;
    GenerateTemplateByScratchResponseBody(const GenerateTemplateByScratchResponseBody &) = default ;
    GenerateTemplateByScratchResponseBody(GenerateTemplateByScratchResponseBody &&) = default ;
    GenerateTemplateByScratchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplateByScratchResponseBody() = default ;
    GenerateTemplateByScratchResponseBody& operator=(const GenerateTemplateByScratchResponseBody &) = default ;
    GenerateTemplateByScratchResponseBody& operator=(GenerateTemplateByScratchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourcesToImport_ != nullptr && this->templateBody_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateTemplateByScratchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcesToImport Field Functions 
    bool hasResourcesToImport() const { return this->resourcesToImport_ != nullptr;};
    void deleteResourcesToImport() { this->resourcesToImport_ = nullptr;};
    inline const vector<GenerateTemplateByScratchResponseBodyResourcesToImport> & resourcesToImport() const { DARABONBA_PTR_GET_CONST(resourcesToImport_, vector<GenerateTemplateByScratchResponseBodyResourcesToImport>) };
    inline vector<GenerateTemplateByScratchResponseBodyResourcesToImport> resourcesToImport() { DARABONBA_PTR_GET(resourcesToImport_, vector<GenerateTemplateByScratchResponseBodyResourcesToImport>) };
    inline GenerateTemplateByScratchResponseBody& setResourcesToImport(const vector<GenerateTemplateByScratchResponseBodyResourcesToImport> & resourcesToImport) { DARABONBA_PTR_SET_VALUE(resourcesToImport_, resourcesToImport) };
    inline GenerateTemplateByScratchResponseBody& setResourcesToImport(vector<GenerateTemplateByScratchResponseBodyResourcesToImport> && resourcesToImport) { DARABONBA_PTR_SET_RVALUE(resourcesToImport_, resourcesToImport) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GenerateTemplateByScratchResponseBody& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resources that you want to import into a stack in the resource management scenario.
    // 
    // > This parameter is returned only for a resource management scenario.
    std::shared_ptr<vector<GenerateTemplateByScratchResponseBodyResourcesToImport>> resourcesToImport_ = nullptr;
    // The template content of the resource scenario.
    std::shared_ptr<string> templateBody_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
