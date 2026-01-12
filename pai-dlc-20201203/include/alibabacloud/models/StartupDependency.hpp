// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTUPDEPENDENCY_HPP_
#define ALIBABACLOUD_MODELS_STARTUPDEPENDENCY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class StartupDependency : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartupDependency& obj) { 
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(OnPhase, onPhase_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, StartupDependency& obj) { 
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(OnPhase, onPhase_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    StartupDependency() = default ;
    StartupDependency(const StartupDependency &) = default ;
    StartupDependency(StartupDependency &&) = default ;
    StartupDependency(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartupDependency() = default ;
    StartupDependency& operator=(const StartupDependency &) = default ;
    StartupDependency& operator=(StartupDependency &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minReplicas_ == nullptr
        && this->onPhase_ == nullptr && this->type_ == nullptr; };
    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline string getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, "") };
    inline StartupDependency& setMinReplicas(string minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // onPhase Field Functions 
    bool hasOnPhase() const { return this->onPhase_ != nullptr;};
    void deleteOnPhase() { this->onPhase_ = nullptr;};
    inline string getOnPhase() const { DARABONBA_PTR_GET_DEFAULT(onPhase_, "") };
    inline StartupDependency& setOnPhase(string onPhase) { DARABONBA_PTR_SET_VALUE(onPhase_, onPhase) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline StartupDependency& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> minReplicas_ {};
    shared_ptr<string> onPhase_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
