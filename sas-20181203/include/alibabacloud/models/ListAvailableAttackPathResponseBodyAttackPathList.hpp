// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEATTACKPATHRESPONSEBODYATTACKPATHLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEATTACKPATHRESPONSEBODYATTACKPATHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAvailableAttackPathResponseBodyAttackPathList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableAttackPathResponseBodyAttackPathList& obj) { 
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
      DARABONBA_PTR_TO_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(PathTypeDesc, pathTypeDesc_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableAttackPathResponseBodyAttackPathList& obj) { 
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
      DARABONBA_PTR_FROM_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(PathTypeDesc, pathTypeDesc_);
    };
    ListAvailableAttackPathResponseBodyAttackPathList() = default ;
    ListAvailableAttackPathResponseBodyAttackPathList(const ListAvailableAttackPathResponseBodyAttackPathList &) = default ;
    ListAvailableAttackPathResponseBodyAttackPathList(ListAvailableAttackPathResponseBodyAttackPathList &&) = default ;
    ListAvailableAttackPathResponseBodyAttackPathList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableAttackPathResponseBodyAttackPathList() = default ;
    ListAvailableAttackPathResponseBodyAttackPathList& operator=(const ListAvailableAttackPathResponseBodyAttackPathList &) = default ;
    ListAvailableAttackPathResponseBodyAttackPathList& operator=(ListAvailableAttackPathResponseBodyAttackPathList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pathName_ == nullptr
        && return this->pathNameDesc_ == nullptr && return this->pathType_ == nullptr && return this->pathTypeDesc_ == nullptr; };
    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline ListAvailableAttackPathResponseBodyAttackPathList& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


    // pathNameDesc Field Functions 
    bool hasPathNameDesc() const { return this->pathNameDesc_ != nullptr;};
    void deletePathNameDesc() { this->pathNameDesc_ = nullptr;};
    inline string pathNameDesc() const { DARABONBA_PTR_GET_DEFAULT(pathNameDesc_, "") };
    inline ListAvailableAttackPathResponseBodyAttackPathList& setPathNameDesc(string pathNameDesc) { DARABONBA_PTR_SET_VALUE(pathNameDesc_, pathNameDesc) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline ListAvailableAttackPathResponseBodyAttackPathList& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // pathTypeDesc Field Functions 
    bool hasPathTypeDesc() const { return this->pathTypeDesc_ != nullptr;};
    void deletePathTypeDesc() { this->pathTypeDesc_ = nullptr;};
    inline string pathTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(pathTypeDesc_, "") };
    inline ListAvailableAttackPathResponseBodyAttackPathList& setPathTypeDesc(string pathTypeDesc) { DARABONBA_PTR_SET_VALUE(pathTypeDesc_, pathTypeDesc) };


  protected:
    // Path name.
    std::shared_ptr<string> pathName_ = nullptr;
    // Description of the path name.
    std::shared_ptr<string> pathNameDesc_ = nullptr;
    // Path type.
    std::shared_ptr<string> pathType_ = nullptr;
    // Description of the path type.
    std::shared_ptr<string> pathTypeDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
