// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLISTFILEPARAMETEREXPLAINLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLISTFILEPARAMETEREXPLAINLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList& obj) { 
      DARABONBA_PTR_TO_JSON(BaseFile, baseFile_);
      DARABONBA_PTR_TO_JSON(CycleOnce, cycleOnce_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileParamName, fileParamName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseFile, baseFile_);
      DARABONBA_PTR_FROM_JSON(CycleOnce, cycleOnce_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileParamName, fileParamName_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList(const GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList(GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList& operator=(GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseFile_ == nullptr
        && return this->cycleOnce_ == nullptr && return this->fileName_ == nullptr && return this->fileParamName_ == nullptr; };
    // baseFile Field Functions 
    bool hasBaseFile() const { return this->baseFile_ != nullptr;};
    void deleteBaseFile() { this->baseFile_ = nullptr;};
    inline bool baseFile() const { DARABONBA_PTR_GET_DEFAULT(baseFile_, false) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList& setBaseFile(bool baseFile) { DARABONBA_PTR_SET_VALUE(baseFile_, baseFile) };


    // cycleOnce Field Functions 
    bool hasCycleOnce() const { return this->cycleOnce_ != nullptr;};
    void deleteCycleOnce() { this->cycleOnce_ = nullptr;};
    inline bool cycleOnce() const { DARABONBA_PTR_GET_DEFAULT(cycleOnce_, false) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList& setCycleOnce(bool cycleOnce) { DARABONBA_PTR_SET_VALUE(cycleOnce_, cycleOnce) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileParamName Field Functions 
    bool hasFileParamName() const { return this->fileParamName_ != nullptr;};
    void deleteFileParamName() { this->fileParamName_ = nullptr;};
    inline string fileParamName() const { DARABONBA_PTR_GET_DEFAULT(fileParamName_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList& setFileParamName(string fileParamName) { DARABONBA_PTR_SET_VALUE(fileParamName_, fileParamName) };


  protected:
    // Indicates whether the file is used as the baseline file.
    std::shared_ptr<bool> baseFile_ = nullptr;
    // Indicates whether the parameters are used once.
    std::shared_ptr<bool> cycleOnce_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The parameters in the file.
    std::shared_ptr<string> fileParamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
