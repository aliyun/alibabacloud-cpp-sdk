// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELGROUPCLIENTKEYITEMDTO_HPP_
#define ALIBABACLOUD_MODELS_MODELGROUPCLIENTKEYITEMDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelGroupClientKeyItemDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelGroupClientKeyItemDTO& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(keyPreview, keyPreview_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ModelGroupClientKeyItemDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(keyPreview, keyPreview_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ModelGroupClientKeyItemDTO() = default ;
    ModelGroupClientKeyItemDTO(const ModelGroupClientKeyItemDTO &) = default ;
    ModelGroupClientKeyItemDTO(ModelGroupClientKeyItemDTO &&) = default ;
    ModelGroupClientKeyItemDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelGroupClientKeyItemDTO() = default ;
    ModelGroupClientKeyItemDTO& operator=(const ModelGroupClientKeyItemDTO &) = default ;
    ModelGroupClientKeyItemDTO& operator=(ModelGroupClientKeyItemDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->keyPreview_ == nullptr && this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModelGroupClientKeyItemDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyPreview Field Functions 
    bool hasKeyPreview() const { return this->keyPreview_ != nullptr;};
    void deleteKeyPreview() { this->keyPreview_ = nullptr;};
    inline string getKeyPreview() const { DARABONBA_PTR_GET_DEFAULT(keyPreview_, "") };
    inline ModelGroupClientKeyItemDTO& setKeyPreview(string keyPreview) { DARABONBA_PTR_SET_VALUE(keyPreview_, keyPreview) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelGroupClientKeyItemDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> keyPreview_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
