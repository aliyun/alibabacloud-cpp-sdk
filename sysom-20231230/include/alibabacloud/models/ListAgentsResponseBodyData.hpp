// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAgentsResponseBodyDataVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAgentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(created_at, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(support_arch, supportArch_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated_at, updatedAt_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(support_arch, supportArch_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated_at, updatedAt_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    ListAgentsResponseBodyData() = default ;
    ListAgentsResponseBodyData(const ListAgentsResponseBodyData &) = default ;
    ListAgentsResponseBodyData(ListAgentsResponseBodyData &&) = default ;
    ListAgentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentsResponseBodyData() = default ;
    ListAgentsResponseBodyData& operator=(const ListAgentsResponseBodyData &) = default ;
    ListAgentsResponseBodyData& operator=(ListAgentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->supportArch_ == nullptr && return this->type_ == nullptr
        && return this->updatedAt_ == nullptr && return this->versions_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListAgentsResponseBodyData& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAgentsResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAgentsResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAgentsResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // supportArch Field Functions 
    bool hasSupportArch() const { return this->supportArch_ != nullptr;};
    void deleteSupportArch() { this->supportArch_ = nullptr;};
    inline string supportArch() const { DARABONBA_PTR_GET_DEFAULT(supportArch_, "") };
    inline ListAgentsResponseBodyData& setSupportArch(string supportArch) { DARABONBA_PTR_SET_VALUE(supportArch_, supportArch) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAgentsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListAgentsResponseBodyData& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Models::ListAgentsResponseBodyDataVersions> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Models::ListAgentsResponseBodyDataVersions>) };
    inline vector<Models::ListAgentsResponseBodyDataVersions> versions() { DARABONBA_PTR_GET(versions_, vector<Models::ListAgentsResponseBodyDataVersions>) };
    inline ListAgentsResponseBodyData& setVersions(const vector<Models::ListAgentsResponseBodyDataVersions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListAgentsResponseBodyData& setVersions(vector<Models::ListAgentsResponseBodyDataVersions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> supportArch_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<vector<Models::ListAgentsResponseBodyDataVersions>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
