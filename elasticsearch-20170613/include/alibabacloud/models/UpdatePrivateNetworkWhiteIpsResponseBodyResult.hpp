// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATENETWORKWHITEIPSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATENETWORKWHITEIPSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdatePrivateNetworkWhiteIpsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateNetworkWhiteIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateNetworkWhiteIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
    };
    UpdatePrivateNetworkWhiteIpsResponseBodyResult() = default ;
    UpdatePrivateNetworkWhiteIpsResponseBodyResult(const UpdatePrivateNetworkWhiteIpsResponseBodyResult &) = default ;
    UpdatePrivateNetworkWhiteIpsResponseBodyResult(UpdatePrivateNetworkWhiteIpsResponseBodyResult &&) = default ;
    UpdatePrivateNetworkWhiteIpsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateNetworkWhiteIpsResponseBodyResult() = default ;
    UpdatePrivateNetworkWhiteIpsResponseBodyResult& operator=(const UpdatePrivateNetworkWhiteIpsResponseBodyResult &) = default ;
    UpdatePrivateNetworkWhiteIpsResponseBodyResult& operator=(UpdatePrivateNetworkWhiteIpsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privateNetworkIpWhiteList_ != nullptr; };
    // privateNetworkIpWhiteList Field Functions 
    bool hasPrivateNetworkIpWhiteList() const { return this->privateNetworkIpWhiteList_ != nullptr;};
    void deletePrivateNetworkIpWhiteList() { this->privateNetworkIpWhiteList_ = nullptr;};
    inline const vector<string> & privateNetworkIpWhiteList() const { DARABONBA_PTR_GET_CONST(privateNetworkIpWhiteList_, vector<string>) };
    inline vector<string> privateNetworkIpWhiteList() { DARABONBA_PTR_GET(privateNetworkIpWhiteList_, vector<string>) };
    inline UpdatePrivateNetworkWhiteIpsResponseBodyResult& setPrivateNetworkIpWhiteList(const vector<string> & privateNetworkIpWhiteList) { DARABONBA_PTR_SET_VALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };
    inline UpdatePrivateNetworkWhiteIpsResponseBodyResult& setPrivateNetworkIpWhiteList(vector<string> && privateNetworkIpWhiteList) { DARABONBA_PTR_SET_RVALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };


  protected:
    std::shared_ptr<vector<string>> privateNetworkIpWhiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
