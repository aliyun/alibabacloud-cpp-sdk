// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODYVOICECHEAT_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODYVOICECHEAT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList.hpp>
#include <alibabacloud/models/GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachCheatDetectionResponseBodyVoiceCheat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachCheatDetectionResponseBodyVoiceCheat& obj) { 
      DARABONBA_PTR_TO_JSON(comparisonList, comparisonList_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(originalList, originalList_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachCheatDetectionResponseBodyVoiceCheat& obj) { 
      DARABONBA_PTR_FROM_JSON(comparisonList, comparisonList_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(originalList, originalList_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetAICoachCheatDetectionResponseBodyVoiceCheat() = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheat(const GetAICoachCheatDetectionResponseBodyVoiceCheat &) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheat(GetAICoachCheatDetectionResponseBodyVoiceCheat &&) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachCheatDetectionResponseBodyVoiceCheat() = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheat& operator=(const GetAICoachCheatDetectionResponseBodyVoiceCheat &) = default ;
    GetAICoachCheatDetectionResponseBodyVoiceCheat& operator=(GetAICoachCheatDetectionResponseBodyVoiceCheat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonList_ == nullptr
        && return this->desc_ == nullptr && return this->originalList_ == nullptr && return this->status_ == nullptr; };
    // comparisonList Field Functions 
    bool hasComparisonList() const { return this->comparisonList_ != nullptr;};
    void deleteComparisonList() { this->comparisonList_ = nullptr;};
    inline const vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList> & comparisonList() const { DARABONBA_PTR_GET_CONST(comparisonList_, vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList>) };
    inline vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList> comparisonList() { DARABONBA_PTR_GET(comparisonList_, vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList>) };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheat& setComparisonList(const vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList> & comparisonList) { DARABONBA_PTR_SET_VALUE(comparisonList_, comparisonList) };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheat& setComparisonList(vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList> && comparisonList) { DARABONBA_PTR_SET_RVALUE(comparisonList_, comparisonList) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheat& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // originalList Field Functions 
    bool hasOriginalList() const { return this->originalList_ != nullptr;};
    void deleteOriginalList() { this->originalList_ = nullptr;};
    inline const vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList> & originalList() const { DARABONBA_PTR_GET_CONST(originalList_, vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList>) };
    inline vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList> originalList() { DARABONBA_PTR_GET(originalList_, vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList>) };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheat& setOriginalList(const vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList> & originalList) { DARABONBA_PTR_SET_VALUE(originalList_, originalList) };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheat& setOriginalList(vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList> && originalList) { DARABONBA_PTR_SET_RVALUE(originalList_, originalList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheat& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatComparisonList>> comparisonList_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<vector<Models::GetAICoachCheatDetectionResponseBodyVoiceCheatOriginalList>> originalList_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
