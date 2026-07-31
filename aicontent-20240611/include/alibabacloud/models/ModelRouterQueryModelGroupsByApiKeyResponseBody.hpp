// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYMODELGROUPSBYAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYMODELGROUPSBYAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelGroupDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryModelGroupsByApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryModelGroupsByApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryModelGroupsByApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelRouterQueryModelGroupsByApiKeyResponseBody() = default ;
    ModelRouterQueryModelGroupsByApiKeyResponseBody(const ModelRouterQueryModelGroupsByApiKeyResponseBody &) = default ;
    ModelRouterQueryModelGroupsByApiKeyResponseBody(ModelRouterQueryModelGroupsByApiKeyResponseBody &&) = default ;
    ModelRouterQueryModelGroupsByApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryModelGroupsByApiKeyResponseBody() = default ;
    ModelRouterQueryModelGroupsByApiKeyResponseBody& operator=(const ModelRouterQueryModelGroupsByApiKeyResponseBody &) = default ;
    ModelRouterQueryModelGroupsByApiKeyResponseBody& operator=(ModelRouterQueryModelGroupsByApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(clientId, clientId_);
        DARABONBA_PTR_TO_JSON(groups, groups_);
        DARABONBA_PTR_TO_JSON(standaloneModelList, standaloneModelList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(clientId, clientId_);
        DARABONBA_PTR_FROM_JSON(groups, groups_);
        DARABONBA_PTR_FROM_JSON(standaloneModelList, standaloneModelList_);
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
        && this->groups_ == nullptr && this->standaloneModelList_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
      inline Data& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<ModelGroupDTO> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<ModelGroupDTO>) };
      inline vector<ModelGroupDTO> getGroups() { DARABONBA_PTR_GET(groups_, vector<ModelGroupDTO>) };
      inline Data& setGroups(const vector<ModelGroupDTO> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline Data& setGroups(vector<ModelGroupDTO> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // standaloneModelList Field Functions 
      bool hasStandaloneModelList() const { return this->standaloneModelList_ != nullptr;};
      void deleteStandaloneModelList() { this->standaloneModelList_ = nullptr;};
      inline const vector<int64_t> & getStandaloneModelList() const { DARABONBA_PTR_GET_CONST(standaloneModelList_, vector<int64_t>) };
      inline vector<int64_t> getStandaloneModelList() { DARABONBA_PTR_GET(standaloneModelList_, vector<int64_t>) };
      inline Data& setStandaloneModelList(const vector<int64_t> & standaloneModelList) { DARABONBA_PTR_SET_VALUE(standaloneModelList_, standaloneModelList) };
      inline Data& setStandaloneModelList(vector<int64_t> && standaloneModelList) { DARABONBA_PTR_SET_RVALUE(standaloneModelList_, standaloneModelList) };


    protected:
      // The ID of the department to which the key belongs.
      shared_ptr<int64_t> clientId_ {};
      // The list of bound model groups.
      shared_ptr<vector<ModelGroupDTO>> groups_ {};
      // The list of individually authorized model IDs.
      shared_ptr<vector<int64_t>> standaloneModelList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModelRouterQueryModelGroupsByApiKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModelRouterQueryModelGroupsByApiKeyResponseBody::Data) };
    inline ModelRouterQueryModelGroupsByApiKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModelRouterQueryModelGroupsByApiKeyResponseBody::Data) };
    inline ModelRouterQueryModelGroupsByApiKeyResponseBody& setData(const ModelRouterQueryModelGroupsByApiKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelRouterQueryModelGroupsByApiKeyResponseBody& setData(ModelRouterQueryModelGroupsByApiKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelRouterQueryModelGroupsByApiKeyResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModelRouterQueryModelGroupsByApiKeyResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelRouterQueryModelGroupsByApiKeyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterQueryModelGroupsByApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelRouterQueryModelGroupsByApiKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data object.
    shared_ptr<ModelRouterQueryModelGroupsByApiKeyResponseBody::Data> data_ {};
    // The error message code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
