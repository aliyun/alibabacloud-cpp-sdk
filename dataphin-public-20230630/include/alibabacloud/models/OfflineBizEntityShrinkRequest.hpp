// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEBIZENTITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEBIZENTITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflineBizEntityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineBizEntityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineCommand, offlineCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineBizEntityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineCommand, offlineCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OfflineBizEntityShrinkRequest() = default ;
    OfflineBizEntityShrinkRequest(const OfflineBizEntityShrinkRequest &) = default ;
    OfflineBizEntityShrinkRequest(OfflineBizEntityShrinkRequest &&) = default ;
    OfflineBizEntityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineBizEntityShrinkRequest() = default ;
    OfflineBizEntityShrinkRequest& operator=(const OfflineBizEntityShrinkRequest &) = default ;
    OfflineBizEntityShrinkRequest& operator=(OfflineBizEntityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offlineCommandShrink_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // offlineCommandShrink Field Functions 
    bool hasOfflineCommandShrink() const { return this->offlineCommandShrink_ != nullptr;};
    void deleteOfflineCommandShrink() { this->offlineCommandShrink_ = nullptr;};
    inline string offlineCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(offlineCommandShrink_, "") };
    inline OfflineBizEntityShrinkRequest& setOfflineCommandShrink(string offlineCommandShrink) { DARABONBA_PTR_SET_VALUE(offlineCommandShrink_, offlineCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OfflineBizEntityShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> offlineCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
