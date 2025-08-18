// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODYDATAAPIREGISTERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIDOCUMENTRESPONSEBODYDATAAPIREGISTERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo() = default ;
    GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo(const GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo &) = default ;
    GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo(GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo &&) = default ;
    GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo() = default ;
    GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& operator=(const GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo &) = default ;
    GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& operator=(GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->datasourceId_ != nullptr && this->datasourceName_ != nullptr && this->httpMethod_ != nullptr && this->mode_ != nullptr && this->path_ != nullptr
        && this->protocol_ != nullptr && this->timeout_ != nullptr && this->url_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline int32_t httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, 0) };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setHttpMethod(int32_t httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetDataServiceApiDocumentResponseBodyDataApiRegisterInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<string> datasourceId_ = nullptr;
    std::shared_ptr<string> datasourceName_ = nullptr;
    std::shared_ptr<int32_t> httpMethod_ = nullptr;
    std::shared_ptr<int32_t> mode_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
