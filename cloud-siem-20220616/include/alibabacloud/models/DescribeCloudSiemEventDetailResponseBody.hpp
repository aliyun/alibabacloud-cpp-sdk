// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudSiemEventDetailResponseBody() = default ;
    DescribeCloudSiemEventDetailResponseBody(const DescribeCloudSiemEventDetailResponseBody &) = default ;
    DescribeCloudSiemEventDetailResponseBody(DescribeCloudSiemEventDetailResponseBody &&) = default ;
    DescribeCloudSiemEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemEventDetailResponseBody() = default ;
    DescribeCloudSiemEventDetailResponseBody& operator=(const DescribeCloudSiemEventDetailResponseBody &) = default ;
    DescribeCloudSiemEventDetailResponseBody& operator=(DescribeCloudSiemEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
        DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_TO_JSON(AssetNum, assetNum_);
        DARABONBA_PTR_TO_JSON(AttCkLabels, attCkLabels_);
        DARABONBA_PTR_TO_JSON(AttckStages, attckStages_);
        DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DescriptionEn, descriptionEn_);
        DARABONBA_PTR_TO_JSON(ExtContent, extContent_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IncidentName, incidentName_);
        DARABONBA_PTR_TO_JSON(IncidentNameEn, incidentNameEn_);
        DARABONBA_PTR_TO_JSON(IncidentType, incidentType_);
        DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
        DARABONBA_PTR_TO_JSON(ReferAccount, referAccount_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_TO_JSON(ThreatScore, threatScore_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
        DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_FROM_JSON(AssetNum, assetNum_);
        DARABONBA_PTR_FROM_JSON(AttCkLabels, attCkLabels_);
        DARABONBA_PTR_FROM_JSON(AttckStages, attckStages_);
        DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DescriptionEn, descriptionEn_);
        DARABONBA_PTR_FROM_JSON(ExtContent, extContent_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IncidentName, incidentName_);
        DARABONBA_PTR_FROM_JSON(IncidentNameEn, incidentNameEn_);
        DARABONBA_PTR_FROM_JSON(IncidentType, incidentType_);
        DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
        DARABONBA_PTR_FROM_JSON(ReferAccount, referAccount_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_FROM_JSON(ThreatScore, threatScore_);
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
      class AttckStages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttckStages& obj) { 
          DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
          DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
          DARABONBA_PTR_TO_JSON(TacticName, tacticName_);
        };
        friend void from_json(const Darabonba::Json& j, AttckStages& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
          DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
          DARABONBA_PTR_FROM_JSON(TacticName, tacticName_);
        };
        AttckStages() = default ;
        AttckStages(const AttckStages &) = default ;
        AttckStages(AttckStages &&) = default ;
        AttckStages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttckStages() = default ;
        AttckStages& operator=(const AttckStages &) = default ;
        AttckStages& operator=(AttckStages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertNum_ == nullptr
        && this->tacticId_ == nullptr && this->tacticName_ == nullptr; };
        // alertNum Field Functions 
        bool hasAlertNum() const { return this->alertNum_ != nullptr;};
        void deleteAlertNum() { this->alertNum_ = nullptr;};
        inline int32_t getAlertNum() const { DARABONBA_PTR_GET_DEFAULT(alertNum_, 0) };
        inline AttckStages& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


        // tacticId Field Functions 
        bool hasTacticId() const { return this->tacticId_ != nullptr;};
        void deleteTacticId() { this->tacticId_ = nullptr;};
        inline string getTacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
        inline AttckStages& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


        // tacticName Field Functions 
        bool hasTacticName() const { return this->tacticName_ != nullptr;};
        void deleteTacticName() { this->tacticName_ = nullptr;};
        inline string getTacticName() const { DARABONBA_PTR_GET_DEFAULT(tacticName_, "") };
        inline AttckStages& setTacticName(string tacticName) { DARABONBA_PTR_SET_VALUE(tacticName_, tacticName) };


      protected:
        shared_ptr<int32_t> alertNum_ {};
        shared_ptr<string> tacticId_ {};
        shared_ptr<string> tacticName_ {};
      };

      virtual bool empty() const override { return this->alertNum_ == nullptr
        && this->aliuid_ == nullptr && this->assetNum_ == nullptr && this->attCkLabels_ == nullptr && this->attckStages_ == nullptr && this->dataSources_ == nullptr
        && this->description_ == nullptr && this->descriptionEn_ == nullptr && this->extContent_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->incidentName_ == nullptr && this->incidentNameEn_ == nullptr && this->incidentType_ == nullptr && this->incidentUuid_ == nullptr && this->referAccount_ == nullptr
        && this->remark_ == nullptr && this->ruleId_ == nullptr && this->status_ == nullptr && this->threatLevel_ == nullptr && this->threatScore_ == nullptr; };
      // alertNum Field Functions 
      bool hasAlertNum() const { return this->alertNum_ != nullptr;};
      void deleteAlertNum() { this->alertNum_ = nullptr;};
      inline int32_t getAlertNum() const { DARABONBA_PTR_GET_DEFAULT(alertNum_, 0) };
      inline Data& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
      inline Data& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // assetNum Field Functions 
      bool hasAssetNum() const { return this->assetNum_ != nullptr;};
      void deleteAssetNum() { this->assetNum_ = nullptr;};
      inline int32_t getAssetNum() const { DARABONBA_PTR_GET_DEFAULT(assetNum_, 0) };
      inline Data& setAssetNum(int32_t assetNum) { DARABONBA_PTR_SET_VALUE(assetNum_, assetNum) };


      // attCkLabels Field Functions 
      bool hasAttCkLabels() const { return this->attCkLabels_ != nullptr;};
      void deleteAttCkLabels() { this->attCkLabels_ = nullptr;};
      inline const vector<string> & getAttCkLabels() const { DARABONBA_PTR_GET_CONST(attCkLabels_, vector<string>) };
      inline vector<string> getAttCkLabels() { DARABONBA_PTR_GET(attCkLabels_, vector<string>) };
      inline Data& setAttCkLabels(const vector<string> & attCkLabels) { DARABONBA_PTR_SET_VALUE(attCkLabels_, attCkLabels) };
      inline Data& setAttCkLabels(vector<string> && attCkLabels) { DARABONBA_PTR_SET_RVALUE(attCkLabels_, attCkLabels) };


      // attckStages Field Functions 
      bool hasAttckStages() const { return this->attckStages_ != nullptr;};
      void deleteAttckStages() { this->attckStages_ = nullptr;};
      inline const vector<Data::AttckStages> & getAttckStages() const { DARABONBA_PTR_GET_CONST(attckStages_, vector<Data::AttckStages>) };
      inline vector<Data::AttckStages> getAttckStages() { DARABONBA_PTR_GET(attckStages_, vector<Data::AttckStages>) };
      inline Data& setAttckStages(const vector<Data::AttckStages> & attckStages) { DARABONBA_PTR_SET_VALUE(attckStages_, attckStages) };
      inline Data& setAttckStages(vector<Data::AttckStages> && attckStages) { DARABONBA_PTR_SET_RVALUE(attckStages_, attckStages) };


      // dataSources Field Functions 
      bool hasDataSources() const { return this->dataSources_ != nullptr;};
      void deleteDataSources() { this->dataSources_ = nullptr;};
      inline const vector<string> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<string>) };
      inline vector<string> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<string>) };
      inline Data& setDataSources(const vector<string> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
      inline Data& setDataSources(vector<string> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // descriptionEn Field Functions 
      bool hasDescriptionEn() const { return this->descriptionEn_ != nullptr;};
      void deleteDescriptionEn() { this->descriptionEn_ = nullptr;};
      inline string getDescriptionEn() const { DARABONBA_PTR_GET_DEFAULT(descriptionEn_, "") };
      inline Data& setDescriptionEn(string descriptionEn) { DARABONBA_PTR_SET_VALUE(descriptionEn_, descriptionEn) };


      // extContent Field Functions 
      bool hasExtContent() const { return this->extContent_ != nullptr;};
      void deleteExtContent() { this->extContent_ = nullptr;};
      inline string getExtContent() const { DARABONBA_PTR_GET_DEFAULT(extContent_, "") };
      inline Data& setExtContent(string extContent) { DARABONBA_PTR_SET_VALUE(extContent_, extContent) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // incidentName Field Functions 
      bool hasIncidentName() const { return this->incidentName_ != nullptr;};
      void deleteIncidentName() { this->incidentName_ = nullptr;};
      inline string getIncidentName() const { DARABONBA_PTR_GET_DEFAULT(incidentName_, "") };
      inline Data& setIncidentName(string incidentName) { DARABONBA_PTR_SET_VALUE(incidentName_, incidentName) };


      // incidentNameEn Field Functions 
      bool hasIncidentNameEn() const { return this->incidentNameEn_ != nullptr;};
      void deleteIncidentNameEn() { this->incidentNameEn_ = nullptr;};
      inline string getIncidentNameEn() const { DARABONBA_PTR_GET_DEFAULT(incidentNameEn_, "") };
      inline Data& setIncidentNameEn(string incidentNameEn) { DARABONBA_PTR_SET_VALUE(incidentNameEn_, incidentNameEn) };


      // incidentType Field Functions 
      bool hasIncidentType() const { return this->incidentType_ != nullptr;};
      void deleteIncidentType() { this->incidentType_ = nullptr;};
      inline string getIncidentType() const { DARABONBA_PTR_GET_DEFAULT(incidentType_, "") };
      inline Data& setIncidentType(string incidentType) { DARABONBA_PTR_SET_VALUE(incidentType_, incidentType) };


      // incidentUuid Field Functions 
      bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
      void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
      inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
      inline Data& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


      // referAccount Field Functions 
      bool hasReferAccount() const { return this->referAccount_ != nullptr;};
      void deleteReferAccount() { this->referAccount_ = nullptr;};
      inline string getReferAccount() const { DARABONBA_PTR_GET_DEFAULT(referAccount_, "") };
      inline Data& setReferAccount(string referAccount) { DARABONBA_PTR_SET_VALUE(referAccount_, referAccount) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Data& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threatLevel Field Functions 
      bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
      void deleteThreatLevel() { this->threatLevel_ = nullptr;};
      inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
      inline Data& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


      // threatScore Field Functions 
      bool hasThreatScore() const { return this->threatScore_ != nullptr;};
      void deleteThreatScore() { this->threatScore_ = nullptr;};
      inline float getThreatScore() const { DARABONBA_PTR_GET_DEFAULT(threatScore_, 0.0) };
      inline Data& setThreatScore(float threatScore) { DARABONBA_PTR_SET_VALUE(threatScore_, threatScore) };


    protected:
      // The number of alerts that are associated with the event.
      shared_ptr<int32_t> alertNum_ {};
      // The ID of the Alibaba Cloud account to which the event belongs.
      shared_ptr<int64_t> aliuid_ {};
      // The number of assets that are associated with the event.
      shared_ptr<int32_t> assetNum_ {};
      // The tags of the ATT\\&CK attacks.
      shared_ptr<vector<string>> attCkLabels_ {};
      shared_ptr<vector<Data::AttckStages>> attckStages_ {};
      // The source of the alert.
      shared_ptr<vector<string>> dataSources_ {};
      // The description of the event.
      shared_ptr<string> description_ {};
      // The description of the event in English.
      shared_ptr<string> descriptionEn_ {};
      // The extended information of the event in the JSON format.
      shared_ptr<string> extContent_ {};
      // The time when the event occurred.
      shared_ptr<string> gmtCreate_ {};
      // The time when the event was last updated.
      shared_ptr<string> gmtModified_ {};
      // The name of the event.
      shared_ptr<string> incidentName_ {};
      // The name of the event in English.
      shared_ptr<string> incidentNameEn_ {};
      shared_ptr<string> incidentType_ {};
      // The UUID of the event.
      shared_ptr<string> incidentUuid_ {};
      // Users associated with the event.
      shared_ptr<string> referAccount_ {};
      // The remarks of the event.
      shared_ptr<string> remark_ {};
      shared_ptr<string> ruleId_ {};
      // The status of the event. Valid values:
      // 
      // *   0: not handled
      // *   1: handing
      // *   5: handling failed
      // *   10: handled
      shared_ptr<int32_t> status_ {};
      // The risk level. Valid values:
      // 
      // *   serious: high
      // *   suspicious: medium
      // *   remind: low
      shared_ptr<string> threatLevel_ {};
      // The risk score of the event. The score ranges from 0 to 100. A higher score indicates a higher risk level.
      shared_ptr<float> threatScore_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeCloudSiemEventDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCloudSiemEventDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCloudSiemEventDetailResponseBody::Data) };
    inline DescribeCloudSiemEventDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCloudSiemEventDetailResponseBody::Data) };
    inline DescribeCloudSiemEventDetailResponseBody& setData(const DescribeCloudSiemEventDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCloudSiemEventDetailResponseBody& setData(DescribeCloudSiemEventDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudSiemEventDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudSiemEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCloudSiemEventDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeCloudSiemEventDetailResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
