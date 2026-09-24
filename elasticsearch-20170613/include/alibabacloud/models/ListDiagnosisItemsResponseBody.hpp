// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSISITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSISITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDiagnosisItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosisItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosisItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDiagnosisItemsResponseBody() = default ;
    ListDiagnosisItemsResponseBody(const ListDiagnosisItemsResponseBody &) = default ;
    ListDiagnosisItemsResponseBody(ListDiagnosisItemsResponseBody &&) = default ;
    ListDiagnosisItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosisItemsResponseBody() = default ;
    ListDiagnosisItemsResponseBody& operator=(const ListDiagnosisItemsResponseBody &) = default ;
    ListDiagnosisItemsResponseBody& operator=(ListDiagnosisItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(billable, billable_);
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(esApiRequired, esApiRequired_);
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(sortOrder, sortOrder_);
        DARABONBA_PTR_TO_JSON(supportedModes, supportedModes_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(billable, billable_);
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(esApiRequired, esApiRequired_);
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(sortOrder, sortOrder_);
        DARABONBA_PTR_FROM_JSON(supportedModes, supportedModes_);
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
      virtual bool empty() const override { return this->billable_ == nullptr
        && this->category_ == nullptr && this->description_ == nullptr && this->esApiRequired_ == nullptr && this->key_ == nullptr && this->level_ == nullptr
        && this->name_ == nullptr && this->sortOrder_ == nullptr && this->supportedModes_ == nullptr; };
      // billable Field Functions 
      bool hasBillable() const { return this->billable_ != nullptr;};
      void deleteBillable() { this->billable_ = nullptr;};
      inline bool getBillable() const { DARABONBA_PTR_GET_DEFAULT(billable_, false) };
      inline Result& setBillable(bool billable) { DARABONBA_PTR_SET_VALUE(billable_, billable) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Result& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // esApiRequired Field Functions 
      bool hasEsApiRequired() const { return this->esApiRequired_ != nullptr;};
      void deleteEsApiRequired() { this->esApiRequired_ = nullptr;};
      inline bool getEsApiRequired() const { DARABONBA_PTR_GET_DEFAULT(esApiRequired_, false) };
      inline Result& setEsApiRequired(bool esApiRequired) { DARABONBA_PTR_SET_VALUE(esApiRequired_, esApiRequired) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Result& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Result& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sortOrder Field Functions 
      bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
      void deleteSortOrder() { this->sortOrder_ = nullptr;};
      inline int32_t getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0) };
      inline Result& setSortOrder(int32_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


      // supportedModes Field Functions 
      bool hasSupportedModes() const { return this->supportedModes_ != nullptr;};
      void deleteSupportedModes() { this->supportedModes_ = nullptr;};
      inline const vector<string> & getSupportedModes() const { DARABONBA_PTR_GET_CONST(supportedModes_, vector<string>) };
      inline vector<string> getSupportedModes() { DARABONBA_PTR_GET(supportedModes_, vector<string>) };
      inline Result& setSupportedModes(const vector<string> & supportedModes) { DARABONBA_PTR_SET_VALUE(supportedModes_, supportedModes) };
      inline Result& setSupportedModes(vector<string> && supportedModes) { DARABONBA_PTR_SET_RVALUE(supportedModes_, supportedModes) };


    protected:
      // Indicates whether billable tokens are consumed. The value is true when level is ADVANCED.
      shared_ptr<bool> billable_ {};
      // The category code. You can use this value to group diagnostic items by category.
      shared_ptr<string> category_ {};
      // The diagnostic item description.
      shared_ptr<string> description_ {};
      // Indicates whether the cluster API is accessed.
      shared_ptr<bool> esApiRequired_ {};
      // The diagnostic item identifier.
      shared_ptr<string> key_ {};
      // The diagnostic item level. Valid values:
      // 
      // - BASIC: basic inspection item (free).
      // - ADVANCED: advanced inspection item (consumes billable tokens).
      shared_ptr<string> level_ {};
      // The diagnostic item name.
      shared_ptr<string> name_ {};
      // The sort order number for display.
      shared_ptr<int32_t> sortOrder_ {};
      // The supported execution modes. Basic items support RULE and AGENT. Advanced items support only AGENT.
      shared_ptr<vector<string>> supportedModes_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnosisItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDiagnosisItemsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDiagnosisItemsResponseBody::Result>) };
    inline vector<ListDiagnosisItemsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDiagnosisItemsResponseBody::Result>) };
    inline ListDiagnosisItemsResponseBody& setResult(const vector<ListDiagnosisItemsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDiagnosisItemsResponseBody& setResult(vector<ListDiagnosisItemsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned results.
    shared_ptr<vector<ListDiagnosisItemsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
