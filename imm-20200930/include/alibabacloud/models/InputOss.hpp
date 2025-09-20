// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INPUTOSS_HPP_
#define ALIBABACLOUD_MODELS_INPUTOSS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class InputOSS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputOSS& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, InputOSS& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(MatchExpressions, matchExpressions_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
    };
    InputOSS() = default ;
    InputOSS(const InputOSS &) = default ;
    InputOSS(InputOSS &&) = default ;
    InputOSS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputOSS() = default ;
    InputOSS& operator=(const InputOSS &) = default ;
    InputOSS& operator=(InputOSS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->matchExpressions_ != nullptr && this->prefix_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline InputOSS& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // matchExpressions Field Functions 
    bool hasMatchExpressions() const { return this->matchExpressions_ != nullptr;};
    void deleteMatchExpressions() { this->matchExpressions_ = nullptr;};
    inline const vector<string> & matchExpressions() const { DARABONBA_PTR_GET_CONST(matchExpressions_, vector<string>) };
    inline vector<string> matchExpressions() { DARABONBA_PTR_GET(matchExpressions_, vector<string>) };
    inline InputOSS& setMatchExpressions(const vector<string> & matchExpressions) { DARABONBA_PTR_SET_VALUE(matchExpressions_, matchExpressions) };
    inline InputOSS& setMatchExpressions(vector<string> && matchExpressions) { DARABONBA_PTR_SET_RVALUE(matchExpressions_, matchExpressions) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline InputOSS& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<vector<string>> matchExpressions_ = nullptr;
    std::shared_ptr<string> prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
