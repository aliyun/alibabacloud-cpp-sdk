// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTTEXTFPSHOTSTEXTFPSHOTTEXTFPSHOTSLICESTEXTFPSHOTSLICE_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTTEXTFPSHOTSTEXTFPSHOTTEXTFPSHOTSLICESTEXTFPSHOTSLICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSliceInputFragment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& obj) { 
      DARABONBA_PTR_TO_JSON(DuplicationText, duplicationText_);
      DARABONBA_PTR_TO_JSON(InputFragment, inputFragment_);
      DARABONBA_PTR_TO_JSON(InputText, inputText_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& obj) { 
      DARABONBA_PTR_FROM_JSON(DuplicationText, duplicationText_);
      DARABONBA_PTR_FROM_JSON(InputFragment, inputFragment_);
      DARABONBA_PTR_FROM_JSON(InputText, inputText_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duplicationText_ == nullptr
        && return this->inputFragment_ == nullptr && return this->inputText_ == nullptr && return this->similarity_ == nullptr; };
    // duplicationText Field Functions 
    bool hasDuplicationText() const { return this->duplicationText_ != nullptr;};
    void deleteDuplicationText() { this->duplicationText_ = nullptr;};
    inline string duplicationText() const { DARABONBA_PTR_GET_DEFAULT(duplicationText_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& setDuplicationText(string duplicationText) { DARABONBA_PTR_SET_VALUE(duplicationText_, duplicationText) };


    // inputFragment Field Functions 
    bool hasInputFragment() const { return this->inputFragment_ != nullptr;};
    void deleteInputFragment() { this->inputFragment_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSliceInputFragment & inputFragment() const { DARABONBA_PTR_GET_CONST(inputFragment_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSliceInputFragment) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSliceInputFragment inputFragment() { DARABONBA_PTR_GET(inputFragment_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSliceInputFragment) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& setInputFragment(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSliceInputFragment & inputFragment) { DARABONBA_PTR_SET_VALUE(inputFragment_, inputFragment) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& setInputFragment(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSliceInputFragment && inputFragment) { DARABONBA_PTR_SET_RVALUE(inputFragment_, inputFragment) };


    // inputText Field Functions 
    bool hasInputText() const { return this->inputText_ != nullptr;};
    void deleteInputText() { this->inputText_ = nullptr;};
    inline string inputText() const { DARABONBA_PTR_GET_DEFAULT(inputText_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& setInputText(string inputText) { DARABONBA_PTR_SET_VALUE(inputText_, inputText) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline string similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSlice& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    // The text snippet that has similar fingerprints to the input text in the text fingerprint library.
    std::shared_ptr<string> duplicationText_ = nullptr;
    // The start point in time and duration of the similar text snippet in the input text.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlicesTextFpShotSliceInputFragment> inputFragment_ = nullptr;
    // The input text for text fingerprint analysis.
    std::shared_ptr<string> inputText_ = nullptr;
    // The similarity of the input text against the text snippet that has similar fingerprints to the input text in the text fingerprint library.
    std::shared_ptr<string> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
