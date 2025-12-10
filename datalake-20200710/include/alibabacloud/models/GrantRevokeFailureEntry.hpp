// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTREVOKEFAILUREENTRY_HPP_
#define ALIBABACLOUD_MODELS_GRANTREVOKEFAILUREENTRY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ErrorDetail.hpp>
#include <alibabacloud/models/GrantRevokeEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GrantRevokeFailureEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantRevokeFailureEntry& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_TO_JSON(GrantRevokeEntry, grantRevokeEntry_);
    };
    friend void from_json(const Darabonba::Json& j, GrantRevokeFailureEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_FROM_JSON(GrantRevokeEntry, grantRevokeEntry_);
    };
    GrantRevokeFailureEntry() = default ;
    GrantRevokeFailureEntry(const GrantRevokeFailureEntry &) = default ;
    GrantRevokeFailureEntry(GrantRevokeFailureEntry &&) = default ;
    GrantRevokeFailureEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantRevokeFailureEntry() = default ;
    GrantRevokeFailureEntry& operator=(const GrantRevokeFailureEntry &) = default ;
    GrantRevokeFailureEntry& operator=(GrantRevokeFailureEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorDetail_ == nullptr
        && return this->grantRevokeEntry_ == nullptr; };
    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline const ErrorDetail & errorDetail() const { DARABONBA_PTR_GET_CONST(errorDetail_, ErrorDetail) };
    inline ErrorDetail errorDetail() { DARABONBA_PTR_GET(errorDetail_, ErrorDetail) };
    inline GrantRevokeFailureEntry& setErrorDetail(const ErrorDetail & errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };
    inline GrantRevokeFailureEntry& setErrorDetail(ErrorDetail && errorDetail) { DARABONBA_PTR_SET_RVALUE(errorDetail_, errorDetail) };


    // grantRevokeEntry Field Functions 
    bool hasGrantRevokeEntry() const { return this->grantRevokeEntry_ != nullptr;};
    void deleteGrantRevokeEntry() { this->grantRevokeEntry_ = nullptr;};
    inline const GrantRevokeEntry & grantRevokeEntry() const { DARABONBA_PTR_GET_CONST(grantRevokeEntry_, GrantRevokeEntry) };
    inline GrantRevokeEntry grantRevokeEntry() { DARABONBA_PTR_GET(grantRevokeEntry_, GrantRevokeEntry) };
    inline GrantRevokeFailureEntry& setGrantRevokeEntry(const GrantRevokeEntry & grantRevokeEntry) { DARABONBA_PTR_SET_VALUE(grantRevokeEntry_, grantRevokeEntry) };
    inline GrantRevokeFailureEntry& setGrantRevokeEntry(GrantRevokeEntry && grantRevokeEntry) { DARABONBA_PTR_SET_RVALUE(grantRevokeEntry_, grantRevokeEntry) };


  protected:
    std::shared_ptr<ErrorDetail> errorDetail_ = nullptr;
    std::shared_ptr<GrantRevokeEntry> grantRevokeEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
