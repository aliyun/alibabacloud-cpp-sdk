// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATAALERTREASON_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATAALERTREASON_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertNotificationsResponseBodyListResultDataAlertReasonAlertReasonParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertNotificationsResponseBodyListResultDataAlertReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsResponseBodyListResultDataAlertReason& obj) { 
      DARABONBA_PTR_TO_JSON(AlertReasonParamList, alertReasonParamList_);
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UniqueKey, uniqueKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsResponseBodyListResultDataAlertReason& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertReasonParamList, alertReasonParamList_);
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UniqueKey, uniqueKey_);
    };
    ListAlertNotificationsResponseBodyListResultDataAlertReason() = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReason(const ListAlertNotificationsResponseBodyListResultDataAlertReason &) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReason(ListAlertNotificationsResponseBodyListResultDataAlertReason &&) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsResponseBodyListResultDataAlertReason() = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReason& operator=(const ListAlertNotificationsResponseBodyListResultDataAlertReason &) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertReason& operator=(ListAlertNotificationsResponseBodyListResultDataAlertReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertReasonParamList_ == nullptr
        && return this->bizDate_ == nullptr && return this->type_ == nullptr && return this->uniqueKey_ == nullptr; };
    // alertReasonParamList Field Functions 
    bool hasAlertReasonParamList() const { return this->alertReasonParamList_ != nullptr;};
    void deleteAlertReasonParamList() { this->alertReasonParamList_ = nullptr;};
    inline const vector<Models::ListAlertNotificationsResponseBodyListResultDataAlertReasonAlertReasonParamList> & alertReasonParamList() const { DARABONBA_PTR_GET_CONST(alertReasonParamList_, vector<Models::ListAlertNotificationsResponseBodyListResultDataAlertReasonAlertReasonParamList>) };
    inline vector<Models::ListAlertNotificationsResponseBodyListResultDataAlertReasonAlertReasonParamList> alertReasonParamList() { DARABONBA_PTR_GET(alertReasonParamList_, vector<Models::ListAlertNotificationsResponseBodyListResultDataAlertReasonAlertReasonParamList>) };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReason& setAlertReasonParamList(const vector<Models::ListAlertNotificationsResponseBodyListResultDataAlertReasonAlertReasonParamList> & alertReasonParamList) { DARABONBA_PTR_SET_VALUE(alertReasonParamList_, alertReasonParamList) };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReason& setAlertReasonParamList(vector<Models::ListAlertNotificationsResponseBodyListResultDataAlertReasonAlertReasonParamList> && alertReasonParamList) { DARABONBA_PTR_SET_RVALUE(alertReasonParamList_, alertReasonParamList) };


    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReason& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReason& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uniqueKey Field Functions 
    bool hasUniqueKey() const { return this->uniqueKey_ != nullptr;};
    void deleteUniqueKey() { this->uniqueKey_ = nullptr;};
    inline string uniqueKey() const { DARABONBA_PTR_GET_DEFAULT(uniqueKey_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertReason& setUniqueKey(string uniqueKey) { DARABONBA_PTR_SET_VALUE(uniqueKey_, uniqueKey) };


  protected:
    std::shared_ptr<vector<Models::ListAlertNotificationsResponseBodyListResultDataAlertReasonAlertReasonParamList>> alertReasonParamList_ = nullptr;
    std::shared_ptr<string> bizDate_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uniqueKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
