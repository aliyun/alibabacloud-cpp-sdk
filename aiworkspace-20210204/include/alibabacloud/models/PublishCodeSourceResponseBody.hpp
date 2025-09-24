// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHCODESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHCODESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class PublishCodeSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishCodeSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishCodeSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PublishCodeSourceResponseBody() = default ;
    PublishCodeSourceResponseBody(const PublishCodeSourceResponseBody &) = default ;
    PublishCodeSourceResponseBody(PublishCodeSourceResponseBody &&) = default ;
    PublishCodeSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishCodeSourceResponseBody() = default ;
    PublishCodeSourceResponseBody& operator=(const PublishCodeSourceResponseBody &) = default ;
    PublishCodeSourceResponseBody& operator=(PublishCodeSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeSourceId_ != nullptr
        && this->requestId_ != nullptr; };
    // codeSourceId Field Functions 
    bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
    void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
    inline string codeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
    inline PublishCodeSourceResponseBody& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishCodeSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the code source that is successfully published.
    std::shared_ptr<string> codeSourceId_ = nullptr;
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
