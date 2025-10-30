// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMRESPONSEBODYNODEDAGINFODOWNSTREAMNODELIST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMRESPONSEBODYNODEDAGINFODOWNSTREAMNODELIST_HPP_
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
  class GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList() = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList(const GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList &) = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList(GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList &&) = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList() = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& operator=(const GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList &) = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& operator=(GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldIdList_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // fieldIdList Field Functions 
    bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
    void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
    inline const vector<string> & fieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
    inline vector<string> fieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<string>> fieldIdList_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
