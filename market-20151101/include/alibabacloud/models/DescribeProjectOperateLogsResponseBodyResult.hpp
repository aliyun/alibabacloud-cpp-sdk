// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTOPERATELOGSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTOPERATELOGSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProjectOperateLogsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectOperateLogsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OperatorRole, operatorRole_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectOperateLogsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OperatorRole, operatorRole_);
    };
    DescribeProjectOperateLogsResponseBodyResult() = default ;
    DescribeProjectOperateLogsResponseBodyResult(const DescribeProjectOperateLogsResponseBodyResult &) = default ;
    DescribeProjectOperateLogsResponseBodyResult(DescribeProjectOperateLogsResponseBodyResult &&) = default ;
    DescribeProjectOperateLogsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectOperateLogsResponseBodyResult() = default ;
    DescribeProjectOperateLogsResponseBodyResult& operator=(const DescribeProjectOperateLogsResponseBodyResult &) = default ;
    DescribeProjectOperateLogsResponseBodyResult& operator=(DescribeProjectOperateLogsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->gmtCreate_ != nullptr && this->operator_ != nullptr && this->operatorName_ != nullptr && this->operatorRole_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeProjectOperateLogsResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeProjectOperateLogsResponseBodyResult& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline int64_t _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
    inline DescribeProjectOperateLogsResponseBodyResult& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline DescribeProjectOperateLogsResponseBodyResult& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // operatorRole Field Functions 
    bool hasOperatorRole() const { return this->operatorRole_ != nullptr;};
    void deleteOperatorRole() { this->operatorRole_ = nullptr;};
    inline string operatorRole() const { DARABONBA_PTR_GET_DEFAULT(operatorRole_, "") };
    inline DescribeProjectOperateLogsResponseBodyResult& setOperatorRole(string operatorRole) { DARABONBA_PTR_SET_VALUE(operatorRole_, operatorRole) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> operator_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
    std::shared_ptr<string> operatorRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
