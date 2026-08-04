// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListCateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListCateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListCateInfoResponseBody() = default ;
    ListCateInfoResponseBody(const ListCateInfoResponseBody &) = default ;
    ListCateInfoResponseBody(ListCateInfoResponseBody &&) = default ;
    ListCateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCateInfoResponseBody() = default ;
    ListCateInfoResponseBody& operator=(const ListCateInfoResponseBody &) = default ;
    ListCateInfoResponseBody& operator=(ListCateInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CateId, cateId_);
        DARABONBA_PTR_TO_JSON(CateName, cateName_);
        DARABONBA_PTR_TO_JSON(ParentCateId, parentCateId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CateId, cateId_);
        DARABONBA_PTR_FROM_JSON(CateName, cateName_);
        DARABONBA_PTR_FROM_JSON(ParentCateId, parentCateId_);
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
      virtual bool empty() const override { return this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->parentCateId_ == nullptr; };
      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
      inline Result& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // cateName Field Functions 
      bool hasCateName() const { return this->cateName_ != nullptr;};
      void deleteCateName() { this->cateName_ = nullptr;};
      inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
      inline Result& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


      // parentCateId Field Functions 
      bool hasParentCateId() const { return this->parentCateId_ != nullptr;};
      void deleteParentCateId() { this->parentCateId_ = nullptr;};
      inline int64_t getParentCateId() const { DARABONBA_PTR_GET_DEFAULT(parentCateId_, 0L) };
      inline Result& setParentCateId(int64_t parentCateId) { DARABONBA_PTR_SET_VALUE(parentCateId_, parentCateId) };


    protected:
      // Category ID
      shared_ptr<int64_t> cateId_ {};
      // Category name
      shared_ptr<string> cateName_ {};
      // Parent category ID
      shared_ptr<int64_t> parentCateId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListCateInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCateInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListCateInfoResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListCateInfoResponseBody::Result>) };
    inline vector<ListCateInfoResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListCateInfoResponseBody::Result>) };
    inline ListCateInfoResponseBody& setResult(const vector<ListCateInfoResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListCateInfoResponseBody& setResult(vector<ListCateInfoResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Code encoding
    shared_ptr<int32_t> code_ {};
    // Message information
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned parameters
    shared_ptr<vector<ListCateInfoResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
