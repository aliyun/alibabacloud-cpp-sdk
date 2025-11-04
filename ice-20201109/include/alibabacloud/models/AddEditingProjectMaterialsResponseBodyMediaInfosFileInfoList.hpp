// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODYMEDIAINFOSFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODYMEDIAINFOSFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
    };
    AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList(const AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList &) = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList(AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList &&) = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList() = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList& operator=(const AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList &) = default ;
    AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList& operator=(AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileBasicInfo_ == nullptr; };
    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo & fileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo) };
    inline Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo fileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo) };
    inline AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList& setFileBasicInfo(const Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoList& setFileBasicInfo(Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


  protected:
    // The basic information of the file, including the duration and size.
    std::shared_ptr<Models::AddEditingProjectMaterialsResponseBodyMediaInfosFileInfoListFileBasicInfo> fileBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
