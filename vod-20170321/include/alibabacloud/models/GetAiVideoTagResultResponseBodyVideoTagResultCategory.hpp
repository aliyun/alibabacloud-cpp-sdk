// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODYVIDEOTAGRESULTCATEGORY_HPP_
#define ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODYVIDEOTAGRESULTCATEGORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIVideoTagResultResponseBodyVideoTagResultCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIVideoTagResultResponseBodyVideoTagResultCategory& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIVideoTagResultResponseBodyVideoTagResultCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetAIVideoTagResultResponseBodyVideoTagResultCategory() = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultCategory(const GetAIVideoTagResultResponseBodyVideoTagResultCategory &) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultCategory(GetAIVideoTagResultResponseBodyVideoTagResultCategory &&) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIVideoTagResultResponseBodyVideoTagResultCategory() = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultCategory& operator=(const GetAIVideoTagResultResponseBodyVideoTagResultCategory &) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResultCategory& operator=(GetAIVideoTagResultResponseBodyVideoTagResultCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetAIVideoTagResultResponseBodyVideoTagResultCategory& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The tag string.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
