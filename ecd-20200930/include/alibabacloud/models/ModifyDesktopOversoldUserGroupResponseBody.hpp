// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopOversoldUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopOversoldUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopOversoldUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDesktopOversoldUserGroupResponseBody() = default ;
    ModifyDesktopOversoldUserGroupResponseBody(const ModifyDesktopOversoldUserGroupResponseBody &) = default ;
    ModifyDesktopOversoldUserGroupResponseBody(ModifyDesktopOversoldUserGroupResponseBody &&) = default ;
    ModifyDesktopOversoldUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopOversoldUserGroupResponseBody() = default ;
    ModifyDesktopOversoldUserGroupResponseBody& operator=(const ModifyDesktopOversoldUserGroupResponseBody &) = default ;
    ModifyDesktopOversoldUserGroupResponseBody& operator=(ModifyDesktopOversoldUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userGroupId_ == nullptr; };
      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline Data& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    protected:
      shared_ptr<string> userGroupId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyDesktopOversoldUserGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyDesktopOversoldUserGroupResponseBody::Data) };
    inline ModifyDesktopOversoldUserGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyDesktopOversoldUserGroupResponseBody::Data) };
    inline ModifyDesktopOversoldUserGroupResponseBody& setData(const ModifyDesktopOversoldUserGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyDesktopOversoldUserGroupResponseBody& setData(ModifyDesktopOversoldUserGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDesktopOversoldUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ModifyDesktopOversoldUserGroupResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
