// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONDRAFTRECORDUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_NEURONDRAFTRECORDUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronDraftRecordUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronDraftRecordUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronDraftRecordUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    NeuronDraftRecordUpdateCmd() = default ;
    NeuronDraftRecordUpdateCmd(const NeuronDraftRecordUpdateCmd &) = default ;
    NeuronDraftRecordUpdateCmd(NeuronDraftRecordUpdateCmd &&) = default ;
    NeuronDraftRecordUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronDraftRecordUpdateCmd() = default ;
    NeuronDraftRecordUpdateCmd& operator=(const NeuronDraftRecordUpdateCmd &) = default ;
    NeuronDraftRecordUpdateCmd& operator=(NeuronDraftRecordUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline NeuronDraftRecordUpdateCmd& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline NeuronDraftRecordUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NeuronDraftRecordUpdateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    shared_ptr<string> content_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
