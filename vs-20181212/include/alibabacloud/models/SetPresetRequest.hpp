// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPRESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPRESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class SetPresetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPresetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PresetId, presetId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPresetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PresetId, presetId_);
    };
    SetPresetRequest() = default ;
    SetPresetRequest(const SetPresetRequest &) = default ;
    SetPresetRequest(SetPresetRequest &&) = default ;
    SetPresetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPresetRequest() = default ;
    SetPresetRequest& operator=(const SetPresetRequest &) = default ;
    SetPresetRequest& operator=(SetPresetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->ownerId_ != nullptr && this->presetId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SetPresetRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetPresetRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // presetId Field Functions 
    bool hasPresetId() const { return this->presetId_ != nullptr;};
    void deletePresetId() { this->presetId_ = nullptr;};
    inline string presetId() const { DARABONBA_PTR_GET_DEFAULT(presetId_, "") };
    inline SetPresetRequest& setPresetId(string presetId) { DARABONBA_PTR_SET_VALUE(presetId_, presetId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> presetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
