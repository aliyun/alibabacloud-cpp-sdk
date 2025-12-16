// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUESTADDDOCUMENTPARAM_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUESTADDDOCUMENTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitVideoAnalysisTaskRequestAddDocumentParamDocument.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitVideoAnalysisTaskRequestAddDocumentParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoAnalysisTaskRequestAddDocumentParam& obj) { 
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(datasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(document, document_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoAnalysisTaskRequestAddDocumentParam& obj) { 
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(datasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(document, document_);
    };
    SubmitVideoAnalysisTaskRequestAddDocumentParam() = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParam(const SubmitVideoAnalysisTaskRequestAddDocumentParam &) = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParam(SubmitVideoAnalysisTaskRequestAddDocumentParam &&) = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoAnalysisTaskRequestAddDocumentParam() = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParam& operator=(const SubmitVideoAnalysisTaskRequestAddDocumentParam &) = default ;
    SubmitVideoAnalysisTaskRequestAddDocumentParam& operator=(SubmitVideoAnalysisTaskRequestAddDocumentParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && return this->datasetName_ == nullptr && return this->document_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline SubmitVideoAnalysisTaskRequestAddDocumentParam& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SubmitVideoAnalysisTaskRequestAddDocumentParam& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline const Models::SubmitVideoAnalysisTaskRequestAddDocumentParamDocument & document() const { DARABONBA_PTR_GET_CONST(document_, Models::SubmitVideoAnalysisTaskRequestAddDocumentParamDocument) };
    inline Models::SubmitVideoAnalysisTaskRequestAddDocumentParamDocument document() { DARABONBA_PTR_GET(document_, Models::SubmitVideoAnalysisTaskRequestAddDocumentParamDocument) };
    inline SubmitVideoAnalysisTaskRequestAddDocumentParam& setDocument(const Models::SubmitVideoAnalysisTaskRequestAddDocumentParamDocument & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
    inline SubmitVideoAnalysisTaskRequestAddDocumentParam& setDocument(Models::SubmitVideoAnalysisTaskRequestAddDocumentParamDocument && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


  protected:
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<Models::SubmitVideoAnalysisTaskRequestAddDocumentParamDocument> document_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
