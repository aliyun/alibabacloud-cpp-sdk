// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeAccountStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupLimit, groupLimit_);
      DARABONBA_PTR_TO_JSON(GroupNum, groupNum_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateLimit, templateLimit_);
      DARABONBA_PTR_TO_JSON(TemplateNum, templateNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupLimit, groupLimit_);
      DARABONBA_PTR_FROM_JSON(GroupNum, groupNum_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateLimit, templateLimit_);
      DARABONBA_PTR_FROM_JSON(TemplateNum, templateNum_);
    };
    DescribeAccountStatResponseBody() = default ;
    DescribeAccountStatResponseBody(const DescribeAccountStatResponseBody &) = default ;
    DescribeAccountStatResponseBody(DescribeAccountStatResponseBody &&) = default ;
    DescribeAccountStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountStatResponseBody() = default ;
    DescribeAccountStatResponseBody& operator=(const DescribeAccountStatResponseBody &) = default ;
    DescribeAccountStatResponseBody& operator=(DescribeAccountStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupLimit_ == nullptr
        && return this->groupNum_ == nullptr && return this->id_ == nullptr && return this->requestId_ == nullptr && return this->templateLimit_ == nullptr && return this->templateNum_ == nullptr; };
    // groupLimit Field Functions 
    bool hasGroupLimit() const { return this->groupLimit_ != nullptr;};
    void deleteGroupLimit() { this->groupLimit_ = nullptr;};
    inline int64_t groupLimit() const { DARABONBA_PTR_GET_DEFAULT(groupLimit_, 0L) };
    inline DescribeAccountStatResponseBody& setGroupLimit(int64_t groupLimit) { DARABONBA_PTR_SET_VALUE(groupLimit_, groupLimit) };


    // groupNum Field Functions 
    bool hasGroupNum() const { return this->groupNum_ != nullptr;};
    void deleteGroupNum() { this->groupNum_ = nullptr;};
    inline int64_t groupNum() const { DARABONBA_PTR_GET_DEFAULT(groupNum_, 0L) };
    inline DescribeAccountStatResponseBody& setGroupNum(int64_t groupNum) { DARABONBA_PTR_SET_VALUE(groupNum_, groupNum) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeAccountStatResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateLimit Field Functions 
    bool hasTemplateLimit() const { return this->templateLimit_ != nullptr;};
    void deleteTemplateLimit() { this->templateLimit_ = nullptr;};
    inline int64_t templateLimit() const { DARABONBA_PTR_GET_DEFAULT(templateLimit_, 0L) };
    inline DescribeAccountStatResponseBody& setTemplateLimit(int64_t templateLimit) { DARABONBA_PTR_SET_VALUE(templateLimit_, templateLimit) };


    // templateNum Field Functions 
    bool hasTemplateNum() const { return this->templateNum_ != nullptr;};
    void deleteTemplateNum() { this->templateNum_ = nullptr;};
    inline int64_t templateNum() const { DARABONBA_PTR_GET_DEFAULT(templateNum_, 0L) };
    inline DescribeAccountStatResponseBody& setTemplateNum(int64_t templateNum) { DARABONBA_PTR_SET_VALUE(templateNum_, templateNum) };


  protected:
    std::shared_ptr<int64_t> groupLimit_ = nullptr;
    std::shared_ptr<int64_t> groupNum_ = nullptr;
    // ID
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> templateLimit_ = nullptr;
    std::shared_ptr<int64_t> templateNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
