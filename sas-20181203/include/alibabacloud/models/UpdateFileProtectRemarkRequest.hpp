// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEPROTECTREMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEPROTECTREMARKREQUEST_HPP_
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
  class UpdateFileProtectRemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileProtectRemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileProtectRemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    UpdateFileProtectRemarkRequest() = default ;
    UpdateFileProtectRemarkRequest(const UpdateFileProtectRemarkRequest &) = default ;
    UpdateFileProtectRemarkRequest(UpdateFileProtectRemarkRequest &&) = default ;
    UpdateFileProtectRemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileProtectRemarkRequest() = default ;
    UpdateFileProtectRemarkRequest& operator=(const UpdateFileProtectRemarkRequest &) = default ;
    UpdateFileProtectRemarkRequest& operator=(UpdateFileProtectRemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->remark_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateFileProtectRemarkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline const vector<string> & remark() const { DARABONBA_PTR_GET_CONST(remark_, vector<string>) };
    inline vector<string> remark() { DARABONBA_PTR_GET(remark_, vector<string>) };
    inline UpdateFileProtectRemarkRequest& setRemark(const vector<string> & remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };
    inline UpdateFileProtectRemarkRequest& setRemark(vector<string> && remark) { DARABONBA_PTR_SET_RVALUE(remark_, remark) };


  protected:
    // The ID of the event.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The remarks.
    std::shared_ptr<vector<string>> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
