// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODPACKAGINGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVODPACKAGINGGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VodPackagingGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetVodPackagingGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodPackagingGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackagingGroup, packagingGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodPackagingGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackagingGroup, packagingGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVodPackagingGroupResponseBody() = default ;
    GetVodPackagingGroupResponseBody(const GetVodPackagingGroupResponseBody &) = default ;
    GetVodPackagingGroupResponseBody(GetVodPackagingGroupResponseBody &&) = default ;
    GetVodPackagingGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodPackagingGroupResponseBody() = default ;
    GetVodPackagingGroupResponseBody& operator=(const GetVodPackagingGroupResponseBody &) = default ;
    GetVodPackagingGroupResponseBody& operator=(GetVodPackagingGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->packagingGroup_ != nullptr
        && this->requestId_ != nullptr; };
    // packagingGroup Field Functions 
    bool hasPackagingGroup() const { return this->packagingGroup_ != nullptr;};
    void deletePackagingGroup() { this->packagingGroup_ = nullptr;};
    inline const VodPackagingGroup & packagingGroup() const { DARABONBA_PTR_GET_CONST(packagingGroup_, VodPackagingGroup) };
    inline VodPackagingGroup packagingGroup() { DARABONBA_PTR_GET(packagingGroup_, VodPackagingGroup) };
    inline GetVodPackagingGroupResponseBody& setPackagingGroup(const VodPackagingGroup & packagingGroup) { DARABONBA_PTR_SET_VALUE(packagingGroup_, packagingGroup) };
    inline GetVodPackagingGroupResponseBody& setPackagingGroup(VodPackagingGroup && packagingGroup) { DARABONBA_PTR_SET_RVALUE(packagingGroup_, packagingGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVodPackagingGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the packaging group.
    std::shared_ptr<VodPackagingGroup> packagingGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
