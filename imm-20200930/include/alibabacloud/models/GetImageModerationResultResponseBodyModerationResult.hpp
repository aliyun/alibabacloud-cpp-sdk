// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEMODERATIONRESULTRESPONSEBODYMODERATIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEMODERATIONRESULTRESPONSEBODYMODERATIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageModerationResultResponseBodyModerationResultFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetImageModerationResultResponseBodyModerationResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageModerationResultResponseBodyModerationResult& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Frames, frames_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageModerationResultResponseBodyModerationResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Frames, frames_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    GetImageModerationResultResponseBodyModerationResult() = default ;
    GetImageModerationResultResponseBodyModerationResult(const GetImageModerationResultResponseBodyModerationResult &) = default ;
    GetImageModerationResultResponseBodyModerationResult(GetImageModerationResultResponseBodyModerationResult &&) = default ;
    GetImageModerationResultResponseBodyModerationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageModerationResultResponseBodyModerationResult() = default ;
    GetImageModerationResultResponseBodyModerationResult& operator=(const GetImageModerationResultResponseBodyModerationResult &) = default ;
    GetImageModerationResultResponseBodyModerationResult& operator=(GetImageModerationResultResponseBodyModerationResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr
        && this->frames_ != nullptr && this->suggestion_ != nullptr && this->URI_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline GetImageModerationResultResponseBodyModerationResult& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline GetImageModerationResultResponseBodyModerationResult& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const Models::GetImageModerationResultResponseBodyModerationResultFrames & frames() const { DARABONBA_PTR_GET_CONST(frames_, Models::GetImageModerationResultResponseBodyModerationResultFrames) };
    inline Models::GetImageModerationResultResponseBodyModerationResultFrames frames() { DARABONBA_PTR_GET(frames_, Models::GetImageModerationResultResponseBodyModerationResultFrames) };
    inline GetImageModerationResultResponseBodyModerationResult& setFrames(const Models::GetImageModerationResultResponseBodyModerationResultFrames & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline GetImageModerationResultResponseBodyModerationResult& setFrames(Models::GetImageModerationResultResponseBodyModerationResultFrames && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetImageModerationResultResponseBodyModerationResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline GetImageModerationResultResponseBodyModerationResult& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // List of categories.
    std::shared_ptr<vector<string>> categories_ = nullptr;
    // The information about video and motion detection frames.
    std::shared_ptr<Models::GetImageModerationResultResponseBodyModerationResultFrames> frames_ = nullptr;
    // The recommended operation. Valid values:
    // 
    // *   pass: The image has passed the check. No action is required.
    // *   review: The image contains suspected violations and requires human review.
    // *   block: The image contains violations. Further actions, such as deleting or blocking the image, are recommended.
    std::shared_ptr<string> suggestion_ = nullptr;
    // The OSS URI of the file. The URI follows the oss://${bucketname}/${objectname} format. bucketname indicates the name of an OSS bucket that is in the same region as the current project, and objectname is the file path.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
