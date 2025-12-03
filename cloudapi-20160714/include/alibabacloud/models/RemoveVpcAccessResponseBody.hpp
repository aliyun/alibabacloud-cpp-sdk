// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVPCACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVPCACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveVpcAccessResponseBodyApis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveVpcAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Apis, apis_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Apis, apis_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveVpcAccessResponseBody() = default ;
    RemoveVpcAccessResponseBody(const RemoveVpcAccessResponseBody &) = default ;
    RemoveVpcAccessResponseBody(RemoveVpcAccessResponseBody &&) = default ;
    RemoveVpcAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVpcAccessResponseBody() = default ;
    RemoveVpcAccessResponseBody& operator=(const RemoveVpcAccessResponseBody &) = default ;
    RemoveVpcAccessResponseBody& operator=(RemoveVpcAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apis_ == nullptr
        && return this->requestId_ == nullptr; };
    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const RemoveVpcAccessResponseBodyApis & apis() const { DARABONBA_PTR_GET_CONST(apis_, RemoveVpcAccessResponseBodyApis) };
    inline RemoveVpcAccessResponseBodyApis apis() { DARABONBA_PTR_GET(apis_, RemoveVpcAccessResponseBodyApis) };
    inline RemoveVpcAccessResponseBody& setApis(const RemoveVpcAccessResponseBodyApis & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline RemoveVpcAccessResponseBody& setApis(RemoveVpcAccessResponseBodyApis && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveVpcAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // API operations
    std::shared_ptr<RemoveVpcAccessResponseBodyApis> apis_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
