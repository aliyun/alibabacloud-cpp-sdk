// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWILDCARDBYTOPICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYWILDCARDBYTOPICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryWildcardByTopicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWildcardByTopicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWildcardByTopicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryWildcardByTopicResponseBody() = default ;
    QueryWildcardByTopicResponseBody(const QueryWildcardByTopicResponseBody &) = default ;
    QueryWildcardByTopicResponseBody(QueryWildcardByTopicResponseBody &&) = default ;
    QueryWildcardByTopicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWildcardByTopicResponseBody() = default ;
    QueryWildcardByTopicResponseBody& operator=(const QueryWildcardByTopicResponseBody &) = default ;
    QueryWildcardByTopicResponseBody& operator=(QueryWildcardByTopicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Limit, limit_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(WildcardList, wildcardList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Limit, limit_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(WildcardList, wildcardList_);
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
      virtual bool empty() const override { return this->limit_ == nullptr
        && this->total_ == nullptr && this->wildcardList_ == nullptr; };
      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
      inline Data& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Data& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // wildcardList Field Functions 
      bool hasWildcardList() const { return this->wildcardList_ != nullptr;};
      void deleteWildcardList() { this->wildcardList_ = nullptr;};
      inline const vector<string> & getWildcardList() const { DARABONBA_PTR_GET_CONST(wildcardList_, vector<string>) };
      inline vector<string> getWildcardList() { DARABONBA_PTR_GET(wildcardList_, vector<string>) };
      inline Data& setWildcardList(const vector<string> & wildcardList) { DARABONBA_PTR_SET_VALUE(wildcardList_, wildcardList) };
      inline Data& setWildcardList(vector<string> && wildcardList) { DARABONBA_PTR_SET_RVALUE(wildcardList_, wildcardList) };


    protected:
      // The maximum number of results returned.
      shared_ptr<string> limit_ {};
      // The total number of query results.
      shared_ptr<string> total_ {};
      // The wildcard list.
      shared_ptr<vector<string>> wildcardList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryWildcardByTopicResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryWildcardByTopicResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryWildcardByTopicResponseBody::Data) };
    inline QueryWildcardByTopicResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryWildcardByTopicResponseBody::Data) };
    inline QueryWildcardByTopicResponseBody& setData(const QueryWildcardByTopicResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryWildcardByTopicResponseBody& setData(QueryWildcardByTopicResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryWildcardByTopicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryWildcardByTopicResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int32_t> code_ {};
    // The dataset of parent topic information.
    shared_ptr<QueryWildcardByTopicResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
