// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHostGroupResponseBodyHostGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroup, hostGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroup, hostGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHostGroupResponseBody() = default ;
    GetHostGroupResponseBody(const GetHostGroupResponseBody &) = default ;
    GetHostGroupResponseBody(GetHostGroupResponseBody &&) = default ;
    GetHostGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostGroupResponseBody() = default ;
    GetHostGroupResponseBody& operator=(const GetHostGroupResponseBody &) = default ;
    GetHostGroupResponseBody& operator=(GetHostGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostGroup_ != nullptr
        && this->requestId_ != nullptr; };
    // hostGroup Field Functions 
    bool hasHostGroup() const { return this->hostGroup_ != nullptr;};
    void deleteHostGroup() { this->hostGroup_ = nullptr;};
    inline const GetHostGroupResponseBodyHostGroup & hostGroup() const { DARABONBA_PTR_GET_CONST(hostGroup_, GetHostGroupResponseBodyHostGroup) };
    inline GetHostGroupResponseBodyHostGroup hostGroup() { DARABONBA_PTR_GET(hostGroup_, GetHostGroupResponseBodyHostGroup) };
    inline GetHostGroupResponseBody& setHostGroup(const GetHostGroupResponseBodyHostGroup & hostGroup) { DARABONBA_PTR_SET_VALUE(hostGroup_, hostGroup) };
    inline GetHostGroupResponseBody& setHostGroup(GetHostGroupResponseBodyHostGroup && hostGroup) { DARABONBA_PTR_SET_RVALUE(hostGroup_, hostGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned detailed information about the asset group.
    std::shared_ptr<GetHostGroupResponseBodyHostGroup> hostGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
