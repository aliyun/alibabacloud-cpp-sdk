// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODYPASSWORDSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODYPASSWORDSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class GetLoginTokenResponseBodyPasswordStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginTokenResponseBodyPasswordStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(TenantAlternativeChars, tenantAlternativeChars_);
      DARABONBA_PTR_TO_JSON(TenantPasswordLength, tenantPasswordLength_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginTokenResponseBodyPasswordStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantAlternativeChars, tenantAlternativeChars_);
      DARABONBA_PTR_FROM_JSON(TenantPasswordLength, tenantPasswordLength_);
    };
    GetLoginTokenResponseBodyPasswordStrategy() = default ;
    GetLoginTokenResponseBodyPasswordStrategy(const GetLoginTokenResponseBodyPasswordStrategy &) = default ;
    GetLoginTokenResponseBodyPasswordStrategy(GetLoginTokenResponseBodyPasswordStrategy &&) = default ;
    GetLoginTokenResponseBodyPasswordStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginTokenResponseBodyPasswordStrategy() = default ;
    GetLoginTokenResponseBodyPasswordStrategy& operator=(const GetLoginTokenResponseBodyPasswordStrategy &) = default ;
    GetLoginTokenResponseBodyPasswordStrategy& operator=(GetLoginTokenResponseBodyPasswordStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantAlternativeChars_ == nullptr
        && return this->tenantPasswordLength_ == nullptr; };
    // tenantAlternativeChars Field Functions 
    bool hasTenantAlternativeChars() const { return this->tenantAlternativeChars_ != nullptr;};
    void deleteTenantAlternativeChars() { this->tenantAlternativeChars_ = nullptr;};
    inline const vector<string> & tenantAlternativeChars() const { DARABONBA_PTR_GET_CONST(tenantAlternativeChars_, vector<string>) };
    inline vector<string> tenantAlternativeChars() { DARABONBA_PTR_GET(tenantAlternativeChars_, vector<string>) };
    inline GetLoginTokenResponseBodyPasswordStrategy& setTenantAlternativeChars(const vector<string> & tenantAlternativeChars) { DARABONBA_PTR_SET_VALUE(tenantAlternativeChars_, tenantAlternativeChars) };
    inline GetLoginTokenResponseBodyPasswordStrategy& setTenantAlternativeChars(vector<string> && tenantAlternativeChars) { DARABONBA_PTR_SET_RVALUE(tenantAlternativeChars_, tenantAlternativeChars) };


    // tenantPasswordLength Field Functions 
    bool hasTenantPasswordLength() const { return this->tenantPasswordLength_ != nullptr;};
    void deleteTenantPasswordLength() { this->tenantPasswordLength_ = nullptr;};
    inline int32_t tenantPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(tenantPasswordLength_, 0) };
    inline GetLoginTokenResponseBodyPasswordStrategy& setTenantPasswordLength(int32_t tenantPasswordLength) { DARABONBA_PTR_SET_VALUE(tenantPasswordLength_, tenantPasswordLength) };


  protected:
    std::shared_ptr<vector<string>> tenantAlternativeChars_ = nullptr;
    std::shared_ptr<int32_t> tenantPasswordLength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
