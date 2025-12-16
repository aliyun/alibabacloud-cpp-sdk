// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUESTADDDOCUMENTPARAMDOCUMENT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUESTADDDOCUMENTPARAMDOCUMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitVideoAnalysisTaskRequestAddDocumentParamDocument : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoAnalysisTaskRequestAddDocumentParamDocument& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoAnalysisTaskRequestAddDocumentParamDocument& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    SubmitVideoAnalysisTaskRequestAddDocumentParamDocument() = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParamDocument(const SubmitVideoAnalysisTaskRequestAddDocumentParamDocument &) = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParamDocument(SubmitVideoAnalysisTaskRequestAddDocumentParamDocument &&) = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParamDocument(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoAnalysisTaskRequestAddDocumentParamDocument() = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParamDocument& operator=(const SubmitVideoAnalysisTaskRequestAddDocumentParamDocument &) = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParamDocument& operator=(SubmitVideoAnalysisTaskRequestAddDocumentParamDocument &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docId_ == nullptr
        && return this->title_ == nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline SubmitVideoAnalysisTaskRequestAddDocumentParamDocument& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitVideoAnalysisTaskRequestAddDocumentParamDocument& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
