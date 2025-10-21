// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINEAGEINFOPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETLINEAGEINFOPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetLineageInfoParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLineageInfoParams& obj) { 
      DARABONBA_PTR_TO_JSON(depth, depth_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(idType, idType_);
      DARABONBA_PTR_TO_JSON(isColumnLevel, isColumnLevel_);
      DARABONBA_PTR_TO_JSON(isTemporary, isTemporary_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetLineageInfoParams& obj) { 
      DARABONBA_PTR_FROM_JSON(depth, depth_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(idType, idType_);
      DARABONBA_PTR_FROM_JSON(isColumnLevel, isColumnLevel_);
      DARABONBA_PTR_FROM_JSON(isTemporary, isTemporary_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetLineageInfoParams() = default ;
    GetLineageInfoParams(const GetLineageInfoParams &) = default ;
    GetLineageInfoParams(GetLineageInfoParams &&) = default ;
    GetLineageInfoParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLineageInfoParams() = default ;
    GetLineageInfoParams& operator=(const GetLineageInfoParams &) = default ;
    GetLineageInfoParams& operator=(GetLineageInfoParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->depth_ == nullptr
        && return this->direction_ == nullptr && return this->id_ == nullptr && return this->idType_ == nullptr && return this->isColumnLevel_ == nullptr && return this->isTemporary_ == nullptr
        && return this->namespace_ == nullptr && return this->workspace_ == nullptr; };
    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline int64_t depth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0L) };
    inline GetLineageInfoParams& setDepth(int64_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetLineageInfoParams& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetLineageInfoParams& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline GetLineageInfoParams& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // isColumnLevel Field Functions 
    bool hasIsColumnLevel() const { return this->isColumnLevel_ != nullptr;};
    void deleteIsColumnLevel() { this->isColumnLevel_ = nullptr;};
    inline bool isColumnLevel() const { DARABONBA_PTR_GET_DEFAULT(isColumnLevel_, false) };
    inline GetLineageInfoParams& setIsColumnLevel(bool isColumnLevel) { DARABONBA_PTR_SET_VALUE(isColumnLevel_, isColumnLevel) };


    // isTemporary Field Functions 
    bool hasIsTemporary() const { return this->isTemporary_ != nullptr;};
    void deleteIsTemporary() { this->isTemporary_ = nullptr;};
    inline bool isTemporary() const { DARABONBA_PTR_GET_DEFAULT(isTemporary_, false) };
    inline GetLineageInfoParams& setIsTemporary(bool isTemporary) { DARABONBA_PTR_SET_VALUE(isTemporary_, isTemporary) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetLineageInfoParams& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetLineageInfoParams& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<int64_t> depth_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> idType_ = nullptr;
    std::shared_ptr<bool> isColumnLevel_ = nullptr;
    std::shared_ptr<bool> isTemporary_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
