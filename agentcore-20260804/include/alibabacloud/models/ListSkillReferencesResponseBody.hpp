// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLREFERENCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLREFERENCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListSkillReferencesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillReferencesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillReferencesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListSkillReferencesResponseBody() = default ;
    ListSkillReferencesResponseBody(const ListSkillReferencesResponseBody &) = default ;
    ListSkillReferencesResponseBody(ListSkillReferencesResponseBody &&) = default ;
    ListSkillReferencesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillReferencesResponseBody() = default ;
    ListSkillReferencesResponseBody& operator=(const ListSkillReferencesResponseBody &) = default ;
    ListSkillReferencesResponseBody& operator=(ListSkillReferencesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(pageItems, pageItems_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pagesAvailable, pagesAvailable_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(pageItems, pageItems_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pagesAvailable, pagesAvailable_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PageItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageItems& obj) { 
          DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
          DARABONBA_PTR_TO_JSON(ownerType, ownerType_);
          DARABONBA_PTR_TO_JSON(ownerVersion, ownerVersion_);
          DARABONBA_PTR_TO_JSON(selectorType, selectorType_);
          DARABONBA_PTR_TO_JSON(selectorValue, selectorValue_);
          DARABONBA_PTR_TO_JSON(skillName, skillName_);
          DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, PageItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(ownerType, ownerType_);
          DARABONBA_PTR_FROM_JSON(ownerVersion, ownerVersion_);
          DARABONBA_PTR_FROM_JSON(selectorType, selectorType_);
          DARABONBA_PTR_FROM_JSON(selectorValue, selectorValue_);
          DARABONBA_PTR_FROM_JSON(skillName, skillName_);
          DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
        };
        PageItems() = default ;
        PageItems(const PageItems &) = default ;
        PageItems(PageItems &&) = default ;
        PageItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageItems() = default ;
        PageItems& operator=(const PageItems &) = default ;
        PageItems& operator=(PageItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->ownerType_ == nullptr && this->ownerVersion_ == nullptr && this->selectorType_ == nullptr && this->selectorValue_ == nullptr && this->skillName_ == nullptr
        && this->workspaceId_ == nullptr; };
        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline PageItems& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // ownerType Field Functions 
        bool hasOwnerType() const { return this->ownerType_ != nullptr;};
        void deleteOwnerType() { this->ownerType_ = nullptr;};
        inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
        inline PageItems& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


        // ownerVersion Field Functions 
        bool hasOwnerVersion() const { return this->ownerVersion_ != nullptr;};
        void deleteOwnerVersion() { this->ownerVersion_ = nullptr;};
        inline string getOwnerVersion() const { DARABONBA_PTR_GET_DEFAULT(ownerVersion_, "") };
        inline PageItems& setOwnerVersion(string ownerVersion) { DARABONBA_PTR_SET_VALUE(ownerVersion_, ownerVersion) };


        // selectorType Field Functions 
        bool hasSelectorType() const { return this->selectorType_ != nullptr;};
        void deleteSelectorType() { this->selectorType_ = nullptr;};
        inline string getSelectorType() const { DARABONBA_PTR_GET_DEFAULT(selectorType_, "") };
        inline PageItems& setSelectorType(string selectorType) { DARABONBA_PTR_SET_VALUE(selectorType_, selectorType) };


        // selectorValue Field Functions 
        bool hasSelectorValue() const { return this->selectorValue_ != nullptr;};
        void deleteSelectorValue() { this->selectorValue_ = nullptr;};
        inline string getSelectorValue() const { DARABONBA_PTR_GET_DEFAULT(selectorValue_, "") };
        inline PageItems& setSelectorValue(string selectorValue) { DARABONBA_PTR_SET_VALUE(selectorValue_, selectorValue) };


        // skillName Field Functions 
        bool hasSkillName() const { return this->skillName_ != nullptr;};
        void deleteSkillName() { this->skillName_ = nullptr;};
        inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
        inline PageItems& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline PageItems& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        // The ID of the referencing entity (the identifier of the Agent or AgentSpec).
        shared_ptr<string> ownerId_ {};
        // The type of the referencing entity. Valid values: AGENT and AGENTSPEC.
        shared_ptr<string> ownerType_ {};
        // The version of the referencing entity.
        shared_ptr<string> ownerVersion_ {};
        // The reference selector type. Valid values: LABEL and VERSION.
        shared_ptr<string> selectorType_ {};
        // The reference selector value, such as latest, a named label, HEAD, or a specific version.
        shared_ptr<string> selectorValue_ {};
        // The name of the referenced skill.
        shared_ptr<string> skillName_ {};
        // The workspace ID to which the reference belongs.
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->pageItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pagesAvailable_ == nullptr && this->totalCount_ == nullptr; };
      // pageItems Field Functions 
      bool hasPageItems() const { return this->pageItems_ != nullptr;};
      void deletePageItems() { this->pageItems_ = nullptr;};
      inline const vector<Data::PageItems> & getPageItems() const { DARABONBA_PTR_GET_CONST(pageItems_, vector<Data::PageItems>) };
      inline vector<Data::PageItems> getPageItems() { DARABONBA_PTR_GET(pageItems_, vector<Data::PageItems>) };
      inline Data& setPageItems(const vector<Data::PageItems> & pageItems) { DARABONBA_PTR_SET_VALUE(pageItems_, pageItems) };
      inline Data& setPageItems(vector<Data::PageItems> && pageItems) { DARABONBA_PTR_SET_RVALUE(pageItems_, pageItems) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pagesAvailable Field Functions 
      bool hasPagesAvailable() const { return this->pagesAvailable_ != nullptr;};
      void deletePagesAvailable() { this->pagesAvailable_ = nullptr;};
      inline int32_t getPagesAvailable() const { DARABONBA_PTR_GET_DEFAULT(pagesAvailable_, 0) };
      inline Data& setPagesAvailable(int32_t pagesAvailable) { DARABONBA_PTR_SET_VALUE(pagesAvailable_, pagesAvailable) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of skill reference relationships on the current page.
      shared_ptr<vector<Data::PageItems>> pageItems_ {};
      // The current page number, starting from 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The total number of available pages.
      shared_ptr<int32_t> pagesAvailable_ {};
      // The total number of reference relationships that match the filter conditions.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSkillReferencesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSkillReferencesResponseBody::Data) };
    inline ListSkillReferencesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSkillReferencesResponseBody::Data) };
    inline ListSkillReferencesResponseBody& setData(const ListSkillReferencesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSkillReferencesResponseBody& setData(ListSkillReferencesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillReferencesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The skill reference relationship data returned by the paged query. The data is returned with paging.
    shared_ptr<ListSkillReferencesResponseBody::Data> data_ {};
    // The request ID, which is used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
