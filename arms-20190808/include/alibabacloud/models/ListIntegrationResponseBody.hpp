// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntegrationResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIntegrationResponseBody() = default ;
    ListIntegrationResponseBody(const ListIntegrationResponseBody &) = default ;
    ListIntegrationResponseBody(ListIntegrationResponseBody &&) = default ;
    ListIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationResponseBody() = default ;
    ListIntegrationResponseBody& operator=(const ListIntegrationResponseBody &) = default ;
    ListIntegrationResponseBody& operator=(ListIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListIntegrationResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListIntegrationResponseBodyPageInfo) };
    inline ListIntegrationResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListIntegrationResponseBodyPageInfo) };
    inline ListIntegrationResponseBody& setPageInfo(const ListIntegrationResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListIntegrationResponseBody& setPageInfo(ListIntegrationResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<ListIntegrationResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
