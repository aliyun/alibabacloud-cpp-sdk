// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTDIGIWATERMARK_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTDIGIWATERMARK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMarkInputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark& obj) { 
      DARABONBA_PTR_TO_JSON(Alpha, alpha_);
      DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark& obj) { 
      DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
      DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark(const SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark(SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alpha_ == nullptr
        && return this->inputFile_ == nullptr && return this->type_ == nullptr; };
    // alpha Field Functions 
    bool hasAlpha() const { return this->alpha_ != nullptr;};
    void deleteAlpha() { this->alpha_ = nullptr;};
    inline string alpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark& setAlpha(string alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


    // inputFile Field Functions 
    bool hasInputFile() const { return this->inputFile_ != nullptr;};
    void deleteInputFile() { this->inputFile_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMarkInputFile & inputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMarkInputFile) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMarkInputFile inputFile() { DARABONBA_PTR_GET(inputFile_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMarkInputFile) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark& setInputFile(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMarkInputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark& setInputFile(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMarkInputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The transparency of the text or image.
    // 
    // *   Value values: **(0,1]**.
    // *   Default value: **1.0**.
    std::shared_ptr<string> alpha_ = nullptr;
    // The details of the input file.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMarkInputFile> inputFile_ = nullptr;
    // The type of the watermark. If this parameter is specified in the request, the corresponding parameter in the watermark template is overwritten. Valid values:
    // 
    // *   **Image** (default)
    // *   **Text**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
