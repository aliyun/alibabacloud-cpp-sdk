// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEREQUIREMENTS_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEREQUIREMENTS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ResourceRequirements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceRequirements& obj) { 
      DARABONBA_PTR_TO_JSON(Limits, limits_);
      DARABONBA_PTR_TO_JSON(Requests, requests_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceRequirements& obj) { 
      DARABONBA_PTR_FROM_JSON(Limits, limits_);
      DARABONBA_PTR_FROM_JSON(Requests, requests_);
    };
    ResourceRequirements() = default ;
    ResourceRequirements(const ResourceRequirements &) = default ;
    ResourceRequirements(ResourceRequirements &&) = default ;
    ResourceRequirements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceRequirements() = default ;
    ResourceRequirements& operator=(const ResourceRequirements &) = default ;
    ResourceRequirements& operator=(ResourceRequirements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limits_ == nullptr
        && this->requests_ == nullptr; };
    // limits Field Functions 
    bool hasLimits() const { return this->limits_ != nullptr;};
    void deleteLimits() { this->limits_ = nullptr;};
    inline const map<string, string> & getLimits() const { DARABONBA_PTR_GET_CONST(limits_, map<string, string>) };
    inline map<string, string> getLimits() { DARABONBA_PTR_GET(limits_, map<string, string>) };
    inline ResourceRequirements& setLimits(const map<string, string> & limits) { DARABONBA_PTR_SET_VALUE(limits_, limits) };
    inline ResourceRequirements& setLimits(map<string, string> && limits) { DARABONBA_PTR_SET_RVALUE(limits_, limits) };


    // requests Field Functions 
    bool hasRequests() const { return this->requests_ != nullptr;};
    void deleteRequests() { this->requests_ = nullptr;};
    inline const map<string, string> & getRequests() const { DARABONBA_PTR_GET_CONST(requests_, map<string, string>) };
    inline map<string, string> getRequests() { DARABONBA_PTR_GET(requests_, map<string, string>) };
    inline ResourceRequirements& setRequests(const map<string, string> & requests) { DARABONBA_PTR_SET_VALUE(requests_, requests) };
    inline ResourceRequirements& setRequests(map<string, string> && requests) { DARABONBA_PTR_SET_RVALUE(requests_, requests) };


  protected:
    // The resource limit.
    shared_ptr<map<string, string>> limits_ {};
    // The resource request.
    shared_ptr<map<string, string>> requests_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
