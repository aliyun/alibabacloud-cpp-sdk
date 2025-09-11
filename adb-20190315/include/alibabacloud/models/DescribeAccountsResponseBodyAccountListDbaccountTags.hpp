// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTLISTDBACCOUNTTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTLISTDBACCOUNTTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccountListDBAccountTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountListDBAccountTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountListDBAccountTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountListDBAccountTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeAccountsResponseBodyAccountListDBAccountTags() = default ;
    DescribeAccountsResponseBodyAccountListDBAccountTags(const DescribeAccountsResponseBodyAccountListDBAccountTags &) = default ;
    DescribeAccountsResponseBodyAccountListDBAccountTags(DescribeAccountsResponseBodyAccountListDBAccountTags &&) = default ;
    DescribeAccountsResponseBodyAccountListDBAccountTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountListDBAccountTags() = default ;
    DescribeAccountsResponseBodyAccountListDBAccountTags& operator=(const DescribeAccountsResponseBodyAccountListDBAccountTags &) = default ;
    DescribeAccountsResponseBodyAccountListDBAccountTags& operator=(DescribeAccountsResponseBodyAccountListDBAccountTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeAccountsResponseBodyAccountListDBAccountTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeAccountsResponseBodyAccountListDBAccountTagsTag>) };
    inline vector<Models::DescribeAccountsResponseBodyAccountListDBAccountTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeAccountsResponseBodyAccountListDBAccountTagsTag>) };
    inline DescribeAccountsResponseBodyAccountListDBAccountTags& setTag(const vector<Models::DescribeAccountsResponseBodyAccountListDBAccountTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAccountsResponseBodyAccountListDBAccountTags& setTag(vector<Models::DescribeAccountsResponseBodyAccountListDBAccountTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccountsResponseBodyAccountListDBAccountTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
