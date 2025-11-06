// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEZNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEZNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateZnodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateZnodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateZnodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
    };
    UpdateZnodeRequest() = default ;
    UpdateZnodeRequest(const UpdateZnodeRequest &) = default ;
    UpdateZnodeRequest(UpdateZnodeRequest &&) = default ;
    UpdateZnodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateZnodeRequest() = default ;
    UpdateZnodeRequest& operator=(const UpdateZnodeRequest &) = default ;
    UpdateZnodeRequest& operator=(UpdateZnodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterId_ == nullptr && return this->data_ == nullptr && return this->path_ == nullptr && return this->requestPars_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateZnodeRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateZnodeRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline UpdateZnodeRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateZnodeRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline UpdateZnodeRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The data of the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The path of the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
