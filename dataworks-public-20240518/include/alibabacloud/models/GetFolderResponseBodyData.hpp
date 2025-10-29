// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOLDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFOLDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFolderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFolderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderPath, folderPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetFolderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderPath, folderPath_);
    };
    GetFolderResponseBodyData() = default ;
    GetFolderResponseBodyData(const GetFolderResponseBodyData &) = default ;
    GetFolderResponseBodyData(GetFolderResponseBodyData &&) = default ;
    GetFolderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFolderResponseBodyData() = default ;
    GetFolderResponseBodyData& operator=(const GetFolderResponseBodyData &) = default ;
    GetFolderResponseBodyData& operator=(GetFolderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && return this->folderPath_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetFolderResponseBodyData& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderPath Field Functions 
    bool hasFolderPath() const { return this->folderPath_ != nullptr;};
    void deleteFolderPath() { this->folderPath_ = nullptr;};
    inline string folderPath() const { DARABONBA_PTR_GET_DEFAULT(folderPath_, "") };
    inline GetFolderResponseBodyData& setFolderPath(string folderPath) { DARABONBA_PTR_SET_VALUE(folderPath_, folderPath) };


  protected:
    // The ID of the folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The path of the folder.
    std::shared_ptr<string> folderPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
