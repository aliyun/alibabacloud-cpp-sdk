// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYCLIENTDISCOUNTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYCLIENTDISCOUNTLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryClientDiscountLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryClientDiscountLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryClientDiscountLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelRouterQueryClientDiscountLogsResponseBody() = default ;
    ModelRouterQueryClientDiscountLogsResponseBody(const ModelRouterQueryClientDiscountLogsResponseBody &) = default ;
    ModelRouterQueryClientDiscountLogsResponseBody(ModelRouterQueryClientDiscountLogsResponseBody &&) = default ;
    ModelRouterQueryClientDiscountLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryClientDiscountLogsResponseBody() = default ;
    ModelRouterQueryClientDiscountLogsResponseBody& operator=(const ModelRouterQueryClientDiscountLogsResponseBody &) = default ;
    ModelRouterQueryClientDiscountLogsResponseBody& operator=(ModelRouterQueryClientDiscountLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(clientId, clientId_);
        DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
        DARABONBA_PTR_TO_JSON(discount, discount_);
        DARABONBA_PTR_TO_JSON(effectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(clientId, clientId_);
        DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
        DARABONBA_PTR_FROM_JSON(discount, discount_);
        DARABONBA_PTR_FROM_JSON(effectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(remark, remark_);
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
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->deleteTag_ == nullptr && this->discount_ == nullptr && this->effectiveTime_ == nullptr && this->expireTime_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remark_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
      inline Data& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // deleteTag Field Functions 
      bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
      void deleteDeleteTag() { this->deleteTag_ = nullptr;};
      inline int64_t getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, 0L) };
      inline Data& setDeleteTag(int64_t deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


      // discount Field Functions 
      bool hasDiscount() const { return this->discount_ != nullptr;};
      void deleteDiscount() { this->discount_ = nullptr;};
      inline float getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0.0) };
      inline Data& setDiscount(float discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline Data& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


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


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      shared_ptr<int64_t> clientId_ {};
      shared_ptr<int64_t> deleteTag_ {};
      shared_ptr<float> discount_ {};
      shared_ptr<string> effectiveTime_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ModelRouterQueryClientDiscountLogsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ModelRouterQueryClientDiscountLogsResponseBody::Data>) };
    inline vector<ModelRouterQueryClientDiscountLogsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ModelRouterQueryClientDiscountLogsResponseBody::Data>) };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setData(const vector<ModelRouterQueryClientDiscountLogsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setData(vector<ModelRouterQueryClientDiscountLogsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelRouterQueryClientDiscountLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ModelRouterQueryClientDiscountLogsResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // maxResults
    shared_ptr<int32_t> maxResults_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
