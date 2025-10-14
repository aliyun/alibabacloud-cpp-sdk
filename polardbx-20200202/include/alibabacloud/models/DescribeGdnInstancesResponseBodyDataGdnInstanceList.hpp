// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESRESPONSEBODYDATAGDNINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESRESPONSEBODYDATAGDNINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeGdnInstancesResponseBodyDataGdnInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGdnInstancesResponseBodyDataGdnInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GdnInstanceName, gdnInstanceName_);
      DARABONBA_PTR_TO_JSON(GdnMode, gdnMode_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(MysqlVersion, mysqlVersion_);
      DARABONBA_PTR_TO_JSON(RplConflictStrategy, rplConflictStrategy_);
      DARABONBA_PTR_TO_JSON(RplDmlStrategy, rplDmlStrategy_);
      DARABONBA_PTR_TO_JSON(RplSyncDdl, rplSyncDdl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchHistory, switchHistory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGdnInstancesResponseBodyDataGdnInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GdnInstanceName, gdnInstanceName_);
      DARABONBA_PTR_FROM_JSON(GdnMode, gdnMode_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(MysqlVersion, mysqlVersion_);
      DARABONBA_PTR_FROM_JSON(RplConflictStrategy, rplConflictStrategy_);
      DARABONBA_PTR_FROM_JSON(RplDmlStrategy, rplDmlStrategy_);
      DARABONBA_PTR_FROM_JSON(RplSyncDdl, rplSyncDdl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchHistory, switchHistory_);
    };
    DescribeGdnInstancesResponseBodyDataGdnInstanceList() = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceList(const DescribeGdnInstancesResponseBodyDataGdnInstanceList &) = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceList(DescribeGdnInstancesResponseBodyDataGdnInstanceList &&) = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGdnInstancesResponseBodyDataGdnInstanceList() = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceList& operator=(const DescribeGdnInstancesResponseBodyDataGdnInstanceList &) = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceList& operator=(DescribeGdnInstancesResponseBodyDataGdnInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->gdnInstanceName_ == nullptr && return this->gdnMode_ == nullptr && return this->gmtCreated_ == nullptr && return this->memberList_ == nullptr && return this->mysqlVersion_ == nullptr
        && return this->rplConflictStrategy_ == nullptr && return this->rplDmlStrategy_ == nullptr && return this->rplSyncDdl_ == nullptr && return this->status_ == nullptr && return this->switchHistory_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gdnInstanceName Field Functions 
    bool hasGdnInstanceName() const { return this->gdnInstanceName_ != nullptr;};
    void deleteGdnInstanceName() { this->gdnInstanceName_ = nullptr;};
    inline string gdnInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gdnInstanceName_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setGdnInstanceName(string gdnInstanceName) { DARABONBA_PTR_SET_VALUE(gdnInstanceName_, gdnInstanceName) };


    // gdnMode Field Functions 
    bool hasGdnMode() const { return this->gdnMode_ != nullptr;};
    void deleteGdnMode() { this->gdnMode_ = nullptr;};
    inline string gdnMode() const { DARABONBA_PTR_GET_DEFAULT(gdnMode_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setGdnMode(string gdnMode) { DARABONBA_PTR_SET_VALUE(gdnMode_, gdnMode) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList> & memberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList>) };
    inline vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList> memberList() { DARABONBA_PTR_GET(memberList_, vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList>) };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setMemberList(const vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setMemberList(vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    // mysqlVersion Field Functions 
    bool hasMysqlVersion() const { return this->mysqlVersion_ != nullptr;};
    void deleteMysqlVersion() { this->mysqlVersion_ = nullptr;};
    inline string mysqlVersion() const { DARABONBA_PTR_GET_DEFAULT(mysqlVersion_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setMysqlVersion(string mysqlVersion) { DARABONBA_PTR_SET_VALUE(mysqlVersion_, mysqlVersion) };


    // rplConflictStrategy Field Functions 
    bool hasRplConflictStrategy() const { return this->rplConflictStrategy_ != nullptr;};
    void deleteRplConflictStrategy() { this->rplConflictStrategy_ = nullptr;};
    inline string rplConflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(rplConflictStrategy_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setRplConflictStrategy(string rplConflictStrategy) { DARABONBA_PTR_SET_VALUE(rplConflictStrategy_, rplConflictStrategy) };


    // rplDmlStrategy Field Functions 
    bool hasRplDmlStrategy() const { return this->rplDmlStrategy_ != nullptr;};
    void deleteRplDmlStrategy() { this->rplDmlStrategy_ = nullptr;};
    inline string rplDmlStrategy() const { DARABONBA_PTR_GET_DEFAULT(rplDmlStrategy_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setRplDmlStrategy(string rplDmlStrategy) { DARABONBA_PTR_SET_VALUE(rplDmlStrategy_, rplDmlStrategy) };


    // rplSyncDdl Field Functions 
    bool hasRplSyncDdl() const { return this->rplSyncDdl_ != nullptr;};
    void deleteRplSyncDdl() { this->rplSyncDdl_ = nullptr;};
    inline bool rplSyncDdl() const { DARABONBA_PTR_GET_DEFAULT(rplSyncDdl_, false) };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setRplSyncDdl(bool rplSyncDdl) { DARABONBA_PTR_SET_VALUE(rplSyncDdl_, rplSyncDdl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchHistory Field Functions 
    bool hasSwitchHistory() const { return this->switchHistory_ != nullptr;};
    void deleteSwitchHistory() { this->switchHistory_ = nullptr;};
    inline string switchHistory() const { DARABONBA_PTR_GET_DEFAULT(switchHistory_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceList& setSwitchHistory(string switchHistory) { DARABONBA_PTR_SET_VALUE(switchHistory_, switchHistory) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gdnInstanceName_ = nullptr;
    std::shared_ptr<string> gdnMode_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList>> memberList_ = nullptr;
    std::shared_ptr<string> mysqlVersion_ = nullptr;
    std::shared_ptr<string> rplConflictStrategy_ = nullptr;
    std::shared_ptr<string> rplDmlStrategy_ = nullptr;
    std::shared_ptr<bool> rplSyncDdl_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> switchHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
