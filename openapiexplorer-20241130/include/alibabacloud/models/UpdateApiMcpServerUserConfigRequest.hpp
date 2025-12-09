// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERUSERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERUSERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class UpdateApiMcpServerUserConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiMcpServerUserConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enablePublicAccess, enablePublicAccess_);
      DARABONBA_PTR_TO_JSON(vpcWhitelists, vpcWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiMcpServerUserConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enablePublicAccess, enablePublicAccess_);
      DARABONBA_PTR_FROM_JSON(vpcWhitelists, vpcWhitelists_);
    };
    UpdateApiMcpServerUserConfigRequest() = default ;
    UpdateApiMcpServerUserConfigRequest(const UpdateApiMcpServerUserConfigRequest &) = default ;
    UpdateApiMcpServerUserConfigRequest(UpdateApiMcpServerUserConfigRequest &&) = default ;
    UpdateApiMcpServerUserConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiMcpServerUserConfigRequest() = default ;
    UpdateApiMcpServerUserConfigRequest& operator=(const UpdateApiMcpServerUserConfigRequest &) = default ;
    UpdateApiMcpServerUserConfigRequest& operator=(UpdateApiMcpServerUserConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enablePublicAccess_ == nullptr
        && return this->vpcWhitelists_ == nullptr; };
    // enablePublicAccess Field Functions 
    bool hasEnablePublicAccess() const { return this->enablePublicAccess_ != nullptr;};
    void deleteEnablePublicAccess() { this->enablePublicAccess_ = nullptr;};
    inline bool enablePublicAccess() const { DARABONBA_PTR_GET_DEFAULT(enablePublicAccess_, false) };
    inline UpdateApiMcpServerUserConfigRequest& setEnablePublicAccess(bool enablePublicAccess) { DARABONBA_PTR_SET_VALUE(enablePublicAccess_, enablePublicAccess) };


    // vpcWhitelists Field Functions 
    bool hasVpcWhitelists() const { return this->vpcWhitelists_ != nullptr;};
    void deleteVpcWhitelists() { this->vpcWhitelists_ = nullptr;};
    inline const vector<string> & vpcWhitelists() const { DARABONBA_PTR_GET_CONST(vpcWhitelists_, vector<string>) };
    inline vector<string> vpcWhitelists() { DARABONBA_PTR_GET(vpcWhitelists_, vector<string>) };
    inline UpdateApiMcpServerUserConfigRequest& setVpcWhitelists(const vector<string> & vpcWhitelists) { DARABONBA_PTR_SET_VALUE(vpcWhitelists_, vpcWhitelists) };
    inline UpdateApiMcpServerUserConfigRequest& setVpcWhitelists(vector<string> && vpcWhitelists) { DARABONBA_PTR_SET_RVALUE(vpcWhitelists_, vpcWhitelists) };


  protected:
    std::shared_ptr<bool> enablePublicAccess_ = nullptr;
    std::shared_ptr<vector<string>> vpcWhitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
