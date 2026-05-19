// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTCLIENTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTCLIENTRULERESPONSEBODY_HPP_
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
  class GetFileProtectClientRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectClientRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectClientRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileProtectClientRuleResponseBody() = default ;
    GetFileProtectClientRuleResponseBody(const GetFileProtectClientRuleResponseBody &) = default ;
    GetFileProtectClientRuleResponseBody(GetFileProtectClientRuleResponseBody &&) = default ;
    GetFileProtectClientRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectClientRuleResponseBody() = default ;
    GetFileProtectClientRuleResponseBody& operator=(const GetFileProtectClientRuleResponseBody &) = default ;
    GetFileProtectClientRuleResponseBody& operator=(GetFileProtectClientRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_TO_JSON(ExcludeUsers, excludeUsers_);
        DARABONBA_PTR_TO_JSON(FileOps, fileOps_);
        DARABONBA_PTR_TO_JSON(FilePaths, filePaths_);
        DARABONBA_PTR_TO_JSON(FileTypes, fileTypes_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProcPaths, procPaths_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
        DARABONBA_PTR_FROM_JSON(ExcludeUsers, excludeUsers_);
        DARABONBA_PTR_FROM_JSON(FileOps, fileOps_);
        DARABONBA_PTR_FROM_JSON(FilePaths, filePaths_);
        DARABONBA_PTR_FROM_JSON(FileTypes, fileTypes_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProcPaths, procPaths_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->excludeUsers_ == nullptr && this->fileOps_ == nullptr && this->filePaths_ == nullptr && this->fileTypes_ == nullptr && this->id_ == nullptr
        && this->platform_ == nullptr && this->procPaths_ == nullptr && this->ruleAction_ == nullptr && this->ruleName_ == nullptr && this->status_ == nullptr
        && this->switchId_ == nullptr; };
      // alertLevel Field Functions 
      bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
      void deleteAlertLevel() { this->alertLevel_ = nullptr;};
      inline int32_t getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
      inline Data& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


      // excludeUsers Field Functions 
      bool hasExcludeUsers() const { return this->excludeUsers_ != nullptr;};
      void deleteExcludeUsers() { this->excludeUsers_ = nullptr;};
      inline const vector<string> & getExcludeUsers() const { DARABONBA_PTR_GET_CONST(excludeUsers_, vector<string>) };
      inline vector<string> getExcludeUsers() { DARABONBA_PTR_GET(excludeUsers_, vector<string>) };
      inline Data& setExcludeUsers(const vector<string> & excludeUsers) { DARABONBA_PTR_SET_VALUE(excludeUsers_, excludeUsers) };
      inline Data& setExcludeUsers(vector<string> && excludeUsers) { DARABONBA_PTR_SET_RVALUE(excludeUsers_, excludeUsers) };


      // fileOps Field Functions 
      bool hasFileOps() const { return this->fileOps_ != nullptr;};
      void deleteFileOps() { this->fileOps_ = nullptr;};
      inline const vector<string> & getFileOps() const { DARABONBA_PTR_GET_CONST(fileOps_, vector<string>) };
      inline vector<string> getFileOps() { DARABONBA_PTR_GET(fileOps_, vector<string>) };
      inline Data& setFileOps(const vector<string> & fileOps) { DARABONBA_PTR_SET_VALUE(fileOps_, fileOps) };
      inline Data& setFileOps(vector<string> && fileOps) { DARABONBA_PTR_SET_RVALUE(fileOps_, fileOps) };


      // filePaths Field Functions 
      bool hasFilePaths() const { return this->filePaths_ != nullptr;};
      void deleteFilePaths() { this->filePaths_ = nullptr;};
      inline const vector<string> & getFilePaths() const { DARABONBA_PTR_GET_CONST(filePaths_, vector<string>) };
      inline vector<string> getFilePaths() { DARABONBA_PTR_GET(filePaths_, vector<string>) };
      inline Data& setFilePaths(const vector<string> & filePaths) { DARABONBA_PTR_SET_VALUE(filePaths_, filePaths) };
      inline Data& setFilePaths(vector<string> && filePaths) { DARABONBA_PTR_SET_RVALUE(filePaths_, filePaths) };


      // fileTypes Field Functions 
      bool hasFileTypes() const { return this->fileTypes_ != nullptr;};
      void deleteFileTypes() { this->fileTypes_ = nullptr;};
      inline const vector<string> & getFileTypes() const { DARABONBA_PTR_GET_CONST(fileTypes_, vector<string>) };
      inline vector<string> getFileTypes() { DARABONBA_PTR_GET(fileTypes_, vector<string>) };
      inline Data& setFileTypes(const vector<string> & fileTypes) { DARABONBA_PTR_SET_VALUE(fileTypes_, fileTypes) };
      inline Data& setFileTypes(vector<string> && fileTypes) { DARABONBA_PTR_SET_RVALUE(fileTypes_, fileTypes) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // procPaths Field Functions 
      bool hasProcPaths() const { return this->procPaths_ != nullptr;};
      void deleteProcPaths() { this->procPaths_ = nullptr;};
      inline const vector<string> & getProcPaths() const { DARABONBA_PTR_GET_CONST(procPaths_, vector<string>) };
      inline vector<string> getProcPaths() { DARABONBA_PTR_GET(procPaths_, vector<string>) };
      inline Data& setProcPaths(const vector<string> & procPaths) { DARABONBA_PTR_SET_VALUE(procPaths_, procPaths) };
      inline Data& setProcPaths(vector<string> && procPaths) { DARABONBA_PTR_SET_RVALUE(procPaths_, procPaths) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
      inline Data& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline Data& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    protected:
      shared_ptr<int32_t> alertLevel_ {};
      shared_ptr<vector<string>> excludeUsers_ {};
      shared_ptr<vector<string>> fileOps_ {};
      shared_ptr<vector<string>> filePaths_ {};
      shared_ptr<vector<string>> fileTypes_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<vector<string>> procPaths_ {};
      shared_ptr<string> ruleAction_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> switchId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileProtectClientRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileProtectClientRuleResponseBody::Data) };
    inline GetFileProtectClientRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileProtectClientRuleResponseBody::Data) };
    inline GetFileProtectClientRuleResponseBody& setData(const GetFileProtectClientRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileProtectClientRuleResponseBody& setData(GetFileProtectClientRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileProtectClientRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetFileProtectClientRuleResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
