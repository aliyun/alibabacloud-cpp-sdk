// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRDDEFAULTSYNCLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRDDEFAULTSYNCLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListRdDefaultSyncListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRdDefaultSyncListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FolderIds, folderIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListRdDefaultSyncListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderIds, folderIds_);
    };
    ListRdDefaultSyncListResponseBodyData() = default ;
    ListRdDefaultSyncListResponseBodyData(const ListRdDefaultSyncListResponseBodyData &) = default ;
    ListRdDefaultSyncListResponseBodyData(ListRdDefaultSyncListResponseBodyData &&) = default ;
    ListRdDefaultSyncListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRdDefaultSyncListResponseBodyData() = default ;
    ListRdDefaultSyncListResponseBodyData& operator=(const ListRdDefaultSyncListResponseBodyData &) = default ;
    ListRdDefaultSyncListResponseBodyData& operator=(ListRdDefaultSyncListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderIds_ == nullptr; };
    // folderIds Field Functions 
    bool hasFolderIds() const { return this->folderIds_ != nullptr;};
    void deleteFolderIds() { this->folderIds_ = nullptr;};
    inline string folderIds() const { DARABONBA_PTR_GET_DEFAULT(folderIds_, "") };
    inline ListRdDefaultSyncListResponseBodyData& setFolderIds(string folderIds) { DARABONBA_PTR_SET_VALUE(folderIds_, folderIds) };


  protected:
    // The IDs of the folders in the resource directory.
    std::shared_ptr<string> folderIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
