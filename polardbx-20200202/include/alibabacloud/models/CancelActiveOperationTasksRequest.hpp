// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELACTIVEOPERATIONTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELACTIVEOPERATIONTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CancelActiveOperationTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelActiveOperationTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelActiveOperationTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CancelActiveOperationTasksRequest() = default ;
    CancelActiveOperationTasksRequest(const CancelActiveOperationTasksRequest &) = default ;
    CancelActiveOperationTasksRequest(CancelActiveOperationTasksRequest &&) = default ;
    CancelActiveOperationTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelActiveOperationTasksRequest() = default ;
    CancelActiveOperationTasksRequest& operator=(const CancelActiveOperationTasksRequest &) = default ;
    CancelActiveOperationTasksRequest& operator=(CancelActiveOperationTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && this->regionId_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline CancelActiveOperationTasksRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelActiveOperationTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> ids_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
