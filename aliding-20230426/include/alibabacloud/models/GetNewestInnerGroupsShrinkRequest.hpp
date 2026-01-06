// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEWESTINNERGROUPSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNEWESTINNERGROUPSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNewestInnerGroupsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNewestInnerGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Request, requestShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetNewestInnerGroupsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Request, requestShrink_);
    };
    GetNewestInnerGroupsShrinkRequest() = default ;
    GetNewestInnerGroupsShrinkRequest(const GetNewestInnerGroupsShrinkRequest &) = default ;
    GetNewestInnerGroupsShrinkRequest(GetNewestInnerGroupsShrinkRequest &&) = default ;
    GetNewestInnerGroupsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNewestInnerGroupsShrinkRequest() = default ;
    GetNewestInnerGroupsShrinkRequest& operator=(const GetNewestInnerGroupsShrinkRequest &) = default ;
    GetNewestInnerGroupsShrinkRequest& operator=(GetNewestInnerGroupsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestShrink_ == nullptr; };
    // requestShrink Field Functions 
    bool hasRequestShrink() const { return this->requestShrink_ != nullptr;};
    void deleteRequestShrink() { this->requestShrink_ = nullptr;};
    inline string getRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(requestShrink_, "") };
    inline GetNewestInnerGroupsShrinkRequest& setRequestShrink(string requestShrink) { DARABONBA_PTR_SET_VALUE(requestShrink_, requestShrink) };


  protected:
    shared_ptr<string> requestShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
