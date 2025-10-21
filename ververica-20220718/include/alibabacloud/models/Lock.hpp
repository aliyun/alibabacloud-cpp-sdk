// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCK_HPP_
#define ALIBABACLOUD_MODELS_LOCK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Lock : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Lock& obj) { 
      DARABONBA_PTR_TO_JSON(holderId, holderId_);
      DARABONBA_PTR_TO_JSON(holderName, holderName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, Lock& obj) { 
      DARABONBA_PTR_FROM_JSON(holderId, holderId_);
      DARABONBA_PTR_FROM_JSON(holderName, holderName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    Lock() = default ;
    Lock(const Lock &) = default ;
    Lock(Lock &&) = default ;
    Lock(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Lock() = default ;
    Lock& operator=(const Lock &) = default ;
    Lock& operator=(Lock &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->holderId_ == nullptr
        && return this->holderName_ == nullptr && return this->id_ == nullptr && return this->namespace_ == nullptr && return this->workspace_ == nullptr; };
    // holderId Field Functions 
    bool hasHolderId() const { return this->holderId_ != nullptr;};
    void deleteHolderId() { this->holderId_ = nullptr;};
    inline string holderId() const { DARABONBA_PTR_GET_DEFAULT(holderId_, "") };
    inline Lock& setHolderId(string holderId) { DARABONBA_PTR_SET_VALUE(holderId_, holderId) };


    // holderName Field Functions 
    bool hasHolderName() const { return this->holderName_ != nullptr;};
    void deleteHolderName() { this->holderName_ = nullptr;};
    inline string holderName() const { DARABONBA_PTR_GET_DEFAULT(holderName_, "") };
    inline Lock& setHolderName(string holderName) { DARABONBA_PTR_SET_VALUE(holderName_, holderName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Lock& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Lock& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline Lock& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> holderId_ = nullptr;
    std::shared_ptr<string> holderName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
