// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINEUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINEUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Routines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Routines& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
      };
      friend void from_json(const Darabonba::Json& j, Routines& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
      };
      Routines() = default ;
      Routines(const Routines &) = default ;
      Routines(Routines &&) = default ;
      Routines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Routines() = default ;
      Routines& operator=(const Routines &) = default ;
      Routines& operator=(Routines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->routineName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Routines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Routines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // routineName Field Functions 
      bool hasRoutineName() const { return this->routineName_ != nullptr;};
      void deleteRoutineName() { this->routineName_ = nullptr;};
      inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
      inline Routines& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


    protected:
      // The time when the routine was created.
      shared_ptr<string> createTime_ {};
      // The routine description, which is Base64-encoded.
      shared_ptr<string> description_ {};
      // The routine name.
      shared_ptr<string> routineName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->routines_ == nullptr && this->subdomains_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routines Field Functions 
    bool hasRoutines() const { return this->routines_ != nullptr;};
    void deleteRoutines() { this->routines_ = nullptr;};
    inline const vector<GetRoutineUserInfoResponseBody::Routines> & getRoutines() const { DARABONBA_PTR_GET_CONST(routines_, vector<GetRoutineUserInfoResponseBody::Routines>) };
    inline vector<GetRoutineUserInfoResponseBody::Routines> getRoutines() { DARABONBA_PTR_GET(routines_, vector<GetRoutineUserInfoResponseBody::Routines>) };
    inline GetRoutineUserInfoResponseBody& setRoutines(const vector<GetRoutineUserInfoResponseBody::Routines> & routines) { DARABONBA_PTR_SET_VALUE(routines_, routines) };
    inline GetRoutineUserInfoResponseBody& setRoutines(vector<GetRoutineUserInfoResponseBody::Routines> && routines) { DARABONBA_PTR_SET_RVALUE(routines_, routines) };


    // subdomains Field Functions 
    bool hasSubdomains() const { return this->subdomains_ != nullptr;};
    void deleteSubdomains() { this->subdomains_ = nullptr;};
    inline const vector<string> & getSubdomains() const { DARABONBA_PTR_GET_CONST(subdomains_, vector<string>) };
    inline vector<string> getSubdomains() { DARABONBA_PTR_GET(subdomains_, vector<string>) };
    inline GetRoutineUserInfoResponseBody& setSubdomains(const vector<string> & subdomains) { DARABONBA_PTR_SET_VALUE(subdomains_, subdomains) };
    inline GetRoutineUserInfoResponseBody& setSubdomains(vector<string> && subdomains) { DARABONBA_PTR_SET_RVALUE(subdomains_, subdomains) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The routines.
    shared_ptr<vector<GetRoutineUserInfoResponseBody::Routines>> routines_ {};
    // The subdomains.
    shared_ptr<vector<string>> subdomains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
