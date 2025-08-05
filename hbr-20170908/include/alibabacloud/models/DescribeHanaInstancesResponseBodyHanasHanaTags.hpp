// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANAINSTANCESRESPONSEBODYHANASHANATAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANAINSTANCESRESPONSEBODYHANASHANATAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHanaInstancesResponseBodyHanasHanaTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaInstancesResponseBodyHanasHanaTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaInstancesResponseBodyHanasHanaTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaInstancesResponseBodyHanasHanaTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeHanaInstancesResponseBodyHanasHanaTags() = default ;
    DescribeHanaInstancesResponseBodyHanasHanaTags(const DescribeHanaInstancesResponseBodyHanasHanaTags &) = default ;
    DescribeHanaInstancesResponseBodyHanasHanaTags(DescribeHanaInstancesResponseBodyHanasHanaTags &&) = default ;
    DescribeHanaInstancesResponseBodyHanasHanaTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaInstancesResponseBodyHanasHanaTags() = default ;
    DescribeHanaInstancesResponseBodyHanasHanaTags& operator=(const DescribeHanaInstancesResponseBodyHanasHanaTags &) = default ;
    DescribeHanaInstancesResponseBodyHanasHanaTags& operator=(DescribeHanaInstancesResponseBodyHanasHanaTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeHanaInstancesResponseBodyHanasHanaTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeHanaInstancesResponseBodyHanasHanaTagsTag>) };
    inline vector<Models::DescribeHanaInstancesResponseBodyHanasHanaTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeHanaInstancesResponseBodyHanasHanaTagsTag>) };
    inline DescribeHanaInstancesResponseBodyHanasHanaTags& setTag(const vector<Models::DescribeHanaInstancesResponseBodyHanasHanaTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeHanaInstancesResponseBodyHanasHanaTags& setTag(vector<Models::DescribeHanaInstancesResponseBodyHanasHanaTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeHanaInstancesResponseBodyHanasHanaTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
