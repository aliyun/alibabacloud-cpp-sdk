// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTICAGENTBYINSTALLTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTICAGENTBYINSTALLTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAgenticAgentByInstallTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgenticAgentByInstallTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstallToken, installToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgenticAgentByInstallTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstallToken, installToken_);
    };
    GetAgenticAgentByInstallTokenRequest() = default ;
    GetAgenticAgentByInstallTokenRequest(const GetAgenticAgentByInstallTokenRequest &) = default ;
    GetAgenticAgentByInstallTokenRequest(GetAgenticAgentByInstallTokenRequest &&) = default ;
    GetAgenticAgentByInstallTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgenticAgentByInstallTokenRequest() = default ;
    GetAgenticAgentByInstallTokenRequest& operator=(const GetAgenticAgentByInstallTokenRequest &) = default ;
    GetAgenticAgentByInstallTokenRequest& operator=(GetAgenticAgentByInstallTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installToken_ == nullptr; };
    // installToken Field Functions 
    bool hasInstallToken() const { return this->installToken_ != nullptr;};
    void deleteInstallToken() { this->installToken_ = nullptr;};
    inline string getInstallToken() const { DARABONBA_PTR_GET_DEFAULT(installToken_, "") };
    inline GetAgenticAgentByInstallTokenRequest& setInstallToken(string installToken) { DARABONBA_PTR_SET_VALUE(installToken_, installToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> installToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
