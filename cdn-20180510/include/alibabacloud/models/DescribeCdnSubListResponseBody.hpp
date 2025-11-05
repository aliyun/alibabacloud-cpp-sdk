// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSUBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSUBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnSubListResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSubListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSubListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSubListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnSubListResponseBody() = default ;
    DescribeCdnSubListResponseBody(const DescribeCdnSubListResponseBody &) = default ;
    DescribeCdnSubListResponseBody(DescribeCdnSubListResponseBody &&) = default ;
    DescribeCdnSubListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSubListResponseBody() = default ;
    DescribeCdnSubListResponseBody& operator=(const DescribeCdnSubListResponseBody &) = default ;
    DescribeCdnSubListResponseBody& operator=(DescribeCdnSubListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeCdnSubListResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, DescribeCdnSubListResponseBodyContent) };
    inline DescribeCdnSubListResponseBodyContent content() { DARABONBA_PTR_GET(content_, DescribeCdnSubListResponseBodyContent) };
    inline DescribeCdnSubListResponseBody& setContent(const DescribeCdnSubListResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeCdnSubListResponseBody& setContent(DescribeCdnSubListResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnSubListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the custom report task.
    std::shared_ptr<DescribeCdnSubListResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
