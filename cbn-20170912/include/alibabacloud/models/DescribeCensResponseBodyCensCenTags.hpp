// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENSCENTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSRESPONSEBODYCENSCENTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCensResponseBodyCensCenTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCensResponseBodyCensCenTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensResponseBodyCensCenTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensResponseBodyCensCenTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCensResponseBodyCensCenTags() = default ;
    DescribeCensResponseBodyCensCenTags(const DescribeCensResponseBodyCensCenTags &) = default ;
    DescribeCensResponseBodyCensCenTags(DescribeCensResponseBodyCensCenTags &&) = default ;
    DescribeCensResponseBodyCensCenTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensResponseBodyCensCenTags() = default ;
    DescribeCensResponseBodyCensCenTags& operator=(const DescribeCensResponseBodyCensCenTags &) = default ;
    DescribeCensResponseBodyCensCenTags& operator=(DescribeCensResponseBodyCensCenTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeCensResponseBodyCensCenTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeCensResponseBodyCensCenTagsTag>) };
    inline vector<Models::DescribeCensResponseBodyCensCenTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeCensResponseBodyCensCenTagsTag>) };
    inline DescribeCensResponseBodyCensCenTags& setTag(const vector<Models::DescribeCensResponseBodyCensCenTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCensResponseBodyCensCenTags& setTag(vector<Models::DescribeCensResponseBodyCensCenTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeCensResponseBodyCensCenTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
