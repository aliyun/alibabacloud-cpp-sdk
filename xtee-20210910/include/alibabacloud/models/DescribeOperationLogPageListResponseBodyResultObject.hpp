// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperationLogPageListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperationLogPageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(clientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(newContent, newContent_);
      DARABONBA_PTR_TO_JSON(oldContent, oldContent_);
      DARABONBA_PTR_TO_JSON(operationSummary, operationSummary_);
      DARABONBA_PTR_TO_JSON(operationType, operationType_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperationLogPageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(clientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(newContent, newContent_);
      DARABONBA_PTR_FROM_JSON(oldContent, oldContent_);
      DARABONBA_PTR_FROM_JSON(operationSummary, operationSummary_);
      DARABONBA_PTR_FROM_JSON(operationType, operationType_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    DescribeOperationLogPageListResponseBodyResultObject() = default ;
    DescribeOperationLogPageListResponseBodyResultObject(const DescribeOperationLogPageListResponseBodyResultObject &) = default ;
    DescribeOperationLogPageListResponseBodyResultObject(DescribeOperationLogPageListResponseBodyResultObject &&) = default ;
    DescribeOperationLogPageListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperationLogPageListResponseBodyResultObject() = default ;
    DescribeOperationLogPageListResponseBodyResultObject& operator=(const DescribeOperationLogPageListResponseBodyResultObject &) = default ;
    DescribeOperationLogPageListResponseBodyResultObject& operator=(DescribeOperationLogPageListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIp_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->newContent_ == nullptr && return this->oldContent_ == nullptr && return this->operationSummary_ == nullptr && return this->operationType_ == nullptr
        && return this->userName_ == nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeOperationLogPageListResponseBodyResultObject& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeOperationLogPageListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // newContent Field Functions 
    bool hasNewContent() const { return this->newContent_ != nullptr;};
    void deleteNewContent() { this->newContent_ = nullptr;};
    inline string newContent() const { DARABONBA_PTR_GET_DEFAULT(newContent_, "") };
    inline DescribeOperationLogPageListResponseBodyResultObject& setNewContent(string newContent) { DARABONBA_PTR_SET_VALUE(newContent_, newContent) };


    // oldContent Field Functions 
    bool hasOldContent() const { return this->oldContent_ != nullptr;};
    void deleteOldContent() { this->oldContent_ = nullptr;};
    inline string oldContent() const { DARABONBA_PTR_GET_DEFAULT(oldContent_, "") };
    inline DescribeOperationLogPageListResponseBodyResultObject& setOldContent(string oldContent) { DARABONBA_PTR_SET_VALUE(oldContent_, oldContent) };


    // operationSummary Field Functions 
    bool hasOperationSummary() const { return this->operationSummary_ != nullptr;};
    void deleteOperationSummary() { this->operationSummary_ = nullptr;};
    inline string operationSummary() const { DARABONBA_PTR_GET_DEFAULT(operationSummary_, "") };
    inline DescribeOperationLogPageListResponseBodyResultObject& setOperationSummary(string operationSummary) { DARABONBA_PTR_SET_VALUE(operationSummary_, operationSummary) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeOperationLogPageListResponseBodyResultObject& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeOperationLogPageListResponseBodyResultObject& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Client IP.
    std::shared_ptr<string> clientIp_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Content after operation
    std::shared_ptr<string> newContent_ = nullptr;
    // Content before operation
    std::shared_ptr<string> oldContent_ = nullptr;
    // Operation summary
    std::shared_ptr<string> operationSummary_ = nullptr;
    // Operation type.
    std::shared_ptr<string> operationType_ = nullptr;
    // Operator
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
