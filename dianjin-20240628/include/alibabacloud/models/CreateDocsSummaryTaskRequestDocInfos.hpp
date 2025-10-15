// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCSSUMMARYTASKREQUESTDOCINFOS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCSSUMMARYTASKREQUESTDOCINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDocsSummaryTaskRequestDocInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocsSummaryTaskRequestDocInfos& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(endPage, endPage_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(startPage, startPage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocsSummaryTaskRequestDocInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(endPage, endPage_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(startPage, startPage_);
    };
    CreateDocsSummaryTaskRequestDocInfos() = default ;
    CreateDocsSummaryTaskRequestDocInfos(const CreateDocsSummaryTaskRequestDocInfos &) = default ;
    CreateDocsSummaryTaskRequestDocInfos(CreateDocsSummaryTaskRequestDocInfos &&) = default ;
    CreateDocsSummaryTaskRequestDocInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocsSummaryTaskRequestDocInfos() = default ;
    CreateDocsSummaryTaskRequestDocInfos& operator=(const CreateDocsSummaryTaskRequestDocInfos &) = default ;
    CreateDocsSummaryTaskRequestDocInfos& operator=(CreateDocsSummaryTaskRequestDocInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docId_ == nullptr
        && return this->endPage_ == nullptr && return this->libraryId_ == nullptr && return this->startPage_ == nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline CreateDocsSummaryTaskRequestDocInfos& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // endPage Field Functions 
    bool hasEndPage() const { return this->endPage_ != nullptr;};
    void deleteEndPage() { this->endPage_ = nullptr;};
    inline int32_t endPage() const { DARABONBA_PTR_GET_DEFAULT(endPage_, 0) };
    inline CreateDocsSummaryTaskRequestDocInfos& setEndPage(int32_t endPage) { DARABONBA_PTR_SET_VALUE(endPage_, endPage) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline CreateDocsSummaryTaskRequestDocInfos& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // startPage Field Functions 
    bool hasStartPage() const { return this->startPage_ != nullptr;};
    void deleteStartPage() { this->startPage_ = nullptr;};
    inline int32_t startPage() const { DARABONBA_PTR_GET_DEFAULT(startPage_, 0) };
    inline CreateDocsSummaryTaskRequestDocInfos& setStartPage(int32_t startPage) { DARABONBA_PTR_SET_VALUE(startPage_, startPage) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<int32_t> endPage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    std::shared_ptr<int32_t> startPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
