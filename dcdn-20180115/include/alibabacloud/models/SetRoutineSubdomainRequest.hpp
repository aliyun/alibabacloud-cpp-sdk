// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETROUTINESUBDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETROUTINESUBDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class SetRoutineSubdomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRoutineSubdomainRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Subdomains, subdomains_);
    };
    friend void from_json(const Darabonba::Json& j, SetRoutineSubdomainRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Subdomains, subdomains_);
    };
    SetRoutineSubdomainRequest() = default ;
    SetRoutineSubdomainRequest(const SetRoutineSubdomainRequest &) = default ;
    SetRoutineSubdomainRequest(SetRoutineSubdomainRequest &&) = default ;
    SetRoutineSubdomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRoutineSubdomainRequest() = default ;
    SetRoutineSubdomainRequest& operator=(const SetRoutineSubdomainRequest &) = default ;
    SetRoutineSubdomainRequest& operator=(SetRoutineSubdomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subdomains_ != nullptr; };
    // subdomains Field Functions 
    bool hasSubdomains() const { return this->subdomains_ != nullptr;};
    void deleteSubdomains() { this->subdomains_ = nullptr;};
    inline     const Darabonba::Json & subdomains() const { DARABONBA_GET(subdomains_) };
    Darabonba::Json & subdomains() { DARABONBA_GET(subdomains_) };
    inline SetRoutineSubdomainRequest& setSubdomains(const Darabonba::Json & subdomains) { DARABONBA_SET_VALUE(subdomains_, subdomains) };
    inline SetRoutineSubdomainRequest& setSubdomains(Darabonba::Json & subdomains) { DARABONBA_SET_RVALUE(subdomains_, subdomains) };


  protected:
    // The parameters of the subdomain.
    // 
    // The parameters are in the following format:
    // 
    //     Subdomains: [
    //         "subdomain-test"
    //     ]
    // 
    // This parameter is required.
    Darabonba::Json subdomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
