// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOMPACTIONSERVICESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOMPACTIONSERVICESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyCompactionServiceSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCompactionServiceSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableCompactionService, enableCompactionService_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCompactionServiceSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableCompactionService, enableCompactionService_);
    };
    ModifyCompactionServiceSwitchRequest() = default ;
    ModifyCompactionServiceSwitchRequest(const ModifyCompactionServiceSwitchRequest &) = default ;
    ModifyCompactionServiceSwitchRequest(ModifyCompactionServiceSwitchRequest &&) = default ;
    ModifyCompactionServiceSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCompactionServiceSwitchRequest() = default ;
    ModifyCompactionServiceSwitchRequest& operator=(const ModifyCompactionServiceSwitchRequest &) = default ;
    ModifyCompactionServiceSwitchRequest& operator=(ModifyCompactionServiceSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->enableCompactionService_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyCompactionServiceSwitchRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableCompactionService Field Functions 
    bool hasEnableCompactionService() const { return this->enableCompactionService_ != nullptr;};
    void deleteEnableCompactionService() { this->enableCompactionService_ = nullptr;};
    inline bool enableCompactionService() const { DARABONBA_PTR_GET_DEFAULT(enableCompactionService_, false) };
    inline ModifyCompactionServiceSwitchRequest& setEnableCompactionService(bool enableCompactionService) { DARABONBA_PTR_SET_VALUE(enableCompactionService_, enableCompactionService) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to enable the remote build feature.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableCompactionService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
