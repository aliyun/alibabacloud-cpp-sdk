// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEAGACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEAGACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ReleaseAgAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseAgAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseAgAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
    };
    ReleaseAgAccountRequest() = default ;
    ReleaseAgAccountRequest(const ReleaseAgAccountRequest &) = default ;
    ReleaseAgAccountRequest(ReleaseAgAccountRequest &&) = default ;
    ReleaseAgAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseAgAccountRequest() = default ;
    ReleaseAgAccountRequest& operator=(const ReleaseAgAccountRequest &) = default ;
    ReleaseAgAccountRequest& operator=(ReleaseAgAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mpk_ == nullptr
        && this->pk_ == nullptr && this->releaseReason_ == nullptr; };
    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline ReleaseAgAccountRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline ReleaseAgAccountRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // releaseReason Field Functions 
    bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
    void deleteReleaseReason() { this->releaseReason_ = nullptr;};
    inline string getReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
    inline ReleaseAgAccountRequest& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


  protected:
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    shared_ptr<string> releaseReason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
