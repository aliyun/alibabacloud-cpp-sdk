// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFOALERTREASON_HPP_
#define ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFOALERTREASON_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlertEventResponseBodyAlertEventInfoAlertReasonAlertReasonParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAlertEventResponseBodyAlertEventInfoAlertReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertEventResponseBodyAlertEventInfoAlertReason& obj) { 
      DARABONBA_PTR_TO_JSON(AlertReasonParamList, alertReasonParamList_);
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UniqueKey, uniqueKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertEventResponseBodyAlertEventInfoAlertReason& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertReasonParamList, alertReasonParamList_);
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UniqueKey, uniqueKey_);
    };
    GetAlertEventResponseBodyAlertEventInfoAlertReason() = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReason(const GetAlertEventResponseBodyAlertEventInfoAlertReason &) = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReason(GetAlertEventResponseBodyAlertEventInfoAlertReason &&) = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertEventResponseBodyAlertEventInfoAlertReason() = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReason& operator=(const GetAlertEventResponseBodyAlertEventInfoAlertReason &) = default ;
    GetAlertEventResponseBodyAlertEventInfoAlertReason& operator=(GetAlertEventResponseBodyAlertEventInfoAlertReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertReasonParamList_ != nullptr
        && this->bizDate_ != nullptr && this->type_ != nullptr && this->uniqueKey_ != nullptr; };
    // alertReasonParamList Field Functions 
    bool hasAlertReasonParamList() const { return this->alertReasonParamList_ != nullptr;};
    void deleteAlertReasonParamList() { this->alertReasonParamList_ = nullptr;};
    inline const vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReasonAlertReasonParamList> & alertReasonParamList() const { DARABONBA_PTR_GET_CONST(alertReasonParamList_, vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReasonAlertReasonParamList>) };
    inline vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReasonAlertReasonParamList> alertReasonParamList() { DARABONBA_PTR_GET(alertReasonParamList_, vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReasonAlertReasonParamList>) };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReason& setAlertReasonParamList(const vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReasonAlertReasonParamList> & alertReasonParamList) { DARABONBA_PTR_SET_VALUE(alertReasonParamList_, alertReasonParamList) };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReason& setAlertReasonParamList(vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReasonAlertReasonParamList> && alertReasonParamList) { DARABONBA_PTR_SET_RVALUE(alertReasonParamList_, alertReasonParamList) };


    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReason& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReason& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uniqueKey Field Functions 
    bool hasUniqueKey() const { return this->uniqueKey_ != nullptr;};
    void deleteUniqueKey() { this->uniqueKey_ = nullptr;};
    inline string uniqueKey() const { DARABONBA_PTR_GET_DEFAULT(uniqueKey_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoAlertReason& setUniqueKey(string uniqueKey) { DARABONBA_PTR_SET_VALUE(uniqueKey_, uniqueKey) };


  protected:
    std::shared_ptr<vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReasonAlertReasonParamList>> alertReasonParamList_ = nullptr;
    std::shared_ptr<string> bizDate_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uniqueKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
