// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGISTICSORDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_LOGISTICSORDERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Good.hpp>
#include <alibabacloud/models/LogisticsDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class LogisticsOrderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogisticsOrderResult& obj) { 
      DARABONBA_PTR_TO_JSON(dataProvider, dataProvider_);
      DARABONBA_PTR_TO_JSON(dataProviderTitle, dataProviderTitle_);
      DARABONBA_PTR_TO_JSON(goods, goods_);
      DARABONBA_PTR_TO_JSON(logisticsCompanyCode, logisticsCompanyCode_);
      DARABONBA_PTR_TO_JSON(logisticsCompanyName, logisticsCompanyName_);
      DARABONBA_PTR_TO_JSON(logisticsDetailList, logisticsDetailList_);
      DARABONBA_PTR_TO_JSON(mailNo, mailNo_);
    };
    friend void from_json(const Darabonba::Json& j, LogisticsOrderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(dataProvider, dataProvider_);
      DARABONBA_PTR_FROM_JSON(dataProviderTitle, dataProviderTitle_);
      DARABONBA_PTR_FROM_JSON(goods, goods_);
      DARABONBA_PTR_FROM_JSON(logisticsCompanyCode, logisticsCompanyCode_);
      DARABONBA_PTR_FROM_JSON(logisticsCompanyName, logisticsCompanyName_);
      DARABONBA_PTR_FROM_JSON(logisticsDetailList, logisticsDetailList_);
      DARABONBA_PTR_FROM_JSON(mailNo, mailNo_);
    };
    LogisticsOrderResult() = default ;
    LogisticsOrderResult(const LogisticsOrderResult &) = default ;
    LogisticsOrderResult(LogisticsOrderResult &&) = default ;
    LogisticsOrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogisticsOrderResult() = default ;
    LogisticsOrderResult& operator=(const LogisticsOrderResult &) = default ;
    LogisticsOrderResult& operator=(LogisticsOrderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataProvider_ == nullptr
        && this->dataProviderTitle_ == nullptr && this->goods_ == nullptr && this->logisticsCompanyCode_ == nullptr && this->logisticsCompanyName_ == nullptr && this->logisticsDetailList_ == nullptr
        && this->mailNo_ == nullptr; };
    // dataProvider Field Functions 
    bool hasDataProvider() const { return this->dataProvider_ != nullptr;};
    void deleteDataProvider() { this->dataProvider_ = nullptr;};
    inline string getDataProvider() const { DARABONBA_PTR_GET_DEFAULT(dataProvider_, "") };
    inline LogisticsOrderResult& setDataProvider(string dataProvider) { DARABONBA_PTR_SET_VALUE(dataProvider_, dataProvider) };


    // dataProviderTitle Field Functions 
    bool hasDataProviderTitle() const { return this->dataProviderTitle_ != nullptr;};
    void deleteDataProviderTitle() { this->dataProviderTitle_ = nullptr;};
    inline string getDataProviderTitle() const { DARABONBA_PTR_GET_DEFAULT(dataProviderTitle_, "") };
    inline LogisticsOrderResult& setDataProviderTitle(string dataProviderTitle) { DARABONBA_PTR_SET_VALUE(dataProviderTitle_, dataProviderTitle) };


    // goods Field Functions 
    bool hasGoods() const { return this->goods_ != nullptr;};
    void deleteGoods() { this->goods_ = nullptr;};
    inline const vector<Good> & getGoods() const { DARABONBA_PTR_GET_CONST(goods_, vector<Good>) };
    inline vector<Good> getGoods() { DARABONBA_PTR_GET(goods_, vector<Good>) };
    inline LogisticsOrderResult& setGoods(const vector<Good> & goods) { DARABONBA_PTR_SET_VALUE(goods_, goods) };
    inline LogisticsOrderResult& setGoods(vector<Good> && goods) { DARABONBA_PTR_SET_RVALUE(goods_, goods) };


    // logisticsCompanyCode Field Functions 
    bool hasLogisticsCompanyCode() const { return this->logisticsCompanyCode_ != nullptr;};
    void deleteLogisticsCompanyCode() { this->logisticsCompanyCode_ = nullptr;};
    inline string getLogisticsCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(logisticsCompanyCode_, "") };
    inline LogisticsOrderResult& setLogisticsCompanyCode(string logisticsCompanyCode) { DARABONBA_PTR_SET_VALUE(logisticsCompanyCode_, logisticsCompanyCode) };


    // logisticsCompanyName Field Functions 
    bool hasLogisticsCompanyName() const { return this->logisticsCompanyName_ != nullptr;};
    void deleteLogisticsCompanyName() { this->logisticsCompanyName_ = nullptr;};
    inline string getLogisticsCompanyName() const { DARABONBA_PTR_GET_DEFAULT(logisticsCompanyName_, "") };
    inline LogisticsOrderResult& setLogisticsCompanyName(string logisticsCompanyName) { DARABONBA_PTR_SET_VALUE(logisticsCompanyName_, logisticsCompanyName) };


    // logisticsDetailList Field Functions 
    bool hasLogisticsDetailList() const { return this->logisticsDetailList_ != nullptr;};
    void deleteLogisticsDetailList() { this->logisticsDetailList_ = nullptr;};
    inline const vector<LogisticsDetail> & getLogisticsDetailList() const { DARABONBA_PTR_GET_CONST(logisticsDetailList_, vector<LogisticsDetail>) };
    inline vector<LogisticsDetail> getLogisticsDetailList() { DARABONBA_PTR_GET(logisticsDetailList_, vector<LogisticsDetail>) };
    inline LogisticsOrderResult& setLogisticsDetailList(const vector<LogisticsDetail> & logisticsDetailList) { DARABONBA_PTR_SET_VALUE(logisticsDetailList_, logisticsDetailList) };
    inline LogisticsOrderResult& setLogisticsDetailList(vector<LogisticsDetail> && logisticsDetailList) { DARABONBA_PTR_SET_RVALUE(logisticsDetailList_, logisticsDetailList) };


    // mailNo Field Functions 
    bool hasMailNo() const { return this->mailNo_ != nullptr;};
    void deleteMailNo() { this->mailNo_ = nullptr;};
    inline string getMailNo() const { DARABONBA_PTR_GET_DEFAULT(mailNo_, "") };
    inline LogisticsOrderResult& setMailNo(string mailNo) { DARABONBA_PTR_SET_VALUE(mailNo_, mailNo) };


  protected:
    shared_ptr<string> dataProvider_ {};
    shared_ptr<string> dataProviderTitle_ {};
    shared_ptr<vector<Good>> goods_ {};
    shared_ptr<string> logisticsCompanyCode_ {};
    shared_ptr<string> logisticsCompanyName_ {};
    shared_ptr<vector<LogisticsDetail>> logisticsDetailList_ {};
    shared_ptr<string> mailNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
