// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DMSKNOWLEDGESEARCHORDERINFODO_HPP_
#define ALIBABACLOUD_MODELS_DMSKNOWLEDGESEARCHORDERINFODO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DmsKnowledgeSearchOrderInfoDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DmsKnowledgeSearchOrderInfoDO& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunAccountUid, aliyunAccountUid_);
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(WebSearchApiUrl, webSearchApiUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DmsKnowledgeSearchOrderInfoDO& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunAccountUid, aliyunAccountUid_);
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(WebSearchApiUrl, webSearchApiUrl_);
    };
    DmsKnowledgeSearchOrderInfoDO() = default ;
    DmsKnowledgeSearchOrderInfoDO(const DmsKnowledgeSearchOrderInfoDO &) = default ;
    DmsKnowledgeSearchOrderInfoDO(DmsKnowledgeSearchOrderInfoDO &&) = default ;
    DmsKnowledgeSearchOrderInfoDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DmsKnowledgeSearchOrderInfoDO() = default ;
    DmsKnowledgeSearchOrderInfoDO& operator=(const DmsKnowledgeSearchOrderInfoDO &) = default ;
    DmsKnowledgeSearchOrderInfoDO& operator=(DmsKnowledgeSearchOrderInfoDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunAccountUid_ == nullptr
        && this->apiKey_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->orderId_ == nullptr
        && this->webSearchApiUrl_ == nullptr; };
    // aliyunAccountUid Field Functions 
    bool hasAliyunAccountUid() const { return this->aliyunAccountUid_ != nullptr;};
    void deleteAliyunAccountUid() { this->aliyunAccountUid_ = nullptr;};
    inline string getAliyunAccountUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunAccountUid_, "") };
    inline DmsKnowledgeSearchOrderInfoDO& setAliyunAccountUid(string aliyunAccountUid) { DARABONBA_PTR_SET_VALUE(aliyunAccountUid_, aliyunAccountUid) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DmsKnowledgeSearchOrderInfoDO& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DmsKnowledgeSearchOrderInfoDO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DmsKnowledgeSearchOrderInfoDO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DmsKnowledgeSearchOrderInfoDO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline DmsKnowledgeSearchOrderInfoDO& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // webSearchApiUrl Field Functions 
    bool hasWebSearchApiUrl() const { return this->webSearchApiUrl_ != nullptr;};
    void deleteWebSearchApiUrl() { this->webSearchApiUrl_ = nullptr;};
    inline string getWebSearchApiUrl() const { DARABONBA_PTR_GET_DEFAULT(webSearchApiUrl_, "") };
    inline DmsKnowledgeSearchOrderInfoDO& setWebSearchApiUrl(string webSearchApiUrl) { DARABONBA_PTR_SET_VALUE(webSearchApiUrl_, webSearchApiUrl) };


  protected:
    shared_ptr<string> aliyunAccountUid_ {};
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> webSearchApiUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
