// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetAccessGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
    };
    GetAccessGroupRequest() = default ;
    GetAccessGroupRequest(const GetAccessGroupRequest &) = default ;
    GetAccessGroupRequest(GetAccessGroupRequest &&) = default ;
    GetAccessGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessGroupRequest() = default ;
    GetAccessGroupRequest& operator=(const GetAccessGroupRequest &) = default ;
    GetAccessGroupRequest& operator=(GetAccessGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && return this->inputRegionId_ == nullptr; };
    // accessGroupId Field Functions 
    bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
    void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
    inline string accessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
    inline GetAccessGroupRequest& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline GetAccessGroupRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
