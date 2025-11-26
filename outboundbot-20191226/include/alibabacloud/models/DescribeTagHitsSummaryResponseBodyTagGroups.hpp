// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGHITSSUMMARYRESPONSEBODYTAGGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGHITSSUMMARYRESPONSEBODYTAGGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTagHitsSummaryResponseBodyTagGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagHitsSummaryResponseBodyTagGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
      DARABONBA_PTR_TO_JSON(TagGroupIndex, tagGroupIndex_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagHitsSummaryResponseBodyTagGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
      DARABONBA_PTR_FROM_JSON(TagGroupIndex, tagGroupIndex_);
    };
    DescribeTagHitsSummaryResponseBodyTagGroups() = default ;
    DescribeTagHitsSummaryResponseBodyTagGroups(const DescribeTagHitsSummaryResponseBodyTagGroups &) = default ;
    DescribeTagHitsSummaryResponseBodyTagGroups(DescribeTagHitsSummaryResponseBodyTagGroups &&) = default ;
    DescribeTagHitsSummaryResponseBodyTagGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagHitsSummaryResponseBodyTagGroups() = default ;
    DescribeTagHitsSummaryResponseBodyTagGroups& operator=(const DescribeTagHitsSummaryResponseBodyTagGroups &) = default ;
    DescribeTagHitsSummaryResponseBodyTagGroups& operator=(DescribeTagHitsSummaryResponseBodyTagGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->scriptId_ == nullptr && return this->tagGroup_ == nullptr && return this->tagGroupIndex_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTagHitsSummaryResponseBodyTagGroups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DescribeTagHitsSummaryResponseBodyTagGroups& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // tagGroup Field Functions 
    bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
    void deleteTagGroup() { this->tagGroup_ = nullptr;};
    inline string tagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
    inline DescribeTagHitsSummaryResponseBodyTagGroups& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


    // tagGroupIndex Field Functions 
    bool hasTagGroupIndex() const { return this->tagGroupIndex_ != nullptr;};
    void deleteTagGroupIndex() { this->tagGroupIndex_ = nullptr;};
    inline int32_t tagGroupIndex() const { DARABONBA_PTR_GET_DEFAULT(tagGroupIndex_, 0) };
    inline DescribeTagHitsSummaryResponseBodyTagGroups& setTagGroupIndex(int32_t tagGroupIndex) { DARABONBA_PTR_SET_VALUE(tagGroupIndex_, tagGroupIndex) };


  protected:
    // ID
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> tagGroup_ = nullptr;
    std::shared_ptr<int32_t> tagGroupIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
