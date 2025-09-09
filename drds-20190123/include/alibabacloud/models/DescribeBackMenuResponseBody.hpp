// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKMENURESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKMENURESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackMenuResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackMenuResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackMenuResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackMenuResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackMenuResponseBody() = default ;
    DescribeBackMenuResponseBody(const DescribeBackMenuResponseBody &) = default ;
    DescribeBackMenuResponseBody(DescribeBackMenuResponseBody &&) = default ;
    DescribeBackMenuResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackMenuResponseBody() = default ;
    DescribeBackMenuResponseBody& operator=(const DescribeBackMenuResponseBody &) = default ;
    DescribeBackMenuResponseBody& operator=(DescribeBackMenuResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const DescribeBackMenuResponseBodyList & list() const { DARABONBA_PTR_GET_CONST(list_, DescribeBackMenuResponseBodyList) };
    inline DescribeBackMenuResponseBodyList list() { DARABONBA_PTR_GET(list_, DescribeBackMenuResponseBodyList) };
    inline DescribeBackMenuResponseBody& setList(const DescribeBackMenuResponseBodyList & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeBackMenuResponseBody& setList(DescribeBackMenuResponseBodyList && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackMenuResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackMenuResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backup information list.
    std::shared_ptr<DescribeBackMenuResponseBodyList> list_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of request.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
