// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class QueryAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunUidList, aliyunUidList_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunUidList, aliyunUidList_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
    };
    QueryAmountRequest() = default ;
    QueryAmountRequest(const QueryAmountRequest &) = default ;
    QueryAmountRequest(QueryAmountRequest &&) = default ;
    QueryAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAmountRequest() = default ;
    QueryAmountRequest& operator=(const QueryAmountRequest &) = default ;
    QueryAmountRequest& operator=(QueryAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunUidList_ == nullptr
        && this->endDate_ == nullptr && this->startDate_ == nullptr; };
    // aliyunUidList Field Functions 
    bool hasAliyunUidList() const { return this->aliyunUidList_ != nullptr;};
    void deleteAliyunUidList() { this->aliyunUidList_ = nullptr;};
    inline const vector<string> & getAliyunUidList() const { DARABONBA_PTR_GET_CONST(aliyunUidList_, vector<string>) };
    inline vector<string> getAliyunUidList() { DARABONBA_PTR_GET(aliyunUidList_, vector<string>) };
    inline QueryAmountRequest& setAliyunUidList(const vector<string> & aliyunUidList) { DARABONBA_PTR_SET_VALUE(aliyunUidList_, aliyunUidList) };
    inline QueryAmountRequest& setAliyunUidList(vector<string> && aliyunUidList) { DARABONBA_PTR_SET_RVALUE(aliyunUidList_, aliyunUidList) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryAmountRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryAmountRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> aliyunUidList_ {};
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
