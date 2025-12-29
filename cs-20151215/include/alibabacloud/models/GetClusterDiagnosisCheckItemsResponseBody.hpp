// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISCHECKITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISCHECKITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterDiagnosisCheckItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDiagnosisCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(check_items, checkItems_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(is_success, isSuccess_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDiagnosisCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(check_items, checkItems_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(is_success, isSuccess_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
    };
    GetClusterDiagnosisCheckItemsResponseBody() = default ;
    GetClusterDiagnosisCheckItemsResponseBody(const GetClusterDiagnosisCheckItemsResponseBody &) = default ;
    GetClusterDiagnosisCheckItemsResponseBody(GetClusterDiagnosisCheckItemsResponseBody &&) = default ;
    GetClusterDiagnosisCheckItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDiagnosisCheckItemsResponseBody() = default ;
    GetClusterDiagnosisCheckItemsResponseBody& operator=(const GetClusterDiagnosisCheckItemsResponseBody &) = default ;
    GetClusterDiagnosisCheckItemsResponseBody& operator=(GetClusterDiagnosisCheckItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckItems& obj) { 
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(display, display_);
        DARABONBA_PTR_TO_JSON(group, group_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(refer, refer_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CheckItems& obj) { 
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(display, display_);
        DARABONBA_PTR_FROM_JSON(group, group_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(refer, refer_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      CheckItems() = default ;
      CheckItems(const CheckItems &) = default ;
      CheckItems(CheckItems &&) = default ;
      CheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckItems() = default ;
      CheckItems& operator=(const CheckItems &) = default ;
      CheckItems& operator=(CheckItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desc_ == nullptr
        && this->display_ == nullptr && this->group_ == nullptr && this->level_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->refer_ == nullptr && this->value_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline CheckItems& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // display Field Functions 
      bool hasDisplay() const { return this->display_ != nullptr;};
      void deleteDisplay() { this->display_ = nullptr;};
      inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
      inline CheckItems& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline CheckItems& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline CheckItems& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline CheckItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CheckItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // refer Field Functions 
      bool hasRefer() const { return this->refer_ != nullptr;};
      void deleteRefer() { this->refer_ = nullptr;};
      inline string getRefer() const { DARABONBA_PTR_GET_DEFAULT(refer_, "") };
      inline CheckItems& setRefer(string refer) { DARABONBA_PTR_SET_VALUE(refer_, refer) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CheckItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The description.
      shared_ptr<string> desc_ {};
      // The display name.
      shared_ptr<string> display_ {};
      // The name of the group to which the check item belongs.
      shared_ptr<string> group_ {};
      // The severity level of the check result.
      // 
      // Valid values:
      // 
      // *   normal
      // *   warning
      // *   error
      shared_ptr<string> level_ {};
      // The check result.
      shared_ptr<string> message_ {};
      // The name of the check item.
      shared_ptr<string> name_ {};
      // The reference value.
      shared_ptr<string> refer_ {};
      // The value of the check item.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->checkItems_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->requestId_ == nullptr; };
    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const vector<GetClusterDiagnosisCheckItemsResponseBody::CheckItems> & getCheckItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<GetClusterDiagnosisCheckItemsResponseBody::CheckItems>) };
    inline vector<GetClusterDiagnosisCheckItemsResponseBody::CheckItems> getCheckItems() { DARABONBA_PTR_GET(checkItems_, vector<GetClusterDiagnosisCheckItemsResponseBody::CheckItems>) };
    inline GetClusterDiagnosisCheckItemsResponseBody& setCheckItems(const vector<GetClusterDiagnosisCheckItemsResponseBody::CheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline GetClusterDiagnosisCheckItemsResponseBody& setCheckItems(vector<GetClusterDiagnosisCheckItemsResponseBody::CheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetClusterDiagnosisCheckItemsResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterDiagnosisCheckItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The check item.
    shared_ptr<vector<GetClusterDiagnosisCheckItemsResponseBody::CheckItems>> checkItems_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // Indicates whether the check is successful.
    shared_ptr<bool> isSuccess_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
