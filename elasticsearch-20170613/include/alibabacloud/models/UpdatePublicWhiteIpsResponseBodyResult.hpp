// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLICWHITEIPSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLICWHITEIPSRESPONSEBODYRESULT_HPP_
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
  class UpdatePublicWhiteIpsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublicWhiteIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(publicIpWhitelist, publicIpWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublicWhiteIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(publicIpWhitelist, publicIpWhitelist_);
    };
    UpdatePublicWhiteIpsResponseBodyResult() = default ;
    UpdatePublicWhiteIpsResponseBodyResult(const UpdatePublicWhiteIpsResponseBodyResult &) = default ;
    UpdatePublicWhiteIpsResponseBodyResult(UpdatePublicWhiteIpsResponseBodyResult &&) = default ;
    UpdatePublicWhiteIpsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublicWhiteIpsResponseBodyResult() = default ;
    UpdatePublicWhiteIpsResponseBodyResult& operator=(const UpdatePublicWhiteIpsResponseBodyResult &) = default ;
    UpdatePublicWhiteIpsResponseBodyResult& operator=(UpdatePublicWhiteIpsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publicIpWhitelist_ != nullptr; };
    // publicIpWhitelist Field Functions 
    bool hasPublicIpWhitelist() const { return this->publicIpWhitelist_ != nullptr;};
    void deletePublicIpWhitelist() { this->publicIpWhitelist_ = nullptr;};
    inline const vector<string> & publicIpWhitelist() const { DARABONBA_PTR_GET_CONST(publicIpWhitelist_, vector<string>) };
    inline vector<string> publicIpWhitelist() { DARABONBA_PTR_GET(publicIpWhitelist_, vector<string>) };
    inline UpdatePublicWhiteIpsResponseBodyResult& setPublicIpWhitelist(const vector<string> & publicIpWhitelist) { DARABONBA_PTR_SET_VALUE(publicIpWhitelist_, publicIpWhitelist) };
    inline UpdatePublicWhiteIpsResponseBodyResult& setPublicIpWhitelist(vector<string> && publicIpWhitelist) { DARABONBA_PTR_SET_RVALUE(publicIpWhitelist_, publicIpWhitelist) };


  protected:
    std::shared_ptr<vector<string>> publicIpWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
