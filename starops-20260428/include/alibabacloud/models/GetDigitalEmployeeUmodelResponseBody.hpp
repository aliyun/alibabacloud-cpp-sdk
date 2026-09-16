// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEUMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEUMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class GetDigitalEmployeeUmodelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalEmployeeUmodelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commonSchemaRef, commonSchemaRef_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalEmployeeUmodelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commonSchemaRef, commonSchemaRef_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDigitalEmployeeUmodelResponseBody() = default ;
    GetDigitalEmployeeUmodelResponseBody(const GetDigitalEmployeeUmodelResponseBody &) = default ;
    GetDigitalEmployeeUmodelResponseBody(GetDigitalEmployeeUmodelResponseBody &&) = default ;
    GetDigitalEmployeeUmodelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalEmployeeUmodelResponseBody() = default ;
    GetDigitalEmployeeUmodelResponseBody& operator=(const GetDigitalEmployeeUmodelResponseBody &) = default ;
    GetDigitalEmployeeUmodelResponseBody& operator=(GetDigitalEmployeeUmodelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommonSchemaRef : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommonSchemaRef& obj) { 
        DARABONBA_PTR_TO_JSON(group, group_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, CommonSchemaRef& obj) { 
        DARABONBA_PTR_FROM_JSON(group, group_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      CommonSchemaRef() = default ;
      CommonSchemaRef(const CommonSchemaRef &) = default ;
      CommonSchemaRef(CommonSchemaRef &&) = default ;
      CommonSchemaRef(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommonSchemaRef() = default ;
      CommonSchemaRef& operator=(const CommonSchemaRef &) = default ;
      CommonSchemaRef& operator=(CommonSchemaRef &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->group_ == nullptr
        && this->version_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline CommonSchemaRef& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline CommonSchemaRef& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The schema group.
      shared_ptr<string> group_ {};
      // The schema version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->commonSchemaRef_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr; };
    // commonSchemaRef Field Functions 
    bool hasCommonSchemaRef() const { return this->commonSchemaRef_ != nullptr;};
    void deleteCommonSchemaRef() { this->commonSchemaRef_ = nullptr;};
    inline const vector<GetDigitalEmployeeUmodelResponseBody::CommonSchemaRef> & getCommonSchemaRef() const { DARABONBA_PTR_GET_CONST(commonSchemaRef_, vector<GetDigitalEmployeeUmodelResponseBody::CommonSchemaRef>) };
    inline vector<GetDigitalEmployeeUmodelResponseBody::CommonSchemaRef> getCommonSchemaRef() { DARABONBA_PTR_GET(commonSchemaRef_, vector<GetDigitalEmployeeUmodelResponseBody::CommonSchemaRef>) };
    inline GetDigitalEmployeeUmodelResponseBody& setCommonSchemaRef(const vector<GetDigitalEmployeeUmodelResponseBody::CommonSchemaRef> & commonSchemaRef) { DARABONBA_PTR_SET_VALUE(commonSchemaRef_, commonSchemaRef) };
    inline GetDigitalEmployeeUmodelResponseBody& setCommonSchemaRef(vector<GetDigitalEmployeeUmodelResponseBody::CommonSchemaRef> && commonSchemaRef) { DARABONBA_PTR_SET_RVALUE(commonSchemaRef_, commonSchemaRef) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDigitalEmployeeUmodelResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDigitalEmployeeUmodelResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDigitalEmployeeUmodelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The common schemas referenced by the digital employee UModel.
    shared_ptr<vector<GetDigitalEmployeeUmodelResponseBody::CommonSchemaRef>> commonSchemaRef_ {};
    // The description of the digital employee UModel.
    shared_ptr<string> description_ {};
    // The name of the digital employee to which the UModel belongs.
    shared_ptr<string> name_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
