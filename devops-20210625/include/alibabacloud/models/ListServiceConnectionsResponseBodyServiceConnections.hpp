// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONNECTIONSRESPONSEBODYSERVICECONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONNECTIONSRESPONSEBODYSERVICECONNECTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListServiceConnectionsResponseBodyServiceConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConnectionsResponseBodyServiceConnections& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ownerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConnectionsResponseBodyServiceConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ownerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    ListServiceConnectionsResponseBodyServiceConnections() = default ;
    ListServiceConnectionsResponseBodyServiceConnections(const ListServiceConnectionsResponseBodyServiceConnections &) = default ;
    ListServiceConnectionsResponseBodyServiceConnections(ListServiceConnectionsResponseBodyServiceConnections &&) = default ;
    ListServiceConnectionsResponseBodyServiceConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConnectionsResponseBodyServiceConnections() = default ;
    ListServiceConnectionsResponseBodyServiceConnections& operator=(const ListServiceConnectionsResponseBodyServiceConnections &) = default ;
    ListServiceConnectionsResponseBodyServiceConnections& operator=(ListServiceConnectionsResponseBodyServiceConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->ownerAccountId_ == nullptr && return this->type_ == nullptr && return this->uuid_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListServiceConnectionsResponseBodyServiceConnections& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListServiceConnectionsResponseBodyServiceConnections& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServiceConnectionsResponseBodyServiceConnections& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline ListServiceConnectionsResponseBodyServiceConnections& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListServiceConnectionsResponseBodyServiceConnections& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListServiceConnectionsResponseBodyServiceConnections& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
