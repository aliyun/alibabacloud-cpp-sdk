// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERANALYZERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERANALYZERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListUserAnalyzersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAnalyzersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAnalyzersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListUserAnalyzersResponseBody() = default ;
    ListUserAnalyzersResponseBody(const ListUserAnalyzersResponseBody &) = default ;
    ListUserAnalyzersResponseBody(ListUserAnalyzersResponseBody &&) = default ;
    ListUserAnalyzersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAnalyzersResponseBody() = default ;
    ListUserAnalyzersResponseBody& operator=(const ListUserAnalyzersResponseBody &) = default ;
    ListUserAnalyzersResponseBody& operator=(ListUserAnalyzersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(available, available_);
        DARABONBA_PTR_TO_JSON(business, business_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(dicts, dicts_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(available, available_);
        DARABONBA_PTR_FROM_JSON(business, business_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(dicts, dicts_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
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
      class Dicts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dicts& obj) { 
          DARABONBA_PTR_TO_JSON(available, available_);
          DARABONBA_PTR_TO_JSON(created, created_);
          DARABONBA_PTR_TO_JSON(entriesCount, entriesCount_);
          DARABONBA_PTR_TO_JSON(entriesLimit, entriesLimit_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(updated, updated_);
        };
        friend void from_json(const Darabonba::Json& j, Dicts& obj) { 
          DARABONBA_PTR_FROM_JSON(available, available_);
          DARABONBA_PTR_FROM_JSON(created, created_);
          DARABONBA_PTR_FROM_JSON(entriesCount, entriesCount_);
          DARABONBA_PTR_FROM_JSON(entriesLimit, entriesLimit_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(updated, updated_);
        };
        Dicts() = default ;
        Dicts(const Dicts &) = default ;
        Dicts(Dicts &&) = default ;
        Dicts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dicts() = default ;
        Dicts& operator=(const Dicts &) = default ;
        Dicts& operator=(Dicts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->available_ == nullptr
        && this->created_ == nullptr && this->entriesCount_ == nullptr && this->entriesLimit_ == nullptr && this->id_ == nullptr && this->type_ == nullptr
        && this->updated_ == nullptr; };
        // available Field Functions 
        bool hasAvailable() const { return this->available_ != nullptr;};
        void deleteAvailable() { this->available_ = nullptr;};
        inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
        inline Dicts& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


        // created Field Functions 
        bool hasCreated() const { return this->created_ != nullptr;};
        void deleteCreated() { this->created_ = nullptr;};
        inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
        inline Dicts& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


        // entriesCount Field Functions 
        bool hasEntriesCount() const { return this->entriesCount_ != nullptr;};
        void deleteEntriesCount() { this->entriesCount_ = nullptr;};
        inline int32_t getEntriesCount() const { DARABONBA_PTR_GET_DEFAULT(entriesCount_, 0) };
        inline Dicts& setEntriesCount(int32_t entriesCount) { DARABONBA_PTR_SET_VALUE(entriesCount_, entriesCount) };


        // entriesLimit Field Functions 
        bool hasEntriesLimit() const { return this->entriesLimit_ != nullptr;};
        void deleteEntriesLimit() { this->entriesLimit_ = nullptr;};
        inline int32_t getEntriesLimit() const { DARABONBA_PTR_GET_DEFAULT(entriesLimit_, 0) };
        inline Dicts& setEntriesLimit(int32_t entriesLimit) { DARABONBA_PTR_SET_VALUE(entriesLimit_, entriesLimit) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Dicts& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Dicts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updated Field Functions 
        bool hasUpdated() const { return this->updated_ != nullptr;};
        void deleteUpdated() { this->updated_ = nullptr;};
        inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
        inline Dicts& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      protected:
        // Indicates whether the dictionary is available.
        shared_ptr<bool> available_ {};
        // The timestamp when the dictionary was created.
        shared_ptr<int32_t> created_ {};
        // The number of entries.
        shared_ptr<int32_t> entriesCount_ {};
        // The maximum number of entries in the dictionary.
        shared_ptr<int32_t> entriesLimit_ {};
        // The ID of the dictionary.
        shared_ptr<string> id_ {};
        // The type of the dictionary. Valid value:
        // 
        // - segment: A dictionary for word segmentation.
        shared_ptr<string> type_ {};
        // The timestamp when the dictionary was last updated.
        shared_ptr<int32_t> updated_ {};
      };

      virtual bool empty() const override { return this->available_ == nullptr
        && this->business_ == nullptr && this->created_ == nullptr && this->dicts_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->updated_ == nullptr; };
      // available Field Functions 
      bool hasAvailable() const { return this->available_ != nullptr;};
      void deleteAvailable() { this->available_ = nullptr;};
      inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
      inline Result& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


      // business Field Functions 
      bool hasBusiness() const { return this->business_ != nullptr;};
      void deleteBusiness() { this->business_ = nullptr;};
      inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
      inline Result& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
      inline Result& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // dicts Field Functions 
      bool hasDicts() const { return this->dicts_ != nullptr;};
      void deleteDicts() { this->dicts_ = nullptr;};
      inline const vector<Result::Dicts> & getDicts() const { DARABONBA_PTR_GET_CONST(dicts_, vector<Result::Dicts>) };
      inline vector<Result::Dicts> getDicts() { DARABONBA_PTR_GET(dicts_, vector<Result::Dicts>) };
      inline Result& setDicts(const vector<Result::Dicts> & dicts) { DARABONBA_PTR_SET_VALUE(dicts_, dicts) };
      inline Result& setDicts(vector<Result::Dicts> && dicts) { DARABONBA_PTR_SET_RVALUE(dicts_, dicts) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
      inline Result& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // Indicates whether the analyzer is available.
      shared_ptr<bool> available_ {};
      // The basic analyzer. Valid values:
      // 
      // - chn_standard: [A general-purpose analyzer for Chinese](https://help.aliyun.com/document_detail/179424.html).
      // 
      // - chn_scene_name: An analyzer for Chinese person names.
      // 
      // - chn_ecommerce: [An analyzer for e-commerce in Chinese](https://help.aliyun.com/document_detail/179424.html).
      // 
      // - chn_it_content: [An analyzer for IT content in Chinese](https://help.aliyun.com/document_detail/179424.html).
      // 
      // - en_min: A fine-grained analyzer for English.
      // 
      // - th_standard: A general-purpose analyzer for Thai.
      // 
      // - th_ecommerce: An analyzer for e-commerce in Thai.
      // 
      // - vn_standard: A general-purpose analyzer for Vietnamese.
      // 
      // - chn_community_it: An analyzer for IT community content in Chinese.
      // 
      // - chn_ecommerce_general: A general-purpose analyzer for the e-commerce industry in Chinese.
      // 
      // - chn_esports_general: A general-purpose analyzer for the gaming industry in Chinese.
      // 
      // - chn_edu_question: An analyzer for question-answering search in the education industry in Chinese.
      shared_ptr<string> business_ {};
      // The timestamp when the analyzer was created.
      shared_ptr<int32_t> created_ {};
      // The dictionaries that the custom analyzer uses.
      // 
      // For more information, see [UserDict](https://help.aliyun.com/document_detail/178933.html).
      shared_ptr<vector<Result::Dicts>> dicts_ {};
      // The ID of the custom analyzer.
      shared_ptr<string> id_ {};
      // The name of the custom analyzer.
      shared_ptr<string> name_ {};
      // The timestamp when the analyzer was last updated.
      shared_ptr<int32_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserAnalyzersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListUserAnalyzersResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListUserAnalyzersResponseBody::Result>) };
    inline vector<ListUserAnalyzersResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListUserAnalyzersResponseBody::Result>) };
    inline ListUserAnalyzersResponseBody& setResult(const vector<ListUserAnalyzersResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListUserAnalyzersResponseBody& setResult(vector<ListUserAnalyzersResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserAnalyzersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of custom analyzers.
    // 
    // For more information, see [UserAnalyzer](https://help.aliyun.com/document_detail/178934.html).
    shared_ptr<vector<ListUserAnalyzersResponseBody::Result>> result_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
