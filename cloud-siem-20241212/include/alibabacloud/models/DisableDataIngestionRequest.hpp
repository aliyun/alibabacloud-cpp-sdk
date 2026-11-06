// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEDATAINGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEDATAINGESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class DisableDataIngestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableDataIngestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, DisableDataIngestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    DisableDataIngestionRequest() = default ;
    DisableDataIngestionRequest(const DisableDataIngestionRequest &) = default ;
    DisableDataIngestionRequest(DisableDataIngestionRequest &&) = default ;
    DisableDataIngestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableDataIngestionRequest() = default ;
    DisableDataIngestionRequest& operator=(const DisableDataIngestionRequest &) = default ;
    DisableDataIngestionRequest& operator=(DisableDataIngestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionId_ == nullptr
        && this->lang_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // dataIngestionId Field Functions 
    bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
    void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
    inline string getDataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
    inline DisableDataIngestionRequest& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DisableDataIngestionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableDataIngestionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DisableDataIngestionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> dataIngestionId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
