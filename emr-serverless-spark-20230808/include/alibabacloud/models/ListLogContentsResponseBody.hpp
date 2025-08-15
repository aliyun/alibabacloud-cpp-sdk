// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGCONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGCONTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLogContentsResponseBodyListLogContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLogContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(listLogContent, listLogContent_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(listLogContent, listLogContent_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListLogContentsResponseBody() = default ;
    ListLogContentsResponseBody(const ListLogContentsResponseBody &) = default ;
    ListLogContentsResponseBody(ListLogContentsResponseBody &&) = default ;
    ListLogContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogContentsResponseBody() = default ;
    ListLogContentsResponseBody& operator=(const ListLogContentsResponseBody &) = default ;
    ListLogContentsResponseBody& operator=(ListLogContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listLogContent_ != nullptr
        && this->requestId_ != nullptr; };
    // listLogContent Field Functions 
    bool hasListLogContent() const { return this->listLogContent_ != nullptr;};
    void deleteListLogContent() { this->listLogContent_ = nullptr;};
    inline const ListLogContentsResponseBodyListLogContent & listLogContent() const { DARABONBA_PTR_GET_CONST(listLogContent_, ListLogContentsResponseBodyListLogContent) };
    inline ListLogContentsResponseBodyListLogContent listLogContent() { DARABONBA_PTR_GET(listLogContent_, ListLogContentsResponseBodyListLogContent) };
    inline ListLogContentsResponseBody& setListLogContent(const ListLogContentsResponseBodyListLogContent & listLogContent) { DARABONBA_PTR_SET_VALUE(listLogContent_, listLogContent) };
    inline ListLogContentsResponseBody& setListLogContent(ListLogContentsResponseBodyListLogContent && listLogContent) { DARABONBA_PTR_SET_RVALUE(listLogContent_, listLogContent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Log content.
    std::shared_ptr<ListLogContentsResponseBodyListLogContent> listLogContent_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
