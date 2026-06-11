// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLVERSIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLVERSIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataResourceValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class GetSkillVersionDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillVersionDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillVersionDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSkillVersionDetailResponseBody() = default ;
    GetSkillVersionDetailResponseBody(const GetSkillVersionDetailResponseBody &) = default ;
    GetSkillVersionDetailResponseBody(GetSkillVersionDetailResponseBody &&) = default ;
    GetSkillVersionDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillVersionDetailResponseBody() = default ;
    GetSkillVersionDetailResponseBody& operator=(const GetSkillVersionDetailResponseBody &) = default ;
    GetSkillVersionDetailResponseBody& operator=(GetSkillVersionDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(SkillMd, skillMd_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(SkillMd, skillMd_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->namespaceId_ == nullptr && this->resource_ == nullptr && this->skillMd_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const map<string, DataResourceValue> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, map<string, DataResourceValue>) };
      inline map<string, DataResourceValue> getResource() { DARABONBA_PTR_GET(resource_, map<string, DataResourceValue>) };
      inline Data& setResource(const map<string, DataResourceValue> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Data& setResource(map<string, DataResourceValue> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      // skillMd Field Functions 
      bool hasSkillMd() const { return this->skillMd_ != nullptr;};
      void deleteSkillMd() { this->skillMd_ = nullptr;};
      inline string getSkillMd() const { DARABONBA_PTR_GET_DEFAULT(skillMd_, "") };
      inline Data& setSkillMd(string skillMd) { DARABONBA_PTR_SET_VALUE(skillMd_, skillMd) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> namespaceId_ {};
      shared_ptr<map<string, DataResourceValue>> resource_ {};
      shared_ptr<string> skillMd_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSkillVersionDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSkillVersionDetailResponseBody::Data) };
    inline GetSkillVersionDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSkillVersionDetailResponseBody::Data) };
    inline GetSkillVersionDetailResponseBody& setData(const GetSkillVersionDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSkillVersionDetailResponseBody& setData(GetSkillVersionDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillVersionDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetSkillVersionDetailResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
