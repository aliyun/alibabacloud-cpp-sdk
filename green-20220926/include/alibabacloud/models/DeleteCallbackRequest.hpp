// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DeleteCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCallbackRequest() = default ;
    DeleteCallbackRequest(const DeleteCallbackRequest &) = default ;
    DeleteCallbackRequest(DeleteCallbackRequest &&) = default ;
    DeleteCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCallbackRequest() = default ;
    DeleteCallbackRequest& operator=(const DeleteCallbackRequest &) = default ;
    DeleteCallbackRequest& operator=(DeleteCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->regionId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteCallbackRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCallbackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // callback id.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // Region ID
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
