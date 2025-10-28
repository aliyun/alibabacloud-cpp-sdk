// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UnbindSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DeleteListener, deleteListener_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DeleteListener, deleteListener_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UnbindSlbRequest() = default ;
    UnbindSlbRequest(const UnbindSlbRequest &) = default ;
    UnbindSlbRequest(UnbindSlbRequest &&) = default ;
    UnbindSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindSlbRequest() = default ;
    UnbindSlbRequest& operator=(const UnbindSlbRequest &) = default ;
    UnbindSlbRequest& operator=(UnbindSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->deleteListener_ == nullptr && return this->slbId_ == nullptr && return this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UnbindSlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deleteListener Field Functions 
    bool hasDeleteListener() const { return this->deleteListener_ != nullptr;};
    void deleteDeleteListener() { this->deleteListener_ = nullptr;};
    inline string deleteListener() const { DARABONBA_PTR_GET_DEFAULT(deleteListener_, "") };
    inline UnbindSlbRequest& setDeleteListener(string deleteListener) { DARABONBA_PTR_SET_VALUE(deleteListener_, deleteListener) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline UnbindSlbRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UnbindSlbRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // Specifies whether to remove the configured listeners. Valid values:
    // 
    // *   true: removes the configured listeners.
    // *   false: does not remove the configured listeners.
    std::shared_ptr<string> deleteListener_ = nullptr;
    // The ID of the SLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> slbId_ = nullptr;
    // The network type of the SLB instance. Valid values:
    // 
    // *   **internet**: Internet-facing SLB instance
    // *   **intranet**: internal-facing SLB instance
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
