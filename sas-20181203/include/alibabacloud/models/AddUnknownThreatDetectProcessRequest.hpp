// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUNKNOWNTHREATDETECTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUNKNOWNTHREATDETECTPROCESSREQUEST_HPP_
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
  class AddUnknownThreatDetectProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUnknownThreatDetectProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_TO_JSON(ProcessList, processList_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, AddUnknownThreatDetectProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_FROM_JSON(ProcessList, processList_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    AddUnknownThreatDetectProcessRequest() = default ;
    AddUnknownThreatDetectProcessRequest(const AddUnknownThreatDetectProcessRequest &) = default ;
    AddUnknownThreatDetectProcessRequest(AddUnknownThreatDetectProcessRequest &&) = default ;
    AddUnknownThreatDetectProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUnknownThreatDetectProcessRequest() = default ;
    AddUnknownThreatDetectProcessRequest& operator=(const AddUnknownThreatDetectProcessRequest &) = default ;
    AddUnknownThreatDetectProcessRequest& operator=(AddUnknownThreatDetectProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProcessList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProcessList& obj) { 
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Sha256, sha256_);
      };
      friend void from_json(const Darabonba::Json& j, ProcessList& obj) { 
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Sha256, sha256_);
      };
      ProcessList() = default ;
      ProcessList(const ProcessList &) = default ;
      ProcessList(ProcessList &&) = default ;
      ProcessList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProcessList() = default ;
      ProcessList& operator=(const ProcessList &) = default ;
      ProcessList& operator=(ProcessList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->md5_ == nullptr
        && this->processPath_ == nullptr && this->remark_ == nullptr && this->sha256_ == nullptr; };
      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline ProcessList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // processPath Field Functions 
      bool hasProcessPath() const { return this->processPath_ != nullptr;};
      void deleteProcessPath() { this->processPath_ = nullptr;};
      inline string getProcessPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
      inline ProcessList& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline ProcessList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // sha256 Field Functions 
      bool hasSha256() const { return this->sha256_ != nullptr;};
      void deleteSha256() { this->sha256_ = nullptr;};
      inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
      inline ProcessList& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


    protected:
      shared_ptr<string> md5_ {};
      shared_ptr<string> processPath_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> sha256_ {};
    };

    virtual bool empty() const override { return this->eventIdList_ == nullptr
        && this->processList_ == nullptr && this->uuidList_ == nullptr; };
    // eventIdList Field Functions 
    bool hasEventIdList() const { return this->eventIdList_ != nullptr;};
    void deleteEventIdList() { this->eventIdList_ = nullptr;};
    inline const vector<int64_t> & getEventIdList() const { DARABONBA_PTR_GET_CONST(eventIdList_, vector<int64_t>) };
    inline vector<int64_t> getEventIdList() { DARABONBA_PTR_GET(eventIdList_, vector<int64_t>) };
    inline AddUnknownThreatDetectProcessRequest& setEventIdList(const vector<int64_t> & eventIdList) { DARABONBA_PTR_SET_VALUE(eventIdList_, eventIdList) };
    inline AddUnknownThreatDetectProcessRequest& setEventIdList(vector<int64_t> && eventIdList) { DARABONBA_PTR_SET_RVALUE(eventIdList_, eventIdList) };


    // processList Field Functions 
    bool hasProcessList() const { return this->processList_ != nullptr;};
    void deleteProcessList() { this->processList_ = nullptr;};
    inline const vector<AddUnknownThreatDetectProcessRequest::ProcessList> & getProcessList() const { DARABONBA_PTR_GET_CONST(processList_, vector<AddUnknownThreatDetectProcessRequest::ProcessList>) };
    inline vector<AddUnknownThreatDetectProcessRequest::ProcessList> getProcessList() { DARABONBA_PTR_GET(processList_, vector<AddUnknownThreatDetectProcessRequest::ProcessList>) };
    inline AddUnknownThreatDetectProcessRequest& setProcessList(const vector<AddUnknownThreatDetectProcessRequest::ProcessList> & processList) { DARABONBA_PTR_SET_VALUE(processList_, processList) };
    inline AddUnknownThreatDetectProcessRequest& setProcessList(vector<AddUnknownThreatDetectProcessRequest::ProcessList> && processList) { DARABONBA_PTR_SET_RVALUE(processList_, processList) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline AddUnknownThreatDetectProcessRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline AddUnknownThreatDetectProcessRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    shared_ptr<vector<int64_t>> eventIdList_ {};
    shared_ptr<vector<AddUnknownThreatDetectProcessRequest::ProcessList>> processList_ {};
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
