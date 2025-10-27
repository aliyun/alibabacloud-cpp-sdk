// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULEAPPLICATIONRESPONSEBODYCONTAINERWEBDEFENSEAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULEAPPLICATIONRESPONSEBODYCONTAINERWEBDEFENSEAPPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList() = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList(const GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList &) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList(GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList &&) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList() = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& operator=(const GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList &) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& operator=(GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->clusterId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->ruleId_ == nullptr
        && return this->tag_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetSasContainerWebDefenseRuleApplicationResponseBodyContainerWebDefenseAppList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The user ID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The ID of the container cluster.
    // 
    // >  The IDs of clusters can be obtained by using the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The time when the application was created. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The last modification time. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the node.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The value of the application label.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
