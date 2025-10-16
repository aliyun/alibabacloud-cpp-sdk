// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTNAMELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTNAMELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvadeEventNameListResponseBodyEventNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventNameListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventNameListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventNameList, eventNameList_);
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventNameListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventNameList, eventNameList_);
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvadeEventNameListResponseBody() = default ;
    DescribeInvadeEventNameListResponseBody(const DescribeInvadeEventNameListResponseBody &) = default ;
    DescribeInvadeEventNameListResponseBody(DescribeInvadeEventNameListResponseBody &&) = default ;
    DescribeInvadeEventNameListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventNameListResponseBody() = default ;
    DescribeInvadeEventNameListResponseBody& operator=(const DescribeInvadeEventNameListResponseBody &) = default ;
    DescribeInvadeEventNameListResponseBody& operator=(DescribeInvadeEventNameListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventNameList_ == nullptr
        && return this->nameList_ == nullptr && return this->requestId_ == nullptr; };
    // eventNameList Field Functions 
    bool hasEventNameList() const { return this->eventNameList_ != nullptr;};
    void deleteEventNameList() { this->eventNameList_ = nullptr;};
    inline const vector<DescribeInvadeEventNameListResponseBodyEventNameList> & eventNameList() const { DARABONBA_PTR_GET_CONST(eventNameList_, vector<DescribeInvadeEventNameListResponseBodyEventNameList>) };
    inline vector<DescribeInvadeEventNameListResponseBodyEventNameList> eventNameList() { DARABONBA_PTR_GET(eventNameList_, vector<DescribeInvadeEventNameListResponseBodyEventNameList>) };
    inline DescribeInvadeEventNameListResponseBody& setEventNameList(const vector<DescribeInvadeEventNameListResponseBodyEventNameList> & eventNameList) { DARABONBA_PTR_SET_VALUE(eventNameList_, eventNameList) };
    inline DescribeInvadeEventNameListResponseBody& setEventNameList(vector<DescribeInvadeEventNameListResponseBodyEventNameList> && eventNameList) { DARABONBA_PTR_SET_RVALUE(eventNameList_, eventNameList) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> nameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline DescribeInvadeEventNameListResponseBody& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline DescribeInvadeEventNameListResponseBody& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEventNameListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeInvadeEventNameListResponseBodyEventNameList>> eventNameList_ = nullptr;
    std::shared_ptr<vector<string>> nameList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
