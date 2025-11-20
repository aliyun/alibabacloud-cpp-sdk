// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVaultsResponseBodyVaultsVaultTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsResponseBodyVaultsVaultTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBodyVaultsVaultTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBodyVaultsVaultTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeVaultsResponseBodyVaultsVaultTags() = default ;
    DescribeVaultsResponseBodyVaultsVaultTags(const DescribeVaultsResponseBodyVaultsVaultTags &) = default ;
    DescribeVaultsResponseBodyVaultsVaultTags(DescribeVaultsResponseBodyVaultsVaultTags &&) = default ;
    DescribeVaultsResponseBodyVaultsVaultTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBodyVaultsVaultTags() = default ;
    DescribeVaultsResponseBodyVaultsVaultTags& operator=(const DescribeVaultsResponseBodyVaultsVaultTags &) = default ;
    DescribeVaultsResponseBodyVaultsVaultTags& operator=(DescribeVaultsResponseBodyVaultsVaultTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeVaultsResponseBodyVaultsVaultTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeVaultsResponseBodyVaultsVaultTagsTag>) };
    inline vector<Models::DescribeVaultsResponseBodyVaultsVaultTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeVaultsResponseBodyVaultsVaultTagsTag>) };
    inline DescribeVaultsResponseBodyVaultsVaultTags& setTag(const vector<Models::DescribeVaultsResponseBodyVaultsVaultTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVaultsResponseBodyVaultsVaultTags& setTag(vector<Models::DescribeVaultsResponseBodyVaultsVaultTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeVaultsResponseBodyVaultsVaultTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
