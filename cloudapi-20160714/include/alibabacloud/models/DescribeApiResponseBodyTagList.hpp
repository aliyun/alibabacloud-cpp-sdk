// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYTAGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYTAGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiResponseBodyTagListTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyTagList& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeApiResponseBodyTagList() = default ;
    DescribeApiResponseBodyTagList(const DescribeApiResponseBodyTagList &) = default ;
    DescribeApiResponseBodyTagList(DescribeApiResponseBodyTagList &&) = default ;
    DescribeApiResponseBodyTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyTagList() = default ;
    DescribeApiResponseBodyTagList& operator=(const DescribeApiResponseBodyTagList &) = default ;
    DescribeApiResponseBodyTagList& operator=(DescribeApiResponseBodyTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeApiResponseBodyTagListTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeApiResponseBodyTagListTag>) };
    inline vector<Models::DescribeApiResponseBodyTagListTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeApiResponseBodyTagListTag>) };
    inline DescribeApiResponseBodyTagList& setTag(const vector<Models::DescribeApiResponseBodyTagListTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeApiResponseBodyTagList& setTag(vector<Models::DescribeApiResponseBodyTagListTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiResponseBodyTagListTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
