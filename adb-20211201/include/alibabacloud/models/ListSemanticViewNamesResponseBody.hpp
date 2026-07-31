// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEMANTICVIEWNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEMANTICVIEWNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListSemanticViewNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSemanticViewNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSemanticViewNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSemanticViewNamesResponseBody() = default ;
    ListSemanticViewNamesResponseBody(const ListSemanticViewNamesResponseBody &) = default ;
    ListSemanticViewNamesResponseBody(ListSemanticViewNamesResponseBody &&) = default ;
    ListSemanticViewNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSemanticViewNamesResponseBody() = default ;
    ListSemanticViewNamesResponseBody& operator=(const ListSemanticViewNamesResponseBody &) = default ;
    ListSemanticViewNamesResponseBody& operator=(ListSemanticViewNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(ViewName, viewName_);
        DARABONBA_PTR_TO_JSON(ViewSchema, viewSchema_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
        DARABONBA_PTR_FROM_JSON(ViewSchema, viewSchema_);
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
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->viewName_ == nullptr && this->viewSchema_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // viewName Field Functions 
      bool hasViewName() const { return this->viewName_ != nullptr;};
      void deleteViewName() { this->viewName_ = nullptr;};
      inline string getViewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
      inline Data& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


      // viewSchema Field Functions 
      bool hasViewSchema() const { return this->viewSchema_ != nullptr;};
      void deleteViewSchema() { this->viewSchema_ = nullptr;};
      inline string getViewSchema() const { DARABONBA_PTR_GET_DEFAULT(viewSchema_, "") };
      inline Data& setViewSchema(string viewSchema) { DARABONBA_PTR_SET_VALUE(viewSchema_, viewSchema) };


    protected:
      // The annotation of the semantic view.
      shared_ptr<string> comment_ {};
      // The name of the semantic view.
      shared_ptr<string> viewName_ {};
      // The schema in which the semantic view resides.
      shared_ptr<string> viewSchema_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSemanticViewNamesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSemanticViewNamesResponseBody::Data>) };
    inline vector<ListSemanticViewNamesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSemanticViewNamesResponseBody::Data>) };
    inline ListSemanticViewNamesResponseBody& setData(const vector<ListSemanticViewNamesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSemanticViewNamesResponseBody& setData(vector<ListSemanticViewNamesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSemanticViewNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result data.
    shared_ptr<vector<ListSemanticViewNamesResponseBody::Data>> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
