// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNKEYWORDSEXTRACTIONGENERATIONREQUESTREFERENCEDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNKEYWORDSEXTRACTIONGENERATIONREQUESTREFERENCEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunKeywordsExtractionGenerationRequestReferenceData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunKeywordsExtractionGenerationRequestReferenceData& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
    };
    friend void from_json(const Darabonba::Json& j, RunKeywordsExtractionGenerationRequestReferenceData& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
    };
    RunKeywordsExtractionGenerationRequestReferenceData() = default ;
    RunKeywordsExtractionGenerationRequestReferenceData(const RunKeywordsExtractionGenerationRequestReferenceData &) = default ;
    RunKeywordsExtractionGenerationRequestReferenceData(RunKeywordsExtractionGenerationRequestReferenceData &&) = default ;
    RunKeywordsExtractionGenerationRequestReferenceData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunKeywordsExtractionGenerationRequestReferenceData() = default ;
    RunKeywordsExtractionGenerationRequestReferenceData& operator=(const RunKeywordsExtractionGenerationRequestReferenceData &) = default ;
    RunKeywordsExtractionGenerationRequestReferenceData& operator=(RunKeywordsExtractionGenerationRequestReferenceData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contents_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<string> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<string>) };
    inline vector<string> contents() { DARABONBA_PTR_GET(contents_, vector<string>) };
    inline RunKeywordsExtractionGenerationRequestReferenceData& setContents(const vector<string> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline RunKeywordsExtractionGenerationRequestReferenceData& setContents(vector<string> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> contents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
