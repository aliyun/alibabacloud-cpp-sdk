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
    virtual bool empty() const override { this->matchCriteria_ != nullptr
        && this->privatePoolIds_ != nullptr; };
    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline PrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


    // privatePoolIds Field Functions 
    bool hasPrivatePoolIds() const { return this->privatePoolIds_ != nullptr;};
    void deletePrivatePoolIds() { this->privatePoolIds_ = nullptr;};
    inline const vector<string> & privatePoolIds() const { DARABONBA_PTR_GET_CONST(privatePoolIds_, vector<string>) };
    inline vector<string> privatePoolIds() { DARABONBA_PTR_GET(privatePoolIds_, vector<string>) };
    inline PrivatePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
    inline PrivatePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


  protected:
    std::shared_ptr<string> matchCriteria_ = nullptr;
    std::shared_ptr<vector<string>> privatePoolIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
