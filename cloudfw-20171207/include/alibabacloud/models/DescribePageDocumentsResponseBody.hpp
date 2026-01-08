// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPAGEDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPAGEDOCUMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePageDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePageDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Docs, docs_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(More, more_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePageDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Docs, docs_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(More, more_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePageDocumentsResponseBody() = default ;
    DescribePageDocumentsResponseBody(const DescribePageDocumentsResponseBody &) = default ;
    DescribePageDocumentsResponseBody(DescribePageDocumentsResponseBody &&) = default ;
    DescribePageDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePageDocumentsResponseBody() = default ;
    DescribePageDocumentsResponseBody& operator=(const DescribePageDocumentsResponseBody &) = default ;
    DescribePageDocumentsResponseBody& operator=(DescribePageDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class More : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const More& obj) { 
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, More& obj) { 
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      More() = default ;
      More(const More &) = default ;
      More(More &&) = default ;
      More(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~More() = default ;
      More& operator=(const More &) = default ;
      More& operator=(More &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->title_ == nullptr
        && this->url_ == nullptr; };
      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline More& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline More& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    class Docs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Docs& obj) { 
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Docs& obj) { 
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Docs() = default ;
      Docs(const Docs &) = default ;
      Docs(Docs &&) = default ;
      Docs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Docs() = default ;
      Docs& operator=(const Docs &) = default ;
      Docs& operator=(Docs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->title_ == nullptr
        && this->url_ == nullptr; };
      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Docs& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Docs& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->docs_ == nullptr
        && this->imageUrl_ == nullptr && this->module_ == nullptr && this->more_ == nullptr && this->requestId_ == nullptr; };
    // docs Field Functions 
    bool hasDocs() const { return this->docs_ != nullptr;};
    void deleteDocs() { this->docs_ = nullptr;};
    inline const vector<DescribePageDocumentsResponseBody::Docs> & getDocs() const { DARABONBA_PTR_GET_CONST(docs_, vector<DescribePageDocumentsResponseBody::Docs>) };
    inline vector<DescribePageDocumentsResponseBody::Docs> getDocs() { DARABONBA_PTR_GET(docs_, vector<DescribePageDocumentsResponseBody::Docs>) };
    inline DescribePageDocumentsResponseBody& setDocs(const vector<DescribePageDocumentsResponseBody::Docs> & docs) { DARABONBA_PTR_SET_VALUE(docs_, docs) };
    inline DescribePageDocumentsResponseBody& setDocs(vector<DescribePageDocumentsResponseBody::Docs> && docs) { DARABONBA_PTR_SET_RVALUE(docs_, docs) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribePageDocumentsResponseBody& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribePageDocumentsResponseBody& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // more Field Functions 
    bool hasMore() const { return this->more_ != nullptr;};
    void deleteMore() { this->more_ = nullptr;};
    inline const DescribePageDocumentsResponseBody::More & getMore() const { DARABONBA_PTR_GET_CONST(more_, DescribePageDocumentsResponseBody::More) };
    inline DescribePageDocumentsResponseBody::More getMore() { DARABONBA_PTR_GET(more_, DescribePageDocumentsResponseBody::More) };
    inline DescribePageDocumentsResponseBody& setMore(const DescribePageDocumentsResponseBody::More & more) { DARABONBA_PTR_SET_VALUE(more_, more) };
    inline DescribePageDocumentsResponseBody& setMore(DescribePageDocumentsResponseBody::More && more) { DARABONBA_PTR_SET_RVALUE(more_, more) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePageDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribePageDocumentsResponseBody::Docs>> docs_ {};
    shared_ptr<string> imageUrl_ {};
    shared_ptr<string> module_ {};
    shared_ptr<DescribePageDocumentsResponseBody::More> more_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
