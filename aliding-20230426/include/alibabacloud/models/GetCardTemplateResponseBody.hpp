// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCARDTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetCardTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commonVariableList, commonVariableList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commonVariableList, commonVariableList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetCardTemplateResponseBody() = default ;
    GetCardTemplateResponseBody(const GetCardTemplateResponseBody &) = default ;
    GetCardTemplateResponseBody(GetCardTemplateResponseBody &&) = default ;
    GetCardTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardTemplateResponseBody() = default ;
    GetCardTemplateResponseBody& operator=(const GetCardTemplateResponseBody &) = default ;
    GetCardTemplateResponseBody& operator=(GetCardTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommonVariableList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommonVariableList& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IfPrivateFiled, ifPrivateFiled_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CommonVariableList& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IfPrivateFiled, ifPrivateFiled_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CommonVariableList() = default ;
      CommonVariableList(const CommonVariableList &) = default ;
      CommonVariableList(CommonVariableList &&) = default ;
      CommonVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommonVariableList() = default ;
      CommonVariableList& operator=(const CommonVariableList &) = default ;
      CommonVariableList& operator=(CommonVariableList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->ifPrivateFiled_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CommonVariableList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline CommonVariableList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ifPrivateFiled Field Functions 
      bool hasIfPrivateFiled() const { return this->ifPrivateFiled_ != nullptr;};
      void deleteIfPrivateFiled() { this->ifPrivateFiled_ = nullptr;};
      inline bool getIfPrivateFiled() const { DARABONBA_PTR_GET_DEFAULT(ifPrivateFiled_, false) };
      inline CommonVariableList& setIfPrivateFiled(bool ifPrivateFiled) { DARABONBA_PTR_SET_VALUE(ifPrivateFiled_, ifPrivateFiled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CommonVariableList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CommonVariableList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> description_ {};
      // Id
      shared_ptr<string> id_ {};
      shared_ptr<bool> ifPrivateFiled_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->commonVariableList_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // commonVariableList Field Functions 
    bool hasCommonVariableList() const { return this->commonVariableList_ != nullptr;};
    void deleteCommonVariableList() { this->commonVariableList_ = nullptr;};
    inline const vector<GetCardTemplateResponseBody::CommonVariableList> & getCommonVariableList() const { DARABONBA_PTR_GET_CONST(commonVariableList_, vector<GetCardTemplateResponseBody::CommonVariableList>) };
    inline vector<GetCardTemplateResponseBody::CommonVariableList> getCommonVariableList() { DARABONBA_PTR_GET(commonVariableList_, vector<GetCardTemplateResponseBody::CommonVariableList>) };
    inline GetCardTemplateResponseBody& setCommonVariableList(const vector<GetCardTemplateResponseBody::CommonVariableList> & commonVariableList) { DARABONBA_PTR_SET_VALUE(commonVariableList_, commonVariableList) };
    inline GetCardTemplateResponseBody& setCommonVariableList(vector<GetCardTemplateResponseBody::CommonVariableList> && commonVariableList) { DARABONBA_PTR_SET_RVALUE(commonVariableList_, commonVariableList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCardTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCardTemplateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetCardTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetCardTemplateResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetCardTemplateResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<GetCardTemplateResponseBody::CommonVariableList>> commonVariableList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> templateId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
