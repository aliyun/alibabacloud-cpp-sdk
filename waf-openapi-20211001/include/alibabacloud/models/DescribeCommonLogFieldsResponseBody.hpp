// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONLOGFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCommonLogFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonLogFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogFieldList, logFieldList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonLogFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogFieldList, logFieldList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCommonLogFieldsResponseBody() = default ;
    DescribeCommonLogFieldsResponseBody(const DescribeCommonLogFieldsResponseBody &) = default ;
    DescribeCommonLogFieldsResponseBody(DescribeCommonLogFieldsResponseBody &&) = default ;
    DescribeCommonLogFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonLogFieldsResponseBody() = default ;
    DescribeCommonLogFieldsResponseBody& operator=(const DescribeCommonLogFieldsResponseBody &) = default ;
    DescribeCommonLogFieldsResponseBody& operator=(DescribeCommonLogFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogFieldList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogFieldList& obj) { 
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(IsRequired, isRequired_);
        DARABONBA_PTR_TO_JSON(LogKey, logKey_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, LogFieldList& obj) { 
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(IsRequired, isRequired_);
        DARABONBA_PTR_FROM_JSON(LogKey, logKey_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      LogFieldList() = default ;
      LogFieldList(const LogFieldList &) = default ;
      LogFieldList(LogFieldList &&) = default ;
      LogFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogFieldList() = default ;
      LogFieldList& operator=(const LogFieldList &) = default ;
      LogFieldList& operator=(LogFieldList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->isRequired_ == nullptr && this->logKey_ == nullptr && this->status_ == nullptr; };
      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline LogFieldList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // isRequired Field Functions 
      bool hasIsRequired() const { return this->isRequired_ != nullptr;};
      void deleteIsRequired() { this->isRequired_ = nullptr;};
      inline bool getIsRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
      inline LogFieldList& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


      // logKey Field Functions 
      bool hasLogKey() const { return this->logKey_ != nullptr;};
      void deleteLogKey() { this->logKey_ = nullptr;};
      inline string getLogKey() const { DARABONBA_PTR_GET_DEFAULT(logKey_, "") };
      inline LogFieldList& setLogKey(string logKey) { DARABONBA_PTR_SET_VALUE(logKey_, logKey) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline LogFieldList& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<bool> isDefault_ {};
      shared_ptr<bool> isRequired_ {};
      shared_ptr<string> logKey_ {};
      shared_ptr<bool> status_ {};
    };

    virtual bool empty() const override { return this->logFieldList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // logFieldList Field Functions 
    bool hasLogFieldList() const { return this->logFieldList_ != nullptr;};
    void deleteLogFieldList() { this->logFieldList_ = nullptr;};
    inline const vector<DescribeCommonLogFieldsResponseBody::LogFieldList> & getLogFieldList() const { DARABONBA_PTR_GET_CONST(logFieldList_, vector<DescribeCommonLogFieldsResponseBody::LogFieldList>) };
    inline vector<DescribeCommonLogFieldsResponseBody::LogFieldList> getLogFieldList() { DARABONBA_PTR_GET(logFieldList_, vector<DescribeCommonLogFieldsResponseBody::LogFieldList>) };
    inline DescribeCommonLogFieldsResponseBody& setLogFieldList(const vector<DescribeCommonLogFieldsResponseBody::LogFieldList> & logFieldList) { DARABONBA_PTR_SET_VALUE(logFieldList_, logFieldList) };
    inline DescribeCommonLogFieldsResponseBody& setLogFieldList(vector<DescribeCommonLogFieldsResponseBody::LogFieldList> && logFieldList) { DARABONBA_PTR_SET_RVALUE(logFieldList_, logFieldList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonLogFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCommonLogFieldsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeCommonLogFieldsResponseBody::LogFieldList>> logFieldList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
