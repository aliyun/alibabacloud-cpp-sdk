// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetEnrolledAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnrolledAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnrolledAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetEnrolledAccountRequest() = default ;
    GetEnrolledAccountRequest(const GetEnrolledAccountRequest &) = default ;
    GetEnrolledAccountRequest(GetEnrolledAccountRequest &&) = default ;
    GetEnrolledAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnrolledAccountRequest() = default ;
    GetEnrolledAccountRequest& operator=(const GetEnrolledAccountRequest &) = default ;
    GetEnrolledAccountRequest& operator=(GetEnrolledAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountUid_ == nullptr
        && return this->regionId_ == nullptr; };
    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t accountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline GetEnrolledAccountRequest& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEnrolledAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The account ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> accountUid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
