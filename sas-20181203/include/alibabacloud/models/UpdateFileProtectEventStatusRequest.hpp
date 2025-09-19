// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEPROTECTEVENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEPROTECTEVENTSTATUSREQUEST_HPP_
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
  class UpdateFileProtectEventStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileProtectEventStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileProtectEventStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateFileProtectEventStatusRequest() = default ;
    UpdateFileProtectEventStatusRequest(const UpdateFileProtectEventStatusRequest &) = default ;
    UpdateFileProtectEventStatusRequest(UpdateFileProtectEventStatusRequest &&) = default ;
    UpdateFileProtectEventStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileProtectEventStatusRequest() = default ;
    UpdateFileProtectEventStatusRequest& operator=(const UpdateFileProtectEventStatusRequest &) = default ;
    UpdateFileProtectEventStatusRequest& operator=(UpdateFileProtectEventStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->status_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<int64_t> & id() const { DARABONBA_PTR_GET_CONST(id_, vector<int64_t>) };
    inline vector<int64_t> id() { DARABONBA_PTR_GET(id_, vector<int64_t>) };
    inline UpdateFileProtectEventStatusRequest& setId(const vector<int64_t> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline UpdateFileProtectEventStatusRequest& setId(vector<int64_t> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateFileProtectEventStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IDs of the events.
    std::shared_ptr<vector<int64_t>> id_ = nullptr;
    // The handling status of the event. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: handled
    // *   **2**: added to the whitelist
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
