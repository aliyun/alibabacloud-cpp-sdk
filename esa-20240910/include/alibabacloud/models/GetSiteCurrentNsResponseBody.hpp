// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITECURRENTNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITECURRENTNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteCurrentNSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteCurrentNSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NSList, NSList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteCurrentNSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NSList, NSList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSiteCurrentNSResponseBody() = default ;
    GetSiteCurrentNSResponseBody(const GetSiteCurrentNSResponseBody &) = default ;
    GetSiteCurrentNSResponseBody(GetSiteCurrentNSResponseBody &&) = default ;
    GetSiteCurrentNSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteCurrentNSResponseBody() = default ;
    GetSiteCurrentNSResponseBody& operator=(const GetSiteCurrentNSResponseBody &) = default ;
    GetSiteCurrentNSResponseBody& operator=(GetSiteCurrentNSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->NSList_ == nullptr
        && return this->requestId_ == nullptr; };
    // NSList Field Functions 
    bool hasNSList() const { return this->NSList_ != nullptr;};
    void deleteNSList() { this->NSList_ = nullptr;};
    inline const vector<string> & NSList() const { DARABONBA_PTR_GET_CONST(NSList_, vector<string>) };
    inline vector<string> NSList() { DARABONBA_PTR_GET(NSList_, vector<string>) };
    inline GetSiteCurrentNSResponseBody& setNSList(const vector<string> & NSList) { DARABONBA_PTR_SET_VALUE(NSList_, NSList) };
    inline GetSiteCurrentNSResponseBody& setNSList(vector<string> && NSList) { DARABONBA_PTR_SET_RVALUE(NSList_, NSList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteCurrentNSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The nameservers of the website.
    std::shared_ptr<vector<string>> NSList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
