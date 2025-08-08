// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICECHANGES_HPP_
#define ALIBABACLOUD_MODELS_SERVICECHANGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceChanges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceChanges& obj) { 
      DARABONBA_ANY_TO_JSON(merge, merge_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceChanges& obj) { 
      DARABONBA_ANY_FROM_JSON(merge, merge_);
    };
    ServiceChanges() = default ;
    ServiceChanges(const ServiceChanges &) = default ;
    ServiceChanges(ServiceChanges &&) = default ;
    ServiceChanges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceChanges() = default ;
    ServiceChanges& operator=(const ServiceChanges &) = default ;
    ServiceChanges& operator=(ServiceChanges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->merge_ != nullptr; };
    // merge Field Functions 
    bool hasMerge() const { return this->merge_ != nullptr;};
    void deleteMerge() { this->merge_ = nullptr;};
    inline     const Darabonba::Json & merge() const { DARABONBA_GET(merge_) };
    Darabonba::Json & merge() { DARABONBA_GET(merge_) };
    inline ServiceChanges& setMerge(const Darabonba::Json & merge) { DARABONBA_SET_VALUE(merge_, merge) };
    inline ServiceChanges& setMerge(Darabonba::Json & merge) { DARABONBA_SET_RVALUE(merge_, merge) };


  protected:
    Darabonba::Json merge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
