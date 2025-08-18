// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMREQUESTLISTQUERYNODEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMREQUESTLISTQUERYNODEIDLIST_HPP_
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
  class ListNodeDownStreamRequestListQueryNodeIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDownStreamRequestListQueryNodeIdList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDownStreamRequestListQueryNodeIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ListNodeDownStreamRequestListQueryNodeIdList() = default ;
    ListNodeDownStreamRequestListQueryNodeIdList(const ListNodeDownStreamRequestListQueryNodeIdList &) = default ;
    ListNodeDownStreamRequestListQueryNodeIdList(ListNodeDownStreamRequestListQueryNodeIdList &&) = default ;
    ListNodeDownStreamRequestListQueryNodeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDownStreamRequestListQueryNodeIdList() = default ;
    ListNodeDownStreamRequestListQueryNodeIdList& operator=(const ListNodeDownStreamRequestListQueryNodeIdList &) = default ;
    ListNodeDownStreamRequestListQueryNodeIdList& operator=(ListNodeDownStreamRequestListQueryNodeIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldIdList_ != nullptr
        && this->id_ != nullptr; };
    // fieldIdList Field Functions 
    bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
    void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
    inline const vector<string> & fieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
    inline vector<string> fieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
    inline ListNodeDownStreamRequestListQueryNodeIdList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
    inline ListNodeDownStreamRequestListQueryNodeIdList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListNodeDownStreamRequestListQueryNodeIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<vector<string>> fieldIdList_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
