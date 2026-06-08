// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUMMARIESREQUEST_HPP_
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
  class UpdateSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateSummariesRequest() = default ;
    UpdateSummariesRequest(const UpdateSummariesRequest &) = default ;
    UpdateSummariesRequest(UpdateSummariesRequest &&) = default ;
    UpdateSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSummariesRequest() = default ;
    UpdateSummariesRequest& operator=(const UpdateSummariesRequest &) = default ;
    UpdateSummariesRequest& operator=(UpdateSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(element, element_);
        DARABONBA_PTR_TO_JSON(ellipsis, ellipsis_);
        DARABONBA_PTR_TO_JSON(field, field_);
        DARABONBA_PTR_TO_JSON(len, len_);
        DARABONBA_PTR_TO_JSON(snippet, snippet_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(element, element_);
        DARABONBA_PTR_FROM_JSON(ellipsis, ellipsis_);
        DARABONBA_PTR_FROM_JSON(field, field_);
        DARABONBA_PTR_FROM_JSON(len, len_);
        DARABONBA_PTR_FROM_JSON(snippet, snippet_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->element_ == nullptr
        && this->ellipsis_ == nullptr && this->field_ == nullptr && this->len_ == nullptr && this->snippet_ == nullptr; };
      // element Field Functions 
      bool hasElement() const { return this->element_ != nullptr;};
      void deleteElement() { this->element_ = nullptr;};
      inline string getElement() const { DARABONBA_PTR_GET_DEFAULT(element_, "") };
      inline Body& setElement(string element) { DARABONBA_PTR_SET_VALUE(element_, element) };


      // ellipsis Field Functions 
      bool hasEllipsis() const { return this->ellipsis_ != nullptr;};
      void deleteEllipsis() { this->ellipsis_ = nullptr;};
      inline string getEllipsis() const { DARABONBA_PTR_GET_DEFAULT(ellipsis_, "") };
      inline Body& setEllipsis(string ellipsis) { DARABONBA_PTR_SET_VALUE(ellipsis_, ellipsis) };


      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline Body& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // len Field Functions 
      bool hasLen() const { return this->len_ != nullptr;};
      void deleteLen() { this->len_ = nullptr;};
      inline int32_t getLen() const { DARABONBA_PTR_GET_DEFAULT(len_, 0) };
      inline Body& setLen(int32_t len) { DARABONBA_PTR_SET_VALUE(len_, len) };


      // snippet Field Functions 
      bool hasSnippet() const { return this->snippet_ != nullptr;};
      void deleteSnippet() { this->snippet_ = nullptr;};
      inline int32_t getSnippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, 0) };
      inline Body& setSnippet(int32_t snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


    protected:
      // The HTML tag that is used to highlight terms in red.
      shared_ptr<string> element_ {};
      // The connector that is used to connect segments.
      shared_ptr<string> ellipsis_ {};
      // The field.
      shared_ptr<string> field_ {};
      // The length of a segment.
      shared_ptr<int32_t> len_ {};
      // The number of segments.
      shared_ptr<int32_t> snippet_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateSummariesRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateSummariesRequest::Body>) };
    inline vector<UpdateSummariesRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<UpdateSummariesRequest::Body>) };
    inline UpdateSummariesRequest& setBody(const vector<UpdateSummariesRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSummariesRequest& setBody(vector<UpdateSummariesRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateSummariesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body.
    shared_ptr<vector<UpdateSummariesRequest::Body>> body_ {};
    // Specifies whether the request is a dry run.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
