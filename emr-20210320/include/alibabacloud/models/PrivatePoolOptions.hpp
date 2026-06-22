// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_PRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class PrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
      DARABONBA_PTR_TO_JSON(PrivatePoolIds, privatePoolIds_);
    };
    friend void from_json(const Darabonba::Json& j, PrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolIds, privatePoolIds_);
    };
    PrivatePoolOptions() = default ;
    PrivatePoolOptions(const PrivatePoolOptions &) = default ;
    PrivatePoolOptions(PrivatePoolOptions &&) = default ;
    PrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrivatePoolOptions() = default ;
    PrivatePoolOptions& operator=(const PrivatePoolOptions &) = default ;
    PrivatePoolOptions& operator=(PrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchCriteria_ == nullptr
        && this->privatePoolIds_ == nullptr; };
    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string getMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline PrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


    // privatePoolIds Field Functions 
    bool hasPrivatePoolIds() const { return this->privatePoolIds_ != nullptr;};
    void deletePrivatePoolIds() { this->privatePoolIds_ = nullptr;};
    inline const vector<string> & getPrivatePoolIds() const { DARABONBA_PTR_GET_CONST(privatePoolIds_, vector<string>) };
    inline vector<string> getPrivatePoolIds() { DARABONBA_PTR_GET(privatePoolIds_, vector<string>) };
    inline PrivatePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
    inline PrivatePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


  protected:
    // The type of private pool that you want to use to start ECS instances. A private pool is generated when an elasticity assurance or a capacity reservation takes effect. You can select a private pool for starting ECS instances. Valid values: Open, Target, and None. If you set the parameter to Open, the system selects an open private pool to start instances. If no matching open private pools exist, the resources in the public pool are used. In this case, you do not need to specify the ID of the private pool. If you set the parameter to Target, the resources in the specified private pool are used to start ECS instances. If the specified private pool does not exist, ECS instances cannot be started. You must specify the ID of the private pool when you set the parameter to Target. If you set the parameter to None, the resources in private pools are not used to start instances. Default value: None.
    shared_ptr<string> matchCriteria_ {};
    // The IDs of the private pools.
    shared_ptr<vector<string>> privatePoolIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
