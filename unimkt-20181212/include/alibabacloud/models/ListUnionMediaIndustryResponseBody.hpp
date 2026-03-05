// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNIONMEDIAINDUSTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNIONMEDIAINDUSTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class ListUnionMediaIndustryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnionMediaIndustryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnionMediaIndustryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListUnionMediaIndustryResponseBody() = default ;
    ListUnionMediaIndustryResponseBody(const ListUnionMediaIndustryResponseBody &) = default ;
    ListUnionMediaIndustryResponseBody(ListUnionMediaIndustryResponseBody &&) = default ;
    ListUnionMediaIndustryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnionMediaIndustryResponseBody() = default ;
    ListUnionMediaIndustryResponseBody& operator=(const ListUnionMediaIndustryResponseBody &) = default ;
    ListUnionMediaIndustryResponseBody& operator=(ListUnionMediaIndustryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IndustryCode, industryCode_);
        DARABONBA_PTR_TO_JSON(IndustryName, industryName_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(ParentIndustryCode, parentIndustryCode_);
        DARABONBA_PTR_TO_JSON(UsedFlag, usedFlag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IndustryCode, industryCode_);
        DARABONBA_PTR_FROM_JSON(IndustryName, industryName_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(ParentIndustryCode, parentIndustryCode_);
        DARABONBA_PTR_FROM_JSON(UsedFlag, usedFlag_);
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
      virtual bool empty() const override { return this->industryCode_ == nullptr
        && this->industryName_ == nullptr && this->level_ == nullptr && this->parentIndustryCode_ == nullptr && this->usedFlag_ == nullptr; };
      // industryCode Field Functions 
      bool hasIndustryCode() const { return this->industryCode_ != nullptr;};
      void deleteIndustryCode() { this->industryCode_ = nullptr;};
      inline string getIndustryCode() const { DARABONBA_PTR_GET_DEFAULT(industryCode_, "") };
      inline Data& setIndustryCode(string industryCode) { DARABONBA_PTR_SET_VALUE(industryCode_, industryCode) };


      // industryName Field Functions 
      bool hasIndustryName() const { return this->industryName_ != nullptr;};
      void deleteIndustryName() { this->industryName_ = nullptr;};
      inline string getIndustryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
      inline Data& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Data& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // parentIndustryCode Field Functions 
      bool hasParentIndustryCode() const { return this->parentIndustryCode_ != nullptr;};
      void deleteParentIndustryCode() { this->parentIndustryCode_ = nullptr;};
      inline string getParentIndustryCode() const { DARABONBA_PTR_GET_DEFAULT(parentIndustryCode_, "") };
      inline Data& setParentIndustryCode(string parentIndustryCode) { DARABONBA_PTR_SET_VALUE(parentIndustryCode_, parentIndustryCode) };


      // usedFlag Field Functions 
      bool hasUsedFlag() const { return this->usedFlag_ != nullptr;};
      void deleteUsedFlag() { this->usedFlag_ = nullptr;};
      inline bool getUsedFlag() const { DARABONBA_PTR_GET_DEFAULT(usedFlag_, false) };
      inline Data& setUsedFlag(bool usedFlag) { DARABONBA_PTR_SET_VALUE(usedFlag_, usedFlag) };


    protected:
      shared_ptr<string> industryCode_ {};
      shared_ptr<string> industryName_ {};
      shared_ptr<string> level_ {};
      shared_ptr<string> parentIndustryCode_ {};
      shared_ptr<bool> usedFlag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListUnionMediaIndustryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUnionMediaIndustryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUnionMediaIndustryResponseBody::Data>) };
    inline vector<ListUnionMediaIndustryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUnionMediaIndustryResponseBody::Data>) };
    inline ListUnionMediaIndustryResponseBody& setData(const vector<ListUnionMediaIndustryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUnionMediaIndustryResponseBody& setData(vector<ListUnionMediaIndustryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListUnionMediaIndustryResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUnionMediaIndustryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUnionMediaIndustryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<vector<ListUnionMediaIndustryResponseBody::Data>> data_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
