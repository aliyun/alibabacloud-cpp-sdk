// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDocTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DocTypeList, docTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DocTypeList, docTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDocTypesResponseBody() = default ;
    DescribeDocTypesResponseBody(const DescribeDocTypesResponseBody &) = default ;
    DescribeDocTypesResponseBody(DescribeDocTypesResponseBody &&) = default ;
    DescribeDocTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocTypesResponseBody() = default ;
    DescribeDocTypesResponseBody& operator=(const DescribeDocTypesResponseBody &) = default ;
    DescribeDocTypesResponseBody& operator=(DescribeDocTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DocTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DocTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DocTypeList() = default ;
      DocTypeList(const DocTypeList &) = default ;
      DocTypeList(DocTypeList &&) = default ;
      DocTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocTypeList() = default ;
      DocTypeList& operator=(const DocTypeList &) = default ;
      DocTypeList& operator=(DocTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
      inline DocTypeList& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DocTypeList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DocTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The code of the object type.
      shared_ptr<int64_t> code_ {};
      // The ID of the object type.
      shared_ptr<int64_t> id_ {};
      // The name of the object type.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->docTypeList_ == nullptr
        && this->requestId_ == nullptr; };
    // docTypeList Field Functions 
    bool hasDocTypeList() const { return this->docTypeList_ != nullptr;};
    void deleteDocTypeList() { this->docTypeList_ = nullptr;};
    inline const vector<DescribeDocTypesResponseBody::DocTypeList> & getDocTypeList() const { DARABONBA_PTR_GET_CONST(docTypeList_, vector<DescribeDocTypesResponseBody::DocTypeList>) };
    inline vector<DescribeDocTypesResponseBody::DocTypeList> getDocTypeList() { DARABONBA_PTR_GET(docTypeList_, vector<DescribeDocTypesResponseBody::DocTypeList>) };
    inline DescribeDocTypesResponseBody& setDocTypeList(const vector<DescribeDocTypesResponseBody::DocTypeList> & docTypeList) { DARABONBA_PTR_SET_VALUE(docTypeList_, docTypeList) };
    inline DescribeDocTypesResponseBody& setDocTypeList(vector<DescribeDocTypesResponseBody::DocTypeList> && docTypeList) { DARABONBA_PTR_SET_RVALUE(docTypeList_, docTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDocTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of OSS object types.
    shared_ptr<vector<DescribeDocTypesResponseBody::DocTypeList>> docTypeList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
