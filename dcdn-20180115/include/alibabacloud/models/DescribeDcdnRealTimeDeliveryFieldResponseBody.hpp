// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREALTIMEDELIVERYFIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREALTIMEDELIVERYFIELDRESPONSEBODY_HPP_
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
  class DescribeDcdnRealTimeDeliveryFieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRealTimeDeliveryFieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRealTimeDeliveryFieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnRealTimeDeliveryFieldResponseBody() = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody(const DescribeDcdnRealTimeDeliveryFieldResponseBody &) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody(DescribeDcdnRealTimeDeliveryFieldResponseBody &&) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRealTimeDeliveryFieldResponseBody() = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody& operator=(const DescribeDcdnRealTimeDeliveryFieldResponseBody &) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody& operator=(DescribeDcdnRealTimeDeliveryFieldResponseBody &&) = default ;
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
      class Fields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Fields& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        };
        friend void from_json(const Darabonba::Json& j, Fields& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        };
        Fields() = default ;
        Fields(const Fields &) = default ;
        Fields(Fields &&) = default ;
        Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Fields() = default ;
        Fields& operator=(const Fields &) = default ;
        Fields& operator=(Fields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->fieldName_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Fields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline Fields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      protected:
        // The description of the field.
        shared_ptr<string> description_ {};
        // The name of the field. For more information about fields in real-time log entries, see [Fields in a real-time log](https://help.aliyun.com/document_detail/324199.html).
        shared_ptr<string> fieldName_ {};
      };

      virtual bool empty() const override { return this->fields_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline const vector<Content::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Content::Fields>) };
      inline vector<Content::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<Content::Fields>) };
      inline Content& setFields(const vector<Content::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
      inline Content& setFields(vector<Content::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    protected:
      shared_ptr<vector<Content::Fields>> fields_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeDcdnRealTimeDeliveryFieldResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeDcdnRealTimeDeliveryFieldResponseBody::Content) };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeDcdnRealTimeDeliveryFieldResponseBody::Content) };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBody& setContent(const DescribeDcdnRealTimeDeliveryFieldResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBody& setContent(DescribeDcdnRealTimeDeliveryFieldResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<DescribeDcdnRealTimeDeliveryFieldResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
