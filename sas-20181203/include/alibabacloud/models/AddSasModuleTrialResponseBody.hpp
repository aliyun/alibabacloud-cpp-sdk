// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSASMODULETRIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSASMODULETRIALRESPONSEBODY_HPP_
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
  class AddSasModuleTrialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSasModuleTrialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddSasModuleTrialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddSasModuleTrialResponseBody() = default ;
    AddSasModuleTrialResponseBody(const AddSasModuleTrialResponseBody &) = default ;
    AddSasModuleTrialResponseBody(AddSasModuleTrialResponseBody &&) = default ;
    AddSasModuleTrialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSasModuleTrialResponseBody() = default ;
    AddSasModuleTrialResponseBody& operator=(const AddSasModuleTrialResponseBody &) = default ;
    AddSasModuleTrialResponseBody& operator=(AddSasModuleTrialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TrialRecordList, trialRecordList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TrialRecordList, trialRecordList_);
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
      class TrialRecordList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrialRecordList& obj) { 
          DARABONBA_PTR_TO_JSON(AuthLimit, authLimit_);
          DARABONBA_PTR_TO_JSON(AuthLimitList, authLimitList_);
          DARABONBA_PTR_TO_JSON(GmtEnd, gmtEnd_);
          DARABONBA_PTR_TO_JSON(GmtStart, gmtStart_);
          DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, TrialRecordList& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthLimit, authLimit_);
          DARABONBA_PTR_FROM_JSON(AuthLimitList, authLimitList_);
          DARABONBA_PTR_FROM_JSON(GmtEnd, gmtEnd_);
          DARABONBA_PTR_FROM_JSON(GmtStart, gmtStart_);
          DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        TrialRecordList() = default ;
        TrialRecordList(const TrialRecordList &) = default ;
        TrialRecordList(TrialRecordList &&) = default ;
        TrialRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrialRecordList() = default ;
        TrialRecordList& operator=(const TrialRecordList &) = default ;
        TrialRecordList& operator=(TrialRecordList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authLimit_ == nullptr
        && this->authLimitList_ == nullptr && this->gmtEnd_ == nullptr && this->gmtStart_ == nullptr && this->moduleCode_ == nullptr && this->status_ == nullptr; };
        // authLimit Field Functions 
        bool hasAuthLimit() const { return this->authLimit_ != nullptr;};
        void deleteAuthLimit() { this->authLimit_ = nullptr;};
        inline int64_t getAuthLimit() const { DARABONBA_PTR_GET_DEFAULT(authLimit_, 0L) };
        inline TrialRecordList& setAuthLimit(int64_t authLimit) { DARABONBA_PTR_SET_VALUE(authLimit_, authLimit) };


        // authLimitList Field Functions 
        bool hasAuthLimitList() const { return this->authLimitList_ != nullptr;};
        void deleteAuthLimitList() { this->authLimitList_ = nullptr;};
        inline string getAuthLimitList() const { DARABONBA_PTR_GET_DEFAULT(authLimitList_, "") };
        inline TrialRecordList& setAuthLimitList(string authLimitList) { DARABONBA_PTR_SET_VALUE(authLimitList_, authLimitList) };


        // gmtEnd Field Functions 
        bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
        void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
        inline int64_t getGmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, 0L) };
        inline TrialRecordList& setGmtEnd(int64_t gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


        // gmtStart Field Functions 
        bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
        void deleteGmtStart() { this->gmtStart_ = nullptr;};
        inline int64_t getGmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
        inline TrialRecordList& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


        // moduleCode Field Functions 
        bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
        void deleteModuleCode() { this->moduleCode_ = nullptr;};
        inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
        inline TrialRecordList& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline TrialRecordList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The quota.
        shared_ptr<int64_t> authLimit_ {};
        // The list of quotas. This parameter is available if the value of the ModuleCode parameter is cloudSiem. The value of this parameter consists of the log storage capacity for the threat analysis and response feature and the log data to add. Units: GB and GB-day.
        shared_ptr<string> authLimitList_ {};
        // The end time of the trial use.
        shared_ptr<int64_t> gmtEnd_ {};
        // The start time of the trial use.
        shared_ptr<int64_t> gmtStart_ {};
        // The code of the feature. Valid values:
        // 
        // *   **vulFix**: vulnerability fixing.
        // *   **cloudSiem**: threat analysis and response.
        shared_ptr<string> moduleCode_ {};
        // The status of the trial use. Valid values:
        // 
        // *   **1**: The feature is in trial use.
        // *   **0**: The trial use ends.
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->trialRecordList_ == nullptr; };
      // trialRecordList Field Functions 
      bool hasTrialRecordList() const { return this->trialRecordList_ != nullptr;};
      void deleteTrialRecordList() { this->trialRecordList_ = nullptr;};
      inline const vector<Data::TrialRecordList> & getTrialRecordList() const { DARABONBA_PTR_GET_CONST(trialRecordList_, vector<Data::TrialRecordList>) };
      inline vector<Data::TrialRecordList> getTrialRecordList() { DARABONBA_PTR_GET(trialRecordList_, vector<Data::TrialRecordList>) };
      inline Data& setTrialRecordList(const vector<Data::TrialRecordList> & trialRecordList) { DARABONBA_PTR_SET_VALUE(trialRecordList_, trialRecordList) };
      inline Data& setTrialRecordList(vector<Data::TrialRecordList> && trialRecordList) { DARABONBA_PTR_SET_RVALUE(trialRecordList_, trialRecordList) };


    protected:
      // The information about the trial use.
      shared_ptr<vector<Data::TrialRecordList>> trialRecordList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddSasModuleTrialResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddSasModuleTrialResponseBody::Data) };
    inline AddSasModuleTrialResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddSasModuleTrialResponseBody::Data) };
    inline AddSasModuleTrialResponseBody& setData(const AddSasModuleTrialResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddSasModuleTrialResponseBody& setData(AddSasModuleTrialResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddSasModuleTrialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<AddSasModuleTrialResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
