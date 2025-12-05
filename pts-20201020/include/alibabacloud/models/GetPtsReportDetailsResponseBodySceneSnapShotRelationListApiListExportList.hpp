// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLISTAPILISTEXPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLISTAPILISTEXPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ExportName, exportName_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(ExportValue, exportValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ExportName, exportName_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(ExportValue, exportValue_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList(const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList(GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList& operator=(GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->exportName_ == nullptr && return this->exportType_ == nullptr && return this->exportValue_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // exportName Field Functions 
    bool hasExportName() const { return this->exportName_ != nullptr;};
    void deleteExportName() { this->exportName_ = nullptr;};
    inline string exportName() const { DARABONBA_PTR_GET_DEFAULT(exportName_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList& setExportName(string exportName) { DARABONBA_PTR_SET_VALUE(exportName_, exportName) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // exportValue Field Functions 
    bool hasExportValue() const { return this->exportValue_ != nullptr;};
    void deleteExportValue() { this->exportValue_ = nullptr;};
    inline string exportValue() const { DARABONBA_PTR_GET_DEFAULT(exportValue_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList& setExportValue(string exportValue) { DARABONBA_PTR_SET_VALUE(exportValue_, exportValue) };


  protected:
    // The index of the export parameter.
    std::shared_ptr<string> count_ = nullptr;
    // The name of the export parameter.
    std::shared_ptr<string> exportName_ = nullptr;
    // The source of the export parameter.
    std::shared_ptr<string> exportType_ = nullptr;
    // The actual path from which you want to extract the export parameter values.
    std::shared_ptr<string> exportValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
