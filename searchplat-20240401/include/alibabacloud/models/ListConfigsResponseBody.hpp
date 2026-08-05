// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListConfigsResponseBody() = default ;
    ListConfigsResponseBody(const ListConfigsResponseBody &) = default ;
    ListConfigsResponseBody(ListConfigsResponseBody &&) = default ;
    ListConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigsResponseBody() = default ;
    ListConfigsResponseBody& operator=(const ListConfigsResponseBody &) = default ;
    ListConfigsResponseBody& operator=(ListConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_ANY_TO_JSON(configData, configData_);
        DARABONBA_PTR_TO_JSON(configType, configType_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_ANY_FROM_JSON(configData, configData_);
        DARABONBA_PTR_FROM_JSON(configType, configType_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configData_ == nullptr
        && this->configType_ == nullptr && this->workspaceId_ == nullptr; };
      // configData Field Functions 
      bool hasConfigData() const { return this->configData_ != nullptr;};
      void deleteConfigData() { this->configData_ = nullptr;};
      inline       const Darabonba::Json & getConfigData() const { DARABONBA_GET(configData_) };
      Darabonba::Json & getConfigData() { DARABONBA_GET(configData_) };
      inline Result& setConfigData(const Darabonba::Json & configData) { DARABONBA_SET_VALUE(configData_, configData) };
      inline Result& setConfigData(Darabonba::Json && configData) { DARABONBA_SET_RVALUE(configData_, configData) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Result& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The configuration content.
      Darabonba::Json configData_ {};
      // The configuration type. Valid values:
      //  * prompt: Prompt configuration.
      //  * lark: Lark configuration.
      shared_ptr<string> configType_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->total_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListConfigsResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListConfigsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListConfigsResponseBody::Result>) };
    inline vector<ListConfigsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListConfigsResponseBody::Result>) };
    inline ListConfigsResponseBody& setResult(const vector<ListConfigsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListConfigsResponseBody& setResult(vector<ListConfigsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListConfigsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The current page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configuration list.
    shared_ptr<vector<ListConfigsResponseBody::Result>> result_ {};
    // The total number of configurations.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
