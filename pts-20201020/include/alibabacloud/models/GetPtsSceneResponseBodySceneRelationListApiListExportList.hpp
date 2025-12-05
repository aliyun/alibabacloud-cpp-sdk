// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENERELATIONLISTAPILISTEXPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENERELATIONLISTAPILISTEXPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneRelationListApiListExportList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneRelationListApiListExportList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ExportName, exportName_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(ExportValue, exportValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneRelationListApiListExportList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ExportName, exportName_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(ExportValue, exportValue_);
    };
    GetPtsSceneResponseBodySceneRelationListApiListExportList() = default ;
    GetPtsSceneResponseBodySceneRelationListApiListExportList(const GetPtsSceneResponseBodySceneRelationListApiListExportList &) = default ;
    GetPtsSceneResponseBodySceneRelationListApiListExportList(GetPtsSceneResponseBodySceneRelationListApiListExportList &&) = default ;
    GetPtsSceneResponseBodySceneRelationListApiListExportList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneRelationListApiListExportList() = default ;
    GetPtsSceneResponseBodySceneRelationListApiListExportList& operator=(const GetPtsSceneResponseBodySceneRelationListApiListExportList &) = default ;
    GetPtsSceneResponseBodySceneRelationListApiListExportList& operator=(GetPtsSceneResponseBodySceneRelationListApiListExportList &&) = default ;
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
    inline GetPtsSceneResponseBodySceneRelationListApiListExportList& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // exportName Field Functions 
    bool hasExportName() const { return this->exportName_ != nullptr;};
    void deleteExportName() { this->exportName_ = nullptr;};
    inline string exportName() const { DARABONBA_PTR_GET_DEFAULT(exportName_, "") };
    inline GetPtsSceneResponseBodySceneRelationListApiListExportList& setExportName(string exportName) { DARABONBA_PTR_SET_VALUE(exportName_, exportName) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline GetPtsSceneResponseBodySceneRelationListApiListExportList& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // exportValue Field Functions 
    bool hasExportValue() const { return this->exportValue_ != nullptr;};
    void deleteExportValue() { this->exportValue_ = nullptr;};
    inline string exportValue() const { DARABONBA_PTR_GET_DEFAULT(exportValue_, "") };
    inline GetPtsSceneResponseBodySceneRelationListApiListExportList& setExportValue(string exportValue) { DARABONBA_PTR_SET_VALUE(exportValue_, exportValue) };


  protected:
    // The number of items or entries related to the export operation.
    std::shared_ptr<string> count_ = nullptr;
    // The path where the exported value can be found.
    std::shared_ptr<string> exportName_ = nullptr;
    // The format in which data is exported.
    std::shared_ptr<string> exportType_ = nullptr;
    // The parameter that is exported.
    std::shared_ptr<string> exportValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
