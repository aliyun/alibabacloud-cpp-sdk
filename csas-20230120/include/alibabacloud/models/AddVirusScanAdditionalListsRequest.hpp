// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVIRUSSCANADDITIONALLISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDVIRUSSCANADDITIONALLISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class AddVirusScanAdditionalListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVirusScanAdditionalListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalLists, additionalLists_);
      DARABONBA_PTR_TO_JSON(DevType, devType_);
    };
    friend void from_json(const Darabonba::Json& j, AddVirusScanAdditionalListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalLists, additionalLists_);
      DARABONBA_PTR_FROM_JSON(DevType, devType_);
    };
    AddVirusScanAdditionalListsRequest() = default ;
    AddVirusScanAdditionalListsRequest(const AddVirusScanAdditionalListsRequest &) = default ;
    AddVirusScanAdditionalListsRequest(AddVirusScanAdditionalListsRequest &&) = default ;
    AddVirusScanAdditionalListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVirusScanAdditionalListsRequest() = default ;
    AddVirusScanAdditionalListsRequest& operator=(const AddVirusScanAdditionalListsRequest &) = default ;
    AddVirusScanAdditionalListsRequest& operator=(AddVirusScanAdditionalListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdditionalLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdditionalLists& obj) { 
        DARABONBA_PTR_TO_JSON(AdditionalType, additionalType_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(ListType, listType_);
      };
      friend void from_json(const Darabonba::Json& j, AdditionalLists& obj) { 
        DARABONBA_PTR_FROM_JSON(AdditionalType, additionalType_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(ListType, listType_);
      };
      AdditionalLists() = default ;
      AdditionalLists(const AdditionalLists &) = default ;
      AdditionalLists(AdditionalLists &&) = default ;
      AdditionalLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdditionalLists() = default ;
      AdditionalLists& operator=(const AdditionalLists &) = default ;
      AdditionalLists& operator=(AdditionalLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->additionalType_ == nullptr
        && this->detail_ == nullptr && this->listType_ == nullptr; };
      // additionalType Field Functions 
      bool hasAdditionalType() const { return this->additionalType_ != nullptr;};
      void deleteAdditionalType() { this->additionalType_ = nullptr;};
      inline string getAdditionalType() const { DARABONBA_PTR_GET_DEFAULT(additionalType_, "") };
      inline AdditionalLists& setAdditionalType(string additionalType) { DARABONBA_PTR_SET_VALUE(additionalType_, additionalType) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline AdditionalLists& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // listType Field Functions 
      bool hasListType() const { return this->listType_ != nullptr;};
      void deleteListType() { this->listType_ = nullptr;};
      inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
      inline AdditionalLists& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    protected:
      // The matching dimension of the list entry. Valid values:
      // - **FileSuffix**: matches by file name extension.
      // - **FileName**: matches by file name.
      // - **FolderName**: matches by folder name.
      // - **FilePath**: matches by file path.
      // - **FileMd5**: matches by file MD5 value.
      shared_ptr<string> additionalType_ {};
      // The content of the list entry. The value cannot exceed 255 characters. The meaning is determined by AdditionalType: when AdditionalType is set to FileSuffix, specify a file name extension. When set to FileName, specify a file name. When set to FolderName, specify a folder name. When set to FilePath, specify a file path. When set to FileMd5, specify the MD5 value of a file.
      shared_ptr<string> detail_ {};
      // The list type. Valid values:
      // - **Blacklist**: blacklist. Files that match are directly identified as virus files.
      // - **Whitelist**: whitelist. Files that match are excluded from virus detection.
      shared_ptr<string> listType_ {};
    };

    virtual bool empty() const override { return this->additionalLists_ == nullptr
        && this->devType_ == nullptr; };
    // additionalLists Field Functions 
    bool hasAdditionalLists() const { return this->additionalLists_ != nullptr;};
    void deleteAdditionalLists() { this->additionalLists_ = nullptr;};
    inline const vector<AddVirusScanAdditionalListsRequest::AdditionalLists> & getAdditionalLists() const { DARABONBA_PTR_GET_CONST(additionalLists_, vector<AddVirusScanAdditionalListsRequest::AdditionalLists>) };
    inline vector<AddVirusScanAdditionalListsRequest::AdditionalLists> getAdditionalLists() { DARABONBA_PTR_GET(additionalLists_, vector<AddVirusScanAdditionalListsRequest::AdditionalLists>) };
    inline AddVirusScanAdditionalListsRequest& setAdditionalLists(const vector<AddVirusScanAdditionalListsRequest::AdditionalLists> & additionalLists) { DARABONBA_PTR_SET_VALUE(additionalLists_, additionalLists) };
    inline AddVirusScanAdditionalListsRequest& setAdditionalLists(vector<AddVirusScanAdditionalListsRequest::AdditionalLists> && additionalLists) { DARABONBA_PTR_SET_RVALUE(additionalLists_, additionalLists) };


    // devType Field Functions 
    bool hasDevType() const { return this->devType_ != nullptr;};
    void deleteDevType() { this->devType_ = nullptr;};
    inline string getDevType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
    inline AddVirusScanAdditionalListsRequest& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


  protected:
    // The list of entries to append. At least one entry is required.
    shared_ptr<vector<AddVirusScanAdditionalListsRequest::AdditionalLists>> additionalLists_ {};
    // The operating system type for which the list takes effect. Valid values:
    // - **windows**: Windows.
    // - **macOS**: macOS.
    // 
    // This parameter is required.
    shared_ptr<string> devType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
