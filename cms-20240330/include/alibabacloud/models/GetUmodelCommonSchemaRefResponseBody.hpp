// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUMODELCOMMONSCHEMAREFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUMODELCOMMONSCHEMAREFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetUmodelCommonSchemaRefResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUmodelCommonSchemaRefResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commonSchemaRef, commonSchemaRef_);
    };
    friend void from_json(const Darabonba::Json& j, GetUmodelCommonSchemaRefResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commonSchemaRef, commonSchemaRef_);
    };
    GetUmodelCommonSchemaRefResponseBody() = default ;
    GetUmodelCommonSchemaRefResponseBody(const GetUmodelCommonSchemaRefResponseBody &) = default ;
    GetUmodelCommonSchemaRefResponseBody(GetUmodelCommonSchemaRefResponseBody &&) = default ;
    GetUmodelCommonSchemaRefResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUmodelCommonSchemaRefResponseBody() = default ;
    GetUmodelCommonSchemaRefResponseBody& operator=(const GetUmodelCommonSchemaRefResponseBody &) = default ;
    GetUmodelCommonSchemaRefResponseBody& operator=(GetUmodelCommonSchemaRefResponseBody &&) = default ;
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
      shared_ptr<string> group_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->commonSchemaRef_ == nullptr; };
    // commonSchemaRef Field Functions 
    bool hasCommonSchemaRef() const { return this->commonSchemaRef_ != nullptr;};
    void deleteCommonSchemaRef() { this->commonSchemaRef_ = nullptr;};
    inline const vector<GetUmodelCommonSchemaRefResponseBody::CommonSchemaRef> & getCommonSchemaRef() const { DARABONBA_PTR_GET_CONST(commonSchemaRef_, vector<GetUmodelCommonSchemaRefResponseBody::CommonSchemaRef>) };
    inline vector<GetUmodelCommonSchemaRefResponseBody::CommonSchemaRef> getCommonSchemaRef() { DARABONBA_PTR_GET(commonSchemaRef_, vector<GetUmodelCommonSchemaRefResponseBody::CommonSchemaRef>) };
    inline GetUmodelCommonSchemaRefResponseBody& setCommonSchemaRef(const vector<GetUmodelCommonSchemaRefResponseBody::CommonSchemaRef> & commonSchemaRef) { DARABONBA_PTR_SET_VALUE(commonSchemaRef_, commonSchemaRef) };
    inline GetUmodelCommonSchemaRefResponseBody& setCommonSchemaRef(vector<GetUmodelCommonSchemaRefResponseBody::CommonSchemaRef> && commonSchemaRef) { DARABONBA_PTR_SET_RVALUE(commonSchemaRef_, commonSchemaRef) };


  protected:
    shared_ptr<vector<GetUmodelCommonSchemaRefResponseBody::CommonSchemaRef>> commonSchemaRef_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
