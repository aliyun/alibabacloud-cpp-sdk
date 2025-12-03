// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRUNSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRUNSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckRunsResponseBodyResultAnnotations.hpp>
#include <alibabacloud/models/ListCheckRunsResponseBodyResultCheckSuite.hpp>
#include <alibabacloud/models/ListCheckRunsResponseBodyResultOutput.hpp>
#include <alibabacloud/models/ListCheckRunsResponseBodyResultWriter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListCheckRunsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRunsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_PTR_TO_JSON(checkSuite, checkSuite_);
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(conclusion, conclusion_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(detailsUrl, detailsUrl_);
      DARABONBA_PTR_TO_JSON(externalId, externalId_);
      DARABONBA_PTR_TO_JSON(headSha, headSha_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(writer, writer_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRunsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(checkSuite, checkSuite_);
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(conclusion, conclusion_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(detailsUrl, detailsUrl_);
      DARABONBA_PTR_FROM_JSON(externalId, externalId_);
      DARABONBA_PTR_FROM_JSON(headSha, headSha_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(writer, writer_);
    };
    ListCheckRunsResponseBodyResult() = default ;
    ListCheckRunsResponseBodyResult(const ListCheckRunsResponseBodyResult &) = default ;
    ListCheckRunsResponseBodyResult(ListCheckRunsResponseBodyResult &&) = default ;
    ListCheckRunsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRunsResponseBodyResult() = default ;
    ListCheckRunsResponseBodyResult& operator=(const ListCheckRunsResponseBodyResult &) = default ;
    ListCheckRunsResponseBodyResult& operator=(ListCheckRunsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && return this->checkSuite_ == nullptr && return this->completedAt_ == nullptr && return this->conclusion_ == nullptr && return this->createdAt_ == nullptr && return this->detailsUrl_ == nullptr
        && return this->externalId_ == nullptr && return this->headSha_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->output_ == nullptr
        && return this->startedAt_ == nullptr && return this->status_ == nullptr && return this->updatedAt_ == nullptr && return this->writer_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<Models::ListCheckRunsResponseBodyResultAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Models::ListCheckRunsResponseBodyResultAnnotations>) };
    inline vector<Models::ListCheckRunsResponseBodyResultAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<Models::ListCheckRunsResponseBodyResultAnnotations>) };
    inline ListCheckRunsResponseBodyResult& setAnnotations(const vector<Models::ListCheckRunsResponseBodyResultAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline ListCheckRunsResponseBodyResult& setAnnotations(vector<Models::ListCheckRunsResponseBodyResultAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // checkSuite Field Functions 
    bool hasCheckSuite() const { return this->checkSuite_ != nullptr;};
    void deleteCheckSuite() { this->checkSuite_ = nullptr;};
    inline const Models::ListCheckRunsResponseBodyResultCheckSuite & checkSuite() const { DARABONBA_PTR_GET_CONST(checkSuite_, Models::ListCheckRunsResponseBodyResultCheckSuite) };
    inline Models::ListCheckRunsResponseBodyResultCheckSuite checkSuite() { DARABONBA_PTR_GET(checkSuite_, Models::ListCheckRunsResponseBodyResultCheckSuite) };
    inline ListCheckRunsResponseBodyResult& setCheckSuite(const Models::ListCheckRunsResponseBodyResultCheckSuite & checkSuite) { DARABONBA_PTR_SET_VALUE(checkSuite_, checkSuite) };
    inline ListCheckRunsResponseBodyResult& setCheckSuite(Models::ListCheckRunsResponseBodyResultCheckSuite && checkSuite) { DARABONBA_PTR_SET_RVALUE(checkSuite_, checkSuite) };


    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline string completedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
    inline ListCheckRunsResponseBodyResult& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // conclusion Field Functions 
    bool hasConclusion() const { return this->conclusion_ != nullptr;};
    void deleteConclusion() { this->conclusion_ = nullptr;};
    inline string conclusion() const { DARABONBA_PTR_GET_DEFAULT(conclusion_, "") };
    inline ListCheckRunsResponseBodyResult& setConclusion(string conclusion) { DARABONBA_PTR_SET_VALUE(conclusion_, conclusion) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListCheckRunsResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // detailsUrl Field Functions 
    bool hasDetailsUrl() const { return this->detailsUrl_ != nullptr;};
    void deleteDetailsUrl() { this->detailsUrl_ = nullptr;};
    inline string detailsUrl() const { DARABONBA_PTR_GET_DEFAULT(detailsUrl_, "") };
    inline ListCheckRunsResponseBodyResult& setDetailsUrl(string detailsUrl) { DARABONBA_PTR_SET_VALUE(detailsUrl_, detailsUrl) };


    // externalId Field Functions 
    bool hasExternalId() const { return this->externalId_ != nullptr;};
    void deleteExternalId() { this->externalId_ = nullptr;};
    inline string externalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
    inline ListCheckRunsResponseBodyResult& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


    // headSha Field Functions 
    bool hasHeadSha() const { return this->headSha_ != nullptr;};
    void deleteHeadSha() { this->headSha_ = nullptr;};
    inline string headSha() const { DARABONBA_PTR_GET_DEFAULT(headSha_, "") };
    inline ListCheckRunsResponseBodyResult& setHeadSha(string headSha) { DARABONBA_PTR_SET_VALUE(headSha_, headSha) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCheckRunsResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCheckRunsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::ListCheckRunsResponseBodyResultOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::ListCheckRunsResponseBodyResultOutput) };
    inline Models::ListCheckRunsResponseBodyResultOutput output() { DARABONBA_PTR_GET(output_, Models::ListCheckRunsResponseBodyResultOutput) };
    inline ListCheckRunsResponseBodyResult& setOutput(const Models::ListCheckRunsResponseBodyResultOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline ListCheckRunsResponseBodyResult& setOutput(Models::ListCheckRunsResponseBodyResultOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string startedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline ListCheckRunsResponseBodyResult& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCheckRunsResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListCheckRunsResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // writer Field Functions 
    bool hasWriter() const { return this->writer_ != nullptr;};
    void deleteWriter() { this->writer_ = nullptr;};
    inline const Models::ListCheckRunsResponseBodyResultWriter & writer() const { DARABONBA_PTR_GET_CONST(writer_, Models::ListCheckRunsResponseBodyResultWriter) };
    inline Models::ListCheckRunsResponseBodyResultWriter writer() { DARABONBA_PTR_GET(writer_, Models::ListCheckRunsResponseBodyResultWriter) };
    inline ListCheckRunsResponseBodyResult& setWriter(const Models::ListCheckRunsResponseBodyResultWriter & writer) { DARABONBA_PTR_SET_VALUE(writer_, writer) };
    inline ListCheckRunsResponseBodyResult& setWriter(Models::ListCheckRunsResponseBodyResultWriter && writer) { DARABONBA_PTR_SET_RVALUE(writer_, writer) };


  protected:
    std::shared_ptr<vector<Models::ListCheckRunsResponseBodyResultAnnotations>> annotations_ = nullptr;
    std::shared_ptr<Models::ListCheckRunsResponseBodyResultCheckSuite> checkSuite_ = nullptr;
    std::shared_ptr<string> completedAt_ = nullptr;
    std::shared_ptr<string> conclusion_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> detailsUrl_ = nullptr;
    std::shared_ptr<string> externalId_ = nullptr;
    std::shared_ptr<string> headSha_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::ListCheckRunsResponseBodyResultOutput> output_ = nullptr;
    std::shared_ptr<string> startedAt_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<Models::ListCheckRunsResponseBodyResultWriter> writer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
