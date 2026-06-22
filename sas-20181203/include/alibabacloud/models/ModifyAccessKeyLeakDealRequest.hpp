// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCESSKEYLEAKDEALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCESSKEYLEAKDEALREQUEST_HPP_
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
  class ModifyAccessKeyLeakDealRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccessKeyLeakDealRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccessKeyLeakDealRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyAccessKeyLeakDealRequest() = default ;
    ModifyAccessKeyLeakDealRequest(const ModifyAccessKeyLeakDealRequest &) = default ;
    ModifyAccessKeyLeakDealRequest(ModifyAccessKeyLeakDealRequest &&) = default ;
    ModifyAccessKeyLeakDealRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccessKeyLeakDealRequest() = default ;
    ModifyAccessKeyLeakDealRequest& operator=(const ModifyAccessKeyLeakDealRequest &) = default ;
    ModifyAccessKeyLeakDealRequest& operator=(ModifyAccessKeyLeakDealRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->idList_ == nullptr && this->remark_ == nullptr && this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyAccessKeyLeakDealRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<int64_t> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
    inline vector<int64_t> getIdList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
    inline ModifyAccessKeyLeakDealRequest& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline ModifyAccessKeyLeakDealRequest& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyAccessKeyLeakDealRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyAccessKeyLeakDealRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the AccessKey pair leak record.
    // >Call the [DescribeAccesskeyLeakList](~~DescribeAccesskeyLeakList~~) operation to obtain this parameter. This parameter and the **IdList** parameter cannot both be empty.
    shared_ptr<int64_t> id_ {};
    // The IDs of the AccessKey pair leak records.
    shared_ptr<vector<int64_t>> idList_ {};
    // The remarks for handling the AccessKey pair leak record.
    shared_ptr<string> remark_ {};
    // The method to handle the AccessKey pair leak information. Valid values:
    // - **manual**: Manual handling.
    // - **disable**: Disable.
    // - **add-whitelist**: Add to whitelist.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
