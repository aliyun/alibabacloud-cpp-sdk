// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDCDNREALTIMEDELIVERYPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDCDNREALTIMEDELIVERYPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDcdnRealTimeDeliveryProjectResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ListDcdnRealTimeDeliveryProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDcdnRealTimeDeliveryProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDcdnRealTimeDeliveryProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDcdnRealTimeDeliveryProjectResponseBody() = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody(const ListDcdnRealTimeDeliveryProjectResponseBody &) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody(ListDcdnRealTimeDeliveryProjectResponseBody &&) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDcdnRealTimeDeliveryProjectResponseBody() = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody& operator=(const ListDcdnRealTimeDeliveryProjectResponseBody &) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody& operator=(ListDcdnRealTimeDeliveryProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListDcdnRealTimeDeliveryProjectResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ListDcdnRealTimeDeliveryProjectResponseBodyContent) };
    inline ListDcdnRealTimeDeliveryProjectResponseBodyContent content() { DARABONBA_PTR_GET(content_, ListDcdnRealTimeDeliveryProjectResponseBodyContent) };
    inline ListDcdnRealTimeDeliveryProjectResponseBody& setContent(const ListDcdnRealTimeDeliveryProjectResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListDcdnRealTimeDeliveryProjectResponseBody& setContent(ListDcdnRealTimeDeliveryProjectResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDcdnRealTimeDeliveryProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDcdnRealTimeDeliveryProjectResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The configuration results of the domain name.
    std::shared_ptr<ListDcdnRealTimeDeliveryProjectResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
