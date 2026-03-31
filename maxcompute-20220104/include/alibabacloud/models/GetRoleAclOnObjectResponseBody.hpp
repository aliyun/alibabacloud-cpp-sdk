// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEACLONOBJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROLEACLONOBJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRoleAclOnObjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleAclOnObjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleAclOnObjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRoleAclOnObjectResponseBody() = default ;
    GetRoleAclOnObjectResponseBody(const GetRoleAclOnObjectResponseBody &) = default ;
    GetRoleAclOnObjectResponseBody(GetRoleAclOnObjectResponseBody &&) = default ;
    GetRoleAclOnObjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleAclOnObjectResponseBody() = default ;
    GetRoleAclOnObjectResponseBody& operator=(const GetRoleAclOnObjectResponseBody &) = default ;
    GetRoleAclOnObjectResponseBody& operator=(GetRoleAclOnObjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(actions, actions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(actions, actions_);
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
      virtual bool empty() const override { return this->actions_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
      inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
      inline Data& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline Data& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    protected:
      // The operations that were performed on the object.
      shared_ptr<vector<string>> actions_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRoleAclOnObjectResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRoleAclOnObjectResponseBody::Data) };
    inline GetRoleAclOnObjectResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRoleAclOnObjectResponseBody::Data) };
    inline GetRoleAclOnObjectResponseBody& setData(const GetRoleAclOnObjectResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRoleAclOnObjectResponseBody& setData(GetRoleAclOnObjectResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoleAclOnObjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data
    shared_ptr<GetRoleAclOnObjectResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
