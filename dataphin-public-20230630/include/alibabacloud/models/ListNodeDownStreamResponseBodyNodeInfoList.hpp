// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMRESPONSEBODYNODEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMRESPONSEBODYNODEINFOLIST_HPP_
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
  class ListNodeDownStreamResponseBodyNodeInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDownStreamResponseBodyNodeInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Depth, depth_);
      DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDownStreamResponseBodyNodeInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Depth, depth_);
      DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListNodeDownStreamResponseBodyNodeInfoList() = default ;
    ListNodeDownStreamResponseBodyNodeInfoList(const ListNodeDownStreamResponseBodyNodeInfoList &) = default ;
    ListNodeDownStreamResponseBodyNodeInfoList(ListNodeDownStreamResponseBodyNodeInfoList &&) = default ;
    ListNodeDownStreamResponseBodyNodeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDownStreamResponseBodyNodeInfoList() = default ;
    ListNodeDownStreamResponseBodyNodeInfoList& operator=(const ListNodeDownStreamResponseBodyNodeInfoList &) = default ;
    ListNodeDownStreamResponseBodyNodeInfoList& operator=(ListNodeDownStreamResponseBodyNodeInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->depth_ == nullptr
        && return this->fieldIdList_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline int32_t depth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
    inline ListNodeDownStreamResponseBodyNodeInfoList& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // fieldIdList Field Functions 
    bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
    void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
    inline const vector<string> & fieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
    inline vector<string> fieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
    inline ListNodeDownStreamResponseBodyNodeInfoList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
    inline ListNodeDownStreamResponseBodyNodeInfoList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListNodeDownStreamResponseBodyNodeInfoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNodeDownStreamResponseBodyNodeInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListNodeDownStreamResponseBodyNodeInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> depth_ = nullptr;
    std::shared_ptr<vector<string>> fieldIdList_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
