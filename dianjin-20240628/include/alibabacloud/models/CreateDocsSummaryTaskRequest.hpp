// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCSSUMMARYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCSSUMMARYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDocsSummaryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocsSummaryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docInfos, docInfos_);
      DARABONBA_PTR_TO_JSON(enableTable, enableTable_);
      DARABONBA_PTR_TO_JSON(instruction, instruction_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocsSummaryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docInfos, docInfos_);
      DARABONBA_PTR_FROM_JSON(enableTable, enableTable_);
      DARABONBA_PTR_FROM_JSON(instruction, instruction_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
    };
    CreateDocsSummaryTaskRequest() = default ;
    CreateDocsSummaryTaskRequest(const CreateDocsSummaryTaskRequest &) = default ;
    CreateDocsSummaryTaskRequest(CreateDocsSummaryTaskRequest &&) = default ;
    CreateDocsSummaryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocsSummaryTaskRequest() = default ;
    CreateDocsSummaryTaskRequest& operator=(const CreateDocsSummaryTaskRequest &) = default ;
    CreateDocsSummaryTaskRequest& operator=(CreateDocsSummaryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DocInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocInfos& obj) { 
        DARABONBA_PTR_TO_JSON(docId, docId_);
        DARABONBA_PTR_TO_JSON(endPage, endPage_);
        DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
        DARABONBA_PTR_TO_JSON(startPage, startPage_);
      };
      friend void from_json(const Darabonba::Json& j, DocInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(docId, docId_);
        DARABONBA_PTR_FROM_JSON(endPage, endPage_);
        DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
        DARABONBA_PTR_FROM_JSON(startPage, startPage_);
      };
      DocInfos() = default ;
      DocInfos(const DocInfos &) = default ;
      DocInfos(DocInfos &&) = default ;
      DocInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocInfos() = default ;
      DocInfos& operator=(const DocInfos &) = default ;
      DocInfos& operator=(DocInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->docId_ == nullptr
        && this->endPage_ == nullptr && this->libraryId_ == nullptr && this->startPage_ == nullptr; };
      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline DocInfos& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // endPage Field Functions 
      bool hasEndPage() const { return this->endPage_ != nullptr;};
      void deleteEndPage() { this->endPage_ = nullptr;};
      inline int32_t getEndPage() const { DARABONBA_PTR_GET_DEFAULT(endPage_, 0) };
      inline DocInfos& setEndPage(int32_t endPage) { DARABONBA_PTR_SET_VALUE(endPage_, endPage) };


      // libraryId Field Functions 
      bool hasLibraryId() const { return this->libraryId_ != nullptr;};
      void deleteLibraryId() { this->libraryId_ = nullptr;};
      inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
      inline DocInfos& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


      // startPage Field Functions 
      bool hasStartPage() const { return this->startPage_ != nullptr;};
      void deleteStartPage() { this->startPage_ = nullptr;};
      inline int32_t getStartPage() const { DARABONBA_PTR_GET_DEFAULT(startPage_, 0) };
      inline DocInfos& setStartPage(int32_t startPage) { DARABONBA_PTR_SET_VALUE(startPage_, startPage) };


    protected:
      // This parameter is required.
      shared_ptr<string> docId_ {};
      shared_ptr<int32_t> endPage_ {};
      // This parameter is required.
      shared_ptr<string> libraryId_ {};
      shared_ptr<int32_t> startPage_ {};
    };

    virtual bool empty() const override { return this->docInfos_ == nullptr
        && this->enableTable_ == nullptr && this->instruction_ == nullptr && this->modelId_ == nullptr; };
    // docInfos Field Functions 
    bool hasDocInfos() const { return this->docInfos_ != nullptr;};
    void deleteDocInfos() { this->docInfos_ = nullptr;};
    inline const vector<CreateDocsSummaryTaskRequest::DocInfos> & getDocInfos() const { DARABONBA_PTR_GET_CONST(docInfos_, vector<CreateDocsSummaryTaskRequest::DocInfos>) };
    inline vector<CreateDocsSummaryTaskRequest::DocInfos> getDocInfos() { DARABONBA_PTR_GET(docInfos_, vector<CreateDocsSummaryTaskRequest::DocInfos>) };
    inline CreateDocsSummaryTaskRequest& setDocInfos(const vector<CreateDocsSummaryTaskRequest::DocInfos> & docInfos) { DARABONBA_PTR_SET_VALUE(docInfos_, docInfos) };
    inline CreateDocsSummaryTaskRequest& setDocInfos(vector<CreateDocsSummaryTaskRequest::DocInfos> && docInfos) { DARABONBA_PTR_SET_RVALUE(docInfos_, docInfos) };


    // enableTable Field Functions 
    bool hasEnableTable() const { return this->enableTable_ != nullptr;};
    void deleteEnableTable() { this->enableTable_ = nullptr;};
    inline bool getEnableTable() const { DARABONBA_PTR_GET_DEFAULT(enableTable_, false) };
    inline CreateDocsSummaryTaskRequest& setEnableTable(bool enableTable) { DARABONBA_PTR_SET_VALUE(enableTable_, enableTable) };


    // instruction Field Functions 
    bool hasInstruction() const { return this->instruction_ != nullptr;};
    void deleteInstruction() { this->instruction_ = nullptr;};
    inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
    inline CreateDocsSummaryTaskRequest& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateDocsSummaryTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<CreateDocsSummaryTaskRequest::DocInfos>> docInfos_ {};
    shared_ptr<bool> enableTable_ {};
    shared_ptr<string> instruction_ {};
    // This parameter is required.
    shared_ptr<string> modelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
