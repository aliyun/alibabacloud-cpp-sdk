// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTESAIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTESAIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListESAIPInfoResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListESAIPInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListESAIPInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListESAIPInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListESAIPInfoResponseBody() = default ;
    ListESAIPInfoResponseBody(const ListESAIPInfoResponseBody &) = default ;
    ListESAIPInfoResponseBody(ListESAIPInfoResponseBody &&) = default ;
    ListESAIPInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListESAIPInfoResponseBody() = default ;
    ListESAIPInfoResponseBody& operator=(const ListESAIPInfoResponseBody &) = default ;
    ListESAIPInfoResponseBody& operator=(ListESAIPInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<ListESAIPInfoResponseBodyContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<ListESAIPInfoResponseBodyContent>) };
    inline vector<ListESAIPInfoResponseBodyContent> content() { DARABONBA_PTR_GET(content_, vector<ListESAIPInfoResponseBodyContent>) };
    inline ListESAIPInfoResponseBody& setContent(const vector<ListESAIPInfoResponseBodyContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListESAIPInfoResponseBody& setContent(vector<ListESAIPInfoResponseBodyContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListESAIPInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that are returned.
    std::shared_ptr<vector<ListESAIPInfoResponseBodyContent>> content_ = nullptr;
    // The request ID.
    // 
    // Example D03F9502-6653-127C-8A5F-0647197\\*\\*\\*\\*\\*
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
