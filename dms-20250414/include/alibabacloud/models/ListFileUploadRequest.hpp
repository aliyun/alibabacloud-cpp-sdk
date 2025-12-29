// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListFileUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_TO_JSON(FileCategory, fileCategory_);
      DARABONBA_PTR_TO_JSON(FileFrom, fileFrom_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SortColumn, sortColumn_);
      DARABONBA_PTR_TO_JSON(SortDirection, sortDirection_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallFrom, callFrom_);
      DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
      DARABONBA_PTR_FROM_JSON(FileCategory, fileCategory_);
      DARABONBA_PTR_FROM_JSON(FileFrom, fileFrom_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SortColumn, sortColumn_);
      DARABONBA_PTR_FROM_JSON(SortDirection, sortDirection_);
    };
    ListFileUploadRequest() = default ;
    ListFileUploadRequest(const ListFileUploadRequest &) = default ;
    ListFileUploadRequest(ListFileUploadRequest &&) = default ;
    ListFileUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileUploadRequest() = default ;
    ListFileUploadRequest& operator=(const ListFileUploadRequest &) = default ;
    ListFileUploadRequest& operator=(ListFileUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callFrom_ == nullptr
        && this->dmsUnit_ == nullptr && this->fileCategory_ == nullptr && this->fileFrom_ == nullptr && this->fileId_ == nullptr && this->sessionId_ == nullptr
        && this->sortColumn_ == nullptr && this->sortDirection_ == nullptr; };
    // callFrom Field Functions 
    bool hasCallFrom() const { return this->callFrom_ != nullptr;};
    void deleteCallFrom() { this->callFrom_ = nullptr;};
    inline string getCallFrom() const { DARABONBA_PTR_GET_DEFAULT(callFrom_, "") };
    inline ListFileUploadRequest& setCallFrom(string callFrom) { DARABONBA_PTR_SET_VALUE(callFrom_, callFrom) };


    // dmsUnit Field Functions 
    bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
    void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
    inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
    inline ListFileUploadRequest& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


    // fileCategory Field Functions 
    bool hasFileCategory() const { return this->fileCategory_ != nullptr;};
    void deleteFileCategory() { this->fileCategory_ = nullptr;};
    inline string getFileCategory() const { DARABONBA_PTR_GET_DEFAULT(fileCategory_, "") };
    inline ListFileUploadRequest& setFileCategory(string fileCategory) { DARABONBA_PTR_SET_VALUE(fileCategory_, fileCategory) };


    // fileFrom Field Functions 
    bool hasFileFrom() const { return this->fileFrom_ != nullptr;};
    void deleteFileFrom() { this->fileFrom_ = nullptr;};
    inline string getFileFrom() const { DARABONBA_PTR_GET_DEFAULT(fileFrom_, "") };
    inline ListFileUploadRequest& setFileFrom(string fileFrom) { DARABONBA_PTR_SET_VALUE(fileFrom_, fileFrom) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListFileUploadRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListFileUploadRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sortColumn Field Functions 
    bool hasSortColumn() const { return this->sortColumn_ != nullptr;};
    void deleteSortColumn() { this->sortColumn_ = nullptr;};
    inline string getSortColumn() const { DARABONBA_PTR_GET_DEFAULT(sortColumn_, "") };
    inline ListFileUploadRequest& setSortColumn(string sortColumn) { DARABONBA_PTR_SET_VALUE(sortColumn_, sortColumn) };


    // sortDirection Field Functions 
    bool hasSortDirection() const { return this->sortDirection_ != nullptr;};
    void deleteSortDirection() { this->sortDirection_ = nullptr;};
    inline string getSortDirection() const { DARABONBA_PTR_GET_DEFAULT(sortDirection_, "") };
    inline ListFileUploadRequest& setSortDirection(string sortDirection) { DARABONBA_PTR_SET_VALUE(sortDirection_, sortDirection) };


  protected:
    shared_ptr<string> callFrom_ {};
    shared_ptr<string> dmsUnit_ {};
    shared_ptr<string> fileCategory_ {};
    shared_ptr<string> fileFrom_ {};
    shared_ptr<string> fileId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> sortColumn_ {};
    shared_ptr<string> sortDirection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
