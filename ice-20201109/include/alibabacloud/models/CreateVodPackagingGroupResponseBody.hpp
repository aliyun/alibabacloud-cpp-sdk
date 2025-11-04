// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGGROUPRESPONSEBODY_HPP_
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
  class CreateVodPackagingGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackagingGroup, packagingGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackagingGroup, packagingGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateVodPackagingGroupResponseBody() = default ;
    CreateVodPackagingGroupResponseBody(const CreateVodPackagingGroupResponseBody &) = default ;
    CreateVodPackagingGroupResponseBody(CreateVodPackagingGroupResponseBody &&) = default ;
    CreateVodPackagingGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingGroupResponseBody() = default ;
    CreateVodPackagingGroupResponseBody& operator=(const CreateVodPackagingGroupResponseBody &) = default ;
    CreateVodPackagingGroupResponseBody& operator=(CreateVodPackagingGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packagingGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // packagingGroup Field Functions 
    bool hasPackagingGroup() const { return this->packagingGroup_ != nullptr;};
    void deletePackagingGroup() { this->packagingGroup_ = nullptr;};
    inline const VodPackagingGroup & packagingGroup() const { DARABONBA_PTR_GET_CONST(packagingGroup_, VodPackagingGroup) };
    inline VodPackagingGroup packagingGroup() { DARABONBA_PTR_GET(packagingGroup_, VodPackagingGroup) };
    inline CreateVodPackagingGroupResponseBody& setPackagingGroup(const VodPackagingGroup & packagingGroup) { DARABONBA_PTR_SET_VALUE(packagingGroup_, packagingGroup) };
    inline CreateVodPackagingGroupResponseBody& setPackagingGroup(VodPackagingGroup && packagingGroup) { DARABONBA_PTR_SET_RVALUE(packagingGroup_, packagingGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVodPackagingGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The packaging group information.
    std::shared_ptr<VodPackagingGroup> packagingGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
