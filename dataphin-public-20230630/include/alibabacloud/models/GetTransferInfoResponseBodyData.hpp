// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTransferInfoResponseBodyDataCreator.hpp>
#include <alibabacloud/models/GetTransferInfoResponseBodyDataLastModifier.hpp>
#include <alibabacloud/models/GetTransferInfoResponseBodyDataNewOwner.hpp>
#include <alibabacloud/models/GetTransferInfoResponseBodyDataOldOwner.hpp>
#include <vector>
#include <alibabacloud/models/GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTransferInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(NewOwner, newOwner_);
      DARABONBA_PTR_TO_JSON(OldOwner, oldOwner_);
      DARABONBA_PTR_TO_JSON(PrivilegeTransferMode, privilegeTransferMode_);
      DARABONBA_PTR_TO_JSON(PrivilegeTransferResultEntries, privilegeTransferResultEntries_);
      DARABONBA_PTR_TO_JSON(ProposalId, proposalId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TransferComment, transferComment_);
      DARABONBA_PTR_TO_JSON(TransferStatus, transferStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(NewOwner, newOwner_);
      DARABONBA_PTR_FROM_JSON(OldOwner, oldOwner_);
      DARABONBA_PTR_FROM_JSON(PrivilegeTransferMode, privilegeTransferMode_);
      DARABONBA_PTR_FROM_JSON(PrivilegeTransferResultEntries, privilegeTransferResultEntries_);
      DARABONBA_PTR_FROM_JSON(ProposalId, proposalId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TransferComment, transferComment_);
      DARABONBA_PTR_FROM_JSON(TransferStatus, transferStatus_);
    };
    GetTransferInfoResponseBodyData() = default ;
    GetTransferInfoResponseBodyData(const GetTransferInfoResponseBodyData &) = default ;
    GetTransferInfoResponseBodyData(GetTransferInfoResponseBodyData &&) = default ;
    GetTransferInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferInfoResponseBodyData() = default ;
    GetTransferInfoResponseBodyData& operator=(const GetTransferInfoResponseBodyData &) = default ;
    GetTransferInfoResponseBodyData& operator=(GetTransferInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->flowId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->lastModifier_ == nullptr && return this->newOwner_ == nullptr
        && return this->oldOwner_ == nullptr && return this->privilegeTransferMode_ == nullptr && return this->privilegeTransferResultEntries_ == nullptr && return this->proposalId_ == nullptr && return this->title_ == nullptr
        && return this->transferComment_ == nullptr && return this->transferStatus_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::GetTransferInfoResponseBodyDataCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::GetTransferInfoResponseBodyDataCreator) };
    inline Models::GetTransferInfoResponseBodyDataCreator creator() { DARABONBA_PTR_GET(creator_, Models::GetTransferInfoResponseBodyDataCreator) };
    inline GetTransferInfoResponseBodyData& setCreator(const Models::GetTransferInfoResponseBodyDataCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline GetTransferInfoResponseBodyData& setCreator(Models::GetTransferInfoResponseBodyDataCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline int64_t flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, 0L) };
    inline GetTransferInfoResponseBodyData& setFlowId(int64_t flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetTransferInfoResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetTransferInfoResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline const Models::GetTransferInfoResponseBodyDataLastModifier & lastModifier() const { DARABONBA_PTR_GET_CONST(lastModifier_, Models::GetTransferInfoResponseBodyDataLastModifier) };
    inline Models::GetTransferInfoResponseBodyDataLastModifier lastModifier() { DARABONBA_PTR_GET(lastModifier_, Models::GetTransferInfoResponseBodyDataLastModifier) };
    inline GetTransferInfoResponseBodyData& setLastModifier(const Models::GetTransferInfoResponseBodyDataLastModifier & lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };
    inline GetTransferInfoResponseBodyData& setLastModifier(Models::GetTransferInfoResponseBodyDataLastModifier && lastModifier) { DARABONBA_PTR_SET_RVALUE(lastModifier_, lastModifier) };


    // newOwner Field Functions 
    bool hasNewOwner() const { return this->newOwner_ != nullptr;};
    void deleteNewOwner() { this->newOwner_ = nullptr;};
    inline const Models::GetTransferInfoResponseBodyDataNewOwner & newOwner() const { DARABONBA_PTR_GET_CONST(newOwner_, Models::GetTransferInfoResponseBodyDataNewOwner) };
    inline Models::GetTransferInfoResponseBodyDataNewOwner newOwner() { DARABONBA_PTR_GET(newOwner_, Models::GetTransferInfoResponseBodyDataNewOwner) };
    inline GetTransferInfoResponseBodyData& setNewOwner(const Models::GetTransferInfoResponseBodyDataNewOwner & newOwner) { DARABONBA_PTR_SET_VALUE(newOwner_, newOwner) };
    inline GetTransferInfoResponseBodyData& setNewOwner(Models::GetTransferInfoResponseBodyDataNewOwner && newOwner) { DARABONBA_PTR_SET_RVALUE(newOwner_, newOwner) };


    // oldOwner Field Functions 
    bool hasOldOwner() const { return this->oldOwner_ != nullptr;};
    void deleteOldOwner() { this->oldOwner_ = nullptr;};
    inline const Models::GetTransferInfoResponseBodyDataOldOwner & oldOwner() const { DARABONBA_PTR_GET_CONST(oldOwner_, Models::GetTransferInfoResponseBodyDataOldOwner) };
    inline Models::GetTransferInfoResponseBodyDataOldOwner oldOwner() { DARABONBA_PTR_GET(oldOwner_, Models::GetTransferInfoResponseBodyDataOldOwner) };
    inline GetTransferInfoResponseBodyData& setOldOwner(const Models::GetTransferInfoResponseBodyDataOldOwner & oldOwner) { DARABONBA_PTR_SET_VALUE(oldOwner_, oldOwner) };
    inline GetTransferInfoResponseBodyData& setOldOwner(Models::GetTransferInfoResponseBodyDataOldOwner && oldOwner) { DARABONBA_PTR_SET_RVALUE(oldOwner_, oldOwner) };


    // privilegeTransferMode Field Functions 
    bool hasPrivilegeTransferMode() const { return this->privilegeTransferMode_ != nullptr;};
    void deletePrivilegeTransferMode() { this->privilegeTransferMode_ = nullptr;};
    inline string privilegeTransferMode() const { DARABONBA_PTR_GET_DEFAULT(privilegeTransferMode_, "") };
    inline GetTransferInfoResponseBodyData& setPrivilegeTransferMode(string privilegeTransferMode) { DARABONBA_PTR_SET_VALUE(privilegeTransferMode_, privilegeTransferMode) };


    // privilegeTransferResultEntries Field Functions 
    bool hasPrivilegeTransferResultEntries() const { return this->privilegeTransferResultEntries_ != nullptr;};
    void deletePrivilegeTransferResultEntries() { this->privilegeTransferResultEntries_ = nullptr;};
    inline const vector<Models::GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries> & privilegeTransferResultEntries() const { DARABONBA_PTR_GET_CONST(privilegeTransferResultEntries_, vector<Models::GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries>) };
    inline vector<Models::GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries> privilegeTransferResultEntries() { DARABONBA_PTR_GET(privilegeTransferResultEntries_, vector<Models::GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries>) };
    inline GetTransferInfoResponseBodyData& setPrivilegeTransferResultEntries(const vector<Models::GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries> & privilegeTransferResultEntries) { DARABONBA_PTR_SET_VALUE(privilegeTransferResultEntries_, privilegeTransferResultEntries) };
    inline GetTransferInfoResponseBodyData& setPrivilegeTransferResultEntries(vector<Models::GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries> && privilegeTransferResultEntries) { DARABONBA_PTR_SET_RVALUE(privilegeTransferResultEntries_, privilegeTransferResultEntries) };


    // proposalId Field Functions 
    bool hasProposalId() const { return this->proposalId_ != nullptr;};
    void deleteProposalId() { this->proposalId_ = nullptr;};
    inline int64_t proposalId() const { DARABONBA_PTR_GET_DEFAULT(proposalId_, 0L) };
    inline GetTransferInfoResponseBodyData& setProposalId(int64_t proposalId) { DARABONBA_PTR_SET_VALUE(proposalId_, proposalId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTransferInfoResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // transferComment Field Functions 
    bool hasTransferComment() const { return this->transferComment_ != nullptr;};
    void deleteTransferComment() { this->transferComment_ = nullptr;};
    inline string transferComment() const { DARABONBA_PTR_GET_DEFAULT(transferComment_, "") };
    inline GetTransferInfoResponseBodyData& setTransferComment(string transferComment) { DARABONBA_PTR_SET_VALUE(transferComment_, transferComment) };


    // transferStatus Field Functions 
    bool hasTransferStatus() const { return this->transferStatus_ != nullptr;};
    void deleteTransferStatus() { this->transferStatus_ = nullptr;};
    inline string transferStatus() const { DARABONBA_PTR_GET_DEFAULT(transferStatus_, "") };
    inline GetTransferInfoResponseBodyData& setTransferStatus(string transferStatus) { DARABONBA_PTR_SET_VALUE(transferStatus_, transferStatus) };


  protected:
    std::shared_ptr<Models::GetTransferInfoResponseBodyDataCreator> creator_ = nullptr;
    std::shared_ptr<int64_t> flowId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<Models::GetTransferInfoResponseBodyDataLastModifier> lastModifier_ = nullptr;
    std::shared_ptr<Models::GetTransferInfoResponseBodyDataNewOwner> newOwner_ = nullptr;
    std::shared_ptr<Models::GetTransferInfoResponseBodyDataOldOwner> oldOwner_ = nullptr;
    std::shared_ptr<string> privilegeTransferMode_ = nullptr;
    std::shared_ptr<vector<Models::GetTransferInfoResponseBodyDataPrivilegeTransferResultEntries>> privilegeTransferResultEntries_ = nullptr;
    std::shared_ptr<int64_t> proposalId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> transferComment_ = nullptr;
    std::shared_ptr<string> transferStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
