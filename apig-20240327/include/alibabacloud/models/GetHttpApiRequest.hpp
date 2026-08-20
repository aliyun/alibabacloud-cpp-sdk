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
    // Specifies whether to expand independent policy configurations. When omitted or set to true, a full compatible view is returned. When set to false, the ModelAPI Token throttling managed by Policy returns policy references and optional read-only plug-in status, and the rule body can be retrieved by calling GetPolicy.
    shared_ptr<bool> expandPolicyConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
