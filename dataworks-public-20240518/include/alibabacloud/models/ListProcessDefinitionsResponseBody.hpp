// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROCESSDEFINITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROCESSDEFINITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProcessDefinitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProcessDefinitionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProcessDefinitionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProcessDefinitionsResponseBody() = default ;
    ListProcessDefinitionsResponseBody(const ListProcessDefinitionsResponseBody &) = default ;
    ListProcessDefinitionsResponseBody(ListProcessDefinitionsResponseBody &&) = default ;
    ListProcessDefinitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProcessDefinitionsResponseBody() = default ;
    ListProcessDefinitionsResponseBody& operator=(const ListProcessDefinitionsResponseBody &) = default ;
    ListProcessDefinitionsResponseBody& operator=(ListProcessDefinitionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ProcessDefinitions, processDefinitions_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ProcessDefinitions, processDefinitions_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProcessDefinitions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProcessDefinitions& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsSystem, isSystem_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Scopes, scopes_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ProcessDefinitions& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsSystem, isSystem_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ProcessDefinitions() = default ;
        ProcessDefinitions(const ProcessDefinitions &) = default ;
        ProcessDefinitions(ProcessDefinitions &&) = default ;
        ProcessDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProcessDefinitions() = default ;
        ProcessDefinitions& operator=(const ProcessDefinitions &) = default ;
        ProcessDefinitions& operator=(ProcessDefinitions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->enabled_ == nullptr && this->id_ == nullptr && this->isSystem_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr
        && this->scopes_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ProcessDefinitions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline ProcessDefinitions& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ProcessDefinitions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isSystem Field Functions 
        bool hasIsSystem() const { return this->isSystem_ != nullptr;};
        void deleteIsSystem() { this->isSystem_ = nullptr;};
        inline bool getIsSystem() const { DARABONBA_PTR_GET_DEFAULT(isSystem_, false) };
        inline ProcessDefinitions& setIsSystem(bool isSystem) { DARABONBA_PTR_SET_VALUE(isSystem_, isSystem) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ProcessDefinitions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline ProcessDefinitions& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // scopes Field Functions 
        bool hasScopes() const { return this->scopes_ != nullptr;};
        void deleteScopes() { this->scopes_ = nullptr;};
        inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
        inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
        inline ProcessDefinitions& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
        inline ProcessDefinitions& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline ProcessDefinitions& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ProcessDefinitions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<bool> enabled_ {};
        shared_ptr<string> id_ {};
        shared_ptr<bool> isSystem_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> priority_ {};
        shared_ptr<vector<string>> scopes_ {};
        shared_ptr<string> subType_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->processDefinitions_ == nullptr
        && this->totalCount_ == nullptr; };
      // processDefinitions Field Functions 
      bool hasProcessDefinitions() const { return this->processDefinitions_ != nullptr;};
      void deleteProcessDefinitions() { this->processDefinitions_ = nullptr;};
      inline const vector<PagingInfo::ProcessDefinitions> & getProcessDefinitions() const { DARABONBA_PTR_GET_CONST(processDefinitions_, vector<PagingInfo::ProcessDefinitions>) };
      inline vector<PagingInfo::ProcessDefinitions> getProcessDefinitions() { DARABONBA_PTR_GET(processDefinitions_, vector<PagingInfo::ProcessDefinitions>) };
      inline PagingInfo& setProcessDefinitions(const vector<PagingInfo::ProcessDefinitions> & processDefinitions) { DARABONBA_PTR_SET_VALUE(processDefinitions_, processDefinitions) };
      inline PagingInfo& setProcessDefinitions(vector<PagingInfo::ProcessDefinitions> && processDefinitions) { DARABONBA_PTR_SET_RVALUE(processDefinitions_, processDefinitions) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PagingInfo::ProcessDefinitions>> processDefinitions_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListProcessDefinitionsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListProcessDefinitionsResponseBody::PagingInfo) };
    inline ListProcessDefinitionsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListProcessDefinitionsResponseBody::PagingInfo) };
    inline ListProcessDefinitionsResponseBody& setPagingInfo(const ListProcessDefinitionsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListProcessDefinitionsResponseBody& setPagingInfo(ListProcessDefinitionsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProcessDefinitionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListProcessDefinitionsResponseBody::PagingInfo> pagingInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
