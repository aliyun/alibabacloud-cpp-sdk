// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GOTOPRESETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GOTOPRESETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class GotoPresetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GotoPresetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PresetId, presetId_);
    };
    friend void from_json(const Darabonba::Json& j, GotoPresetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PresetId, presetId_);
    };
    GotoPresetRequest() = default ;
    GotoPresetRequest(const GotoPresetRequest &) = default ;
    GotoPresetRequest(GotoPresetRequest &&) = default ;
    GotoPresetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GotoPresetRequest() = default ;
    GotoPresetRequest& operator=(const GotoPresetRequest &) = default ;
    GotoPresetRequest& operator=(GotoPresetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->ownerId_ == nullptr && this->presetId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GotoPresetRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GotoPresetRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // presetId Field Functions 
    bool hasPresetId() const { return this->presetId_ != nullptr;};
    void deletePresetId() { this->presetId_ = nullptr;};
    inline string getPresetId() const { DARABONBA_PTR_GET_DEFAULT(presetId_, "") };
    inline GotoPresetRequest& setPresetId(string presetId) { DARABONBA_PTR_SET_VALUE(presetId_, presetId) };


  protected:
    // This parameter is required.
    shared_ptr<string> id_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> presetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
