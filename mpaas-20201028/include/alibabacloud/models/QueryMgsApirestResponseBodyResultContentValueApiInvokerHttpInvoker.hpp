// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEAPIINVOKERHTTPINVOKER_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEAPIINVOKERHTTPINVOKER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& obj) { 
      DARABONBA_PTR_TO_JSON(Charset, charset_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& obj) { 
      DARABONBA_PTR_FROM_JSON(Charset, charset_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker() = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker(const QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker &) = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker(QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker &&) = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker() = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& operator=(const QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker &) = default ;
    QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& operator=(QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->charset_ != nullptr
        && this->contentType_ != nullptr && this->host_ != nullptr && this->method_ != nullptr && this->path_ != nullptr; };
    // charset Field Functions 
    bool hasCharset() const { return this->charset_ != nullptr;};
    void deleteCharset() { this->charset_ = nullptr;};
    inline string charset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueApiInvokerHttpInvoker& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<string> charset_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
