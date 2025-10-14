// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataSetRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSetRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetFileName, dataSetFileName_);
      DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_TO_JSON(DataSetRecords, dataSetRecords_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSetRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetFileName, dataSetFileName_);
      DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_FROM_JSON(DataSetRecords, dataSetRecords_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataSetRecordRequest() = default ;
    UpdateDataSetRecordRequest(const UpdateDataSetRecordRequest &) = default ;
    UpdateDataSetRecordRequest(UpdateDataSetRecordRequest &&) = default ;
    UpdateDataSetRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSetRecordRequest() = default ;
    UpdateDataSetRecordRequest& operator=(const UpdateDataSetRecordRequest &) = default ;
    UpdateDataSetRecordRequest& operator=(UpdateDataSetRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSetFileName_ == nullptr
        && return this->dataSetId_ == nullptr && return this->dataSetRecords_ == nullptr && return this->lang_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataSetFileName Field Functions 
    bool hasDataSetFileName() const { return this->dataSetFileName_ != nullptr;};
    void deleteDataSetFileName() { this->dataSetFileName_ = nullptr;};
    inline string dataSetFileName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFileName_, "") };
    inline UpdateDataSetRecordRequest& setDataSetFileName(string dataSetFileName) { DARABONBA_PTR_SET_VALUE(dataSetFileName_, dataSetFileName) };


    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline string dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
    inline UpdateDataSetRecordRequest& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // dataSetRecords Field Functions 
    bool hasDataSetRecords() const { return this->dataSetRecords_ != nullptr;};
    void deleteDataSetRecords() { this->dataSetRecords_ = nullptr;};
    inline string dataSetRecords() const { DARABONBA_PTR_GET_DEFAULT(dataSetRecords_, "") };
    inline UpdateDataSetRecordRequest& setDataSetRecords(string dataSetRecords) { DARABONBA_PTR_SET_VALUE(dataSetRecords_, dataSetRecords) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataSetRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataSetRecordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataSetRecordRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataSetFileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataSetId_ = nullptr;
    std::shared_ptr<string> dataSetRecords_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
