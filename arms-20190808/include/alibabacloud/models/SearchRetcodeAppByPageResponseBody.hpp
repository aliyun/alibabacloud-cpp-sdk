// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchRetcodeAppByPageResponseBodyPageBean.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchRetcodeAppByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRetcodeAppByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRetcodeAppByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchRetcodeAppByPageResponseBody() = default ;
    SearchRetcodeAppByPageResponseBody(const SearchRetcodeAppByPageResponseBody &) = default ;
    SearchRetcodeAppByPageResponseBody(SearchRetcodeAppByPageResponseBody &&) = default ;
    SearchRetcodeAppByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRetcodeAppByPageResponseBody() = default ;
    SearchRetcodeAppByPageResponseBody& operator=(const SearchRetcodeAppByPageResponseBody &) = default ;
    SearchRetcodeAppByPageResponseBody& operator=(SearchRetcodeAppByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageBean_ != nullptr
        && this->requestId_ != nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchRetcodeAppByPageResponseBodyPageBean & pageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchRetcodeAppByPageResponseBodyPageBean) };
    inline SearchRetcodeAppByPageResponseBodyPageBean pageBean() { DARABONBA_PTR_GET(pageBean_, SearchRetcodeAppByPageResponseBodyPageBean) };
    inline SearchRetcodeAppByPageResponseBody& setPageBean(const SearchRetcodeAppByPageResponseBodyPageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchRetcodeAppByPageResponseBody& setPageBean(SearchRetcodeAppByPageResponseBodyPageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchRetcodeAppByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned page information.
    std::shared_ptr<SearchRetcodeAppByPageResponseBodyPageBean> pageBean_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
