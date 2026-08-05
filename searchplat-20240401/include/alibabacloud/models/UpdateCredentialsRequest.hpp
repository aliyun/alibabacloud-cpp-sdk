// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class UpdateCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateCredentialsRequest() = default ;
    UpdateCredentialsRequest(const UpdateCredentialsRequest &) = default ;
    UpdateCredentialsRequest(UpdateCredentialsRequest &&) = default ;
    UpdateCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialsRequest() = default ;
    UpdateCredentialsRequest& operator=(const UpdateCredentialsRequest &) = default ;
    UpdateCredentialsRequest& operator=(UpdateCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->dryRun_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateCredentialsRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateCredentialsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // Specifies whether the credential is enabled. Valid values:
    // 
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> enabled_ {};
    // Specifies whether to perform a dry run.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
