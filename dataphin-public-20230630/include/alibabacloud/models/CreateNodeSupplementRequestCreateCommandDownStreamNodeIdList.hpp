// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUESTCREATECOMMANDDOWNSTREAMNODEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUESTCREATECOMMANDDOWNSTREAMNODEIDLIST_HPP_
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
  class CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList() = default ;
    CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList(const CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList &) = default ;
    CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList(CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList &&) = default ;
    CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList() = default ;
    CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList& operator=(const CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList &) = default ;
    CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList& operator=(CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldIdList_ == nullptr
        && return this->id_ == nullptr; };
    // fieldIdList Field Functions 
    bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
    void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
    inline const vector<string> & fieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
    inline vector<string> fieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
    inline CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
    inline CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<vector<string>> fieldIdList_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
