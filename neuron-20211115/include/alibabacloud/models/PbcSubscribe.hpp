// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCSUBSCRIBE_HPP_
#define ALIBABACLOUD_MODELS_PBCSUBSCRIBE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcSubscribe : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcSubscribe& obj) { 
      DARABONBA_PTR_TO_JSON(developerId, developerId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(purpose, purpose_);
      DARABONBA_PTR_TO_JSON(subPbcName, subPbcName_);
    };
    friend void from_json(const Darabonba::Json& j, PbcSubscribe& obj) { 
      DARABONBA_PTR_FROM_JSON(developerId, developerId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(purpose, purpose_);
      DARABONBA_PTR_FROM_JSON(subPbcName, subPbcName_);
    };
    PbcSubscribe() = default ;
    PbcSubscribe(const PbcSubscribe &) = default ;
    PbcSubscribe(PbcSubscribe &&) = default ;
    PbcSubscribe(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcSubscribe() = default ;
    PbcSubscribe& operator=(const PbcSubscribe &) = default ;
    PbcSubscribe& operator=(PbcSubscribe &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->developerId_ == nullptr
        && this->id_ == nullptr && this->pbcName_ == nullptr && this->purpose_ == nullptr && this->subPbcName_ == nullptr; };
    // developerId Field Functions 
    bool hasDeveloperId() const { return this->developerId_ != nullptr;};
    void deleteDeveloperId() { this->developerId_ = nullptr;};
    inline string getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, "") };
    inline PbcSubscribe& setDeveloperId(string developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PbcSubscribe& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline PbcSubscribe& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // purpose Field Functions 
    bool hasPurpose() const { return this->purpose_ != nullptr;};
    void deletePurpose() { this->purpose_ = nullptr;};
    inline string getPurpose() const { DARABONBA_PTR_GET_DEFAULT(purpose_, "") };
    inline PbcSubscribe& setPurpose(string purpose) { DARABONBA_PTR_SET_VALUE(purpose_, purpose) };


    // subPbcName Field Functions 
    bool hasSubPbcName() const { return this->subPbcName_ != nullptr;};
    void deleteSubPbcName() { this->subPbcName_ = nullptr;};
    inline string getSubPbcName() const { DARABONBA_PTR_GET_DEFAULT(subPbcName_, "") };
    inline PbcSubscribe& setSubPbcName(string subPbcName) { DARABONBA_PTR_SET_VALUE(subPbcName_, subPbcName) };


  protected:
    shared_ptr<string> developerId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> pbcName_ {};
    shared_ptr<string> purpose_ {};
    shared_ptr<string> subPbcName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
