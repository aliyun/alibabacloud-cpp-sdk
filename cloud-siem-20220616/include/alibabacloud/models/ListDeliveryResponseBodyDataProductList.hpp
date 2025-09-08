// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELIVERYRESPONSEBODYDATAPRODUCTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDELIVERYRESPONSEBODYDATAPRODUCTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeliveryResponseBodyDataProductListLogList.hpp>
#include <map>
#include <alibabacloud/models/DataProductListLogMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDeliveryResponseBodyDataProductList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeliveryResponseBodyDataProductList& obj) { 
      DARABONBA_PTR_TO_JSON(LogList, logList_);
      DARABONBA_PTR_TO_JSON(LogMap, logMap_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeliveryResponseBodyDataProductList& obj) { 
      DARABONBA_PTR_FROM_JSON(LogList, logList_);
      DARABONBA_PTR_FROM_JSON(LogMap, logMap_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
    };
    ListDeliveryResponseBodyDataProductList() = default ;
    ListDeliveryResponseBodyDataProductList(const ListDeliveryResponseBodyDataProductList &) = default ;
    ListDeliveryResponseBodyDataProductList(ListDeliveryResponseBodyDataProductList &&) = default ;
    ListDeliveryResponseBodyDataProductList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeliveryResponseBodyDataProductList() = default ;
    ListDeliveryResponseBodyDataProductList& operator=(const ListDeliveryResponseBodyDataProductList &) = default ;
    ListDeliveryResponseBodyDataProductList& operator=(ListDeliveryResponseBodyDataProductList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logList_ != nullptr
        && this->logMap_ != nullptr && this->productCode_ != nullptr && this->productName_ != nullptr; };
    // logList Field Functions 
    bool hasLogList() const { return this->logList_ != nullptr;};
    void deleteLogList() { this->logList_ = nullptr;};
    inline const vector<Models::ListDeliveryResponseBodyDataProductListLogList> & logList() const { DARABONBA_PTR_GET_CONST(logList_, vector<Models::ListDeliveryResponseBodyDataProductListLogList>) };
    inline vector<Models::ListDeliveryResponseBodyDataProductListLogList> logList() { DARABONBA_PTR_GET(logList_, vector<Models::ListDeliveryResponseBodyDataProductListLogList>) };
    inline ListDeliveryResponseBodyDataProductList& setLogList(const vector<Models::ListDeliveryResponseBodyDataProductListLogList> & logList) { DARABONBA_PTR_SET_VALUE(logList_, logList) };
    inline ListDeliveryResponseBodyDataProductList& setLogList(vector<Models::ListDeliveryResponseBodyDataProductListLogList> && logList) { DARABONBA_PTR_SET_RVALUE(logList_, logList) };


    // logMap Field Functions 
    bool hasLogMap() const { return this->logMap_ != nullptr;};
    void deleteLogMap() { this->logMap_ = nullptr;};
    inline const map<string, vector<Models::DataProductListLogMapValue>> & logMap() const { DARABONBA_PTR_GET_CONST(logMap_, map<string, vector<Models::DataProductListLogMapValue>>) };
    inline map<string, vector<Models::DataProductListLogMapValue>> logMap() { DARABONBA_PTR_GET(logMap_, map<string, vector<Models::DataProductListLogMapValue>>) };
    inline ListDeliveryResponseBodyDataProductList& setLogMap(const map<string, vector<Models::DataProductListLogMapValue>> & logMap) { DARABONBA_PTR_SET_VALUE(logMap_, logMap) };
    inline ListDeliveryResponseBodyDataProductList& setLogMap(map<string, vector<Models::DataProductListLogMapValue>> && logMap) { DARABONBA_PTR_SET_RVALUE(logMap_, logMap) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListDeliveryResponseBodyDataProductList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListDeliveryResponseBodyDataProductList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


  protected:
    // The logs of the cloud services.
    std::shared_ptr<vector<Models::ListDeliveryResponseBodyDataProductListLogList>> logList_ = nullptr;
    // The log group. For example, in Security Center, the logs of hosts and networks are stored in different groups. Key indicates the group information, and value indicates the logs in the group.
    std::shared_ptr<map<string, vector<Models::DataProductListLogMapValue>>> logMap_ = nullptr;
    // The code of the cloud service. Valid values:
    // 
    // *   qcloud_waf
    // *   qlcoud_cfw
    // *   hcloud_waf
    // *   hcloud_cfw
    // *   ddos
    // *   sas
    // *   cfw
    // *   config
    // *   csk
    // *   fc
    // *   rds
    // *   nas
    // *   apigateway
    // *   cdn
    // *   mongodb
    // *   eip
    // *   slb
    // *   vpc
    // *   actiontrail
    // *   waf
    // *   bastionhost
    // *   oss
    // *   polardb
    std::shared_ptr<string> productCode_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> productName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
