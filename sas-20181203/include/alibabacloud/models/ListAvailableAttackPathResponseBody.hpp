// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEATTACKPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEATTACKPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAvailableAttackPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableAttackPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathList, attackPathList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableAttackPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathList, attackPathList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAvailableAttackPathResponseBody() = default ;
    ListAvailableAttackPathResponseBody(const ListAvailableAttackPathResponseBody &) = default ;
    ListAvailableAttackPathResponseBody(ListAvailableAttackPathResponseBody &&) = default ;
    ListAvailableAttackPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableAttackPathResponseBody() = default ;
    ListAvailableAttackPathResponseBody& operator=(const ListAvailableAttackPathResponseBody &) = default ;
    ListAvailableAttackPathResponseBody& operator=(ListAvailableAttackPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackPathList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathList& obj) { 
        DARABONBA_PTR_TO_JSON(PathName, pathName_);
        DARABONBA_PTR_TO_JSON(PathNameDesc, pathNameDesc_);
        DARABONBA_PTR_TO_JSON(PathType, pathType_);
        DARABONBA_PTR_TO_JSON(PathTypeDesc, pathTypeDesc_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathList& obj) { 
        DARABONBA_PTR_FROM_JSON(PathName, pathName_);
        DARABONBA_PTR_FROM_JSON(PathNameDesc, pathNameDesc_);
        DARABONBA_PTR_FROM_JSON(PathType, pathType_);
        DARABONBA_PTR_FROM_JSON(PathTypeDesc, pathTypeDesc_);
      };
      AttackPathList() = default ;
      AttackPathList(const AttackPathList &) = default ;
      AttackPathList(AttackPathList &&) = default ;
      AttackPathList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathList() = default ;
      AttackPathList& operator=(const AttackPathList &) = default ;
      AttackPathList& operator=(AttackPathList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pathName_ == nullptr
        && this->pathNameDesc_ == nullptr && this->pathType_ == nullptr && this->pathTypeDesc_ == nullptr; };
      // pathName Field Functions 
      bool hasPathName() const { return this->pathName_ != nullptr;};
      void deletePathName() { this->pathName_ = nullptr;};
      inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
      inline AttackPathList& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


      // pathNameDesc Field Functions 
      bool hasPathNameDesc() const { return this->pathNameDesc_ != nullptr;};
      void deletePathNameDesc() { this->pathNameDesc_ = nullptr;};
      inline string getPathNameDesc() const { DARABONBA_PTR_GET_DEFAULT(pathNameDesc_, "") };
      inline AttackPathList& setPathNameDesc(string pathNameDesc) { DARABONBA_PTR_SET_VALUE(pathNameDesc_, pathNameDesc) };


      // pathType Field Functions 
      bool hasPathType() const { return this->pathType_ != nullptr;};
      void deletePathType() { this->pathType_ = nullptr;};
      inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
      inline AttackPathList& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


      // pathTypeDesc Field Functions 
      bool hasPathTypeDesc() const { return this->pathTypeDesc_ != nullptr;};
      void deletePathTypeDesc() { this->pathTypeDesc_ = nullptr;};
      inline string getPathTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(pathTypeDesc_, "") };
      inline AttackPathList& setPathTypeDesc(string pathTypeDesc) { DARABONBA_PTR_SET_VALUE(pathTypeDesc_, pathTypeDesc) };


    protected:
      // Path name.
      shared_ptr<string> pathName_ {};
      // Description of the path name.
      shared_ptr<string> pathNameDesc_ {};
      // Path type.
      shared_ptr<string> pathType_ {};
      // Description of the path type.
      shared_ptr<string> pathTypeDesc_ {};
    };

    virtual bool empty() const override { return this->attackPathList_ == nullptr
        && this->requestId_ == nullptr; };
    // attackPathList Field Functions 
    bool hasAttackPathList() const { return this->attackPathList_ != nullptr;};
    void deleteAttackPathList() { this->attackPathList_ = nullptr;};
    inline const vector<ListAvailableAttackPathResponseBody::AttackPathList> & getAttackPathList() const { DARABONBA_PTR_GET_CONST(attackPathList_, vector<ListAvailableAttackPathResponseBody::AttackPathList>) };
    inline vector<ListAvailableAttackPathResponseBody::AttackPathList> getAttackPathList() { DARABONBA_PTR_GET(attackPathList_, vector<ListAvailableAttackPathResponseBody::AttackPathList>) };
    inline ListAvailableAttackPathResponseBody& setAttackPathList(const vector<ListAvailableAttackPathResponseBody::AttackPathList> & attackPathList) { DARABONBA_PTR_SET_VALUE(attackPathList_, attackPathList) };
    inline ListAvailableAttackPathResponseBody& setAttackPathList(vector<ListAvailableAttackPathResponseBody::AttackPathList> && attackPathList) { DARABONBA_PTR_SET_RVALUE(attackPathList_, attackPathList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableAttackPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of attack paths.
    shared_ptr<vector<ListAvailableAttackPathResponseBody::AttackPathList>> attackPathList_ {};
    // The ID of this call request, a unique identifier generated by Alibaba Cloud for the request, which can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
