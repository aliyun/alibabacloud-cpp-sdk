// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACOSCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNACOSCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNacosConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacosConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Configurations, configurations_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacosConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Configurations, configurations_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNacosConfigsResponseBody() = default ;
    ListNacosConfigsResponseBody(const ListNacosConfigsResponseBody &) = default ;
    ListNacosConfigsResponseBody(ListNacosConfigsResponseBody &&) = default ;
    ListNacosConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacosConfigsResponseBody() = default ;
    ListNacosConfigsResponseBody& operator=(const ListNacosConfigsResponseBody &) = default ;
    ListNacosConfigsResponseBody& operator=(ListNacosConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configurations& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ConfigTags, configTags_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Configurations& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ConfigTags, configTags_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      Configurations() = default ;
      Configurations(const Configurations &) = default ;
      Configurations(Configurations &&) = default ;
      Configurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configurations() = default ;
      Configurations& operator=(const Configurations &) = default ;
      Configurations& operator=(Configurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->configTags_ == nullptr && this->dataId_ == nullptr && this->description_ == nullptr && this->group_ == nullptr && this->id_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Configurations& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // configTags Field Functions 
      bool hasConfigTags() const { return this->configTags_ != nullptr;};
      void deleteConfigTags() { this->configTags_ = nullptr;};
      inline string getConfigTags() const { DARABONBA_PTR_GET_DEFAULT(configTags_, "") };
      inline Configurations& setConfigTags(string configTags) { DARABONBA_PTR_SET_VALUE(configTags_, configTags) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Configurations& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Configurations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Configurations& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Configurations& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // The name of the application.
      shared_ptr<string> appName_ {};
      shared_ptr<string> configTags_ {};
      // The ID of the configuration.
      shared_ptr<string> dataId_ {};
      shared_ptr<string> description_ {};
      // The ID of the group.
      shared_ptr<string> group_ {};
      // The ID of the application.
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->configurations_ == nullptr && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListNacosConfigsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // configurations Field Functions 
    bool hasConfigurations() const { return this->configurations_ != nullptr;};
    void deleteConfigurations() { this->configurations_ = nullptr;};
    inline const vector<ListNacosConfigsResponseBody::Configurations> & getConfigurations() const { DARABONBA_PTR_GET_CONST(configurations_, vector<ListNacosConfigsResponseBody::Configurations>) };
    inline vector<ListNacosConfigsResponseBody::Configurations> getConfigurations() { DARABONBA_PTR_GET(configurations_, vector<ListNacosConfigsResponseBody::Configurations>) };
    inline ListNacosConfigsResponseBody& setConfigurations(const vector<ListNacosConfigsResponseBody::Configurations> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
    inline ListNacosConfigsResponseBody& setConfigurations(vector<ListNacosConfigsResponseBody::Configurations> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListNacosConfigsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListNacosConfigsResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNacosConfigsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNacosConfigsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNacosConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNacosConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNacosConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNacosConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The configurations.
    shared_ptr<vector<ListNacosConfigsResponseBody::Configurations>> configurations_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of returned instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
