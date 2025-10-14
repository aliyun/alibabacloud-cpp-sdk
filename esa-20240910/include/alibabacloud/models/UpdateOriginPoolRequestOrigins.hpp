// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORIGINPOOLREQUESTORIGINS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORIGINPOOLREQUESTORIGINS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateOriginPoolRequestOriginsAuthConf.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateOriginPoolRequestOrigins : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOriginPoolRequestOrigins& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_ANY_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOriginPoolRequestOrigins& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_ANY_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateOriginPoolRequestOrigins() = default ;
    UpdateOriginPoolRequestOrigins(const UpdateOriginPoolRequestOrigins &) = default ;
    UpdateOriginPoolRequestOrigins(UpdateOriginPoolRequestOrigins &&) = default ;
    UpdateOriginPoolRequestOrigins(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOriginPoolRequestOrigins() = default ;
    UpdateOriginPoolRequestOrigins& operator=(const UpdateOriginPoolRequestOrigins &) = default ;
    UpdateOriginPoolRequestOrigins& operator=(UpdateOriginPoolRequestOrigins &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->authConf_ == nullptr && return this->enabled_ == nullptr && return this->header_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr
        && return this->weight_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateOriginPoolRequestOrigins& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // authConf Field Functions 
    bool hasAuthConf() const { return this->authConf_ != nullptr;};
    void deleteAuthConf() { this->authConf_ = nullptr;};
    inline const Models::UpdateOriginPoolRequestOriginsAuthConf & authConf() const { DARABONBA_PTR_GET_CONST(authConf_, Models::UpdateOriginPoolRequestOriginsAuthConf) };
    inline Models::UpdateOriginPoolRequestOriginsAuthConf authConf() { DARABONBA_PTR_GET(authConf_, Models::UpdateOriginPoolRequestOriginsAuthConf) };
    inline UpdateOriginPoolRequestOrigins& setAuthConf(const Models::UpdateOriginPoolRequestOriginsAuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
    inline UpdateOriginPoolRequestOrigins& setAuthConf(Models::UpdateOriginPoolRequestOriginsAuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateOriginPoolRequestOrigins& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline     const Darabonba::Json & header() const { DARABONBA_GET(header_) };
    Darabonba::Json & header() { DARABONBA_GET(header_) };
    inline UpdateOriginPoolRequestOrigins& setHeader(const Darabonba::Json & header) { DARABONBA_SET_VALUE(header_, header) };
    inline UpdateOriginPoolRequestOrigins& setHeader(Darabonba::Json & header) { DARABONBA_SET_RVALUE(header_, header) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateOriginPoolRequestOrigins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateOriginPoolRequestOrigins& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateOriginPoolRequestOrigins& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The address of the origin, e.g., www.example.com.
    std::shared_ptr<string> address_ = nullptr;
    // Authentication information. When the origin is OSS or S3 and requires authentication, you need to pass the related configuration information for authentication.
    std::shared_ptr<Models::UpdateOriginPoolRequestOriginsAuthConf> authConf_ = nullptr;
    // Whether the origin is enabled:
    // 
    // - true: Enabled;
    // - false: Disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The request header to be included when fetching from the origin, supporting only Host.
    Darabonba::Json header_ = nullptr;
    // The name of the origin, which must be unique under one origin pool.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the origin:
    // 
    // - ip_domain: IP or domain type origin;
    // - OSS: OSS address origin;
    // - S3: AWS S3 origin.
    std::shared_ptr<string> type_ = nullptr;
    // The weight, an integer between 0 and 100.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
