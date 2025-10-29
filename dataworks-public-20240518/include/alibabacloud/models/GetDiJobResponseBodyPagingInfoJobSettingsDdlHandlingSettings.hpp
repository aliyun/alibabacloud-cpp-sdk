// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGSDDLHANDLINGSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGSDDLHANDLINGSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings(const GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings(GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings& operator=(const GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings& operator=(GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->type_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The processing policy for a specific type of DDL message. Valid values:
    // 
    // *   Ignore: ignores a DDL message.
    // *   Critical: reports an error for a DDL message.
    // *   Normal: normally processes a DDL message.
    std::shared_ptr<string> action_ = nullptr;
    // The DDL operation type. Valid values:
    // 
    // *   RenameColumn
    // *   ModifyColumn
    // *   CreateTable
    // *   TruncateTable
    // *   DropTable
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
