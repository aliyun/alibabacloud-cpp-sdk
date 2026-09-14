// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expandPolicyConfigs, expandPolicyConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, GetHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expandPolicyConfigs, expandPolicyConfigs_);
    };
    GetHttpApiRequest() = default ;
    GetHttpApiRequest(const GetHttpApiRequest &) = default ;
    GetHttpApiRequest(GetHttpApiRequest &&) = default ;
    GetHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHttpApiRequest() = default ;
    GetHttpApiRequest& operator=(const GetHttpApiRequest &) = default ;
    GetHttpApiRequest& operator=(GetHttpApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expandPolicyConfigs_ == nullptr; };
    // expandPolicyConfigs Field Functions 
    bool hasExpandPolicyConfigs() const { return this->expandPolicyConfigs_ != nullptr;};
    void deleteExpandPolicyConfigs() { this->expandPolicyConfigs_ = nullptr;};
    inline bool getExpandPolicyConfigs() const { DARABONBA_PTR_GET_DEFAULT(expandPolicyConfigs_, false) };
    inline GetHttpApiRequest& setExpandPolicyConfigs(bool expandPolicyConfigs) { DARABONBA_PTR_SET_VALUE(expandPolicyConfigs_, expandPolicyConfigs) };


  protected:
    // Specifies whether to expand independent policy configurations. If omitted or set to true, a complete compatibility view is returned. If set to false, the ModelAPI token throttling managed by the policy returns a policy reference and an optional read-only plugin status. You can use GetPolicy to retrieve the rule body.
    shared_ptr<bool> expandPolicyConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
