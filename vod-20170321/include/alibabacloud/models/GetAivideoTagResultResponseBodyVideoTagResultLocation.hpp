// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODYVIDEOTAGRESULTLOCATION_HPP_
#define ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODYVIDEOTAGRESULTLOCATION_HPP_
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
  class GetAIVideoTagResultResponseBodyVideoTagResultLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIVideoTagResultResponseBodyVideoTagResultLocation& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIVideoTagResultResponseBodyVideoTagResultLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    GetAIVideoTagResultResponseBodyVideoTagResultLocation() = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultLocation(const GetAIVideoTagResultResponseBodyVideoTagResultLocation &) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultLocation(GetAIVideoTagResultResponseBodyVideoTagResultLocation &&) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIVideoTagResultResponseBodyVideoTagResultLocation() = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultLocation& operator=(const GetAIVideoTagResultResponseBodyVideoTagResultLocation &) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultLocation& operator=(GetAIVideoTagResultResponseBodyVideoTagResultLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr
        && this->times_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetAIVideoTagResultResponseBodyVideoTagResultLocation& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline const vector<string> & times() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
    inline vector<string> times() { DARABONBA_PTR_GET(times_, vector<string>) };
    inline GetAIVideoTagResultResponseBodyVideoTagResultLocation& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
    inline GetAIVideoTagResultResponseBodyVideoTagResultLocation& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


  protected:
    // The tag string.
    std::shared_ptr<string> tag_ = nullptr;
    // The points in time when the tags are displayed. Unit: milliseconds.
    std::shared_ptr<vector<string>> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
