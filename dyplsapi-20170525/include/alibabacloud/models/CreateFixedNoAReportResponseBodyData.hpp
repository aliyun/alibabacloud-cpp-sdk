// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIXEDNOAREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIXEDNOAREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreateFixedNoAReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFixedNoAReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
      DARABONBA_PTR_TO_JSON(FailType, failType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFixedNoAReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
      DARABONBA_PTR_FROM_JSON(FailType, failType_);
    };
    CreateFixedNoAReportResponseBodyData() = default ;
    CreateFixedNoAReportResponseBodyData(const CreateFixedNoAReportResponseBodyData &) = default ;
    CreateFixedNoAReportResponseBodyData(CreateFixedNoAReportResponseBodyData &&) = default ;
    CreateFixedNoAReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFixedNoAReportResponseBodyData() = default ;
    CreateFixedNoAReportResponseBodyData& operator=(const CreateFixedNoAReportResponseBodyData &) = default ;
    CreateFixedNoAReportResponseBodyData& operator=(CreateFixedNoAReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createResult_ == nullptr
        && return this->failType_ == nullptr; };
    // createResult Field Functions 
    bool hasCreateResult() const { return this->createResult_ != nullptr;};
    void deleteCreateResult() { this->createResult_ = nullptr;};
    inline bool createResult() const { DARABONBA_PTR_GET_DEFAULT(createResult_, false) };
    inline CreateFixedNoAReportResponseBodyData& setCreateResult(bool createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };


    // failType Field Functions 
    bool hasFailType() const { return this->failType_ != nullptr;};
    void deleteFailType() { this->failType_ = nullptr;};
    inline int64_t failType() const { DARABONBA_PTR_GET_DEFAULT(failType_, 0L) };
    inline CreateFixedNoAReportResponseBodyData& setFailType(int64_t failType) { DARABONBA_PTR_SET_VALUE(failType_, failType) };


  protected:
    // 创建结果
    std::shared_ptr<bool> createResult_ = nullptr;
    // 创建类型枚举，1为成功，负数为创建失败
    std::shared_ptr<int64_t> failType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
