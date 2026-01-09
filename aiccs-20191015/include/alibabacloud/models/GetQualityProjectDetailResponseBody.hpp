// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYPROJECTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYPROJECTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityProjectDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityProjectDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityProjectDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityProjectDetailResponseBody() = default ;
    GetQualityProjectDetailResponseBody(const GetQualityProjectDetailResponseBody &) = default ;
    GetQualityProjectDetailResponseBody(GetQualityProjectDetailResponseBody &&) = default ;
    GetQualityProjectDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityProjectDetailResponseBody() = default ;
    GetQualityProjectDetailResponseBody& operator=(const GetQualityProjectDetailResponseBody &) = default ;
    GetQualityProjectDetailResponseBody& operator=(GetQualityProjectDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CheckFreqType, checkFreqType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DepList, depList_);
        DARABONBA_PTR_TO_JSON(GroupList, groupList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(QualityRuleIds, qualityRuleIds_);
        DARABONBA_PTR_TO_JSON(QualityType, qualityType_);
        DARABONBA_PTR_TO_JSON(ServicerList, servicerList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckFreqType, checkFreqType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DepList, depList_);
        DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(QualityRuleIds, qualityRuleIds_);
        DARABONBA_PTR_FROM_JSON(QualityType, qualityType_);
        DARABONBA_PTR_FROM_JSON(ServicerList, servicerList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->checkFreqType_ == nullptr
        && this->createTime_ == nullptr && this->depList_ == nullptr && this->groupList_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr
        && this->projectName_ == nullptr && this->qualityRuleIds_ == nullptr && this->qualityType_ == nullptr && this->servicerList_ == nullptr && this->status_ == nullptr
        && this->version_ == nullptr; };
      // checkFreqType Field Functions 
      bool hasCheckFreqType() const { return this->checkFreqType_ != nullptr;};
      void deleteCheckFreqType() { this->checkFreqType_ = nullptr;};
      inline int32_t getCheckFreqType() const { DARABONBA_PTR_GET_DEFAULT(checkFreqType_, 0) };
      inline Data& setCheckFreqType(int32_t checkFreqType) { DARABONBA_PTR_SET_VALUE(checkFreqType_, checkFreqType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // depList Field Functions 
      bool hasDepList() const { return this->depList_ != nullptr;};
      void deleteDepList() { this->depList_ = nullptr;};
      inline const vector<int64_t> & getDepList() const { DARABONBA_PTR_GET_CONST(depList_, vector<int64_t>) };
      inline vector<int64_t> getDepList() { DARABONBA_PTR_GET(depList_, vector<int64_t>) };
      inline Data& setDepList(const vector<int64_t> & depList) { DARABONBA_PTR_SET_VALUE(depList_, depList) };
      inline Data& setDepList(vector<int64_t> && depList) { DARABONBA_PTR_SET_RVALUE(depList_, depList) };


      // groupList Field Functions 
      bool hasGroupList() const { return this->groupList_ != nullptr;};
      void deleteGroupList() { this->groupList_ = nullptr;};
      inline const vector<int64_t> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<int64_t>) };
      inline vector<int64_t> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<int64_t>) };
      inline Data& setGroupList(const vector<int64_t> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
      inline Data& setGroupList(vector<int64_t> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Data& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // qualityRuleIds Field Functions 
      bool hasQualityRuleIds() const { return this->qualityRuleIds_ != nullptr;};
      void deleteQualityRuleIds() { this->qualityRuleIds_ = nullptr;};
      inline const vector<int64_t> & getQualityRuleIds() const { DARABONBA_PTR_GET_CONST(qualityRuleIds_, vector<int64_t>) };
      inline vector<int64_t> getQualityRuleIds() { DARABONBA_PTR_GET(qualityRuleIds_, vector<int64_t>) };
      inline Data& setQualityRuleIds(const vector<int64_t> & qualityRuleIds) { DARABONBA_PTR_SET_VALUE(qualityRuleIds_, qualityRuleIds) };
      inline Data& setQualityRuleIds(vector<int64_t> && qualityRuleIds) { DARABONBA_PTR_SET_RVALUE(qualityRuleIds_, qualityRuleIds) };


      // qualityType Field Functions 
      bool hasQualityType() const { return this->qualityType_ != nullptr;};
      void deleteQualityType() { this->qualityType_ = nullptr;};
      inline int32_t getQualityType() const { DARABONBA_PTR_GET_DEFAULT(qualityType_, 0) };
      inline Data& setQualityType(int32_t qualityType) { DARABONBA_PTR_SET_VALUE(qualityType_, qualityType) };


      // servicerList Field Functions 
      bool hasServicerList() const { return this->servicerList_ != nullptr;};
      void deleteServicerList() { this->servicerList_ = nullptr;};
      inline const vector<int64_t> & getServicerList() const { DARABONBA_PTR_GET_CONST(servicerList_, vector<int64_t>) };
      inline vector<int64_t> getServicerList() { DARABONBA_PTR_GET(servicerList_, vector<int64_t>) };
      inline Data& setServicerList(const vector<int64_t> & servicerList) { DARABONBA_PTR_SET_VALUE(servicerList_, servicerList) };
      inline Data& setServicerList(vector<int64_t> && servicerList) { DARABONBA_PTR_SET_RVALUE(servicerList_, servicerList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline Data& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<int32_t> checkFreqType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<int64_t>> depList_ {};
      shared_ptr<vector<int64_t>> groupList_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<vector<int64_t>> qualityRuleIds_ {};
      shared_ptr<int32_t> qualityType_ {};
      shared_ptr<vector<int64_t>> servicerList_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityProjectDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQualityProjectDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQualityProjectDetailResponseBody::Data) };
    inline GetQualityProjectDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQualityProjectDetailResponseBody::Data) };
    inline GetQualityProjectDetailResponseBody& setData(const GetQualityProjectDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityProjectDetailResponseBody& setData(GetQualityProjectDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityProjectDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityProjectDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetQualityProjectDetailResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetQualityProjectDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
