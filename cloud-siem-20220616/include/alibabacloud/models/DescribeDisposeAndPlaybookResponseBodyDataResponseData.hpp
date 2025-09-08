// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKRESPONSEBODYDATARESPONSEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKRESPONSEBODYDATARESPONSEDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDisposeAndPlaybookResponseBodyDataResponseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisposeAndPlaybookResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_TO_JSON(Dispose, dispose_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_ANY_TO_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(OpcodeMap, opcodeMap_);
      DARABONBA_PTR_TO_JSON(OpcodeSet, opcodeSet_);
      DARABONBA_PTR_TO_JSON(PlaybookList, playbookList_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisposeAndPlaybookResponseBodyDataResponseData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_FROM_JSON(Dispose, dispose_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_ANY_FROM_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(OpcodeMap, opcodeMap_);
      DARABONBA_PTR_FROM_JSON(OpcodeSet, opcodeSet_);
      DARABONBA_PTR_FROM_JSON(PlaybookList, playbookList_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    DescribeDisposeAndPlaybookResponseBodyDataResponseData() = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseData(const DescribeDisposeAndPlaybookResponseBodyDataResponseData &) = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseData(DescribeDisposeAndPlaybookResponseBodyDataResponseData &&) = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisposeAndPlaybookResponseBodyDataResponseData() = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseData& operator=(const DescribeDisposeAndPlaybookResponseBodyDataResponseData &) = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseData& operator=(DescribeDisposeAndPlaybookResponseBodyDataResponseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertNum_ != nullptr
        && this->dispose_ != nullptr && this->entityId_ != nullptr && this->entityInfo_ != nullptr && this->entityType_ != nullptr && this->opcodeMap_ != nullptr
        && this->opcodeSet_ != nullptr && this->playbookList_ != nullptr && this->scope_ != nullptr; };
    // alertNum Field Functions 
    bool hasAlertNum() const { return this->alertNum_ != nullptr;};
    void deleteAlertNum() { this->alertNum_ = nullptr;};
    inline int32_t alertNum() const { DARABONBA_PTR_GET_DEFAULT(alertNum_, 0) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


    // dispose Field Functions 
    bool hasDispose() const { return this->dispose_ != nullptr;};
    void deleteDispose() { this->dispose_ = nullptr;};
    inline string dispose() const { DARABONBA_PTR_GET_DEFAULT(dispose_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setDispose(string dispose) { DARABONBA_PTR_SET_VALUE(dispose_, dispose) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityInfo Field Functions 
    bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
    void deleteEntityInfo() { this->entityInfo_ = nullptr;};
    inline     const Darabonba::Json & entityInfo() const { DARABONBA_GET(entityInfo_) };
    Darabonba::Json & entityInfo() { DARABONBA_GET(entityInfo_) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setEntityInfo(const Darabonba::Json & entityInfo) { DARABONBA_SET_VALUE(entityInfo_, entityInfo) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setEntityInfo(Darabonba::Json & entityInfo) { DARABONBA_SET_RVALUE(entityInfo_, entityInfo) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // opcodeMap Field Functions 
    bool hasOpcodeMap() const { return this->opcodeMap_ != nullptr;};
    void deleteOpcodeMap() { this->opcodeMap_ = nullptr;};
    inline const map<string, string> & opcodeMap() const { DARABONBA_PTR_GET_CONST(opcodeMap_, map<string, string>) };
    inline map<string, string> opcodeMap() { DARABONBA_PTR_GET(opcodeMap_, map<string, string>) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setOpcodeMap(const map<string, string> & opcodeMap) { DARABONBA_PTR_SET_VALUE(opcodeMap_, opcodeMap) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setOpcodeMap(map<string, string> && opcodeMap) { DARABONBA_PTR_SET_RVALUE(opcodeMap_, opcodeMap) };


    // opcodeSet Field Functions 
    bool hasOpcodeSet() const { return this->opcodeSet_ != nullptr;};
    void deleteOpcodeSet() { this->opcodeSet_ = nullptr;};
    inline const vector<string> & opcodeSet() const { DARABONBA_PTR_GET_CONST(opcodeSet_, vector<string>) };
    inline vector<string> opcodeSet() { DARABONBA_PTR_GET(opcodeSet_, vector<string>) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setOpcodeSet(const vector<string> & opcodeSet) { DARABONBA_PTR_SET_VALUE(opcodeSet_, opcodeSet) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setOpcodeSet(vector<string> && opcodeSet) { DARABONBA_PTR_SET_RVALUE(opcodeSet_, opcodeSet) };


    // playbookList Field Functions 
    bool hasPlaybookList() const { return this->playbookList_ != nullptr;};
    void deletePlaybookList() { this->playbookList_ = nullptr;};
    inline const vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList> & playbookList() const { DARABONBA_PTR_GET_CONST(playbookList_, vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList>) };
    inline vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList> playbookList() { DARABONBA_PTR_GET(playbookList_, vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList>) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setPlaybookList(const vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList> & playbookList) { DARABONBA_PTR_SET_VALUE(playbookList_, playbookList) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setPlaybookList(vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList> && playbookList) { DARABONBA_PTR_SET_RVALUE(playbookList_, playbookList) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<Darabonba::Json> & scope() const { DARABONBA_PTR_GET_CONST(scope_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> scope() { DARABONBA_PTR_GET(scope_, vector<Darabonba::Json>) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setScope(const vector<Darabonba::Json> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseData& setScope(vector<Darabonba::Json> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


  protected:
    // The number of alerts that are associated with the entity.
    std::shared_ptr<int32_t> alertNum_ = nullptr;
    // The object for handling.
    std::shared_ptr<string> dispose_ = nullptr;
    // The entity ID
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // The entity information.
    Darabonba::Json entityInfo_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    // The key-value pairs each of which consists of opcode and oplevel.
    std::shared_ptr<map<string, string>> opcodeMap_ = nullptr;
    // The codes of the playbooks that are recommended for entity handling.
    std::shared_ptr<vector<string>> opcodeSet_ = nullptr;
    // The playbooks that can handle the entity.
    std::shared_ptr<vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList>> playbookList_ = nullptr;
    // The IDs of the users who can handle objects.
    std::shared_ptr<vector<Darabonba::Json>> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
