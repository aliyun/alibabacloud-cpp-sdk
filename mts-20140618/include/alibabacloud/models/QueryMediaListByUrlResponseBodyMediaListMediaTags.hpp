// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIATAGS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIATAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaTags() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaTags(const QueryMediaListByURLResponseBodyMediaListMediaTags &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaTags(QueryMediaListByURLResponseBodyMediaListMediaTags &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaTags() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaTags& operator=(const QueryMediaListByURLResponseBodyMediaListMediaTags &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaTags& operator=(QueryMediaListByURLResponseBodyMediaListMediaTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<string> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<string>) };
    inline vector<string> tag() { DARABONBA_PTR_GET(tag_, vector<string>) };
    inline QueryMediaListByURLResponseBodyMediaListMediaTags& setTag(const vector<string> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryMediaListByURLResponseBodyMediaListMediaTags& setTag(vector<string> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<string>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
