// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIROUGHDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIROUGHDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoListAiRoughData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoListAiRoughData& obj) { 
      DARABONBA_PTR_TO_JSON(AiCategory, aiCategory_);
      DARABONBA_PTR_TO_JSON(AiJobId, aiJobId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SaveType, saveType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoListAiRoughData& obj) { 
      DARABONBA_PTR_FROM_JSON(AiCategory, aiCategory_);
      DARABONBA_PTR_FROM_JSON(AiJobId, aiJobId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SearchMediaResponseBodyMediaInfoListAiRoughData() = default ;
    SearchMediaResponseBodyMediaInfoListAiRoughData(const SearchMediaResponseBodyMediaInfoListAiRoughData &) = default ;
    SearchMediaResponseBodyMediaInfoListAiRoughData(SearchMediaResponseBodyMediaInfoListAiRoughData &&) = default ;
    SearchMediaResponseBodyMediaInfoListAiRoughData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoListAiRoughData() = default ;
    SearchMediaResponseBodyMediaInfoListAiRoughData& operator=(const SearchMediaResponseBodyMediaInfoListAiRoughData &) = default ;
    SearchMediaResponseBodyMediaInfoListAiRoughData& operator=(SearchMediaResponseBodyMediaInfoListAiRoughData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiCategory_ == nullptr
        && return this->aiJobId_ == nullptr && return this->result_ == nullptr && return this->saveType_ == nullptr && return this->status_ == nullptr; };
    // aiCategory Field Functions 
    bool hasAiCategory() const { return this->aiCategory_ != nullptr;};
    void deleteAiCategory() { this->aiCategory_ = nullptr;};
    inline string aiCategory() const { DARABONBA_PTR_GET_DEFAULT(aiCategory_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiRoughData& setAiCategory(string aiCategory) { DARABONBA_PTR_SET_VALUE(aiCategory_, aiCategory) };


    // aiJobId Field Functions 
    bool hasAiJobId() const { return this->aiJobId_ != nullptr;};
    void deleteAiJobId() { this->aiJobId_ = nullptr;};
    inline string aiJobId() const { DARABONBA_PTR_GET_DEFAULT(aiJobId_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiRoughData& setAiJobId(string aiJobId) { DARABONBA_PTR_SET_VALUE(aiJobId_, aiJobId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiRoughData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // saveType Field Functions 
    bool hasSaveType() const { return this->saveType_ != nullptr;};
    void deleteSaveType() { this->saveType_ = nullptr;};
    inline string saveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiRoughData& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiRoughData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // TV Series
    std::shared_ptr<string> aiCategory_ = nullptr;
    // The ID of the AI job.
    std::shared_ptr<string> aiJobId_ = nullptr;
    // The results of the AI job.
    std::shared_ptr<string> result_ = nullptr;
    // The save type.
    std::shared_ptr<string> saveType_ = nullptr;
    // The data status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
