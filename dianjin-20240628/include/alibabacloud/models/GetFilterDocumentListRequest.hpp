// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILTERDOCUMENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILTERDOCUMENTLISTREQUEST_HPP_
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
  class GetFilterDocumentListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFilterDocumentListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(and, and_);
      DARABONBA_PTR_TO_JSON(docIdList, docIdList_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(or, or_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFilterDocumentListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(and, and_);
      DARABONBA_PTR_FROM_JSON(docIdList, docIdList_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(or, or_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetFilterDocumentListRequest() = default ;
    GetFilterDocumentListRequest(const GetFilterDocumentListRequest &) = default ;
    GetFilterDocumentListRequest(GetFilterDocumentListRequest &&) = default ;
    GetFilterDocumentListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFilterDocumentListRequest() = default ;
    GetFilterDocumentListRequest& operator=(const GetFilterDocumentListRequest &) = default ;
    GetFilterDocumentListRequest& operator=(GetFilterDocumentListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Or : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Or& obj) { 
        DARABONBA_PTR_TO_JSON(boost, boost_);
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(operator, operator_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Or& obj) { 
        DARABONBA_PTR_FROM_JSON(boost, boost_);
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(operator, operator_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Or() = default ;
      Or(const Or &) = default ;
      Or(Or &&) = default ;
      Or(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Or() = default ;
      Or& operator=(const Or &) = default ;
      Or& operator=(Or &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->boost_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
      // boost Field Functions 
      bool hasBoost() const { return this->boost_ != nullptr;};
      void deleteBoost() { this->boost_ = nullptr;};
      inline float getBoost() const { DARABONBA_PTR_GET_DEFAULT(boost_, 0.0) };
      inline Or& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Or& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Or& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Or& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<float> boost_ {};
      shared_ptr<string> key_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> value_ {};
    };

    class And : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const And& obj) { 
        DARABONBA_PTR_TO_JSON(boost, boost_);
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(operator, operator_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, And& obj) { 
        DARABONBA_PTR_FROM_JSON(boost, boost_);
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(operator, operator_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      And() = default ;
      And(const And &) = default ;
      And(And &&) = default ;
      And(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~And() = default ;
      And& operator=(const And &) = default ;
      And& operator=(And &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->boost_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
      // boost Field Functions 
      bool hasBoost() const { return this->boost_ != nullptr;};
      void deleteBoost() { this->boost_ = nullptr;};
      inline float getBoost() const { DARABONBA_PTR_GET_DEFAULT(boost_, 0.0) };
      inline And& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline And& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline And& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline And& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<float> boost_ {};
      shared_ptr<string> key_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->and_ == nullptr
        && this->docIdList_ == nullptr && this->libraryId_ == nullptr && this->or_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->status_ == nullptr; };
    // and Field Functions 
    bool hasAnd() const { return this->and_ != nullptr;};
    void deleteAnd() { this->and_ = nullptr;};
    inline const vector<GetFilterDocumentListRequest::And> & getAnd() const { DARABONBA_PTR_GET_CONST(and_, vector<GetFilterDocumentListRequest::And>) };
    inline vector<GetFilterDocumentListRequest::And> getAnd() { DARABONBA_PTR_GET(and_, vector<GetFilterDocumentListRequest::And>) };
    inline GetFilterDocumentListRequest& setAnd(const vector<GetFilterDocumentListRequest::And> & _and) { DARABONBA_PTR_SET_VALUE(and_, _and) };
    inline GetFilterDocumentListRequest& setAnd(vector<GetFilterDocumentListRequest::And> && _and) { DARABONBA_PTR_SET_RVALUE(and_, _and) };


    // docIdList Field Functions 
    bool hasDocIdList() const { return this->docIdList_ != nullptr;};
    void deleteDocIdList() { this->docIdList_ = nullptr;};
    inline const vector<string> & getDocIdList() const { DARABONBA_PTR_GET_CONST(docIdList_, vector<string>) };
    inline vector<string> getDocIdList() { DARABONBA_PTR_GET(docIdList_, vector<string>) };
    inline GetFilterDocumentListRequest& setDocIdList(const vector<string> & docIdList) { DARABONBA_PTR_SET_VALUE(docIdList_, docIdList) };
    inline GetFilterDocumentListRequest& setDocIdList(vector<string> && docIdList) { DARABONBA_PTR_SET_RVALUE(docIdList_, docIdList) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GetFilterDocumentListRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // or Field Functions 
    bool hasOr() const { return this->or_ != nullptr;};
    void deleteOr() { this->or_ = nullptr;};
    inline const vector<GetFilterDocumentListRequest::Or> & getOr() const { DARABONBA_PTR_GET_CONST(or_, vector<GetFilterDocumentListRequest::Or>) };
    inline vector<GetFilterDocumentListRequest::Or> getOr() { DARABONBA_PTR_GET(or_, vector<GetFilterDocumentListRequest::Or>) };
    inline GetFilterDocumentListRequest& setOr(const vector<GetFilterDocumentListRequest::Or> & _or) { DARABONBA_PTR_SET_VALUE(or_, _or) };
    inline GetFilterDocumentListRequest& setOr(vector<GetFilterDocumentListRequest::Or> && _or) { DARABONBA_PTR_SET_RVALUE(or_, _or) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetFilterDocumentListRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetFilterDocumentListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline GetFilterDocumentListRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline GetFilterDocumentListRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    shared_ptr<vector<GetFilterDocumentListRequest::And>> and_ {};
    shared_ptr<vector<string>> docIdList_ {};
    // This parameter is required.
    shared_ptr<string> libraryId_ {};
    shared_ptr<vector<GetFilterDocumentListRequest::Or>> or_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<string>> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
