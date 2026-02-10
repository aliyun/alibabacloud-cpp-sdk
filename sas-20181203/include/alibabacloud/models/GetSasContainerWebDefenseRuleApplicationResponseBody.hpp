// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSasContainerWebDefenseRuleApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSasContainerWebDefenseRuleApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerWebDefenseAppList, containerWebDefenseAppList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSasContainerWebDefenseRuleApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerWebDefenseAppList, containerWebDefenseAppList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSasContainerWebDefenseRuleApplicationResponseBody() = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody(const GetSasContainerWebDefenseRuleApplicationResponseBody &) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody(GetSasContainerWebDefenseRuleApplicationResponseBody &&) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSasContainerWebDefenseRuleApplicationResponseBody() = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody& operator=(const GetSasContainerWebDefenseRuleApplicationResponseBody &) = default ;
    GetSasContainerWebDefenseRuleApplicationResponseBody& operator=(GetSasContainerWebDefenseRuleApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContainerWebDefenseAppList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerWebDefenseAppList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, ContainerWebDefenseAppList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      ContainerWebDefenseAppList() = default ;
      ContainerWebDefenseAppList(const ContainerWebDefenseAppList &) = default ;
      ContainerWebDefenseAppList(ContainerWebDefenseAppList &&) = default ;
      ContainerWebDefenseAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerWebDefenseAppList() = default ;
      ContainerWebDefenseAppList& operator=(const ContainerWebDefenseAppList &) = default ;
      ContainerWebDefenseAppList& operator=(ContainerWebDefenseAppList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->clusterId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->ruleId_ == nullptr
        && this->tag_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline ContainerWebDefenseAppList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ContainerWebDefenseAppList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ContainerWebDefenseAppList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ContainerWebDefenseAppList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ContainerWebDefenseAppList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline ContainerWebDefenseAppList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ContainerWebDefenseAppList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // The user ID.
      shared_ptr<int64_t> aliUid_ {};
      // The ID of the container cluster.
      // 
      // >  The IDs of clusters can be obtained by using the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation.
      shared_ptr<string> clusterId_ {};
      // The time when the application was created. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The last modification time. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The ID of the node.
      shared_ptr<int64_t> id_ {};
      // The ID of the rule.
      shared_ptr<int64_t> ruleId_ {};
      // The value of the application label.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->containerWebDefenseAppList_ == nullptr
        && this->requestId_ == nullptr; };
    // containerWebDefenseAppList Field Functions 
    bool hasContainerWebDefenseAppList() const { return this->containerWebDefenseAppList_ != nullptr;};
    void deleteContainerWebDefenseAppList() { this->containerWebDefenseAppList_ = nullptr;};
    inline const vector<GetSasContainerWebDefenseRuleApplicationResponseBody::ContainerWebDefenseAppList> & getContainerWebDefenseAppList() const { DARABONBA_PTR_GET_CONST(containerWebDefenseAppList_, vector<GetSasContainerWebDefenseRuleApplicationResponseBody::ContainerWebDefenseAppList>) };
    inline vector<GetSasContainerWebDefenseRuleApplicationResponseBody::ContainerWebDefenseAppList> getContainerWebDefenseAppList() { DARABONBA_PTR_GET(containerWebDefenseAppList_, vector<GetSasContainerWebDefenseRuleApplicationResponseBody::ContainerWebDefenseAppList>) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBody& setContainerWebDefenseAppList(const vector<GetSasContainerWebDefenseRuleApplicationResponseBody::ContainerWebDefenseAppList> & containerWebDefenseAppList) { DARABONBA_PTR_SET_VALUE(containerWebDefenseAppList_, containerWebDefenseAppList) };
    inline GetSasContainerWebDefenseRuleApplicationResponseBody& setContainerWebDefenseAppList(vector<GetSasContainerWebDefenseRuleApplicationResponseBody::ContainerWebDefenseAppList> && containerWebDefenseAppList) { DARABONBA_PTR_SET_RVALUE(containerWebDefenseAppList_, containerWebDefenseAppList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSasContainerWebDefenseRuleApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The applications.
    shared_ptr<vector<GetSasContainerWebDefenseRuleApplicationResponseBody::ContainerWebDefenseAppList>> containerWebDefenseAppList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
