// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASETRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASETRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class DeleteDataSetRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataSetRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_TO_JSON(DataSetRecordIds, dataSetRecordIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataSetRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_FROM_JSON(DataSetRecordIds, dataSetRecordIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    DeleteDataSetRecordRequest() = default ;
    DeleteDataSetRecordRequest(const DeleteDataSetRecordRequest &) = default ;
    DeleteDataSetRecordRequest(DeleteDataSetRecordRequest &&) = default ;
    DeleteDataSetRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataSetRecordRequest() = default ;
    DeleteDataSetRecordRequest& operator=(const DeleteDataSetRecordRequest &) = default ;
    DeleteDataSetRecordRequest& operator=(DeleteDataSetRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSetId_ == nullptr
        && this->dataSetRecordIds_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline string getDataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
    inline DeleteDataSetRecordRequest& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // dataSetRecordIds Field Functions 
    bool hasDataSetRecordIds() const { return this->dataSetRecordIds_ != nullptr;};
    void deleteDataSetRecordIds() { this->dataSetRecordIds_ = nullptr;};
    inline string getDataSetRecordIds() const { DARABONBA_PTR_GET_DEFAULT(dataSetRecordIds_, "") };
    inline DeleteDataSetRecordRequest& setDataSetRecordIds(string dataSetRecordIds) { DARABONBA_PTR_SET_VALUE(dataSetRecordIds_, dataSetRecordIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteDataSetRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDataSetRecordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DeleteDataSetRecordRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataSetId_ {};
    // This parameter is required.
    shared_ptr<string> dataSetRecordIds_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
