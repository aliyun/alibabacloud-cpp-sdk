// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVILEGEPOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVILEGEPOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Privilege.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePrivilegePopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivilegePopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrivilegePopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreatePrivilegePopResponseBody() = default ;
    CreatePrivilegePopResponseBody(const CreatePrivilegePopResponseBody &) = default ;
    CreatePrivilegePopResponseBody(CreatePrivilegePopResponseBody &&) = default ;
    CreatePrivilegePopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivilegePopResponseBody() = default ;
    CreatePrivilegePopResponseBody& operator=(const CreatePrivilegePopResponseBody &) = default ;
    CreatePrivilegePopResponseBody& operator=(CreatePrivilegePopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Privilege> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Privilege>) };
    inline vector<Privilege> getList() { DARABONBA_PTR_GET(list_, vector<Privilege>) };
    inline CreatePrivilegePopResponseBody& setList(const vector<Privilege> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline CreatePrivilegePopResponseBody& setList(vector<Privilege> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePrivilegePopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Privilege>> list_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
