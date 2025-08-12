// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETAGSRESPONSEBODYTAG_HPP_
#define ALIBABACLOUD_MODELS_REMOVETAGSRESPONSEBODYTAG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class RemoveTagsResponseBodyTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTagsResponseBodyTag& obj) { 
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTagsResponseBodyTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    RemoveTagsResponseBodyTag() = default ;
    RemoveTagsResponseBodyTag(const RemoveTagsResponseBodyTag &) = default ;
    RemoveTagsResponseBodyTag(RemoveTagsResponseBodyTag &&) = default ;
    RemoveTagsResponseBodyTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTagsResponseBodyTag() = default ;
    RemoveTagsResponseBodyTag& operator=(const RemoveTagsResponseBodyTag &) = default ;
    RemoveTagsResponseBodyTag& operator=(RemoveTagsResponseBodyTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tags_ != nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline RemoveTagsResponseBodyTag& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RemoveTagsResponseBodyTag& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
