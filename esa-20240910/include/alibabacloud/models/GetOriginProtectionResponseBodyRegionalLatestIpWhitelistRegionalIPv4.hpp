// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALLATESTIPWHITELISTREGIONALIPV4_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPROTECTIONRESPONSEBODYREGIONALLATESTIPWHITELISTREGIONALIPV4_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4() = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4(const GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4 &) = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4(GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4 &&) = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4() = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4& operator=(const GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4 &) = default ;
    GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4& operator=(GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->region_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetOriginProtectionResponseBodyRegionalLatestIPWhitelistRegionalIPv4& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    std::shared_ptr<string> cidr_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
