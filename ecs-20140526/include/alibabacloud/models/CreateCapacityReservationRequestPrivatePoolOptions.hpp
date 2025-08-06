// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECAPACITYRESERVATIONREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATECAPACITYRESERVATIONREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateCapacityReservationRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCapacityReservationRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCapacityReservationRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateCapacityReservationRequestPrivatePoolOptions() = default ;
    CreateCapacityReservationRequestPrivatePoolOptions(const CreateCapacityReservationRequestPrivatePoolOptions &) = default ;
    CreateCapacityReservationRequestPrivatePoolOptions(CreateCapacityReservationRequestPrivatePoolOptions &&) = default ;
    CreateCapacityReservationRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCapacityReservationRequestPrivatePoolOptions() = default ;
    CreateCapacityReservationRequestPrivatePoolOptions& operator=(const CreateCapacityReservationRequestPrivatePoolOptions &) = default ;
    CreateCapacityReservationRequestPrivatePoolOptions& operator=(CreateCapacityReservationRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchCriteria_ != nullptr
        && this->name_ != nullptr; };
    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline CreateCapacityReservationRequestPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCapacityReservationRequestPrivatePoolOptions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The type of the private pool to generate after the capacity reservation takes effect. Valid values:
    // 
    // *   Open: open private pool
    // *   Target: targeted private pool
    // 
    // Default value: Open.
    std::shared_ptr<string> matchCriteria_ = nullptr;
    // The capacity reservation name. The name must be 2 to 128 characters in length. It must start with a letter but cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
