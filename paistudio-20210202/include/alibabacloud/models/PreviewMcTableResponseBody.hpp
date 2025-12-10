// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWMCTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWMCTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class PreviewMCTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewMCTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewMCTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PreviewMCTableResponseBody() = default ;
    PreviewMCTableResponseBody(const PreviewMCTableResponseBody &) = default ;
    PreviewMCTableResponseBody(PreviewMCTableResponseBody &&) = default ;
    PreviewMCTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewMCTableResponseBody() = default ;
    PreviewMCTableResponseBody& operator=(const PreviewMCTableResponseBody &) = default ;
    PreviewMCTableResponseBody& operator=(PreviewMCTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<vector<string>> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<vector<string>>) };
    inline vector<vector<string>> content() { DARABONBA_PTR_GET(content_, vector<vector<string>>) };
    inline PreviewMCTableResponseBody& setContent(const vector<vector<string>> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline PreviewMCTableResponseBody& setContent(vector<vector<string>> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewMCTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<vector<string>>> content_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
