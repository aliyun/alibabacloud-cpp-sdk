// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class SearchTlogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTlogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTlogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SearchTlogResponseBody() = default ;
    SearchTlogResponseBody(const SearchTlogResponseBody &) = default ;
    SearchTlogResponseBody(SearchTlogResponseBody &&) = default ;
    SearchTlogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTlogResponseBody() = default ;
    SearchTlogResponseBody& operator=(const SearchTlogResponseBody &) = default ;
    SearchTlogResponseBody& operator=(SearchTlogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Took, took_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(Trend, trend_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Took, took_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(Trend, trend_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->took_ == nullptr && this->total_ == nullptr && this->trend_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Darabonba::Json> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getData() { DARABONBA_PTR_GET(data_, vector<Darabonba::Json>) };
      inline Model& setData(const vector<Darabonba::Json> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Model& setData(vector<Darabonba::Json> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Model& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Model& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // took Field Functions 
      bool hasTook() const { return this->took_ != nullptr;};
      void deleteTook() { this->took_ = nullptr;};
      inline int32_t getTook() const { DARABONBA_PTR_GET_DEFAULT(took_, 0) };
      inline Model& setTook(int32_t took) { DARABONBA_PTR_SET_VALUE(took_, took) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Model& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // trend Field Functions 
      bool hasTrend() const { return this->trend_ != nullptr;};
      void deleteTrend() { this->trend_ = nullptr;};
      inline const vector<Darabonba::Json> & getTrend() const { DARABONBA_PTR_GET_CONST(trend_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getTrend() { DARABONBA_PTR_GET(trend_, vector<Darabonba::Json>) };
      inline Model& setTrend(const vector<Darabonba::Json> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
      inline Model& setTrend(vector<Darabonba::Json> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


    protected:
      shared_ptr<vector<Darabonba::Json>> data_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> took_ {};
      shared_ptr<int64_t> total_ {};
      shared_ptr<vector<Darabonba::Json>> trend_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int64_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0L) };
    inline SearchTlogResponseBody& setErrorCode(int64_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchTlogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const SearchTlogResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, SearchTlogResponseBody::Model) };
    inline SearchTlogResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, SearchTlogResponseBody::Model) };
    inline SearchTlogResponseBody& setModel(const SearchTlogResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline SearchTlogResponseBody& setModel(SearchTlogResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTlogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchTlogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> errorCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<SearchTlogResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
