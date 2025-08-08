// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTMESSAGESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTMESSAGESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProjectMessagesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectMessagesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OperatorRole, operatorRole_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectMessagesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OperatorRole, operatorRole_);
    };
    DescribeProjectMessagesResponseBodyResult() = default ;
    DescribeProjectMessagesResponseBodyResult(const DescribeProjectMessagesResponseBodyResult &) = default ;
    DescribeProjectMessagesResponseBodyResult(DescribeProjectMessagesResponseBodyResult &&) = default ;
    DescribeProjectMessagesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectMessagesResponseBodyResult() = default ;
    DescribeProjectMessagesResponseBodyResult& operator=(const DescribeProjectMessagesResponseBodyResult &) = default ;
    DescribeProjectMessagesResponseBodyResult& operator=(DescribeProjectMessagesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->gmtCreate_ != nullptr && this->operator_ != nullptr && this->operatorName_ != nullptr && this->operatorRole_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeProjectMessagesResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeProjectMessagesResponseBodyResult& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline int64_t _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
    inline DescribeProjectMessagesResponseBodyResult& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline DescribeProjectMessagesResponseBodyResult& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // operatorRole Field Functions 
    bool hasOperatorRole() const { return this->operatorRole_ != nullptr;};
    void deleteOperatorRole() { this->operatorRole_ = nullptr;};
    inline string operatorRole() const { DARABONBA_PTR_GET_DEFAULT(operatorRole_, "") };
    inline DescribeProjectMessagesResponseBodyResult& setOperatorRole(string operatorRole) { DARABONBA_PTR_SET_VALUE(operatorRole_, operatorRole) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> operator_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
    std::shared_ptr<string> operatorRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
