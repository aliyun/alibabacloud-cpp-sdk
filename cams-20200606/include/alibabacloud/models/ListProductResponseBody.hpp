// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListProductResponseBody() = default ;
    ListProductResponseBody(const ListProductResponseBody &) = default ;
    ListProductResponseBody(ListProductResponseBody &&) = default ;
    ListProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductResponseBody() = default ;
    ListProductResponseBody& operator=(const ListProductResponseBody &) = default ;
    ListProductResponseBody& operator=(ListProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Paging, paging_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Paging, paging_);
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
      class Paging : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Paging& obj) { 
          DARABONBA_PTR_TO_JSON(Cursors, cursors_);
        };
        friend void from_json(const Darabonba::Json& j, Paging& obj) { 
          DARABONBA_PTR_FROM_JSON(Cursors, cursors_);
        };
        Paging() = default ;
        Paging(const Paging &) = default ;
        Paging(Paging &&) = default ;
        Paging(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Paging() = default ;
        Paging& operator=(const Paging &) = default ;
        Paging& operator=(Paging &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Cursors : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cursors& obj) { 
            DARABONBA_PTR_TO_JSON(After, after_);
            DARABONBA_PTR_TO_JSON(Before, before_);
          };
          friend void from_json(const Darabonba::Json& j, Cursors& obj) { 
            DARABONBA_PTR_FROM_JSON(After, after_);
            DARABONBA_PTR_FROM_JSON(Before, before_);
          };
          Cursors() = default ;
          Cursors(const Cursors &) = default ;
          Cursors(Cursors &&) = default ;
          Cursors(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cursors() = default ;
          Cursors& operator=(const Cursors &) = default ;
          Cursors& operator=(Cursors &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->after_ == nullptr
        && this->before_ == nullptr; };
          // after Field Functions 
          bool hasAfter() const { return this->after_ != nullptr;};
          void deleteAfter() { this->after_ = nullptr;};
          inline string getAfter() const { DARABONBA_PTR_GET_DEFAULT(after_, "") };
          inline Cursors& setAfter(string after) { DARABONBA_PTR_SET_VALUE(after_, after) };


          // before Field Functions 
          bool hasBefore() const { return this->before_ != nullptr;};
          void deleteBefore() { this->before_ = nullptr;};
          inline string getBefore() const { DARABONBA_PTR_GET_DEFAULT(before_, "") };
          inline Cursors& setBefore(string before) { DARABONBA_PTR_SET_VALUE(before_, before) };


        protected:
          // The cursor that points to the end of the page of the returned data.
          shared_ptr<string> after_ {};
          // The cursor that points to the beginning of the page of the returned data.
          shared_ptr<string> before_ {};
        };

        virtual bool empty() const override { return this->cursors_ == nullptr; };
        // cursors Field Functions 
        bool hasCursors() const { return this->cursors_ != nullptr;};
        void deleteCursors() { this->cursors_ = nullptr;};
        inline const Paging::Cursors & getCursors() const { DARABONBA_PTR_GET_CONST(cursors_, Paging::Cursors) };
        inline Paging::Cursors getCursors() { DARABONBA_PTR_GET(cursors_, Paging::Cursors) };
        inline Paging& setCursors(const Paging::Cursors & cursors) { DARABONBA_PTR_SET_VALUE(cursors_, cursors) };
        inline Paging& setCursors(Paging::Cursors && cursors) { DARABONBA_PTR_SET_RVALUE(cursors_, cursors) };


      protected:
        // The cursors for pagination.
        shared_ptr<Paging::Cursors> cursors_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->paging_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Darabonba::Json> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getData() { DARABONBA_PTR_GET(data_, vector<Darabonba::Json>) };
      inline Model& setData(const vector<Darabonba::Json> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Model& setData(vector<Darabonba::Json> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // paging Field Functions 
      bool hasPaging() const { return this->paging_ != nullptr;};
      void deletePaging() { this->paging_ = nullptr;};
      inline const Model::Paging & getPaging() const { DARABONBA_PTR_GET_CONST(paging_, Model::Paging) };
      inline Model::Paging getPaging() { DARABONBA_PTR_GET(paging_, Model::Paging) };
      inline Model& setPaging(const Model::Paging & paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };
      inline Model& setPaging(Model::Paging && paging) { DARABONBA_PTR_SET_RVALUE(paging_, paging) };


    protected:
      // The returned data.
      shared_ptr<vector<Darabonba::Json>> data_ {};
      // The pagination details.
      shared_ptr<Model::Paging> paging_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListProductResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListProductResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListProductResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const ListProductResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, ListProductResponseBody::Model) };
    inline ListProductResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, ListProductResponseBody::Model) };
    inline ListProductResponseBody& setModel(const ListProductResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline ListProductResponseBody& setModel(ListProductResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProductResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The returned data.
    shared_ptr<ListProductResponseBody::Model> model_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
