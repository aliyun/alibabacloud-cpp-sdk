// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACENTERDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACENTERDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataCenterDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCenterDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(ImportType, importType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCenterDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(ImportType, importType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
    };
    ListDataCenterDatabaseRequest() = default ;
    ListDataCenterDatabaseRequest(const ListDataCenterDatabaseRequest &) = default ;
    ListDataCenterDatabaseRequest(ListDataCenterDatabaseRequest &&) = default ;
    ListDataCenterDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCenterDatabaseRequest() = default ;
    ListDataCenterDatabaseRequest& operator=(const ListDataCenterDatabaseRequest &) = default ;
    ListDataCenterDatabaseRequest& operator=(ListDataCenterDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callFrom_ == nullptr
        && this->dmsUnit_ == nullptr && this->importType_ == nullptr && this->language_ == nullptr && this->searchKey_ == nullptr; };
    // callFrom Field Functions 
    bool hasCallFrom() const { return this->callFrom_ != nullptr;};
    void deleteCallFrom() { this->callFrom_ = nullptr;};
    inline string getCallFrom() const { DARABONBA_PTR_GET_DEFAULT(callFrom_, "") };
    inline ListDataCenterDatabaseRequest& setCallFrom(string callFrom) { DARABONBA_PTR_SET_VALUE(callFrom_, callFrom) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline ListDataCenterDatabaseRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // importType Field Functions 
    bool hasImportType() const { return this->importType_ != nullptr;};
    void deleteImportType() { this->importType_ = nullptr;};
    inline string getImportType() const { DARABONBA_PTR_GET_DEFAULT(importType_, "") };
    inline ListDataCenterDatabaseRequest& setImportType(string importType) { DARABONBA_PTR_SET_VALUE(importType_, importType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListDataCenterDatabaseRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListDataCenterDatabaseRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


  protected:
    shared_ptr<string> callFrom_ {};
    shared_ptr<string> dmsUnit_ {};
    shared_ptr<string> importType_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> searchKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
