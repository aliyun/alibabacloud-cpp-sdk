// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOMMENDTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOMMENDTEMPLATESRESPONSEBODY_HPP_
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
  class RecommendTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecommendTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, RecommendTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    RecommendTemplatesResponseBody() = default ;
    RecommendTemplatesResponseBody(const RecommendTemplatesResponseBody &) = default ;
    RecommendTemplatesResponseBody(RecommendTemplatesResponseBody &&) = default ;
    RecommendTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecommendTemplatesResponseBody() = default ;
    RecommendTemplatesResponseBody& operator=(const RecommendTemplatesResponseBody &) = default ;
    RecommendTemplatesResponseBody& operator=(RecommendTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->templateName_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Result& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      shared_ptr<string> content_ {};
      // *
      // *
      // *
      // *
      // 
      // **
      // 
      // ****
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecommendTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<RecommendTemplatesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<RecommendTemplatesResponseBody::Result>) };
    inline vector<RecommendTemplatesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<RecommendTemplatesResponseBody::Result>) };
    inline RecommendTemplatesResponseBody& setResult(const vector<RecommendTemplatesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline RecommendTemplatesResponseBody& setResult(vector<RecommendTemplatesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<RecommendTemplatesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
