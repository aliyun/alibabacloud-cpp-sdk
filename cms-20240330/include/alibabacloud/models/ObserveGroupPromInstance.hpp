// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVEGROUPPROMINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_OBSERVEGROUPPROMINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveGroupPromInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveGroupPromInstance& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveGroupPromInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    ObserveGroupPromInstance() = default ;
    ObserveGroupPromInstance(const ObserveGroupPromInstance &) = default ;
    ObserveGroupPromInstance(ObserveGroupPromInstance &&) = default ;
    ObserveGroupPromInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveGroupPromInstance() = default ;
    ObserveGroupPromInstance& operator=(const ObserveGroupPromInstance &) = default ;
    ObserveGroupPromInstance& operator=(ObserveGroupPromInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->kind_ == nullptr && this->region_ == nullptr && this->time_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ObserveGroupPromInstance& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ObserveGroupPromInstance& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ObserveGroupPromInstance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ObserveGroupPromInstance& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The ID of the Managed Service for Prometheus instance, such as rw-xxxxxxxxxx.
    shared_ptr<string> id_ {};
    // The source of the instance. Valid values:
    // - system: The system automatically identifies the instance based on the workspace or UModel.
    // - custom: The user manually selects the instance in the console.
    shared_ptr<string> kind_ {};
    // The region where the Managed Service for Prometheus instance resides. If this parameter is left empty, the backend automatically populates the region based on the workspace to which the application group belongs.
    shared_ptr<string> region_ {};
    // The time when the record was written or selected. Format: yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
