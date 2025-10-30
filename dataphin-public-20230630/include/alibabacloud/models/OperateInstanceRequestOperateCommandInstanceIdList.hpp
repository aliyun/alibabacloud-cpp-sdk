// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEINSTANCEREQUESTOPERATECOMMANDINSTANCEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEINSTANCEREQUESTOPERATECOMMANDINSTANCEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OperateInstanceRequestOperateCommandInstanceIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateInstanceRequestOperateCommandInstanceIdList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, OperateInstanceRequestOperateCommandInstanceIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    OperateInstanceRequestOperateCommandInstanceIdList() = default ;
    OperateInstanceRequestOperateCommandInstanceIdList(const OperateInstanceRequestOperateCommandInstanceIdList &) = default ;
    OperateInstanceRequestOperateCommandInstanceIdList(OperateInstanceRequestOperateCommandInstanceIdList &&) = default ;
    OperateInstanceRequestOperateCommandInstanceIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateInstanceRequestOperateCommandInstanceIdList() = default ;
    OperateInstanceRequestOperateCommandInstanceIdList& operator=(const OperateInstanceRequestOperateCommandInstanceIdList &) = default ;
    OperateInstanceRequestOperateCommandInstanceIdList& operator=(OperateInstanceRequestOperateCommandInstanceIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldInstanceIdList_ == nullptr
        && return this->id_ == nullptr; };
    // fieldInstanceIdList Field Functions 
    bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
    void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
    inline const vector<string> & fieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
    inline vector<string> fieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
    inline OperateInstanceRequestOperateCommandInstanceIdList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
    inline OperateInstanceRequestOperateCommandInstanceIdList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline OperateInstanceRequestOperateCommandInstanceIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<vector<string>> fieldInstanceIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
