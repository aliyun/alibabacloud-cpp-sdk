// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODYVIDEOTAGRESULTPERSON_HPP_
#define ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODYVIDEOTAGRESULTPERSON_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIVideoTagResultResponseBodyVideoTagResultPerson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIVideoTagResultResponseBodyVideoTagResultPerson& obj) { 
      DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIVideoTagResultResponseBodyVideoTagResultPerson& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    GetAIVideoTagResultResponseBodyVideoTagResultPerson() = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultPerson(const GetAIVideoTagResultResponseBodyVideoTagResultPerson &) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultPerson(GetAIVideoTagResultResponseBodyVideoTagResultPerson &&) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultPerson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIVideoTagResultResponseBodyVideoTagResultPerson() = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultPerson& operator=(const GetAIVideoTagResultResponseBodyVideoTagResultPerson &) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultPerson& operator=(GetAIVideoTagResultResponseBodyVideoTagResultPerson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceUrl_ == nullptr
        && return this->tag_ == nullptr && return this->times_ == nullptr; };
    // faceUrl Field Functions 
    bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
    void deleteFaceUrl() { this->faceUrl_ = nullptr;};
    inline string faceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
    inline GetAIVideoTagResultResponseBodyVideoTagResultPerson& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetAIVideoTagResultResponseBodyVideoTagResultPerson& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline const vector<string> & times() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
    inline vector<string> times() { DARABONBA_PTR_GET(times_, vector<string>) };
    inline GetAIVideoTagResultResponseBodyVideoTagResultPerson& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
    inline GetAIVideoTagResultResponseBodyVideoTagResultPerson& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


  protected:
    // The URL of the profile photo.
    // 
    // > This parameter is returned only when a figure tag was used.
    std::shared_ptr<string> faceUrl_ = nullptr;
    // The tag string.
    std::shared_ptr<string> tag_ = nullptr;
    // The points in time when the tags are displayed. Unit: milliseconds.
    std::shared_ptr<vector<string>> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
