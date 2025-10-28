// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESTINATION_HPP_
#define ALIBABACLOUD_MODELS_DESTINATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class Destination : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Destination& obj) { 
      DARABONBA_PTR_TO_JSON(destination, destination_);
    };
    friend void from_json(const Darabonba::Json& j, Destination& obj) { 
      DARABONBA_PTR_FROM_JSON(destination, destination_);
    };
    Destination() = default ;
    Destination(const Destination &) = default ;
    Destination(Destination &&) = default ;
    Destination(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Destination() = default ;
    Destination& operator=(const Destination &) = default ;
    Destination& operator=(Destination &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destination_ == nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline Destination& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


  protected:
    std::shared_ptr<string> destination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
