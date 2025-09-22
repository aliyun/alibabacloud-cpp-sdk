// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCUMENTANALYZEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCUMENTANALYZEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SubmitDocumentAnalyzeJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocumentAnalyzeJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocumentAnalyzeJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
    };
    SubmitDocumentAnalyzeJobResponseBodyData() = default ;
    SubmitDocumentAnalyzeJobResponseBodyData(const SubmitDocumentAnalyzeJobResponseBodyData &) = default ;
    SubmitDocumentAnalyzeJobResponseBodyData(SubmitDocumentAnalyzeJobResponseBodyData &&) = default ;
    SubmitDocumentAnalyzeJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocumentAnalyzeJobResponseBodyData() = default ;
    SubmitDocumentAnalyzeJobResponseBodyData& operator=(const SubmitDocumentAnalyzeJobResponseBodyData &) = default ;
    SubmitDocumentAnalyzeJobResponseBodyData& operator=(SubmitDocumentAnalyzeJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitDocumentAnalyzeJobResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
