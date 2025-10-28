// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERDEFINEREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERDEFINEREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeleteUserDefineRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserDefineRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionTag, regionTag_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserDefineRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionTag, regionTag_);
    };
    DeleteUserDefineRegionRequest() = default ;
    DeleteUserDefineRegionRequest(const DeleteUserDefineRegionRequest &) = default ;
    DeleteUserDefineRegionRequest(DeleteUserDefineRegionRequest &&) = default ;
    DeleteUserDefineRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserDefineRegionRequest() = default ;
    DeleteUserDefineRegionRequest& operator=(const DeleteUserDefineRegionRequest &) = default ;
    DeleteUserDefineRegionRequest& operator=(DeleteUserDefineRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->regionTag_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteUserDefineRegionRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionTag Field Functions 
    bool hasRegionTag() const { return this->regionTag_ != nullptr;};
    void deleteRegionTag() { this->regionTag_ = nullptr;};
    inline string regionTag() const { DARABONBA_PTR_GET_DEFAULT(regionTag_, "") };
    inline DeleteUserDefineRegionRequest& setRegionTag(string regionTag) { DARABONBA_PTR_SET_VALUE(regionTag_, regionTag) };


  protected:
    // The unique ID of the custom namespace. You can call the ListUserDefineRegion operation to query the ID. For more information, see [ListUserDefineRegion](https://help.aliyun.com/document_detail/149377.html).
    std::shared_ptr<int64_t> id_ = nullptr;
    // The tag of the custom namespace.
    std::shared_ptr<string> regionTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
