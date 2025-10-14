// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEWESTINNERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNEWESTINNERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNewestInnerGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNewestInnerGroupsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Request, request_);
    };
    friend void from_json(const Darabonba::Json& j, GetNewestInnerGroupsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Request, request_);
    };
    GetNewestInnerGroupsRequest() = default ;
    GetNewestInnerGroupsRequest(const GetNewestInnerGroupsRequest &) = default ;
    GetNewestInnerGroupsRequest(GetNewestInnerGroupsRequest &&) = default ;
    GetNewestInnerGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNewestInnerGroupsRequest() = default ;
    GetNewestInnerGroupsRequest& operator=(const GetNewestInnerGroupsRequest &) = default ;
    GetNewestInnerGroupsRequest& operator=(GetNewestInnerGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->request_ == nullptr; };
    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline     const Darabonba::Json & request() const { DARABONBA_GET(request_) };
    Darabonba::Json & request() { DARABONBA_GET(request_) };
    inline GetNewestInnerGroupsRequest& setRequest(const Darabonba::Json & request) { DARABONBA_SET_VALUE(request_, request) };
    inline GetNewestInnerGroupsRequest& setRequest(Darabonba::Json & request) { DARABONBA_SET_RVALUE(request_, request) };


  protected:
    Darabonba::Json request_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
