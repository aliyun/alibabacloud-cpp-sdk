// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDUPROBLEMSOLVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDUPROBLEMSOLVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class CreateEduProblemSolveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEduProblemSolveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEduProblemSolveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateEduProblemSolveRequest() = default ;
    CreateEduProblemSolveRequest(const CreateEduProblemSolveRequest &) = default ;
    CreateEduProblemSolveRequest(CreateEduProblemSolveRequest &&) = default ;
    CreateEduProblemSolveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEduProblemSolveRequest() = default ;
    CreateEduProblemSolveRequest& operator=(const CreateEduProblemSolveRequest &) = default ;
    CreateEduProblemSolveRequest& operator=(CreateEduProblemSolveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Query : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Query& obj) { 
        DARABONBA_PTR_TO_JSON(image, image_);
      };
      friend void from_json(const Darabonba::Json& j, Query& obj) { 
        DARABONBA_PTR_FROM_JSON(image, image_);
      };
      Query() = default ;
      Query(const Query &) = default ;
      Query(Query &&) = default ;
      Query(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Query() = default ;
      Query& operator=(const Query &) = default ;
      Query& operator=(Query &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Image : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Image& obj) { 
          DARABONBA_PTR_TO_JSON(base64, base64_);
          DARABONBA_PTR_TO_JSON(format, format_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(base64, base64_);
          DARABONBA_PTR_FROM_JSON(format, format_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Image() = default ;
        Image(const Image &) = default ;
        Image(Image &&) = default ;
        Image(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Image() = default ;
        Image& operator=(const Image &) = default ;
        Image& operator=(Image &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->base64_ == nullptr
        && this->format_ == nullptr && this->url_ == nullptr; };
        // base64 Field Functions 
        bool hasBase64() const { return this->base64_ != nullptr;};
        void deleteBase64() { this->base64_ = nullptr;};
        inline string getBase64() const { DARABONBA_PTR_GET_DEFAULT(base64_, "") };
        inline Image& setBase64(string base64) { DARABONBA_PTR_SET_VALUE(base64_, base64) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Image& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Image& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The Base64 encoding of the image.
        shared_ptr<string> base64_ {};
        // The image format. Valid values: jpg, jpeg, and png. The value must match the actual file format.
        shared_ptr<string> format_ {};
        // The image URL.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->image_ == nullptr; };
      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const Query::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, Query::Image) };
      inline Query::Image getImage() { DARABONBA_PTR_GET(image_, Query::Image) };
      inline Query& setImage(const Query::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Query& setImage(Query::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    protected:
      // The query image.
      shared_ptr<Query::Image> image_ {};
    };

    virtual bool empty() const override { return this->query_ == nullptr
        && this->requestId_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const CreateEduProblemSolveRequest::Query & getQuery() const { DARABONBA_PTR_GET_CONST(query_, CreateEduProblemSolveRequest::Query) };
    inline CreateEduProblemSolveRequest::Query getQuery() { DARABONBA_PTR_GET(query_, CreateEduProblemSolveRequest::Query) };
    inline CreateEduProblemSolveRequest& setQuery(const CreateEduProblemSolveRequest::Query & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline CreateEduProblemSolveRequest& setQuery(CreateEduProblemSolveRequest::Query && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEduProblemSolveRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query information.
    shared_ptr<CreateEduProblemSolveRequest::Query> query_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
