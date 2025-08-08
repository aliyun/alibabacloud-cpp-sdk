// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CROSSACCOUNTVERIFYTOKENRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CROSSACCOUNTVERIFYTOKENRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class CrossAccountVerifyTokenResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CrossAccountVerifyTokenResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AuthRoles, authRoles_);
      DARABONBA_PTR_TO_JSON(AuthTime, authTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, CrossAccountVerifyTokenResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthRoles, authRoles_);
      DARABONBA_PTR_FROM_JSON(AuthTime, authTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    CrossAccountVerifyTokenResponseBodyResult() = default ;
    CrossAccountVerifyTokenResponseBodyResult(const CrossAccountVerifyTokenResponseBodyResult &) = default ;
    CrossAccountVerifyTokenResponseBodyResult(CrossAccountVerifyTokenResponseBodyResult &&) = default ;
    CrossAccountVerifyTokenResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CrossAccountVerifyTokenResponseBodyResult() = default ;
    CrossAccountVerifyTokenResponseBodyResult& operator=(const CrossAccountVerifyTokenResponseBodyResult &) = default ;
    CrossAccountVerifyTokenResponseBodyResult& operator=(CrossAccountVerifyTokenResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authRoles_ != nullptr
        && this->authTime_ != nullptr && this->name_ != nullptr && this->uid_ != nullptr; };
    // authRoles Field Functions 
    bool hasAuthRoles() const { return this->authRoles_ != nullptr;};
    void deleteAuthRoles() { this->authRoles_ = nullptr;};
    inline const vector<string> & authRoles() const { DARABONBA_PTR_GET_CONST(authRoles_, vector<string>) };
    inline vector<string> authRoles() { DARABONBA_PTR_GET(authRoles_, vector<string>) };
    inline CrossAccountVerifyTokenResponseBodyResult& setAuthRoles(const vector<string> & authRoles) { DARABONBA_PTR_SET_VALUE(authRoles_, authRoles) };
    inline CrossAccountVerifyTokenResponseBodyResult& setAuthRoles(vector<string> && authRoles) { DARABONBA_PTR_SET_RVALUE(authRoles_, authRoles) };


    // authTime Field Functions 
    bool hasAuthTime() const { return this->authTime_ != nullptr;};
    void deleteAuthTime() { this->authTime_ = nullptr;};
    inline int64_t authTime() const { DARABONBA_PTR_GET_DEFAULT(authTime_, 0L) };
    inline CrossAccountVerifyTokenResponseBodyResult& setAuthTime(int64_t authTime) { DARABONBA_PTR_SET_VALUE(authTime_, authTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CrossAccountVerifyTokenResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline CrossAccountVerifyTokenResponseBodyResult& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<vector<string>> authRoles_ = nullptr;
    std::shared_ptr<int64_t> authTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
