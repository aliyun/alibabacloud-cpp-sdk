// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRECORDANALYSISRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRECORDANALYSISRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetAlertRecordAnalysisResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRecordAnalysisResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_TO_JSON(UniqueTagList, uniqueTagListShrink_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRecordAnalysisResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_FROM_JSON(UniqueTagList, uniqueTagListShrink_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetAlertRecordAnalysisResultShrinkRequest() = default ;
    GetAlertRecordAnalysisResultShrinkRequest(const GetAlertRecordAnalysisResultShrinkRequest &) = default ;
    GetAlertRecordAnalysisResultShrinkRequest(GetAlertRecordAnalysisResultShrinkRequest &&) = default ;
    GetAlertRecordAnalysisResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRecordAnalysisResultShrinkRequest() = default ;
    GetAlertRecordAnalysisResultShrinkRequest& operator=(const GetAlertRecordAnalysisResultShrinkRequest &) = default ;
    GetAlertRecordAnalysisResultShrinkRequest& operator=(GetAlertRecordAnalysisResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmUniqueInfo_ == nullptr
        && this->aliyunLang_ == nullptr && this->uniqueInfo_ == nullptr && this->uniqueTagListShrink_ == nullptr && this->uuid_ == nullptr; };
    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline GetAlertRecordAnalysisResultShrinkRequest& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline GetAlertRecordAnalysisResultShrinkRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // uniqueInfo Field Functions 
    bool hasUniqueInfo() const { return this->uniqueInfo_ != nullptr;};
    void deleteUniqueInfo() { this->uniqueInfo_ = nullptr;};
    inline string getUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(uniqueInfo_, "") };
    inline GetAlertRecordAnalysisResultShrinkRequest& setUniqueInfo(string uniqueInfo) { DARABONBA_PTR_SET_VALUE(uniqueInfo_, uniqueInfo) };


    // uniqueTagListShrink Field Functions 
    bool hasUniqueTagListShrink() const { return this->uniqueTagListShrink_ != nullptr;};
    void deleteUniqueTagListShrink() { this->uniqueTagListShrink_ = nullptr;};
    inline string getUniqueTagListShrink() const { DARABONBA_PTR_GET_DEFAULT(uniqueTagListShrink_, "") };
    inline GetAlertRecordAnalysisResultShrinkRequest& setUniqueTagListShrink(string uniqueTagListShrink) { DARABONBA_PTR_SET_VALUE(uniqueTagListShrink_, uniqueTagListShrink) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetAlertRecordAnalysisResultShrinkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> alarmUniqueInfo_ {};
    shared_ptr<string> aliyunLang_ {};
    shared_ptr<string> uniqueInfo_ {};
    shared_ptr<string> uniqueTagListShrink_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
