// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPLAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOUTIAOLIVEPLAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeToutiaoLivePlayResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeToutiaoLivePlayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeToutiaoLivePlayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeToutiaoLivePlayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeToutiaoLivePlayResponseBody() = default ;
    DescribeToutiaoLivePlayResponseBody(const DescribeToutiaoLivePlayResponseBody &) = default ;
    DescribeToutiaoLivePlayResponseBody(DescribeToutiaoLivePlayResponseBody &&) = default ;
    DescribeToutiaoLivePlayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeToutiaoLivePlayResponseBody() = default ;
    DescribeToutiaoLivePlayResponseBody& operator=(const DescribeToutiaoLivePlayResponseBody &) = default ;
    DescribeToutiaoLivePlayResponseBody& operator=(DescribeToutiaoLivePlayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->description_ != nullptr && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeToutiaoLivePlayResponseBodyContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeToutiaoLivePlayResponseBodyContent>) };
    inline vector<DescribeToutiaoLivePlayResponseBodyContent> content() { DARABONBA_PTR_GET(content_, vector<DescribeToutiaoLivePlayResponseBodyContent>) };
    inline DescribeToutiaoLivePlayResponseBody& setContent(const vector<DescribeToutiaoLivePlayResponseBodyContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeToutiaoLivePlayResponseBody& setContent(vector<DescribeToutiaoLivePlayResponseBodyContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeToutiaoLivePlayResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeToutiaoLivePlayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the live stream.
    std::shared_ptr<vector<DescribeToutiaoLivePlayResponseBodyContent>> content_ = nullptr;
    // The description of the response status.
    std::shared_ptr<string> description_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
