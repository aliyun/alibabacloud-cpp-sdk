// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListModelTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListModelTemplatesResponseBody() = default ;
    ListModelTemplatesResponseBody(const ListModelTemplatesResponseBody &) = default ;
    ListModelTemplatesResponseBody(ListModelTemplatesResponseBody &&) = default ;
    ListModelTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelTemplatesResponseBody() = default ;
    ListModelTemplatesResponseBody& operator=(const ListModelTemplatesResponseBody &) = default ;
    ListModelTemplatesResponseBody& operator=(ListModelTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HasModel, hasModel_);
        DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HasModel, hasModel_);
        DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->agentProvider_ == nullptr
        && this->config_ == nullptr && this->description_ == nullptr && this->hasModel_ == nullptr && this->modelTemplateId_ == nullptr && this->name_ == nullptr; };
      // agentProvider Field Functions 
      bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
      void deleteAgentProvider() { this->agentProvider_ = nullptr;};
      inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
      inline Data& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hasModel Field Functions 
      bool hasHasModel() const { return this->hasModel_ != nullptr;};
      void deleteHasModel() { this->hasModel_ = nullptr;};
      inline bool getHasModel() const { DARABONBA_PTR_GET_DEFAULT(hasModel_, false) };
      inline Data& setHasModel(bool hasModel) { DARABONBA_PTR_SET_VALUE(hasModel_, hasModel) };


      // modelTemplateId Field Functions 
      bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
      void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
      inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
      inline Data& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> agentProvider_ {};
      shared_ptr<string> config_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> hasModel_ {};
      shared_ptr<string> modelTemplateId_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListModelTemplatesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListModelTemplatesResponseBody::Data>) };
    inline vector<ListModelTemplatesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListModelTemplatesResponseBody::Data>) };
    inline ListModelTemplatesResponseBody& setData(const vector<ListModelTemplatesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListModelTemplatesResponseBody& setData(vector<ListModelTemplatesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListModelTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListModelTemplatesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
