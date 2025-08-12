// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODYCASTERLISTCASTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODYCASTERLISTCASTERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCastersResponseBodyCasterListCasterTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCastersResponseBodyCasterListCasterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCastersResponseBodyCasterListCasterTags& obj) { 
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCastersResponseBodyCasterListCasterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    DescribeCastersResponseBodyCasterListCasterTags() = default ;
    DescribeCastersResponseBodyCasterListCasterTags(const DescribeCastersResponseBodyCasterListCasterTags &) = default ;
    DescribeCastersResponseBodyCasterListCasterTags(DescribeCastersResponseBodyCasterListCasterTags &&) = default ;
    DescribeCastersResponseBodyCasterListCasterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCastersResponseBodyCasterListCasterTags() = default ;
    DescribeCastersResponseBodyCasterListCasterTags& operator=(const DescribeCastersResponseBodyCasterListCasterTags &) = default ;
    DescribeCastersResponseBodyCasterListCasterTags& operator=(DescribeCastersResponseBodyCasterListCasterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeCastersResponseBodyCasterListCasterTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeCastersResponseBodyCasterListCasterTagsTag>) };
    inline vector<Models::DescribeCastersResponseBodyCasterListCasterTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeCastersResponseBodyCasterListCasterTagsTag>) };
    inline DescribeCastersResponseBodyCasterListCasterTags& setTag(const vector<Models::DescribeCastersResponseBodyCasterListCasterTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCastersResponseBodyCasterListCasterTags& setTag(vector<Models::DescribeCastersResponseBodyCasterListCasterTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeCastersResponseBodyCasterListCasterTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
