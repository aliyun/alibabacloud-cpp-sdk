// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINEUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINEUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRoutineUserInfoResponseBodyRoutines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Routines, routines_);
      DARABONBA_PTR_TO_JSON(Subdomains, subdomains_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Routines, routines_);
      DARABONBA_PTR_FROM_JSON(Subdomains, subdomains_);
    };
    GetRoutineUserInfoResponseBody() = default ;
    GetRoutineUserInfoResponseBody(const GetRoutineUserInfoResponseBody &) = default ;
    GetRoutineUserInfoResponseBody(GetRoutineUserInfoResponseBody &&) = default ;
    GetRoutineUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineUserInfoResponseBody() = default ;
    GetRoutineUserInfoResponseBody& operator=(const GetRoutineUserInfoResponseBody &) = default ;
    GetRoutineUserInfoResponseBody& operator=(GetRoutineUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->routines_ == nullptr && return this->subdomains_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routines Field Functions 
    bool hasRoutines() const { return this->routines_ != nullptr;};
    void deleteRoutines() { this->routines_ = nullptr;};
    inline const vector<GetRoutineUserInfoResponseBodyRoutines> & routines() const { DARABONBA_PTR_GET_CONST(routines_, vector<GetRoutineUserInfoResponseBodyRoutines>) };
    inline vector<GetRoutineUserInfoResponseBodyRoutines> routines() { DARABONBA_PTR_GET(routines_, vector<GetRoutineUserInfoResponseBodyRoutines>) };
    inline GetRoutineUserInfoResponseBody& setRoutines(const vector<GetRoutineUserInfoResponseBodyRoutines> & routines) { DARABONBA_PTR_SET_VALUE(routines_, routines) };
    inline GetRoutineUserInfoResponseBody& setRoutines(vector<GetRoutineUserInfoResponseBodyRoutines> && routines) { DARABONBA_PTR_SET_RVALUE(routines_, routines) };


    // subdomains Field Functions 
    bool hasSubdomains() const { return this->subdomains_ != nullptr;};
    void deleteSubdomains() { this->subdomains_ = nullptr;};
    inline const vector<string> & subdomains() const { DARABONBA_PTR_GET_CONST(subdomains_, vector<string>) };
    inline vector<string> subdomains() { DARABONBA_PTR_GET(subdomains_, vector<string>) };
    inline GetRoutineUserInfoResponseBody& setSubdomains(const vector<string> & subdomains) { DARABONBA_PTR_SET_VALUE(subdomains_, subdomains) };
    inline GetRoutineUserInfoResponseBody& setSubdomains(vector<string> && subdomains) { DARABONBA_PTR_SET_RVALUE(subdomains_, subdomains) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The routines.
    std::shared_ptr<vector<GetRoutineUserInfoResponseBodyRoutines>> routines_ = nullptr;
    // The subdomains.
    std::shared_ptr<vector<string>> subdomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
