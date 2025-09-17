// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerTags() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerTags(const DescribeSourceServersResponseBodySourceServersSourceServerTags &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerTags(DescribeSourceServersResponseBodySourceServersSourceServerTags &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerTags() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerTags& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerTags &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerTags& operator=(DescribeSourceServersResponseBodySourceServersSourceServerTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerTagsTag>) };
    inline vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerTagsTag>) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerTags& setTag(const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerTags& setTag(vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
