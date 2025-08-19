// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateNetworkResponseBodyResultWhiteIpGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateNetworkResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(whiteIpGroup, whiteIpGroup_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(whiteIpGroup, whiteIpGroup_);
    };
    UpdateNetworkResponseBodyResult() = default ;
    UpdateNetworkResponseBodyResult(const UpdateNetworkResponseBodyResult &) = default ;
    UpdateNetworkResponseBodyResult(UpdateNetworkResponseBodyResult &&) = default ;
    UpdateNetworkResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkResponseBodyResult() = default ;
    UpdateNetworkResponseBodyResult& operator=(const UpdateNetworkResponseBodyResult &) = default ;
    UpdateNetworkResponseBodyResult& operator=(UpdateNetworkResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->enabled_ != nullptr && this->port_ != nullptr && this->type_ != nullptr && this->whiteIpGroup_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateNetworkResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline UpdateNetworkResponseBodyResult& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline UpdateNetworkResponseBodyResult& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateNetworkResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // whiteIpGroup Field Functions 
    bool hasWhiteIpGroup() const { return this->whiteIpGroup_ != nullptr;};
    void deleteWhiteIpGroup() { this->whiteIpGroup_ = nullptr;};
    inline const vector<Models::UpdateNetworkResponseBodyResultWhiteIpGroup> & whiteIpGroup() const { DARABONBA_PTR_GET_CONST(whiteIpGroup_, vector<Models::UpdateNetworkResponseBodyResultWhiteIpGroup>) };
    inline vector<Models::UpdateNetworkResponseBodyResultWhiteIpGroup> whiteIpGroup() { DARABONBA_PTR_GET(whiteIpGroup_, vector<Models::UpdateNetworkResponseBodyResultWhiteIpGroup>) };
    inline UpdateNetworkResponseBodyResult& setWhiteIpGroup(const vector<Models::UpdateNetworkResponseBodyResultWhiteIpGroup> & whiteIpGroup) { DARABONBA_PTR_SET_VALUE(whiteIpGroup_, whiteIpGroup) };
    inline UpdateNetworkResponseBodyResult& setWhiteIpGroup(vector<Models::UpdateNetworkResponseBodyResultWhiteIpGroup> && whiteIpGroup) { DARABONBA_PTR_SET_RVALUE(whiteIpGroup_, whiteIpGroup) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> enabled_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<Models::UpdateNetworkResponseBodyResultWhiteIpGroup>> whiteIpGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
