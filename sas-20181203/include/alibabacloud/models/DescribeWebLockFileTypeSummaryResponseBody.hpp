// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILETYPESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILETYPESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockFileTypeSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockFileTypeSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockFileTypeSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockFileTypeSummaryResponseBody() = default ;
    DescribeWebLockFileTypeSummaryResponseBody(const DescribeWebLockFileTypeSummaryResponseBody &) = default ;
    DescribeWebLockFileTypeSummaryResponseBody(DescribeWebLockFileTypeSummaryResponseBody &&) = default ;
    DescribeWebLockFileTypeSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockFileTypeSummaryResponseBody() = default ;
    DescribeWebLockFileTypeSummaryResponseBody& operator=(const DescribeWebLockFileTypeSummaryResponseBody &) = default ;
    DescribeWebLockFileTypeSummaryResponseBody& operator=(DescribeWebLockFileTypeSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->type_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline List& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline List& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of attempts.
      shared_ptr<int32_t> count_ {};
      // The type of the protected file. Valid values:
      // 
      // *   **php**: PHP file
      // *   **jsp**: JSP file
      // *   **asp**: ASP file
      // *   **aspx**: ASPX file
      // *   **js**: JS file
      // *   **cgi**: CGI file
      // *   **html**: HTML file
      // *   **htm**: HTM file
      // *   **xml**: XML file
      // *   **shtml**: SHTML file
      // *   **shtm**: SHTM file
      // *   **jpg**: JPG file
      // *   **gif**: GIF file
      // *   **png**: PNG file
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeWebLockFileTypeSummaryResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeWebLockFileTypeSummaryResponseBody::List>) };
    inline vector<DescribeWebLockFileTypeSummaryResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<DescribeWebLockFileTypeSummaryResponseBody::List>) };
    inline DescribeWebLockFileTypeSummaryResponseBody& setList(const vector<DescribeWebLockFileTypeSummaryResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeWebLockFileTypeSummaryResponseBody& setList(vector<DescribeWebLockFileTypeSummaryResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockFileTypeSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockFileTypeSummaryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of events on web tamper proofing returned.
    shared_ptr<vector<DescribeWebLockFileTypeSummaryResponseBody::List>> list_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of events on web tamper proofing.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
