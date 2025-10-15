// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLDOCUMENTREQUESTFILTERS_HPP_
#define ALIBABACLOUD_MODELS_RECALLDOCUMENTREQUESTFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecallDocumentRequestFiltersAnd.hpp>
#include <alibabacloud/models/RecallDocumentRequestFiltersOr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecallDocumentRequestFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallDocumentRequestFilters& obj) { 
      DARABONBA_PTR_TO_JSON(and, and_);
      DARABONBA_PTR_TO_JSON(chunkType, chunkType_);
      DARABONBA_PTR_TO_JSON(docIdList, docIdList_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(or, or_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RecallDocumentRequestFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(and, and_);
      DARABONBA_PTR_FROM_JSON(chunkType, chunkType_);
      DARABONBA_PTR_FROM_JSON(docIdList, docIdList_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(or, or_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    RecallDocumentRequestFilters() = default ;
    RecallDocumentRequestFilters(const RecallDocumentRequestFilters &) = default ;
    RecallDocumentRequestFilters(RecallDocumentRequestFilters &&) = default ;
    RecallDocumentRequestFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallDocumentRequestFilters() = default ;
    RecallDocumentRequestFilters& operator=(const RecallDocumentRequestFilters &) = default ;
    RecallDocumentRequestFilters& operator=(RecallDocumentRequestFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->and_ == nullptr
        && return this->chunkType_ == nullptr && return this->docIdList_ == nullptr && return this->libraryId_ == nullptr && return this->or_ == nullptr && return this->status_ == nullptr; };
    // and Field Functions 
    bool hasAnd() const { return this->and_ != nullptr;};
    void deleteAnd() { this->and_ = nullptr;};
    inline const vector<Models::RecallDocumentRequestFiltersAnd> & _and() const { DARABONBA_PTR_GET_CONST(and_, vector<Models::RecallDocumentRequestFiltersAnd>) };
    inline vector<Models::RecallDocumentRequestFiltersAnd> _and() { DARABONBA_PTR_GET(and_, vector<Models::RecallDocumentRequestFiltersAnd>) };
    inline RecallDocumentRequestFilters& setAnd(const vector<Models::RecallDocumentRequestFiltersAnd> & _and) { DARABONBA_PTR_SET_VALUE(and_, _and) };
    inline RecallDocumentRequestFilters& setAnd(vector<Models::RecallDocumentRequestFiltersAnd> && _and) { DARABONBA_PTR_SET_RVALUE(and_, _and) };


    // chunkType Field Functions 
    bool hasChunkType() const { return this->chunkType_ != nullptr;};
    void deleteChunkType() { this->chunkType_ = nullptr;};
    inline string chunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
    inline RecallDocumentRequestFilters& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


    // docIdList Field Functions 
    bool hasDocIdList() const { return this->docIdList_ != nullptr;};
    void deleteDocIdList() { this->docIdList_ = nullptr;};
    inline const vector<string> & docIdList() const { DARABONBA_PTR_GET_CONST(docIdList_, vector<string>) };
    inline vector<string> docIdList() { DARABONBA_PTR_GET(docIdList_, vector<string>) };
    inline RecallDocumentRequestFilters& setDocIdList(const vector<string> & docIdList) { DARABONBA_PTR_SET_VALUE(docIdList_, docIdList) };
    inline RecallDocumentRequestFilters& setDocIdList(vector<string> && docIdList) { DARABONBA_PTR_SET_RVALUE(docIdList_, docIdList) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline RecallDocumentRequestFilters& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // or Field Functions 
    bool hasOr() const { return this->or_ != nullptr;};
    void deleteOr() { this->or_ = nullptr;};
    inline const vector<Models::RecallDocumentRequestFiltersOr> & _or() const { DARABONBA_PTR_GET_CONST(or_, vector<Models::RecallDocumentRequestFiltersOr>) };
    inline vector<Models::RecallDocumentRequestFiltersOr> _or() { DARABONBA_PTR_GET(or_, vector<Models::RecallDocumentRequestFiltersOr>) };
    inline RecallDocumentRequestFilters& setOr(const vector<Models::RecallDocumentRequestFiltersOr> & _or) { DARABONBA_PTR_SET_VALUE(or_, _or) };
    inline RecallDocumentRequestFilters& setOr(vector<Models::RecallDocumentRequestFiltersOr> && _or) { DARABONBA_PTR_SET_RVALUE(or_, _or) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline RecallDocumentRequestFilters& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline RecallDocumentRequestFilters& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::RecallDocumentRequestFiltersAnd>> and_ = nullptr;
    std::shared_ptr<string> chunkType_ = nullptr;
    std::shared_ptr<vector<string>> docIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    std::shared_ptr<vector<Models::RecallDocumentRequestFiltersOr>> or_ = nullptr;
    std::shared_ptr<vector<string>> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
