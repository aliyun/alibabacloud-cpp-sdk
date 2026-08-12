// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIINFOBYNAME_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIINFOBYNAME_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiApiInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiInfoByName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiInfoByName& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(versionEnabled, versionEnabled_);
      DARABONBA_PTR_TO_JSON(versionedHttpApis, versionedHttpApis_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiInfoByName& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(versionEnabled, versionEnabled_);
      DARABONBA_PTR_FROM_JSON(versionedHttpApis, versionedHttpApis_);
    };
    HttpApiInfoByName() = default ;
    HttpApiInfoByName(const HttpApiInfoByName &) = default ;
    HttpApiInfoByName(HttpApiInfoByName &&) = default ;
    HttpApiInfoByName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiInfoByName() = default ;
    HttpApiInfoByName& operator=(const HttpApiInfoByName &) = default ;
    HttpApiInfoByName& operator=(HttpApiInfoByName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->versionEnabled_ == nullptr && this->versionedHttpApis_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline HttpApiInfoByName& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiInfoByName& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HttpApiInfoByName& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versionEnabled Field Functions 
    bool hasVersionEnabled() const { return this->versionEnabled_ != nullptr;};
    void deleteVersionEnabled() { this->versionEnabled_ = nullptr;};
    inline bool getVersionEnabled() const { DARABONBA_PTR_GET_DEFAULT(versionEnabled_, false) };
    inline HttpApiInfoByName& setVersionEnabled(bool versionEnabled) { DARABONBA_PTR_SET_VALUE(versionEnabled_, versionEnabled) };


    // versionedHttpApis Field Functions 
    bool hasVersionedHttpApis() const { return this->versionedHttpApis_ != nullptr;};
    void deleteVersionedHttpApis() { this->versionedHttpApis_ = nullptr;};
    inline const vector<HttpApiApiInfo> & getVersionedHttpApis() const { DARABONBA_PTR_GET_CONST(versionedHttpApis_, vector<HttpApiApiInfo>) };
    inline vector<HttpApiApiInfo> getVersionedHttpApis() { DARABONBA_PTR_GET(versionedHttpApis_, vector<HttpApiApiInfo>) };
    inline HttpApiInfoByName& setVersionedHttpApis(const vector<HttpApiApiInfo> & versionedHttpApis) { DARABONBA_PTR_SET_VALUE(versionedHttpApis_, versionedHttpApis) };
    inline HttpApiInfoByName& setVersionedHttpApis(vector<HttpApiApiInfo> && versionedHttpApis) { DARABONBA_PTR_SET_RVALUE(versionedHttpApis_, versionedHttpApis) };


  protected:
    shared_ptr<string> gatewayId_ {};
    // The API name.
    shared_ptr<string> name_ {};
    // The API type.
    shared_ptr<string> type_ {};
    // Specifies whether to enable versioning.
    shared_ptr<bool> versionEnabled_ {};
    // The information about the versioned API.
    shared_ptr<vector<HttpApiApiInfo>> versionedHttpApis_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
