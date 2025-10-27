// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYEVENTMARKMISSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYEVENTMARKMISSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteSecurityEventMarkMissListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityEventMarkMissListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityEventMarkMissListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteSecurityEventMarkMissListRequest() = default ;
    DeleteSecurityEventMarkMissListRequest(const DeleteSecurityEventMarkMissListRequest &) = default ;
    DeleteSecurityEventMarkMissListRequest(DeleteSecurityEventMarkMissListRequest &&) = default ;
    DeleteSecurityEventMarkMissListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityEventMarkMissListRequest() = default ;
    DeleteSecurityEventMarkMissListRequest& operator=(const DeleteSecurityEventMarkMissListRequest &) = default ;
    DeleteSecurityEventMarkMissListRequest& operator=(DeleteSecurityEventMarkMissListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline DeleteSecurityEventMarkMissListRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DeleteSecurityEventMarkMissListRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteSecurityEventMarkMissListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The IDs of custom defense rule.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
