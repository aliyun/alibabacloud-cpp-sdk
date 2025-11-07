// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOPSITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOPSITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeleteOpsItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOpsItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpsItemIds, opsItemIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOpsItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpsItemIds, opsItemIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteOpsItemsRequest() = default ;
    DeleteOpsItemsRequest(const DeleteOpsItemsRequest &) = default ;
    DeleteOpsItemsRequest(DeleteOpsItemsRequest &&) = default ;
    DeleteOpsItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOpsItemsRequest() = default ;
    DeleteOpsItemsRequest& operator=(const DeleteOpsItemsRequest &) = default ;
    DeleteOpsItemsRequest& operator=(DeleteOpsItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opsItemIds_ == nullptr
        && return this->regionId_ == nullptr; };
    // opsItemIds Field Functions 
    bool hasOpsItemIds() const { return this->opsItemIds_ != nullptr;};
    void deleteOpsItemIds() { this->opsItemIds_ = nullptr;};
    inline const vector<string> & opsItemIds() const { DARABONBA_PTR_GET_CONST(opsItemIds_, vector<string>) };
    inline vector<string> opsItemIds() { DARABONBA_PTR_GET(opsItemIds_, vector<string>) };
    inline DeleteOpsItemsRequest& setOpsItemIds(const vector<string> & opsItemIds) { DARABONBA_PTR_SET_VALUE(opsItemIds_, opsItemIds) };
    inline DeleteOpsItemsRequest& setOpsItemIds(vector<string> && opsItemIds) { DARABONBA_PTR_SET_RVALUE(opsItemIds_, opsItemIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteOpsItemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of O\\&M items.
    std::shared_ptr<vector<string>> opsItemIds_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
