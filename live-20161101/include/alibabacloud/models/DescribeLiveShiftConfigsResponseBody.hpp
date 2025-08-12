// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESHIFTCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESHIFTCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveShiftConfigsResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveShiftConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveShiftConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveShiftConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveShiftConfigsResponseBody() = default ;
    DescribeLiveShiftConfigsResponseBody(const DescribeLiveShiftConfigsResponseBody &) = default ;
    DescribeLiveShiftConfigsResponseBody(DescribeLiveShiftConfigsResponseBody &&) = default ;
    DescribeLiveShiftConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveShiftConfigsResponseBody() = default ;
    DescribeLiveShiftConfigsResponseBody& operator=(const DescribeLiveShiftConfigsResponseBody &) = default ;
    DescribeLiveShiftConfigsResponseBody& operator=(DescribeLiveShiftConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeLiveShiftConfigsResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, DescribeLiveShiftConfigsResponseBodyContent) };
    inline DescribeLiveShiftConfigsResponseBodyContent content() { DARABONBA_PTR_GET(content_, DescribeLiveShiftConfigsResponseBodyContent) };
    inline DescribeLiveShiftConfigsResponseBody& setContent(const DescribeLiveShiftConfigsResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeLiveShiftConfigsResponseBody& setContent(DescribeLiveShiftConfigsResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveShiftConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time shifting configurations.
    std::shared_ptr<DescribeLiveShiftConfigsResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
