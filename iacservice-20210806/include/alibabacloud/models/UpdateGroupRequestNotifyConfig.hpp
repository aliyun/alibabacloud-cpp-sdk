// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPREQUESTNOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPREQUESTNOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateGroupRequestNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupRequestNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(notifyPath, notifyPath_);
      DARABONBA_PTR_TO_JSON(notifyType, notifyType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupRequestNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(notifyPath, notifyPath_);
      DARABONBA_PTR_FROM_JSON(notifyType, notifyType_);
    };
    UpdateGroupRequestNotifyConfig() = default ;
    UpdateGroupRequestNotifyConfig(const UpdateGroupRequestNotifyConfig &) = default ;
    UpdateGroupRequestNotifyConfig(UpdateGroupRequestNotifyConfig &&) = default ;
    UpdateGroupRequestNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupRequestNotifyConfig() = default ;
    UpdateGroupRequestNotifyConfig& operator=(const UpdateGroupRequestNotifyConfig &) = default ;
    UpdateGroupRequestNotifyConfig& operator=(UpdateGroupRequestNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notifyPath_ == nullptr
        && return this->notifyType_ == nullptr; };
    // notifyPath Field Functions 
    bool hasNotifyPath() const { return this->notifyPath_ != nullptr;};
    void deleteNotifyPath() { this->notifyPath_ = nullptr;};
    inline string notifyPath() const { DARABONBA_PTR_GET_DEFAULT(notifyPath_, "") };
    inline UpdateGroupRequestNotifyConfig& setNotifyPath(string notifyPath) { DARABONBA_PTR_SET_VALUE(notifyPath_, notifyPath) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline UpdateGroupRequestNotifyConfig& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


  protected:
    std::shared_ptr<string> notifyPath_ = nullptr;
    std::shared_ptr<string> notifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
