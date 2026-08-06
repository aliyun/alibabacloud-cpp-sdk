// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetVpcConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(trustedVpcs, trustedVpcs_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(trustedVpcs, trustedVpcs_);
    };
    GetVpcConfigResponseBody() = default ;
    GetVpcConfigResponseBody(const GetVpcConfigResponseBody &) = default ;
    GetVpcConfigResponseBody(GetVpcConfigResponseBody &&) = default ;
    GetVpcConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcConfigResponseBody() = default ;
    GetVpcConfigResponseBody& operator=(const GetVpcConfigResponseBody &) = default ;
    GetVpcConfigResponseBody& operator=(GetVpcConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrustedVpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrustedVpcs& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(extendedOptions, extendedOptions_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, TrustedVpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(extendedOptions, extendedOptions_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      TrustedVpcs() = default ;
      TrustedVpcs(const TrustedVpcs &) = default ;
      TrustedVpcs(TrustedVpcs &&) = default ;
      TrustedVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrustedVpcs() = default ;
      TrustedVpcs& operator=(const TrustedVpcs &) = default ;
      TrustedVpcs& operator=(TrustedVpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->extendedOptions_ == nullptr && this->vpcId_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline TrustedVpcs& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // extendedOptions Field Functions 
      bool hasExtendedOptions() const { return this->extendedOptions_ != nullptr;};
      void deleteExtendedOptions() { this->extendedOptions_ = nullptr;};
      inline const map<string, string> & getExtendedOptions() const { DARABONBA_PTR_GET_CONST(extendedOptions_, map<string, string>) };
      inline map<string, string> getExtendedOptions() { DARABONBA_PTR_GET(extendedOptions_, map<string, string>) };
      inline TrustedVpcs& setExtendedOptions(const map<string, string> & extendedOptions) { DARABONBA_PTR_SET_VALUE(extendedOptions_, extendedOptions) };
      inline TrustedVpcs& setExtendedOptions(map<string, string> && extendedOptions) { DARABONBA_PTR_SET_RVALUE(extendedOptions_, extendedOptions) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline TrustedVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The time when the VPC was created, in UNIX timestamp milliseconds.
      shared_ptr<int64_t> createdAt_ {};
      // List of configuration items.
      shared_ptr<map<string, string>> extendedOptions_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->trustedVpcs_ == nullptr; };
    // trustedVpcs Field Functions 
    bool hasTrustedVpcs() const { return this->trustedVpcs_ != nullptr;};
    void deleteTrustedVpcs() { this->trustedVpcs_ = nullptr;};
    inline const vector<GetVpcConfigResponseBody::TrustedVpcs> & getTrustedVpcs() const { DARABONBA_PTR_GET_CONST(trustedVpcs_, vector<GetVpcConfigResponseBody::TrustedVpcs>) };
    inline vector<GetVpcConfigResponseBody::TrustedVpcs> getTrustedVpcs() { DARABONBA_PTR_GET(trustedVpcs_, vector<GetVpcConfigResponseBody::TrustedVpcs>) };
    inline GetVpcConfigResponseBody& setTrustedVpcs(const vector<GetVpcConfigResponseBody::TrustedVpcs> & trustedVpcs) { DARABONBA_PTR_SET_VALUE(trustedVpcs_, trustedVpcs) };
    inline GetVpcConfigResponseBody& setTrustedVpcs(vector<GetVpcConfigResponseBody::TrustedVpcs> && trustedVpcs) { DARABONBA_PTR_SET_RVALUE(trustedVpcs_, trustedVpcs) };


  protected:
    // List of trusted VPCs.
    shared_ptr<vector<GetVpcConfigResponseBody::TrustedVpcs>> trustedVpcs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
