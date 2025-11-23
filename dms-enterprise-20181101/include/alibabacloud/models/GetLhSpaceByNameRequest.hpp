// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLHSPACEBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLHSPACEBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetLhSpaceByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLhSpaceByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SpaceName, spaceName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetLhSpaceByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SpaceName, spaceName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetLhSpaceByNameRequest() = default ;
    GetLhSpaceByNameRequest(const GetLhSpaceByNameRequest &) = default ;
    GetLhSpaceByNameRequest(GetLhSpaceByNameRequest &&) = default ;
    GetLhSpaceByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLhSpaceByNameRequest() = default ;
    GetLhSpaceByNameRequest& operator=(const GetLhSpaceByNameRequest &) = default ;
    GetLhSpaceByNameRequest& operator=(GetLhSpaceByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->spaceName_ == nullptr
        && return this->tid_ == nullptr; };
    // spaceName Field Functions 
    bool hasSpaceName() const { return this->spaceName_ != nullptr;};
    void deleteSpaceName() { this->spaceName_ = nullptr;};
    inline string spaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
    inline GetLhSpaceByNameRequest& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetLhSpaceByNameRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The name of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> spaceName_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
