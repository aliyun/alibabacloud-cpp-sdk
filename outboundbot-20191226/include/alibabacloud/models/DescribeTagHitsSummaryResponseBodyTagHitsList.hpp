// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGHITSSUMMARYRESPONSEBODYTAGHITSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGHITSSUMMARYRESPONSEBODYTAGHITSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTagHitsSummaryResponseBodyTagHitsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagHitsSummaryResponseBodyTagHitsList& obj) { 
      DARABONBA_PTR_TO_JSON(HitCount, hitCount_);
      DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagHitsSummaryResponseBodyTagHitsList& obj) { 
      DARABONBA_PTR_FROM_JSON(HitCount, hitCount_);
      DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    DescribeTagHitsSummaryResponseBodyTagHitsList() = default ;
    DescribeTagHitsSummaryResponseBodyTagHitsList(const DescribeTagHitsSummaryResponseBodyTagHitsList &) = default ;
    DescribeTagHitsSummaryResponseBodyTagHitsList(DescribeTagHitsSummaryResponseBodyTagHitsList &&) = default ;
    DescribeTagHitsSummaryResponseBodyTagHitsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagHitsSummaryResponseBodyTagHitsList() = default ;
    DescribeTagHitsSummaryResponseBodyTagHitsList& operator=(const DescribeTagHitsSummaryResponseBodyTagHitsList &) = default ;
    DescribeTagHitsSummaryResponseBodyTagHitsList& operator=(DescribeTagHitsSummaryResponseBodyTagHitsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hitCount_ == nullptr
        && return this->tagGroup_ == nullptr && return this->tagName_ == nullptr; };
    // hitCount Field Functions 
    bool hasHitCount() const { return this->hitCount_ != nullptr;};
    void deleteHitCount() { this->hitCount_ = nullptr;};
    inline int32_t hitCount() const { DARABONBA_PTR_GET_DEFAULT(hitCount_, 0) };
    inline DescribeTagHitsSummaryResponseBodyTagHitsList& setHitCount(int32_t hitCount) { DARABONBA_PTR_SET_VALUE(hitCount_, hitCount) };


    // tagGroup Field Functions 
    bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
    void deleteTagGroup() { this->tagGroup_ = nullptr;};
    inline string tagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
    inline DescribeTagHitsSummaryResponseBodyTagHitsList& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline DescribeTagHitsSummaryResponseBodyTagHitsList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<int32_t> hitCount_ = nullptr;
    std::shared_ptr<string> tagGroup_ = nullptr;
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
