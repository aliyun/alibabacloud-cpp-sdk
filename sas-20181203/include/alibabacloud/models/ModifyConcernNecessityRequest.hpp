// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONCERNNECESSITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONCERNNECESSITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyConcernNecessityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyConcernNecessityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConcernNecessity, concernNecessity_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyConcernNecessityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcernNecessity, concernNecessity_);
    };
    ModifyConcernNecessityRequest() = default ;
    ModifyConcernNecessityRequest(const ModifyConcernNecessityRequest &) = default ;
    ModifyConcernNecessityRequest(ModifyConcernNecessityRequest &&) = default ;
    ModifyConcernNecessityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyConcernNecessityRequest() = default ;
    ModifyConcernNecessityRequest& operator=(const ModifyConcernNecessityRequest &) = default ;
    ModifyConcernNecessityRequest& operator=(ModifyConcernNecessityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concernNecessity_ == nullptr; };
    // concernNecessity Field Functions 
    bool hasConcernNecessity() const { return this->concernNecessity_ != nullptr;};
    void deleteConcernNecessity() { this->concernNecessity_ = nullptr;};
    inline string getConcernNecessity() const { DARABONBA_PTR_GET_DEFAULT(concernNecessity_, "") };
    inline ModifyConcernNecessityRequest& setConcernNecessity(string concernNecessity) { DARABONBA_PTR_SET_VALUE(concernNecessity_, concernNecessity) };


  protected:
    // The priorities to fix the vulnerabilities. Valid values:
    // 
    // *   asap: high
    // *   later: medium
    // *   nntf: low
    shared_ptr<string> concernNecessity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
