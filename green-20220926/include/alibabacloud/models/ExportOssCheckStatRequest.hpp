// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTOSSCHECKSTATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTOSSCHECKSTATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ExportOssCheckStatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportOssCheckStatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ByMonth, byMonth_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ParentTaskId, parentTaskId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ExportOssCheckStatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ByMonth, byMonth_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ParentTaskId, parentTaskId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    ExportOssCheckStatRequest() = default ;
    ExportOssCheckStatRequest(const ExportOssCheckStatRequest &) = default ;
    ExportOssCheckStatRequest(ExportOssCheckStatRequest &&) = default ;
    ExportOssCheckStatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportOssCheckStatRequest() = default ;
    ExportOssCheckStatRequest& operator=(const ExportOssCheckStatRequest &) = default ;
    ExportOssCheckStatRequest& operator=(ExportOssCheckStatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->byMonth_ == nullptr
        && this->endDate_ == nullptr && this->parentTaskId_ == nullptr && this->regionId_ == nullptr && this->startDate_ == nullptr; };
    // byMonth Field Functions 
    bool hasByMonth() const { return this->byMonth_ != nullptr;};
    void deleteByMonth() { this->byMonth_ = nullptr;};
    inline bool getByMonth() const { DARABONBA_PTR_GET_DEFAULT(byMonth_, false) };
    inline ExportOssCheckStatRequest& setByMonth(bool byMonth) { DARABONBA_PTR_SET_VALUE(byMonth_, byMonth) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ExportOssCheckStatRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // parentTaskId Field Functions 
    bool hasParentTaskId() const { return this->parentTaskId_ != nullptr;};
    void deleteParentTaskId() { this->parentTaskId_ = nullptr;};
    inline string getParentTaskId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskId_, "") };
    inline ExportOssCheckStatRequest& setParentTaskId(string parentTaskId) { DARABONBA_PTR_SET_VALUE(parentTaskId_, parentTaskId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportOssCheckStatRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ExportOssCheckStatRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Whether to support monthly indexing. Values: -true: supported. -false: not supported.
    shared_ptr<bool> byMonth_ {};
    // End time of the query, in the format yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> endDate_ {};
    // OSS detection task ID.
    shared_ptr<string> parentTaskId_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Start time of the query, in the format yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
