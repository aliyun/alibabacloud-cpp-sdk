// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRDTREERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRDTREERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetRdTreeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRdTreeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(FolderName, folderName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRdTreeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(FolderName, folderName_);
    };
    GetRdTreeResponseBodyData() = default ;
    GetRdTreeResponseBodyData(const GetRdTreeResponseBodyData &) = default ;
    GetRdTreeResponseBodyData(GetRdTreeResponseBodyData &&) = default ;
    GetRdTreeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRdTreeResponseBodyData() = default ;
    GetRdTreeResponseBodyData& operator=(const GetRdTreeResponseBodyData &) = default ;
    GetRdTreeResponseBodyData& operator=(GetRdTreeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->children_ != nullptr
        && this->folderId_ != nullptr && this->folderName_ != nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Darabonba::Json> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> children() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
    inline GetRdTreeResponseBodyData& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline GetRdTreeResponseBodyData& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetRdTreeResponseBodyData& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string folderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline GetRdTreeResponseBodyData& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


  protected:
    // The subfolder.
    std::shared_ptr<vector<Darabonba::Json>> children_ = nullptr;
    // The ID of the folder in the resource directory.
    std::shared_ptr<string> folderId_ = nullptr;
    // The name of the folder.
    std::shared_ptr<string> folderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
