// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNACLFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNACLFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnAclFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnAclFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnAclFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnAclFieldsResponseBody() = default ;
    DescribeDcdnAclFieldsResponseBody(const DescribeDcdnAclFieldsResponseBody &) = default ;
    DescribeDcdnAclFieldsResponseBody(DescribeDcdnAclFieldsResponseBody &&) = default ;
    DescribeDcdnAclFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnAclFieldsResponseBody() = default ;
    DescribeDcdnAclFieldsResponseBody& operator=(const DescribeDcdnAclFieldsResponseBody &) = default ;
    DescribeDcdnAclFieldsResponseBody& operator=(DescribeDcdnAclFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Fields, fields_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Fields, fields_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fields_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline string getFields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
      inline Content& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


    protected:
      // The rules and policies that were configured. The JSON string is decoded.
      shared_ptr<string> fields_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDcdnAclFieldsResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDcdnAclFieldsResponseBody::Content>) };
    inline vector<DescribeDcdnAclFieldsResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<DescribeDcdnAclFieldsResponseBody::Content>) };
    inline DescribeDcdnAclFieldsResponseBody& setContent(const vector<DescribeDcdnAclFieldsResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnAclFieldsResponseBody& setContent(vector<DescribeDcdnAclFieldsResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnAclFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the rules.
    shared_ptr<vector<DescribeDcdnAclFieldsResponseBody::Content>> content_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
