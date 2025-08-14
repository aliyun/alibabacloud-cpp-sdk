// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODYMEDIAINFOS_HPP_
#define ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODYMEDIAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList.hpp>
#include <alibabacloud/models/AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddEditingProjectMaterialsResponseBodyMediaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEditingProjectMaterialsResponseBodyMediaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, AddEditingProjectMaterialsResponseBodyMediaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    AddEditingProjectMaterialsResponseBodyMediaInfos() = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfos(const AddEditingProjectMaterialsResponseBodyMediaInfos &) = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfos(AddEditingProjectMaterialsResponseBodyMediaInfos &&) = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEditingProjectMaterialsResponseBodyMediaInfos() = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfos& operator=(const AddEditingProjectMaterialsResponseBodyMediaInfos &) = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfos& operator=(AddEditingProjectMaterialsResponseBodyMediaInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileInfoList_ != nullptr
        && this->mediaBasicInfo_ != nullptr && this->mediaId_ != nullptr; };
    // fileInfoList Field Functions 
    bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
    void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
    inline const vector<Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList> & fileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>) };
    inline vector<Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList> fileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>) };
    inline AddEditingProjectMaterialsResponseBodyMediaInfos& setFileInfoList(const vector<Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
    inline AddEditingProjectMaterialsResponseBodyMediaInfos& setFileInfoList(vector<Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


    // mediaBasicInfo Field Functions 
    bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
    void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
    inline const Models::AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo & mediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, Models::AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo) };
    inline Models::AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo mediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, Models::AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo) };
    inline AddEditingProjectMaterialsResponseBodyMediaInfos& setMediaBasicInfo(const Models::AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
    inline AddEditingProjectMaterialsResponseBodyMediaInfos& setMediaBasicInfo(Models::AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline AddEditingProjectMaterialsResponseBodyMediaInfos& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // FileInfos
    std::shared_ptr<vector<Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList>> fileInfoList_ = nullptr;
    // The basic information of the media assets.
    std::shared_ptr<Models::AddEditingProjectMaterialsResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
