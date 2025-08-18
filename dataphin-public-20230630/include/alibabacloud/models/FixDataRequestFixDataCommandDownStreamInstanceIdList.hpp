// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXDATAREQUESTFIXDATACOMMANDDOWNSTREAMINSTANCEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_FIXDATAREQUESTFIXDATACOMMANDDOWNSTREAMINSTANCEIDLIST_HPP_
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
  class FixDataRequestFixDataCommandDownStreamInstanceIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixDataRequestFixDataCommandDownStreamInstanceIdList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, FixDataRequestFixDataCommandDownStreamInstanceIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    FixDataRequestFixDataCommandDownStreamInstanceIdList() = default ;
    FixDataRequestFixDataCommandDownStreamInstanceIdList(const FixDataRequestFixDataCommandDownStreamInstanceIdList &) = default ;
    FixDataRequestFixDataCommandDownStreamInstanceIdList(FixDataRequestFixDataCommandDownStreamInstanceIdList &&) = default ;
    FixDataRequestFixDataCommandDownStreamInstanceIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixDataRequestFixDataCommandDownStreamInstanceIdList() = default ;
    FixDataRequestFixDataCommandDownStreamInstanceIdList& operator=(const FixDataRequestFixDataCommandDownStreamInstanceIdList &) = default ;
    FixDataRequestFixDataCommandDownStreamInstanceIdList& operator=(FixDataRequestFixDataCommandDownStreamInstanceIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldInstanceIdList_ != nullptr
        && this->id_ != nullptr; };
    // fieldInstanceIdList Field Functions 
    bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
    void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
    inline const vector<string> & fieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
    inline vector<string> fieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
    inline FixDataRequestFixDataCommandDownStreamInstanceIdList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
    inline FixDataRequestFixDataCommandDownStreamInstanceIdList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline FixDataRequestFixDataCommandDownStreamInstanceIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<vector<string>> fieldInstanceIdList_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
