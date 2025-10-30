// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNINSTANCERESPONSEBODYINSTANCELISTNODEINFOOWNERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNINSTANCERESPONSEBODYINSTANCELISTNODEINFOOWNERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList() = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList(const GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList &) = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList(GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList &&) = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList() = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList& operator=(const GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList &) = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList& operator=(GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
