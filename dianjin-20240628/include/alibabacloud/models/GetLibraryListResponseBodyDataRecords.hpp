// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLibraryListResponseBodyDataRecordsIndexSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryListResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryListResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(documentCount, documentCount_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(indexSetting, indexSetting_);
      DARABONBA_PTR_TO_JSON(libraryName, libraryName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryListResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(documentCount, documentCount_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(indexSetting, indexSetting_);
      DARABONBA_PTR_FROM_JSON(libraryName, libraryName_);
    };
    GetLibraryListResponseBodyDataRecords() = default ;
    GetLibraryListResponseBodyDataRecords(const GetLibraryListResponseBodyDataRecords &) = default ;
    GetLibraryListResponseBodyDataRecords(GetLibraryListResponseBodyDataRecords &&) = default ;
    GetLibraryListResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryListResponseBodyDataRecords() = default ;
    GetLibraryListResponseBodyDataRecords& operator=(const GetLibraryListResponseBodyDataRecords &) = default ;
    GetLibraryListResponseBodyDataRecords& operator=(GetLibraryListResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->documentCount_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->indexSetting_ != nullptr
        && this->libraryName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetLibraryListResponseBodyDataRecords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentCount Field Functions 
    bool hasDocumentCount() const { return this->documentCount_ != nullptr;};
    void deleteDocumentCount() { this->documentCount_ = nullptr;};
    inline int64_t documentCount() const { DARABONBA_PTR_GET_DEFAULT(documentCount_, 0L) };
    inline GetLibraryListResponseBodyDataRecords& setDocumentCount(int64_t documentCount) { DARABONBA_PTR_SET_VALUE(documentCount_, documentCount) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetLibraryListResponseBodyDataRecords& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetLibraryListResponseBodyDataRecords& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetLibraryListResponseBodyDataRecords& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // indexSetting Field Functions 
    bool hasIndexSetting() const { return this->indexSetting_ != nullptr;};
    void deleteIndexSetting() { this->indexSetting_ = nullptr;};
    inline const Models::GetLibraryListResponseBodyDataRecordsIndexSetting & indexSetting() const { DARABONBA_PTR_GET_CONST(indexSetting_, Models::GetLibraryListResponseBodyDataRecordsIndexSetting) };
    inline Models::GetLibraryListResponseBodyDataRecordsIndexSetting indexSetting() { DARABONBA_PTR_GET(indexSetting_, Models::GetLibraryListResponseBodyDataRecordsIndexSetting) };
    inline GetLibraryListResponseBodyDataRecords& setIndexSetting(const Models::GetLibraryListResponseBodyDataRecordsIndexSetting & indexSetting) { DARABONBA_PTR_SET_VALUE(indexSetting_, indexSetting) };
    inline GetLibraryListResponseBodyDataRecords& setIndexSetting(Models::GetLibraryListResponseBodyDataRecordsIndexSetting && indexSetting) { DARABONBA_PTR_SET_RVALUE(indexSetting_, indexSetting) };


    // libraryName Field Functions 
    bool hasLibraryName() const { return this->libraryName_ != nullptr;};
    void deleteLibraryName() { this->libraryName_ = nullptr;};
    inline string libraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
    inline GetLibraryListResponseBodyDataRecords& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> documentCount_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<Models::GetLibraryListResponseBodyDataRecordsIndexSetting> indexSetting_ = nullptr;
    std::shared_ptr<string> libraryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
