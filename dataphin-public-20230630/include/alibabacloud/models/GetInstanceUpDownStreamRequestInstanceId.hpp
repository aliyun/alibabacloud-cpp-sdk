// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMREQUESTINSTANCEID_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMREQUESTINSTANCEID_HPP_
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
  class GetInstanceUpDownStreamRequestInstanceId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceUpDownStreamRequestInstanceId& obj) { 
      DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceUpDownStreamRequestInstanceId& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetInstanceUpDownStreamRequestInstanceId() = default ;
    GetInstanceUpDownStreamRequestInstanceId(const GetInstanceUpDownStreamRequestInstanceId &) = default ;
    GetInstanceUpDownStreamRequestInstanceId(GetInstanceUpDownStreamRequestInstanceId &&) = default ;
    GetInstanceUpDownStreamRequestInstanceId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceUpDownStreamRequestInstanceId() = default ;
    GetInstanceUpDownStreamRequestInstanceId& operator=(const GetInstanceUpDownStreamRequestInstanceId &) = default ;
    GetInstanceUpDownStreamRequestInstanceId& operator=(GetInstanceUpDownStreamRequestInstanceId &&) = default ;
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
    inline GetInstanceUpDownStreamRequestInstanceId& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
    inline GetInstanceUpDownStreamRequestInstanceId& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetInstanceUpDownStreamRequestInstanceId& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<vector<string>> fieldInstanceIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
