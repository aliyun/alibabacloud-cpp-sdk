// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIROUGHDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIROUGHDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBodyMediaListAiRoughData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaListAiRoughData& obj) { 
      DARABONBA_PTR_TO_JSON(AiCategory, aiCategory_);
      DARABONBA_PTR_TO_JSON(AiJobId, aiJobId_);
      DARABONBA_PTR_TO_JSON(SaveType, saveType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaListAiRoughData& obj) { 
      DARABONBA_PTR_FROM_JSON(AiCategory, aiCategory_);
      DARABONBA_PTR_FROM_JSON(AiJobId, aiJobId_);
      DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SearchMediaResponseBodyMediaListAiRoughData() = default ;
    SearchMediaResponseBodyMediaListAiRoughData(const SearchMediaResponseBodyMediaListAiRoughData &) = default ;
    SearchMediaResponseBodyMediaListAiRoughData(SearchMediaResponseBodyMediaListAiRoughData &&) = default ;
    SearchMediaResponseBodyMediaListAiRoughData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaListAiRoughData() = default ;
    SearchMediaResponseBodyMediaListAiRoughData& operator=(const SearchMediaResponseBodyMediaListAiRoughData &) = default ;
    SearchMediaResponseBodyMediaListAiRoughData& operator=(SearchMediaResponseBodyMediaListAiRoughData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiCategory_ != nullptr
        && this->aiJobId_ != nullptr && this->saveType_ != nullptr && this->status_ != nullptr; };
    // aiCategory Field Functions 
    bool hasAiCategory() const { return this->aiCategory_ != nullptr;};
    void deleteAiCategory() { this->aiCategory_ = nullptr;};
    inline string aiCategory() const { DARABONBA_PTR_GET_DEFAULT(aiCategory_, "") };
    inline SearchMediaResponseBodyMediaListAiRoughData& setAiCategory(string aiCategory) { DARABONBA_PTR_SET_VALUE(aiCategory_, aiCategory) };


    // aiJobId Field Functions 
    bool hasAiJobId() const { return this->aiJobId_ != nullptr;};
    void deleteAiJobId() { this->aiJobId_ = nullptr;};
    inline string aiJobId() const { DARABONBA_PTR_GET_DEFAULT(aiJobId_, "") };
    inline SearchMediaResponseBodyMediaListAiRoughData& setAiJobId(string aiJobId) { DARABONBA_PTR_SET_VALUE(aiJobId_, aiJobId) };


    // saveType Field Functions 
    bool hasSaveType() const { return this->saveType_ != nullptr;};
    void deleteSaveType() { this->saveType_ = nullptr;};
    inline string saveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
    inline SearchMediaResponseBodyMediaListAiRoughData& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchMediaResponseBodyMediaListAiRoughData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The AI category.
    std::shared_ptr<string> aiCategory_ = nullptr;
    // The ID of the AI task.
    std::shared_ptr<string> aiJobId_ = nullptr;
    // The save type.
    std::shared_ptr<string> saveType_ = nullptr;
    // The data status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
