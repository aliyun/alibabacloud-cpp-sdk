// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYPROCESSORNERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYPROCESSORNERSRESPONSEBODY_HPP_
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
  class ListQueryProcessorNersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryProcessorNersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryProcessorNersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListQueryProcessorNersResponseBody() = default ;
    ListQueryProcessorNersResponseBody(const ListQueryProcessorNersResponseBody &) = default ;
    ListQueryProcessorNersResponseBody(ListQueryProcessorNersResponseBody &&) = default ;
    ListQueryProcessorNersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryProcessorNersResponseBody() = default ;
    ListQueryProcessorNersResponseBody& operator=(const ListQueryProcessorNersResponseBody &) = default ;
    ListQueryProcessorNersResponseBody& operator=(ListQueryProcessorNersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(label, label_);
        DARABONBA_PTR_TO_JSON(order, order_);
        DARABONBA_PTR_TO_JSON(priority, priority_);
        DARABONBA_PTR_TO_JSON(tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(label, label_);
        DARABONBA_PTR_FROM_JSON(order, order_);
        DARABONBA_PTR_FROM_JSON(priority, priority_);
        DARABONBA_PTR_FROM_JSON(tag, tag_);
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
      virtual bool empty() const override { return this->label_ == nullptr
        && this->order_ == nullptr && this->priority_ == nullptr && this->tag_ == nullptr; };
      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
      inline Result& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline Result& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Result& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // The name of the entity type.
      shared_ptr<string> label_ {};
      // The sort order within the same priority level. A smaller value indicates a higher priority. The default value is 0.
      shared_ptr<int32_t> order_ {};
      // The priority level of the entity type. Valid values:
      // 
      // - HIGH
      // 
      // - MIDDLE
      // 
      // - LOW
      shared_ptr<string> priority_ {};
      // The internal name of the entity type.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQueryProcessorNersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListQueryProcessorNersResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListQueryProcessorNersResponseBody::Result>) };
    inline vector<ListQueryProcessorNersResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListQueryProcessorNersResponseBody::Result>) };
    inline ListQueryProcessorNersResponseBody& setResult(const vector<ListQueryProcessorNersResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListQueryProcessorNersResponseBody& setResult(vector<ListQueryProcessorNersResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The priority settings of entity types.
    // 
    // For more information, see [Priority settings of entity types](https://help.aliyun.com/document_detail/173616.html).
    shared_ptr<vector<ListQueryProcessorNersResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
